/*
 * XREFs of KiSetTimerEx @ 0x140316810
 * Callers:
 *     CcNotifyWriteBehindInternal @ 0x1402638AC (CcNotifyWriteBehindInternal.c)
 *     CcScheduleLazyWriteScan @ 0x140264F40 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindVolume @ 0x1402650BC (CcNotifyWriteBehindVolume.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x1402651AC (CcRescheduleLazyWriteScanOnVolume.c)
 *     CcSetDirtyPinnedData @ 0x1402769E0 (CcSetDirtyPinnedData.c)
 *     PopSetWatchdog @ 0x1402BC81C (PopSetWatchdog.c)
 *     KeSetCoalescableTimer @ 0x1402BE6B0 (KeSetCoalescableTimer.c)
 *     MiRebuildLargePagesThread @ 0x140314BA0 (MiRebuildLargePagesThread.c)
 *     PopEnableIrpWatchdog @ 0x140314DDC (PopEnableIrpWatchdog.c)
 *     PfSnTraceTimerRoutine @ 0x140314FF0 (PfSnTraceTimerRoutine.c)
 *     KeSetTimerEx @ 0x140315140 (KeSetTimerEx.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403AE8E8 (KiInvokeInterruptServiceRoutine.c)
 *     MiSetDeleteOnCloseTimer @ 0x1403ED804 (MiSetDeleteOnCloseTimer.c)
 *     MiInsertUnusedSegment @ 0x140432A98 (MiInsertUnusedSegment.c)
 *     CcChargeDirtyPagesInternal @ 0x140442A90 (CcChargeDirtyPagesInternal.c)
 *     CcSetDirtyInMask @ 0x140456AF0 (CcSetDirtyInMask.c)
 *     PpmEndHighPerfRequest @ 0x1404648C4 (PpmEndHighPerfRequest.c)
 *     PopCoalescingSetTimer @ 0x14047F5A0 (PopCoalescingSetTimer.c)
 *     PfSnStartTraceTimer @ 0x140488C7C (PfSnStartTraceTimer.c)
 *     PopUserPresentSetWorker @ 0x14048D0E0 (PopUserPresentSetWorker.c)
 *     PopSetPowerActionWatchdogState @ 0x1404B7FCC (PopSetPowerActionWatchdogState.c)
 *     CcUninitializeCacheMap @ 0x1404D3ED0 (CcUninitializeCacheMap.c)
 *     MiStoreExtendVirtualPagefile @ 0x1404F3E10 (MiStoreExtendVirtualPagefile.c)
 *     HalpCmcStartPolling @ 0x1404F5220 (HalpCmcStartPolling.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x140539000 (HalpTimerSchedulePeriodicQueries.c)
 *     PfpServiceMainThreadBoost @ 0x1405C9CA0 (PfpServiceMainThreadBoost.c)
 *     DifKeSetTimerExWrapper @ 0x14062F050 (DifKeSetTimerExWrapper.c)
 *     DifKeSetTimerWrapper @ 0x14062F1E0 (DifKeSetTimerWrapper.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140706800 (DbgkpWerDeferredWriteRoutine.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14070A1C4 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1407454B0 (PfSnQueueEnablePrefetcherTimer.c)
 *     PopSetSystemAwayMode @ 0x1407520E0 (PopSetSystemAwayMode.c)
 *     TtmiResetInactivityTimer @ 0x14076FCB0 (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1407704A4 (TtmpResetEvaluationTimer.c)
 *     CmpCmdInit @ 0x1407D5C78 (CmpCmdInit.c)
 *     CmFreezeRegistry @ 0x1407D896C (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x1407DE690 (CmpLazyCommitWorker.c)
 *     PiDrvDbNodeActionCallback @ 0x140927F50 (PiDrvDbNodeActionCallback.c)
 *     PfSnPowerBoost @ 0x140936054 (PfSnPowerBoost.c)
 *     PpmWmiDispatch @ 0x1409B37E0 (PpmWmiDispatch.c)
 *     ExpRefreshTimeZoneInformation @ 0x140A7981C (ExpRefreshTimeZoneInformation.c)
 *     CmSetLazyFlushState @ 0x140A9BBF0 (CmSetLazyFlushState.c)
 *     CmpDelayFreeCmRm @ 0x140AAA048 (CmpDelayFreeCmRm.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140AB6670 (PopCancelIgnoreBatteryStatusChange.c)
 *     PopBatteryWorker @ 0x140AC5DB0 (PopBatteryWorker.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140B50258 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PfSnBeginBootPhase @ 0x140B5D6F4 (PfSnBeginBootPhase.c)
 *     PopBuildDeviceNotifyList @ 0x140B6AED8 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140B6F6D0 (PfpStartLoggingHardFaultEvents.c)
 *     KdpTimeSlipWork @ 0x140B7A650 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x140B93E88 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140B96E00 (ViShutdownScheduleWatchdog.c)
 *     ViWdStartTimer @ 0x140B9ED4C (ViWdStartTimer.c)
 *     PfSnInitializePrefetcher @ 0x140C2EBFC (PfSnInitializePrefetcher.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140285790 (EtwTraceKernelEvent.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x1402C7330 (KiExitDispatcher.c)
 *     KiComputeDueTime @ 0x140316E40 (KiComputeDueTime.c)
 *     KiInsertTimerTable @ 0x140316F50 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x140317320 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x140471C1C (KiTraceSetTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, unsigned __int8 a4, __int64 a5)
{
  __int64 v7; // rbp
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r14
  unsigned int v10; // r15d
  unsigned __int8 v11; // r12
  unsigned int v12; // esi
  unsigned __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r9
  unsigned __int64 v16; // rax
  volatile signed __int32 *v17; // rsi
  unsigned __int64 v18; // r11
  unsigned __int16 v19; // r8
  __int64 v20; // r12
  _QWORD *v21; // rcx
  __int64 v22; // r10
  unsigned __int64 v23; // r13
  _QWORD *v24; // rax
  __int64 v25; // r9
  _KPROCESS *Process; // rcx
  __int16 v27; // dx
  int v28; // r9d
  __int64 v29; // r15
  volatile signed __int32 *v31; // r15
  unsigned int v32; // r12d
  __int64 v33; // rcx
  unsigned int v34; // esi
  unsigned int v35; // r12d
  unsigned int v36; // esi
  int v38; // [rsp+34h] [rbp-94h] BYREF
  unsigned __int64 v39; // [rsp+38h] [rbp-90h]
  __int64 v40; // [rsp+40h] [rbp-88h]
  int v41; // [rsp+48h] [rbp-80h]
  int v42; // [rsp+4Ch] [rbp-7Ch]
  __int64 v43; // [rsp+50h] [rbp-78h]
  __int64 v44; // [rsp+58h] [rbp-70h] BYREF
  __int64 v45; // [rsp+68h] [rbp-60h]
  _QWORD v46[2]; // [rsp+70h] [rbp-58h] BYREF

  v42 = a3;
  v7 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ a5), KiWaitNever);
  v45 = a5;
  v38 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v46[0] = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v10 = 0;
  v44 = 0LL;
  v11 = 0;
  while ( 1 )
  {
    v12 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (*(_DWORD *)a1 & 0x80u) != 0 || _interlockedbittestandset((volatile signed __int32 *)a1, 7u) );
    }
    if ( (*(_BYTE *)(a1 + 3) & 0xC0) == 0 )
      goto LABEL_18;
    v13 = *(unsigned __int8 *)(a1 + 2);
    v14 = *(unsigned __int16 *)(a1 + 56);
    v41 = *(unsigned __int8 *)(a1 + 2);
    v39 = v13;
    v15 = KiProcessorBlock[v14];
    v16 = (unsigned __int64)*(unsigned __int16 *)(a1 + 58) << 8;
    v40 = v15;
    v17 = (volatile signed __int32 *)(v15 + 16640 + 32 * (v16 + v13 + 16));
    while ( _interlockedbittestandset64(v17, 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v17 );
    }
    if ( *(char *)(a1 + 3) >= 0 )
    {
      v18 = v39;
      v19 = *(_WORD *)(a1 + 58);
      v20 = v40;
      v21 = *(_QWORD **)(a1 + 32);
      v22 = v40 + 16640;
      v23 = v40 + 16640 + 32 * (((unsigned __int64)v19 << 8) + v39 + 16);
      v24 = *(_QWORD **)(a1 + 40);
      v25 = v40 + 16640 + 32 * (((v19 ^ 1LL) << 8) + v39 + 16);
      v43 = v25;
      if ( v21[1] != a1 + 32 || *v24 != a1 + 32 )
        __fastfail(3u);
      *v24 = v21;
      v21[1] = v24;
      if ( v24 != v21 )
        goto LABEL_17;
      *(_DWORD *)(v23 + 28) = -1;
      if ( v19 )
      {
        v31 = (volatile signed __int32 *)(v22 + 32 * (v18 + 16));
        if ( _interlockedbittestandset64(v31, 0LL) )
        {
          _mm_pause();
        }
        else if ( v31 )
        {
          goto LABEL_39;
        }
        _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
        v34 = 0;
        while ( _interlockedbittestandset64(v31, 0LL) )
        {
          do
          {
            if ( (++v34 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v34);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v31 );
        }
        v17 = (volatile signed __int32 *)(v20 + 16640 + 32 * (v39 + 272));
        v35 = 0;
        while ( _interlockedbittestandset64(v17, 0LL) )
        {
          do
          {
            if ( (++v35 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v35);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v17 );
        }
      }
      else
      {
        v31 = (volatile signed __int32 *)(v22 + 32 * (v18 + 272));
        v32 = 0;
        while ( _interlockedbittestandset64(v31, 0LL) )
        {
          do
          {
            if ( (++v32 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v32);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v31 );
        }
      }
      v20 = v40;
      v18 = v39;
      v25 = v43;
LABEL_39:
      if ( *(_DWORD *)(v23 + 28) == -1 && *(_DWORD *)(v25 + 28) == -1 )
      {
        v33 = qword_140FC8568[2 * *(unsigned __int8 *)(v20 + 208)];
        if ( !KiSerializeTimerExpiration )
        {
          _interlockedbittestandreset64((volatile signed __int32 *)((v18 << 6) + v33), *(unsigned __int8 *)(v20 + 209));
          _InterlockedAnd64((volatile signed __int64 *)v31, 0LL);
          goto LABEL_17;
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v33 + 8 * (v18 >> 6)), v41 & 0x3F);
      }
      _InterlockedAnd64((volatile signed __int64 *)v31, 0LL);
LABEL_17:
      _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
      _InterlockedAnd((volatile signed __int32 *)a1, 0xBFFFFFFF);
      LOBYTE(CurrentIrql) = v46[0];
      v11 = 1;
      goto LABEL_18;
    }
    _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
    v10 = 0;
    if ( _InterlockedExchange64((volatile __int64 *)(v40 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F) + 16640), 0LL) )
      break;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v36 = 0;
    while ( *(char *)(a1 + 3) < 0 )
    {
      if ( (++v36 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v36);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFu);
  v11 = 1;
LABEL_18:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v11 )
  {
    v44 = a1;
    v46[0] = &v44;
    v46[1] = 8LL;
    EtwTraceKernelEvent((int)v46, 1, 0x40020000u, 3925, 1538);
  }
  v27 = 0;
  if ( !KiGlobalTimerResolutionRequests )
  {
    if ( CurrentPrcb->NestingLevel
      || (Process = KeGetCurrentThread()->ApcState.Process, (Process[1].DirectoryTableBase & 0x100000000000LL) == 0)
      || (Process[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) != 0 )
    {
      v27 = 1;
    }
  }
  *(_WORD *)(a1 + 58) = v27;
  *(_DWORD *)(a1 + 60) = v42;
  *(_QWORD *)(a1 + 48) = v7;
  if ( (unsigned int)KiComputeDueTime(a1, a2, a4, &v38)
    && (v28 = v38,
        *(_DWORD *)(a1 + 4) = 0,
        v29 = v45,
        (unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, a1, v45, v28, 0LL)) )
  {
    if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
      KiTraceSetTimer(a1, v29, 0LL);
    else
      _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
  }
  else
  {
    KiTimerWaitTest(CurrentPrcb, a1, 0LL);
  }
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v11;
}
