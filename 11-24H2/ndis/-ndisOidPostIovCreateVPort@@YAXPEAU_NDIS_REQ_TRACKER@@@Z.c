/*
 * XREFs of ?ndisOidPostIovCreateVPort@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400DF710
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x14000CEB0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400DD558 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovAddVPortToPFList@@YAXPEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400DD85C (-ndisIovAddVPortToPFList@@YAXPEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovAddVPortToVFList@@YAXPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400DD8B0 (-ndisIovAddVPortToVFList@@YAXPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisOidPostIovCreateVPort(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  int v4; // edx
  struct _NDIS_MINIPORT_BLOCK *v5; // rdi
  struct _NDIS_VPORT_BLOCK *v6; // rbx
  void *v7; // rcx
  struct _NDIS_MINIPORT_BLOCK *Flink; // rax
  unsigned int *p_VPortId; // r8
  unsigned int VPortId; // r9d
  _LIST_ENTRY *NextMiniport; // rcx
  _LIST_ENTRY *v12; // rax
  _NDIS_OPEN_BLOCK *Open; // r9
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *p_OpenLink; // rdx
  _LIST_ENTRY *v17; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *NicSwitch; // r9
  __int64 *j; // rax
  _LIST_ENTRY *v20; // rcx
  _LIST_ENTRY *p_SwitchLink; // rdx
  _LIST_ENTRY *v22; // rax
  struct _NDIS_VF_BLOCK *AttachedFunction; // rcx
  __int128 v24; // [rsp+40h] [rbp-98h]
  __int64 v25; // [rsp+80h] [rbp-58h] BYREF
  KIRQL NewIrql; // [rsp+E0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v3 = ndisCaptureIovOidContext((__int64)&v25, a1);
  v24 = *(_OWORD *)v3;
  v5 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      56,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v1);
  }
  if ( (_BYTE)v24 )
  {
    v6 = *(struct _NDIS_VPORT_BLOCK **)(v1 + 152);
    if ( v6 )
    {
      if ( *((_DWORD *)a1 + 10) )
      {
        v7 = *(void **)(v1 + 152);
        v5->AllocatedVPortIndices[(unsigned __int64)v6->VPortParams.VPortId >> 3] &= ~(1 << (v6->VPortParams.VPortId & 7));
        ExFreePoolWithTag(v7, 0);
        goto LABEL_7;
      }
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v5, &NewIrql);
      Flink = (struct _NDIS_MINIPORT_BLOCK *)v5->VPortList.Flink;
      if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)&v5->VPortList )
      {
LABEL_15:
        NextMiniport = (_LIST_ENTRY *)Flink->NextMiniport;
        v12 = NextMiniport->Flink;
        if ( NextMiniport->Flink->Blink != NextMiniport )
          goto LABEL_29;
        v6->AdapterLink.Flink = v12;
        p_VPortId = &v6->VPortParams.VPortId;
        v6->AdapterLink.Blink = NextMiniport;
        v12->Blink = &v6->AdapterLink;
        NextMiniport->Flink = &v6->AdapterLink;
        ++v5->NumActiveVPorts;
      }
      else
      {
        p_VPortId = &v6->VPortParams.VPortId;
        VPortId = v6->VPortParams.VPortId;
        while ( Flink->PnPFlags != VPortId )
        {
          if ( Flink->PnPFlags <= VPortId )
          {
            Flink = *(struct _NDIS_MINIPORT_BLOCK **)&Flink->Header.Type;
            if ( Flink != (struct _NDIS_MINIPORT_BLOCK *)&v5->VPortList )
              continue;
          }
          goto LABEL_15;
        }
      }
      Open = v6->Open;
      for ( i = Open->VPortList.Flink; i != &Open->VPortList; i = i->Flink )
      {
        if ( HIDWORD(i[6].Blink) > *p_VPortId )
          break;
      }
      Blink = i->Blink;
      p_OpenLink = &v6->OpenLink;
      v17 = Blink->Flink;
      if ( Blink->Flink->Blink == Blink )
      {
        v6->OpenLink.Blink = Blink;
        p_OpenLink->Flink = v17;
        v17->Blink = p_OpenLink;
        Blink->Flink = p_OpenLink;
        ++Open->NumActiveVPorts;
        NicSwitch = v6->NicSwitch;
        for ( j = (__int64 *)*((_QWORD *)NicSwitch + 7); j != (__int64 *)((char *)NicSwitch + 56); j = (__int64 *)*j )
        {
          if ( *((_DWORD *)j + 23) > *p_VPortId )
            break;
        }
        v20 = (_LIST_ENTRY *)j[1];
        p_SwitchLink = &v6->SwitchLink;
        v22 = v20->Flink;
        if ( v20->Flink->Blink == v20 )
        {
          p_SwitchLink->Flink = v22;
          v6->SwitchLink.Blink = v20;
          v22->Blink = p_SwitchLink;
          v20->Flink = p_SwitchLink;
          ++*((_DWORD *)NicSwitch + 12);
          *((_DWORD *)NicSwitch + 24) += v6->VPortParams.NumQueuePairs;
          AttachedFunction = (struct _NDIS_VF_BLOCK *)v6->AttachedFunction;
          if ( (v6->Flags & 2) != 0 )
            ndisIovAddVPortToVFList(AttachedFunction, v6);
          else
            ndisIovAddVPortToPFList(AttachedFunction, v6);
          v5->MiniportThread = 0LL;
          KeReleaseSpinLock(&v5->Lock, NewIrql);
          goto LABEL_7;
        }
      }
LABEL_29:
      __fastfail(3u);
    }
  }
LABEL_7:
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(v4) = 4;
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      v4,
      26,
      57,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v5,
      v1);
  }
}
