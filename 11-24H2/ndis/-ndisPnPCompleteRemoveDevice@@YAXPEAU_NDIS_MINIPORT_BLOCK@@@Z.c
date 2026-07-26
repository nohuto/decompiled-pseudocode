/*
 * XREFs of ?ndisPnPCompleteRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1401696E0
 * Callers:
 *     ?ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14013EAD4 (-ndisWdfDeviceObjectCleanup@@YAJPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z @ 0x140176710 (-ndisPnPRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@E@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qD @ 0x140014130 (WPP_RECORDER_SF_qD.c)
 *     ?ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x140035D30 (-ndisIsMiniportStarted@@YAEPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ??$ReadNoFence@KX@mem@@YAKPEDK@Z @ 0x14004CDA0 (--$ReadNoFence@KX@mem@@YAKPEDK@Z.c)
 *     ?ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x14008BF40 (-ndisMInvokeRemoveDevice@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     _guard_dispatch_icall @ 0x1400E7130 (_guard_dispatch_icall.c)
 *     ?ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET_IF_ADMIN_STATUS@@@Z @ 0x140166B00 (-ndisIfRemoveIfBlockMiniportAssociation@@YAXPEAU_NDIS_IF_BLOCK@@PEAU_NDIS_MINIPORT_BLOCK@@W4_NET.c)
 */

void __fastcall ndisPnPCompleteRemoveDevice(struct _NDIS_MINIPORT_BLOCK *a1)
{
  enum _NET_IF_ADMIN_STATUS v2; // edi
  void (__fastcall *VpciInterfaceDereference)(void *); // rax
  NTSTATUS v4; // eax
  struct _NDIS_IF_BLOCK *IfBlock; // rcx
  char v6[4]; // [rsp+30h] [rbp-18h]

  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      97,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)a1);
  if ( !ndisIsMiniportStarted(a1) && (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) == 0LL
    || a1->OldPnPDeviceState != NdisPnPDeviceStarted
    || (v2 = NET_IF_ADMIN_STATUS_DOWN, (a1->PnPFlags & 0x4000) != 0) )
  {
    v2 = NET_IF_ADMIN_STATUS_UP;
  }
  VpciInterfaceDereference = a1->VpciInterfaceDereference;
  if ( VpciInterfaceDereference )
    VpciInterfaceDereference(a1->VpciInterfaceContext);
  ndisMInvokeRemoveDevice(a1);
  if ( (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x80u) != 0LL
    || (mem::ReadNoFence<unsigned long,void>(&a1->Flags) & 0x100) != 0 )
  {
    v4 = IoDeleteSymbolicLink(&a1->FdoName);
    if ( v4 )
    {
      if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      {
        *(_DWORD *)v6 = v4;
        WPP_RECORDER_SF_qD(
          *((_QWORD *)WPP_GLOBAL_Control + 8),
          3u,
          0xDu,
          0x62u,
          (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
          (char)a1,
          *(_DWORD *)v6);
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
  a1->AdminStatus = v2;
  if ( IfBlock )
    ndisIfRemoveIfBlockMiniportAssociation(IfBlock, a1, v2);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4,
      13,
      99,
      (struct _GUID *)&WPP_61ca6882386639ff5ded6eed385a297b_Traceguids,
      (char)a1);
}
