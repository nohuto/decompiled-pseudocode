/*
 * XREFs of ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401765A0
 * Callers:
 *     ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401499B4 (-ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140183D40 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140010C40 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140010DF0 (WPP_RECORDER_SF_qD.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140056B60 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1400976F0 (-ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400EDFC0 (_guard_dispatch_icall.c)
 *     ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x140173400 (-ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET.c)
 */

void __fastcall ndisPnPCompleteRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  unsigned int *p_Flags; // rdi
  enum _NET_IF_ADMIN_STATUS v3; // esi
  void (__fastcall *VpciInterfaceDereference)(void *); // rax
  NTSTATUS v5; // eax
  struct _NDIS_IF_BLOCK *IfBlock; // rcx
  char v7[4]; // [rsp+30h] [rbp-18h]

  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      96,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)a1);
  if ( (ndisIsMiniportStarted(a1) || (a1->Flags & 0x80u) != 0)
    && (p_Flags = &a1->Flags, a1->OldPnPDeviceState == NdisPnPDeviceStarted)
    && (a1->PnPFlags & 0x4000) == 0 )
  {
    v3 = NET_IF_ADMIN_STATUS_DOWN;
  }
  else
  {
    v3 = NET_IF_ADMIN_STATUS_UP;
    p_Flags = &a1->Flags;
  }
  VpciInterfaceDereference = a1->VpciInterfaceDereference;
  if ( VpciInterfaceDereference )
    VpciInterfaceDereference(a1->VpciInterfaceContext);
  ndisMInvokeRemoveDevice(a1);
  if ( (*p_Flags & 0x180) != 0 )
  {
    v5 = IoDeleteSymbolicLink(&a1->FdoName);
    if ( v5 )
    {
      if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v7 = v5;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0xDu,
          0x61u,
          (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
          (char)a1,
          *(_DWORD *)v7);
      }
    }
  }
  IoDeleteSymbolicLink(&a1->ExportName.__ptr_.__value_->_UNICODE_STRING);
  if ( a1->DevinterfaceNetSymbolicLinkName.Buffer )
  {
    RtlFreeUnicodeString(&a1->DevinterfaceNetSymbolicLinkName);
    a1->DevinterfaceNetSymbolicLinkName.Buffer = 0LL;
  }
  IfBlock = a1->IfBlock;
  a1->AdminStatus = v3;
  if ( IfBlock )
    ndisIfRemoveIfBlockMiniportAssociation(IfBlock, a1, v3);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      98,
      (struct _GUID *)&WPP_82c5a6a2cba53804bfdcdaf6db1a3a32_Traceguids,
      (char)a1);
}
