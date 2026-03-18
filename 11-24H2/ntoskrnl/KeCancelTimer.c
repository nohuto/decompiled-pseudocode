/*
 * XREFs of KeCancelTimer @ 0x140333B20
 * Callers:
 *     CmpArmLazyWriter @ 0x14027B0B0 (CmpArmLazyWriter.c)
 *     PfSnDeactivateTrace @ 0x1402C65D4 (PfSnDeactivateTrace.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1402CB768 (CcDeletePrivateVolumeCacheMap.c)
 *     MiModifiedPageWriter @ 0x1402CF990 (MiModifiedPageWriter.c)
 *     MiRebuildLargePagesThread @ 0x14030ACC0 (MiRebuildLargePagesThread.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x1403160B0 (PopFxDisableWorkOrderWatchdog.c)
 *     PopFxProcessWork @ 0x1403172E0 (PopFxProcessWork.c)
 *     PopCompleteIrpWatchdog @ 0x140331C98 (PopCompleteIrpWatchdog.c)
 *     ExpDeleteTimer @ 0x140331F50 (ExpDeleteTimer.c)
 *     ExpSetTimerObject @ 0x1403329C0 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x140333A40 (ExpCancelTimer.c)
 *     MiUnlinkUnusedControlArea @ 0x14036FCB8 (MiUnlinkUnusedControlArea.c)
 *     KiInvokeInterruptServiceRoutine @ 0x1403BFD28 (KiInvokeInterruptServiceRoutine.c)
 *     PopSetWatchdog @ 0x140458BDC (PopSetWatchdog.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14049A8A4 (PopFxUpdateDeviceIdleTimer.c)
 *     PopDisableIrpWatchdog @ 0x14049F5CC (PopDisableIrpWatchdog.c)
 *     PopCoalescingSetActiveState @ 0x1404ADA60 (PopCoalescingSetActiveState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1404AFD1C (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopSetPowerActionWatchdogState @ 0x1404BCE5C (PopSetPowerActionWatchdogState.c)
 *     PopIgnoreBatteryStatusChange @ 0x1404D8DFC (PopIgnoreBatteryStatusChange.c)
 *     CcDeletePartition @ 0x14057C6EC (CcDeletePartition.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14058178C (FsRtlpSyncWithAckTimeout.c)
 *     IopDisableTimer @ 0x140595FF0 (IopDisableTimer.c)
 *     DifKeCancelTimerWrapper @ 0x14062CE10 (DifKeCancelTimerWrapper.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x140708C40 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x140750FA0 (PopCoalescingNotify.c)
 *     TtmiResetInactivityTimer @ 0x14076FA90 (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x140770284 (TtmpResetEvaluationTimer.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1407B698C (ExpTimeZoneCleanupSiloState.c)
 *     ExpPartitionDestroy @ 0x1407BFCAC (ExpPartitionDestroy.c)
 *     CmpShutdownWorkers @ 0x1407D5AC0 (CmpShutdownWorkers.c)
 *     CmThawRegistry @ 0x1407D85E0 (CmThawRegistry.c)
 *     PiDrvDbLoadNode @ 0x140925F40 (PiDrvDbLoadNode.c)
 *     PfSnPowerBoost @ 0x1409526A4 (PfSnPowerBoost.c)
 *     PpmWmiDispatch @ 0x1409CE810 (PpmWmiDispatch.c)
 *     EtwpFreeLoggerContext @ 0x1409D77E0 (EtwpFreeLoggerContext.c)
 *     EtwpLogger @ 0x1409D88E0 (EtwpLogger.c)
 *     ExpRefreshTimeZoneInformation @ 0x1409DC59C (ExpRefreshTimeZoneInformation.c)
 *     HalpCmcWorkerRoutine @ 0x140A4DAA0 (HalpCmcWorkerRoutine.c)
 *     CmSetLazyFlushState @ 0x140AA0860 (CmSetLazyFlushState.c)
 *     PopBatteryWorker @ 0x140AC7D70 (PopBatteryWorker.c)
 *     PopBuildDeviceNotifyList @ 0x140B697C8 (PopBuildDeviceNotifyList.c)
 *     ViPendingDelayCompletion @ 0x140B91E88 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x140B9C898 (VfWdCheckForSettingsChange.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140BB008C (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BB1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpFadeAnimationTimer @ 0x140BB2F50 (AnFwpFadeAnimationTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140BB3CB4 (AnFwpDisableProgressTimer.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140255180 (EtwTraceKernelEvent.c)
 *     HvlNotifyLongSpinWait @ 0x140293260 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x140293290 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

BOOLEAN __stdcall KeCancelTimer(PKTIMER a1)
{
  unsigned __int8 CurrentIrql; // si
  BOOLEAN v3; // r14
  unsigned int v4; // r15d
  unsigned int v5; // ebx
  unsigned __int64 v6; // rax
  __int64 v7; // r13
  volatile signed __int32 *v8; // rbx
  unsigned int v9; // ebp
  unsigned __int64 v10; // r9
  unsigned __int16 TimerType; // r8
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int64 v13; // r15
  struct _LIST_ENTRY *Blink; // rax
  __int64 v15; // r12
  volatile signed __int32 *v17; // r14
  unsigned int v18; // ebp
  __int64 v19; // rcx
  unsigned int v20; // ebx
  unsigned int v21; // ebp
  unsigned int v22; // ebx
  UCHAR Size; // [rsp+38h] [rbp-60h]
  PKTIMER v24; // [rsp+40h] [rbp-58h] BYREF
  __int64 v25; // [rsp+50h] [rbp-48h]
  _QWORD v26[2]; // [rsp+58h] [rbp-40h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2LL);
  v3 = 0;
  v4 = -129;
  v24 = 0LL;
  while ( 1 )
  {
    v5 = 0;
    if ( _interlockedbittestandset(&a1->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v5 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v5);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (a1->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&a1->Header.Lock, 7u) );
    }
    if ( (a1->Header.Reserved1 & 0xC0) == 0 )
      goto LABEL_18;
    Size = a1->Header.Size;
    v6 = (unsigned __int64)a1->TimerType << 8;
    v25 = KiProcessorBlock[a1->Processor];
    v7 = v25 + 16640;
    v8 = (volatile signed __int32 *)(v25 + 16640 + 32 * (v6 + Size + 16LL));
    v9 = 0;
    while ( _interlockedbittestandset64(v8, 0LL) )
    {
      do
      {
        if ( (++v9 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v9);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v8 );
    }
    if ( (a1->Header.Reserved1 & 0x80u) == 0 )
    {
      v10 = Size;
      TimerType = a1->TimerType;
      Flink = a1->TimerListEntry.Flink;
      v13 = 32 * (((unsigned __int64)TimerType << 8) + Size + 16LL);
      Blink = a1->TimerListEntry.Blink;
      v15 = 32 * (((TimerType ^ 1LL) << 8) + Size + 16LL);
      if ( Flink->Blink != &a1->TimerListEntry || Blink->Flink != &a1->TimerListEntry )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      if ( Blink != Flink )
        goto LABEL_17;
      *(_DWORD *)(v13 + v7 + 28) = -1;
      if ( TimerType )
      {
        v17 = (volatile signed __int32 *)(v7 + 32 * (Size + 16LL));
        if ( _interlockedbittestandset64(v17, 0LL) )
        {
          _mm_pause();
        }
        else if ( v17 )
        {
          goto LABEL_30;
        }
        _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
        v20 = 0;
        while ( _interlockedbittestandset64(v17, 0LL) )
        {
          do
          {
            if ( (++v20 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v20);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v17 );
        }
        v8 = (volatile signed __int32 *)(v7 + 32 * (Size + 272LL));
        v21 = 0;
        while ( _interlockedbittestandset64(v8, 0LL) )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v21);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v8 );
        }
      }
      else
      {
        v17 = (volatile signed __int32 *)(v7 + 32 * (Size + 272LL));
        v18 = 0;
        while ( _interlockedbittestandset64(v17, 0LL) )
        {
          do
          {
            if ( (++v18 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v18);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v17 );
        }
      }
      v10 = Size;
LABEL_30:
      if ( *(_DWORD *)(v13 + v7 + 28) == -1 && *(_DWORD *)(v15 + v7 + 28) == -1 )
      {
        v19 = qword_140FC7508[2 * *(unsigned __int8 *)(v25 + 208)];
        if ( !KiSerializeTimerExpiration )
        {
          _interlockedbittestandreset64((volatile signed __int32 *)((v10 << 6) + v19), *(unsigned __int8 *)(v25 + 209));
          _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
          goto LABEL_17;
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v19 + 8 * (v10 >> 6)), Size & 0x3F);
      }
      _InterlockedAnd64((volatile signed __int64 *)v17, 0LL);
LABEL_17:
      _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
      v3 = 1;
      v4 = -1073741953;
      goto LABEL_18;
    }
    _InterlockedAnd64((volatile signed __int64 *)v8, 0LL);
    if ( _InterlockedExchange64((volatile __int64 *)(v7 + 8LL * (a1->Header.Reserved1 & 0x3F)), 0LL) )
      break;
    _InterlockedAnd(&a1->Header.Lock, 0xFFFFFF7F);
    v22 = 0;
    while ( (a1->Header.Reserved1 & 0x80u) != 0 )
    {
      if ( (++v22 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v22);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  v3 = 1;
  v4 = 16777087;
LABEL_18:
  _InterlockedAnd(&a1->Header.Lock, v4);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v3 )
  {
    v24 = a1;
    v26[0] = &v24;
    v26[1] = 8LL;
    EtwTraceKernelEvent((int)v26, 1, 0x40020000u, 3925, 1538);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v3;
}
