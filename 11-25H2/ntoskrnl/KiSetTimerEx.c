/*
 * XREFs of KiSetTimerEx @ 0x1402ED730
 * Callers:
 *     KiInvokeInterruptServiceRoutine @ 0x140206C50 (KiInvokeInterruptServiceRoutine.c)
 *     CcSetDirtyInMask @ 0x1402D5CB0 (CcSetDirtyInMask.c)
 *     CcSetDirtyPinnedData @ 0x1402D6A70 (CcSetDirtyPinnedData.c)
 *     CcNotifyWriteBehindInternal @ 0x1403A724C (CcNotifyWriteBehindInternal.c)
 *     CcScheduleLazyWriteScan @ 0x1403A79B0 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindVolume @ 0x1403A7B2C (CcNotifyWriteBehindVolume.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x1403A7C1C (CcRescheduleLazyWriteScanOnVolume.c)
 *     PopCoalescingSetTimer @ 0x1403A7FF4 (PopCoalescingSetTimer.c)
 *     MiInsertUnusedSegment @ 0x14041957C (MiInsertUnusedSegment.c)
 *     PopEnableIrpWatchdog @ 0x140441640 (PopEnableIrpWatchdog.c)
 *     CcChargeDirtyPagesInternal @ 0x14044C490 (CcChargeDirtyPagesInternal.c)
 *     PopSetWatchdog @ 0x140457F50 (PopSetWatchdog.c)
 *     MiSetDeleteOnCloseTimer @ 0x140458F14 (MiSetDeleteOnCloseTimer.c)
 *     KeSetTimerEx @ 0x14045AFC0 (KeSetTimerEx.c)
 *     PpmEndHighPerfRequest @ 0x14046D2B4 (PpmEndHighPerfRequest.c)
 *     MiRebuildLargePagesThread @ 0x140475C40 (MiRebuildLargePagesThread.c)
 *     PfSnTraceTimerRoutine @ 0x14047EF80 (PfSnTraceTimerRoutine.c)
 *     PfSnStartTraceTimer @ 0x14048E9E0 (PfSnStartTraceTimer.c)
 *     PopUserPresentSetWorker @ 0x140492FE0 (PopUserPresentSetWorker.c)
 *     PopSetPowerActionWatchdogState @ 0x1404BDE2C (PopSetPowerActionWatchdogState.c)
 *     CcUninitializeCacheMap @ 0x1404DADC0 (CcUninitializeCacheMap.c)
 *     MiStoreExtendVirtualPagefile @ 0x1404F3D60 (MiStoreExtendVirtualPagefile.c)
 *     HalpCmcStartPolling @ 0x1404F5514 (HalpCmcStartPolling.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x140538F70 (HalpTimerSchedulePeriodicQueries.c)
 *     PfpServiceMainThreadBoost @ 0x1405C7F60 (PfpServiceMainThreadBoost.c)
 *     DifKeSetTimerExWrapper @ 0x140624AD0 (DifKeSetTimerExWrapper.c)
 *     DifKeSetTimerWrapper @ 0x140624C60 (DifKeSetTimerWrapper.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x1406FCD60 (DbgkpWerDeferredWriteRoutine.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x140700750 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x14073B1A0 (PfSnQueueEnablePrefetcherTimer.c)
 *     PopSetSystemAwayMode @ 0x140747CD0 (PopSetSystemAwayMode.c)
 *     TtmiResetInactivityTimer @ 0x1407600D0 (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1407608C4 (TtmpResetEvaluationTimer.c)
 *     CmpCmdInit @ 0x1407C603C (CmpCmdInit.c)
 *     CmFreezeRegistry @ 0x1407C8C7C (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x1407CE980 (CmpLazyCommitWorker.c)
 *     PfSnPowerBoost @ 0x1408EC6A4 (PfSnPowerBoost.c)
 *     PiDrvDbNodeActionCallback @ 0x140931920 (PiDrvDbNodeActionCallback.c)
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1409B64C0 (PpmWmiDispatch.c)
 *     CmSetLazyFlushState @ 0x140A9AAA0 (CmSetLazyFlushState.c)
 *     CmpDelayFreeCmRm @ 0x140AA9E08 (CmpDelayFreeCmRm.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140AB7310 (PopCancelIgnoreBatteryStatusChange.c)
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140B3E208 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PfSnBeginBootPhase @ 0x140B4B714 (PfSnBeginBootPhase.c)
 *     PopBuildDeviceNotifyList @ 0x140B59988 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140B5ED84 (PfpStartLoggingHardFaultEvents.c)
 *     KdpTimeSlipWork @ 0x140B68650 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x140B81EA8 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140B84E20 (ViShutdownScheduleWatchdog.c)
 *     ViWdStartTimer @ 0x140B8CD6C (ViWdStartTimer.c)
 *     PfSnInitializePrefetcher @ 0x140C1B9DC (PfSnInitializePrefetcher.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     KiExitDispatcher @ 0x140287260 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x1402EDE10 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x1402EEDC0 (KiTimerWaitTest.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiTraceSetTimer @ 0x1403F95AC (KiTraceSetTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 v8; // rbp
  __int64 CurrentIrql; // rax
  __int64 v10; // rcx
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v12; // r14d
  unsigned __int8 v13; // r13
  unsigned int v14; // esi
  unsigned __int64 v15; // rcx
  volatile signed __int32 *v16; // rsi
  unsigned __int64 v17; // r13
  unsigned __int16 v18; // r8
  _QWORD *v19; // rcx
  __int64 v20; // r11
  unsigned __int64 v21; // r9
  _QWORD *v22; // rax
  __int64 v23; // r10
  _KPROCESS *Process; // rcx
  __int16 v25; // dx
  __int64 v26; // rcx
  __int64 v27; // rax
  __int64 v28; // r14
  volatile signed __int32 *v30; // r14
  unsigned int v31; // r13d
  __int64 v32; // rcx
  unsigned int v33; // esi
  unsigned int v34; // r13d
  unsigned int v35; // esi
  __int64 v36; // [rsp+30h] [rbp-B8h]
  char v37; // [rsp+38h] [rbp-B0h]
  unsigned __int64 v39; // [rsp+40h] [rbp-A8h]
  volatile signed __int32 v40; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v41; // [rsp+60h] [rbp-88h]
  __int64 v42; // [rsp+68h] [rbp-80h]
  __int64 v43; // [rsp+70h] [rbp-78h] BYREF
  __int64 v44; // [rsp+80h] [rbp-68h]
  __int64 v45; // [rsp+88h] [rbp-60h]
  _QWORD v46[2]; // [rsp+90h] [rbp-58h] BYREF

  v44 = a5;
  v8 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ a5), KiWaitNever);
  CurrentIrql = KeGetCurrentIrql();
  v45 = CurrentIrql;
  v10 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  v12 = 0;
  v43 = 0LL;
  v13 = 0;
  while ( 1 )
  {
    v14 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
        {
          HvlNotifyLongSpinWait(v14);
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
    v15 = *(unsigned __int8 *)(a1 + 2);
    v37 = *(_BYTE *)(a1 + 2);
    v39 = v15;
    v36 = KiProcessorBlock[*(unsigned __int16 *)(a1 + 56)];
    v16 = (volatile signed __int32 *)(v36
                                    + 16640
                                    + 32 * (((unsigned __int64)*(unsigned __int16 *)(a1 + 58) << 8) + v15 + 16));
    while ( _interlockedbittestandset64(v16, 0LL) )
    {
      do
      {
        if ( (++v12 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v15) )
        {
          HvlNotifyLongSpinWait(v12);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v16 );
    }
    if ( *(char *)(a1 + 3) >= 0 )
    {
      v17 = v39;
      v18 = *(_WORD *)(a1 + 58);
      v19 = *(_QWORD **)(a1 + 32);
      v20 = v36 + 16640;
      v21 = v36 + 16640 + 32 * (((unsigned __int64)v18 << 8) + v39 + 16);
      v41 = v21;
      v22 = *(_QWORD **)(a1 + 40);
      v23 = v36 + 16640 + 32 * (((v18 ^ 1LL) << 8) + v39 + 16);
      v42 = v23;
      if ( v19[1] != a1 + 32 || *v22 != a1 + 32 )
        __fastfail(3u);
      *v22 = v19;
      v19[1] = v22;
      if ( v22 != v19 )
        goto LABEL_17;
      *(_DWORD *)(v21 + 28) = -1;
      if ( v18 )
      {
        v30 = (volatile signed __int32 *)(v20 + 32 * (v39 + 16));
        if ( _interlockedbittestandset64(v30, 0LL) )
        {
          _mm_pause();
        }
        else if ( v30 )
        {
          goto LABEL_43;
        }
        _InterlockedAnd64((volatile signed __int64 *)v16, 0LL);
        v33 = 0;
        while ( _interlockedbittestandset64(v30, 0LL) )
        {
          do
          {
            if ( (++v33 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19) )
            {
              HvlNotifyLongSpinWait(v33);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v30 );
        }
        v16 = (volatile signed __int32 *)(v36 + 16640 + 32 * (v39 + 272));
        v34 = 0;
        while ( _interlockedbittestandset64(v16, 0LL) )
        {
          do
          {
            if ( (++v34 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19) )
            {
              HvlNotifyLongSpinWait(v34);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v16 );
        }
      }
      else
      {
        v30 = (volatile signed __int32 *)(v20 + 32 * (v39 + 272));
        v31 = 0;
        while ( _interlockedbittestandset64(v30, 0LL) )
        {
          do
          {
            if ( (++v31 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v19) )
            {
              HvlNotifyLongSpinWait(v31);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v30 );
        }
      }
      v17 = v39;
      v23 = v42;
      v21 = v41;
LABEL_43:
      if ( *(_DWORD *)(v21 + 28) == -1 && *(_DWORD *)(v23 + 28) == -1 )
      {
        v32 = qword_140FC7528[2 * *(unsigned __int8 *)(v36 + 208)];
        if ( !KiSerializeTimerExpiration )
        {
          _interlockedbittestandreset64((volatile signed __int32 *)((v17 << 6) + v32), *(unsigned __int8 *)(v36 + 209));
          _InterlockedAnd64((volatile signed __int64 *)v30, 0LL);
          goto LABEL_17;
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v32 + 8 * (v17 >> 6)), v37 & 0x3F);
      }
      _InterlockedAnd64((volatile signed __int64 *)v30, 0LL);
LABEL_17:
      _InterlockedAnd64((volatile signed __int64 *)v16, 0LL);
      _InterlockedAnd((volatile signed __int32 *)a1, 0xBFFFFFFF);
      v13 = 1;
      goto LABEL_18;
    }
    _InterlockedAnd64((volatile signed __int64 *)v16, 0LL);
    v12 = 0;
    v10 = _InterlockedExchange64((volatile __int64 *)(v36 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F) + 16640), 0LL);
    if ( v10 )
      break;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v35 = 0;
    while ( *(char *)(a1 + 3) < 0 )
    {
      if ( (++v35 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v10) )
      {
        HvlNotifyLongSpinWait(v35);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFu);
  v13 = 1;
LABEL_18:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v13 )
  {
    v43 = a1;
    v46[0] = &v43;
    v46[1] = 8LL;
    EtwTraceKernelEvent((int)v46, 1, 0x40020000u, 3925, 1538);
  }
  v25 = 0;
  if ( !KiGlobalTimerResolutionRequests )
  {
    if ( CurrentPrcb->NestingLevel
      || (Process = KeGetCurrentThread()->ApcState.Process, (Process[1].DirectoryTableBase & 0x100000000000LL) == 0)
      || (Process[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) != 0 )
    {
      v25 = 1;
    }
  }
  *(_WORD *)(a1 + 58) = v25;
  *(_DWORD *)(a1 + 60) = a3;
  *(_QWORD *)(a1 + 48) = v8;
  v40 = *(_DWORD *)a1;
  BYTE1(v40) = a4;
  if ( a2 >= 0 )
  {
    BYTE1(v40) = a4 | 1;
    a2 = MEMORY[0xFFFFF78000000014] - a2;
    if ( a2 < 0 )
    {
      a4 |= 1u;
      goto LABEL_24;
    }
    *(_DWORD *)a1 = v40;
    *(_QWORD *)(a1 + 24) = 0LL;
    goto LABEL_34;
  }
LABEL_24:
  v26 = 0LL;
  if ( (a4 & 0xFC) != 0 )
    v26 = (unsigned __int8)(a4 & 0xFC) << 16;
  HIBYTE(v40) |= 0x40u;
  v27 = MEMORY[0xFFFFF78000000008] - a2;
  *(_QWORD *)(a1 + 24) = MEMORY[0xFFFFF78000000008] - a2;
  BYTE2(v40) = (unsigned __int64)(v26 + v27) >> 18;
  *(_DWORD *)a1 = v40;
  *(_DWORD *)(a1 + 4) = 0;
  v28 = v44;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, a1, v44, BYTE2(v40), 0LL) )
  {
LABEL_34:
    KiTimerWaitTest(CurrentPrcb, a1, 0LL);
    goto LABEL_29;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(a1, v28, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_29:
  KiExitDispatcher(CurrentPrcb, 0LL, 1u, 0, v45);
  return v13;
}
