/*
 * XREFs of KiSetTimerEx @ 0x1403347A0
 * Callers:
 *     CcSetDirtyPinnedData @ 0x1402AB6C0 (CcSetDirtyPinnedData.c)
 *     PopCoalescingSetTimer @ 0x1402CA544 (PopCoalescingSetTimer.c)
 *     CcNotifyWriteBehindInternal @ 0x1402CF16C (CcNotifyWriteBehindInternal.c)
 *     MiRebuildLargePagesThread @ 0x14030ACC0 (MiRebuildLargePagesThread.c)
 *     MiInsertUnusedSegment @ 0x14037016C (MiInsertUnusedSegment.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403BFD28 (KiInvokeInterruptServiceRoutine.c)
 *     MiSetDeleteOnCloseTimer @ 0x1403F7894 (MiSetDeleteOnCloseTimer.c)
 *     CcScheduleLazyWriteScan @ 0x14043C9B0 (CcScheduleLazyWriteScan.c)
 *     CcNotifyWriteBehindVolume @ 0x14043CB2C (CcNotifyWriteBehindVolume.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x14043CC1C (CcRescheduleLazyWriteScanOnVolume.c)
 *     PopEnableIrpWatchdog @ 0x140440F7C (PopEnableIrpWatchdog.c)
 *     CcChargeDirtyPagesInternal @ 0x14044B950 (CcChargeDirtyPagesInternal.c)
 *     PopSetWatchdog @ 0x140458BDC (PopSetWatchdog.c)
 *     KeSetTimerEx @ 0x14045AAF0 (KeSetTimerEx.c)
 *     CcSetDirtyInMask @ 0x1404614E0 (CcSetDirtyInMask.c)
 *     PpmEndHighPerfRequest @ 0x14046BC44 (PpmEndHighPerfRequest.c)
 *     PfSnTraceTimerRoutine @ 0x14047FAD0 (PfSnTraceTimerRoutine.c)
 *     PfSnStartTraceTimer @ 0x14048E84C (PfSnStartTraceTimer.c)
 *     PopUserPresentSetWorker @ 0x140492270 (PopUserPresentSetWorker.c)
 *     PopSetPowerActionWatchdogState @ 0x1404BCE5C (PopSetPowerActionWatchdogState.c)
 *     CcUninitializeCacheMap @ 0x1404DA4B0 (CcUninitializeCacheMap.c)
 *     MiStoreExtendVirtualPagefile @ 0x1404F6510 (MiStoreExtendVirtualPagefile.c)
 *     HalpCmcStartPolling @ 0x1404F7940 (HalpCmcStartPolling.c)
 *     HalpTimerSchedulePeriodicQueries @ 0x14053B720 (HalpTimerSchedulePeriodicQueries.c)
 *     PfpServiceMainThreadBoost @ 0x1405CC530 (PfpServiceMainThreadBoost.c)
 *     DifKeSetTimerExWrapper @ 0x140630A90 (DifKeSetTimerExWrapper.c)
 *     DifKeSetTimerWrapper @ 0x140630C20 (DifKeSetTimerWrapper.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140708C40 (DbgkpWerDeferredWriteRoutine.c)
 *     FsRtlpOplockTryStartBreakAckTimeout @ 0x14070C630 (FsRtlpOplockTryStartBreakAckTimeout.c)
 *     PfSnQueueEnablePrefetcherTimer @ 0x1407471C0 (PfSnQueueEnablePrefetcherTimer.c)
 *     PopSetSystemAwayMode @ 0x140753DC0 (PopSetSystemAwayMode.c)
 *     TtmiResetInactivityTimer @ 0x14076FA90 (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x140770284 (TtmpResetEvaluationTimer.c)
 *     CmpCmdInit @ 0x1407D5788 (CmpCmdInit.c)
 *     CmFreezeRegistry @ 0x1407D841C (CmFreezeRegistry.c)
 *     CmpLazyCommitWorker @ 0x1407DE140 (CmpLazyCommitWorker.c)
 *     PiDrvDbNodeActionCallback @ 0x140925E10 (PiDrvDbNodeActionCallback.c)
 *     PfSnPowerBoost @ 0x1409526A4 (PfSnPowerBoost.c)
 *     PpmWmiDispatch @ 0x1409CE810 (PpmWmiDispatch.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 *     CmSetLazyFlushState @ 0x140AA0860 (CmSetLazyFlushState.c)
 *     CmpDelayFreeCmRm @ 0x140AAF168 (CmpDelayFreeCmRm.c)
 *     PopCancelIgnoreBatteryStatusChange @ 0x140ABB650 (PopCancelIgnoreBatteryStatusChange.c)
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 *     HalpInitGenericErrorSourcePollingRoutine @ 0x140B4E208 (HalpInitGenericErrorSourcePollingRoutine.c)
 *     PfSnBeginBootPhase @ 0x140B5B684 (PfSnBeginBootPhase.c)
 *     PopBuildDeviceNotifyList @ 0x140B697C8 (PopBuildDeviceNotifyList.c)
 *     PfpStartLoggingHardFaultEvents @ 0x140B6DE30 (PfpStartLoggingHardFaultEvents.c)
 *     KdpTimeSlipWork @ 0x140B78650 (KdpTimeSlipWork.c)
 *     ViPendingDelayCompletion @ 0x140B91E88 (ViPendingDelayCompletion.c)
 *     ViShutdownScheduleWatchdog @ 0x140B94E00 (ViShutdownScheduleWatchdog.c)
 *     ViWdStartTimer @ 0x140B9CD4C (ViWdStartTimer.c)
 *     PfSnInitializePrefetcher @ 0x140C2CADC (PfSnInitializePrefetcher.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiExitDispatcher @ 0x14031E7A0 (KiExitDispatcher.c)
 *     KiInsertTimerTable @ 0x140334E60 (KiInsertTimerTable.c)
 *     KiTimerWaitTest @ 0x140335E10 (KiTimerWaitTest.c)
 *     KiTraceSetTimer @ 0x140401CDC (KiTraceSetTimer.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

__int64 __fastcall KiSetTimerEx(__int64 a1, __int64 a2, int a3, char a4, __int64 a5)
{
  __int64 v8; // rbp
  __int64 CurrentIrql; // rax
  struct _KPRCB *CurrentPrcb; // r15
  unsigned int v11; // r14d
  unsigned __int8 v12; // r13
  unsigned int v13; // esi
  volatile signed __int32 *v14; // rsi
  unsigned __int64 v15; // r13
  unsigned __int16 v16; // r8
  _QWORD *v17; // rcx
  __int64 v18; // r11
  unsigned __int64 v19; // r9
  _QWORD *v20; // rax
  __int64 v21; // r10
  _KPROCESS *Process; // rcx
  __int16 v23; // dx
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // r14
  volatile signed __int32 *v28; // r14
  unsigned int v29; // r13d
  __int64 v30; // rcx
  unsigned int v31; // esi
  unsigned int v32; // r13d
  unsigned int v33; // esi
  __int64 v34; // [rsp+30h] [rbp-B8h]
  unsigned __int8 v35; // [rsp+38h] [rbp-B0h]
  volatile signed __int32 v37; // [rsp+48h] [rbp-A0h]
  unsigned __int64 v38; // [rsp+60h] [rbp-88h]
  __int64 v39; // [rsp+68h] [rbp-80h]
  __int64 v40; // [rsp+70h] [rbp-78h] BYREF
  __int64 v41; // [rsp+80h] [rbp-68h]
  __int64 v42; // [rsp+88h] [rbp-60h]
  _QWORD v43[2]; // [rsp+90h] [rbp-58h] BYREF

  v41 = a5;
  v8 = KiWaitNever ^ __ROR8__(a1 ^ _byteswap_uint64(KiWaitAlways ^ a5), KiWaitNever);
  CurrentIrql = KeGetCurrentIrql();
  v42 = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v11 = 0;
  v40 = 0LL;
  v12 = 0;
  while ( 1 )
  {
    v13 = 0;
    if ( _interlockedbittestandset((volatile signed __int32 *)a1, 7u) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v13);
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
    v35 = *(_BYTE *)(a1 + 2);
    v34 = KiProcessorBlock[*(unsigned __int16 *)(a1 + 56)];
    v14 = (volatile signed __int32 *)(v34
                                    + 16640
                                    + 32 * (((unsigned __int64)*(unsigned __int16 *)(a1 + 58) << 8) + v35 + 16LL));
    while ( _interlockedbittestandset64(v14, 0LL) )
    {
      do
      {
        if ( (++v11 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v11);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v14 );
    }
    if ( *(char *)(a1 + 3) >= 0 )
    {
      v15 = v35;
      v16 = *(_WORD *)(a1 + 58);
      v17 = *(_QWORD **)(a1 + 32);
      v18 = v34 + 16640;
      v19 = v34 + 16640 + 32 * (((unsigned __int64)v16 << 8) + v35 + 16LL);
      v38 = v19;
      v20 = *(_QWORD **)(a1 + 40);
      v21 = v34 + 16640 + 32 * (((v16 ^ 1LL) << 8) + v35 + 16LL);
      v39 = v21;
      if ( v17[1] != a1 + 32 || *v20 != a1 + 32 )
        __fastfail(3u);
      *v20 = v17;
      v17[1] = v20;
      if ( v20 != v17 )
        goto LABEL_17;
      *(_DWORD *)(v19 + 28) = -1;
      if ( v16 )
      {
        v28 = (volatile signed __int32 *)(v18 + 32 * (v35 + 16LL));
        if ( _interlockedbittestandset64(v28, 0LL) )
        {
          _mm_pause();
        }
        else if ( v28 )
        {
          goto LABEL_43;
        }
        _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
        v31 = 0;
        while ( _interlockedbittestandset64(v28, 0LL) )
        {
          do
          {
            if ( (++v31 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v31);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v28 );
        }
        v14 = (volatile signed __int32 *)(v34 + 16640 + 32 * (v35 + 272LL));
        v32 = 0;
        while ( _interlockedbittestandset64(v14, 0LL) )
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
          while ( *(_QWORD *)v14 );
        }
      }
      else
      {
        v28 = (volatile signed __int32 *)(v18 + 32 * (v35 + 272LL));
        v29 = 0;
        while ( _interlockedbittestandset64(v28, 0LL) )
        {
          do
          {
            if ( (++v29 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v29);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v28 );
        }
      }
      v15 = v35;
      v21 = v39;
      v19 = v38;
LABEL_43:
      if ( *(_DWORD *)(v19 + 28) == -1 && *(_DWORD *)(v21 + 28) == -1 )
      {
        v30 = qword_140FC7508[2 * *(unsigned __int8 *)(v34 + 208)];
        if ( !KiSerializeTimerExpiration )
        {
          _interlockedbittestandreset64((volatile signed __int32 *)((v15 << 6) + v30), *(unsigned __int8 *)(v34 + 209));
          _InterlockedAnd64((volatile signed __int64 *)v28, 0LL);
          goto LABEL_17;
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v30 + 8 * (v15 >> 6)), v35 & 0x3F);
      }
      _InterlockedAnd64((volatile signed __int64 *)v28, 0LL);
LABEL_17:
      _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
      _InterlockedAnd((volatile signed __int32 *)a1, 0xBFFFFFFF);
      v12 = 1;
      goto LABEL_18;
    }
    _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
    v11 = 0;
    if ( _InterlockedExchange64((volatile __int64 *)(v34 + 8LL * (*(_BYTE *)(a1 + 3) & 0x3F) + 16640), 0LL) )
      break;
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
    v33 = 0;
    while ( *(char *)(a1 + 3) < 0 )
    {
      if ( (++v33 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v33);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFFu);
  v12 = 1;
LABEL_18:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v12 )
  {
    v40 = a1;
    v43[0] = &v40;
    v43[1] = 8LL;
    EtwTraceKernelEvent((int)v43, 1, 0x40020000u, 3925, 1538);
  }
  v23 = 0;
  if ( !KiGlobalTimerResolutionRequests )
  {
    if ( CurrentPrcb->NestingLevel
      || (Process = KeGetCurrentThread()->ApcState.Process, (Process[1].DirectoryTableBase & 0x100000000000LL) == 0)
      || (Process[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) != 0 )
    {
      v23 = 1;
    }
  }
  *(_WORD *)(a1 + 58) = v23;
  *(_DWORD *)(a1 + 60) = a3;
  *(_QWORD *)(a1 + 48) = v8;
  v37 = *(_DWORD *)a1;
  BYTE1(v37) = a4;
  if ( a2 >= 0 )
  {
    BYTE1(v37) = a4 | 1;
    a2 = MEMORY[0xFFFFF78000000014] - a2;
    if ( a2 < 0 )
    {
      a4 |= 1u;
      goto LABEL_24;
    }
    *(_DWORD *)a1 = v37;
    *(_QWORD *)(a1 + 24) = 0LL;
    goto LABEL_34;
  }
LABEL_24:
  v24 = 0LL;
  if ( (a4 & 0xFC) != 0 )
    v24 = (unsigned __int8)(a4 & 0xFC) << 16;
  HIBYTE(v37) |= 0x40u;
  v25 = MEMORY[0xFFFFF78000000008] - a2;
  *(_QWORD *)(a1 + 24) = MEMORY[0xFFFFF78000000008] - a2;
  BYTE2(v37) = (unsigned __int64)(v24 + v25) >> 18;
  *(_DWORD *)a1 = v37;
  *(_DWORD *)(a1 + 4) = 0;
  v26 = v41;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, a1, v41, BYTE2(v37), 0LL) )
  {
LABEL_34:
    KiTimerWaitTest(CurrentPrcb, a1, 0LL);
    goto LABEL_29;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(a1, v26, 0LL);
  else
    _InterlockedAnd((volatile signed __int32 *)a1, 0xFFFFFF7F);
LABEL_29:
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, v42);
  return v12;
}
