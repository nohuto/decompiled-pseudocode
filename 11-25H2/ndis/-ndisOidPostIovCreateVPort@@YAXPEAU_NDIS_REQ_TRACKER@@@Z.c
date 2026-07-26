/*
 * XREFs of ?ndisOidPostIovCreateVPort@@YAXPEAU_NDIS_REQ_TRACKER@@@Z @ 0x1400E6920
 * Callers:
 *     <none>
 * Callees:
 *     WPP_RECORDER_SF_qq @ 0x1400129A0 (WPP_RECORDER_SF_qq.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x14005A650 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisCaptureIovOidContext@@YA?AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z @ 0x1400E4768 (-ndisCaptureIovOidContext@@YA-AUIovOidContext@@PEBU_NDIS_REQ_TRACKER@@@Z.c)
 *     ?ndisIovAddVPortToPFList@@YAXPEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400E4A6C (-ndisIovAddVPortToPFList@@YAXPEAU_NDIS_PF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z.c)
 *     ?ndisIovAddVPortToVFList@@YAXPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z @ 0x1400E4AC0 (-ndisIovAddVPortToVFList@@YAXPEAU_NDIS_VF_BLOCK@@PEAU_NDIS_VPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisOidPostIovCreateVPort(struct _NDIS_REQ_TRACKER *a1)
{
  __int64 v1; // rbp
  __int64 v3; // rax
  struct _NDIS_MINIPORT_BLOCK *v4; // rdi
  struct _NDIS_VPORT_BLOCK *v5; // rbx
  void *v6; // rcx
  struct _NDIS_MINIPORT_BLOCK *Flink; // rax
  unsigned int *p_VPortId; // r8
  unsigned int VPortId; // r9d
  _LIST_ENTRY *NextMiniport; // rcx
  _LIST_ENTRY *v11; // rax
  _NDIS_OPEN_BLOCK *Open; // r9
  _LIST_ENTRY *i; // rax
  _LIST_ENTRY *Blink; // rcx
  _LIST_ENTRY *p_OpenLink; // rdx
  _LIST_ENTRY *v16; // rax
  struct _NDIS_NIC_SWITCH_BLOCK *NicSwitch; // r9
  __int64 *j; // rax
  _LIST_ENTRY *v19; // rcx
  _LIST_ENTRY *p_SwitchLink; // rdx
  _LIST_ENTRY *v21; // rax
  struct _NDIS_VF_BLOCK *AttachedFunction; // rcx
  __int128 v23; // [rsp+40h] [rbp-98h]
  __int64 v24; // [rsp+80h] [rbp-58h] BYREF
  KIRQL NewIrql; // [rsp+E0h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 4);
  NewIrql = 0;
  v3 = ndisCaptureIovOidContext((__int64)&v24, a1);
  v23 = *(_OWORD *)v3;
  v4 = *(struct _NDIS_MINIPORT_BLOCK **)(v3 + 8);
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x38u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
  if ( (_BYTE)v23 )
  {
    v5 = *(struct _NDIS_VPORT_BLOCK **)(v1 + 152);
    if ( v5 )
    {
      if ( *((_DWORD *)a1 + 10) )
      {
        v6 = *(void **)(v1 + 152);
        v4->AllocatedVPortIndices[(unsigned __int64)v5->VPortParams.VPortId >> 3] &= ~(1 << (v5->VPortParams.VPortId & 7));
        ExFreePoolWithTag(v6, 0);
        goto LABEL_7;
      }
      NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(v4, &NewIrql);
      Flink = (struct _NDIS_MINIPORT_BLOCK *)v4->VPortList.Flink;
      if ( Flink == (struct _NDIS_MINIPORT_BLOCK *)&v4->VPortList )
      {
LABEL_15:
        NextMiniport = (_LIST_ENTRY *)Flink->NextMiniport;
        v11 = NextMiniport->Flink;
        if ( NextMiniport->Flink->Blink != NextMiniport )
          goto LABEL_29;
        v5->AdapterLink.Flink = v11;
        p_VPortId = &v5->VPortParams.VPortId;
        v5->AdapterLink.Blink = NextMiniport;
        v11->Blink = &v5->AdapterLink;
        NextMiniport->Flink = &v5->AdapterLink;
        ++v4->NumActiveVPorts;
      }
      else
      {
        p_VPortId = &v5->VPortParams.VPortId;
        VPortId = v5->VPortParams.VPortId;
        while ( Flink->PnPFlags != VPortId )
        {
          if ( Flink->PnPFlags <= VPortId )
          {
            Flink = *(struct _NDIS_MINIPORT_BLOCK **)&Flink->Header.Type;
            if ( Flink != (struct _NDIS_MINIPORT_BLOCK *)&v4->VPortList )
              continue;
          }
          goto LABEL_15;
        }
      }
      Open = v5->Open;
      for ( i = Open->VPortList.Flink; i != &Open->VPortList; i = i->Flink )
      {
        if ( HIDWORD(i[6].Blink) > *p_VPortId )
          break;
      }
      Blink = i->Blink;
      p_OpenLink = &v5->OpenLink;
      v16 = Blink->Flink;
      if ( Blink->Flink->Blink == Blink )
      {
        v5->OpenLink.Blink = Blink;
        p_OpenLink->Flink = v16;
        v16->Blink = p_OpenLink;
        Blink->Flink = p_OpenLink;
        ++Open->NumActiveVPorts;
        NicSwitch = v5->NicSwitch;
        for ( j = (__int64 *)*((_QWORD *)NicSwitch + 7); j != (__int64 *)((char *)NicSwitch + 56); j = (__int64 *)*j )
        {
          if ( *((_DWORD *)j + 23) > *p_VPortId )
            break;
        }
        v19 = (_LIST_ENTRY *)j[1];
        p_SwitchLink = &v5->SwitchLink;
        v21 = v19->Flink;
        if ( v19->Flink->Blink == v19 )
        {
          p_SwitchLink->Flink = v21;
          v5->SwitchLink.Blink = v19;
          v21->Blink = p_SwitchLink;
          v19->Flink = p_SwitchLink;
          ++*((_DWORD *)NicSwitch + 12);
          *((_DWORD *)NicSwitch + 24) += v5->VPortParams.NumQueuePairs;
          AttachedFunction = (struct _NDIS_VF_BLOCK *)v5->AttachedFunction;
          if ( (v5->Flags & 2) != 0 )
            ndisIovAddVPortToVFList(AttachedFunction, v5);
          else
            ndisIovAddVPortToPFList(AttachedFunction, v5);
          v4->MiniportThread = 0LL;
          KeReleaseSpinLock(&v4->Lock, NewIrql);
          goto LABEL_7;
        }
      }
LABEL_29:
      __fastfail(3u);
    }
  }
LABEL_7:
  if ( *(int **)&WPP_RECORDER_INITIALIZED != &WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qq(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x39u,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)v4,
      v1);
}
