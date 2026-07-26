/*
 * XREFs of ?ndisIovGetNicSwitchList@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@PEAU_NDIS_SRIOV_CAPABILITIES@@PEAPEAU_NDIS_NIC_SWITCH_INFO_ARRAY@@@Z @ 0x1400DEC4C
 * Callers:
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x140153580 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1401788C0 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_RECORDER_SF_q @ 0x140014040 (WPP_RECORDER_SF_q.c)
 *     WPP_RECORDER_SF_qL @ 0x140014250 (WPP_RECORDER_SF_qL.c)
 *     ?NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z @ 0x1400353A0 (-NDIS_ACQUIRE_MINIPORT_SPIN_LOCK@@YAXPEAU_NDIS_MINIPORT_BLOCK@@PEAE@Z.c)
 *     ?ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DDBB4 (-ndisIovCopyNicSwitchInfo@@YAXPEAU_NDIS_NIC_SWITCH_INFO@@PEAU_NDIS_NIC_SWITCH_BLOCK@@PEAU_NDIS_N.c)
 *     ?ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z @ 0x1400DF118 (-ndisIovNicSwitchWithoutIovSupported@@YAEPEAU_NDIS_NIC_SWITCH_CAPABILITIES@@@Z.c)
 */

__int64 __fastcall ndisIovGetNicSwitchList(
        struct _NDIS_MINIPORT_BLOCK *a1,
        struct _NDIS_NIC_SWITCH_CAPABILITIES *a2,
        struct _NDIS_SRIOV_CAPABILITIES *a3,
        struct _NDIS_NIC_SWITCH_INFO_ARRAY **a4)
{
  unsigned int v4; // edi
  struct _NDIS_NIC_SWITCH_CAPABILITIES *v7; // rbp
  struct _NDIS_NIC_SWITCH_INFO_ARRAY *Pool2; // rax
  __int64 v10; // rax
  _LIST_ENTRY *Flink; // rsi
  struct _NDIS_NIC_SWITCH_INFO *v12; // r14
  unsigned int i; // r15d
  KIRQL NewIrql; // [rsp+70h] [rbp+8h] BYREF

  v4 = 0;
  NewIrql = 0;
  v7 = a2;
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
  {
    LOBYTE(a2) = 4;
    WPP_RECORDER_SF_q(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      (int)a2,
      26,
      94,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1);
  }
  NDIS_ACQUIRE_MINIPORT_SPIN_LOCK(a1, &NewIrql);
  *a4 = 0LL;
  if ( ndisIovNicSwitchWithoutIovSupported(v7) || a3 && v7 && (a3->SriovCapabilities & 3) == 3 )
  {
    Pool2 = (struct _NDIS_NIC_SWITCH_INFO_ARRAY *)ExAllocatePool2(64LL, 572 * a1->NumSwitches + 16, 1869169742LL);
    *a4 = Pool2;
    if ( Pool2 )
    {
      Pool2->Header.Type = 0x80;
      (*a4)->Header.Revision = 1;
      (*a4)->Header.Size = 16;
      (*a4)->FirstElementOffset = 16;
      (*a4)->NumElements = a1->NumSwitches;
      (*a4)->ElementSize = 572;
      v10 = (__int64)*a4;
      Flink = a1->NicSwitchList.Flink;
      v12 = (struct _NDIS_NIC_SWITCH_INFO *)(v10 + *(unsigned int *)(v10 + 4));
      for ( i = 0; Flink != &a1->NicSwitchList && i < a1->NumSwitches; ++i )
      {
        ndisIovCopyNicSwitchInfo(v12, (struct _NDIS_NIC_SWITCH_BLOCK *)Flink, v7);
        Flink = Flink->Flink;
        v12 = (struct _NDIS_NIC_SWITCH_INFO *)((char *)v12 + 572);
      }
    }
    else
    {
      v4 = -1073741670;
    }
  }
  a1->MiniportThread = 0LL;
  KeReleaseSpinLock(&a1->Lock, NewIrql);
  if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
    WPP_RECORDER_SF_qL(
      *((_QWORD *)WPP_GLOBAL_Control + 8),
      4u,
      0x1Au,
      0x5Fu,
      (struct _GUID *)&WPP_50f1e73ef26b3e4eefa48131e3a19b75_Traceguids,
      (char)a1,
      v4);
  return v4;
}
