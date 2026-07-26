/*
 * XREFs of ?ndisNicActiveRequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14003C040
 * Callers:
 *     ?ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x1400397E0 (-ndisSignalD0RequestComplete@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 * Callees:
 *     WPP_RECORDER_SF_qZ @ 0x14002C3B0 (WPP_RECORDER_SF_qZ.c)
 *     WPP_RECORDER_SF_Lq @ 0x140036410 (WPP_RECORDER_SF_Lq.c)
 *     ?ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z @ 0x14003AC20 (-ndisSetTempRefTimer@@YAXPEAU_NDIS_MINIPORT_BLOCK@@K@Z.c)
 *     ?ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z @ 0x14003BD90 (-ndisAoAcActiveRefSubtract@@YAJPEAU_NDIS_MINIPORT_AOAC@@W4_NDIS_PM_COMPONENT_ID@@K@Z.c)
 *     ?ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z @ 0x14003C1E0 (-ndisAoAcCompleteQueuedIrps@@YAXPEAU_NDIS_MINIPORT_BLOCK@@J@Z.c)
 *     ?ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z @ 0x1400864C0 (-ndisSelectiveSuspendClearStop@@YAXPEAU_NDIS_MINIPORT_BLOCK@@W4_NDIS_SS_STOP_REASON@@@Z.c)
 *     ?NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z @ 0x14008ACE0 (-NdisUnexpectedAoAcError@@YAXPEAU_NDIS_MINIPORT_BLOCK@@GJ@Z.c)
 */

void __fastcall ndisNicActiveRequestComplete(struct _NDIS_MINIPORT_BLOCK *a1, int a2)
{
  struct _NDIS_MINIPORT_AOAC *AoAc; // rsi
  KIRQL v5; // al
  __int64 v6; // rdx
  KIRQL v7; // bp

  AoAc = a1->AoAc;
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
  *((_DWORD *)AoAc + 94) = a2 != 0 ? 4 : 0;
  KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v5);
  if ( a2 )
  {
    NdisUnexpectedAoAcError(a1, 2u, a2);
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_Lq(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        2u,
        0xEu,
        0x17u,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
        a2,
        a1);
    v7 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)AoAc);
    if ( (unsigned int)(*((_DWORD *)AoAc + 16) - 2) <= 1 )
    {
      *((_DWORD *)AoAc + 16) = 0;
      ndisAoAcActiveRefSubtract((__int64)AoAc, 0, 1);
    }
    KeReleaseSpinLock((PKSPIN_LOCK)AoAc, v7);
  }
  else
  {
    if ( WPP_RECORDER_INITIALIZED != (_UNKNOWN *)&WPP_RECORDER_INITIALIZED )
      WPP_RECORDER_SF_qZ(
        *((_QWORD *)WPP_GLOBAL_Control + 8),
        v6,
        9u,
        0x16u,
        (struct _GUID *)WPP_f95a930beee8328147ea537ccd3c5542_Traceguids,
        (char)a1,
        &a1->pAdapterInstanceName->Length);
    if ( a1->SelectiveSuspend )
      ndisSelectiveSuspendClearStop(a1, 7LL);
    ndisSetTempRefTimer(a1, ndisNicQuietWakeTimeout);
  }
  ndisAoAcCompleteQueuedIrps(a1, a2);
}
