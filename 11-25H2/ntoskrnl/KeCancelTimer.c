/*
 * XREFs of KeCancelTimer @ 0x1402ECAA0
 * Callers:
 *     KiInvokeInterruptServiceRoutine @ 0x140206C50 (KiInvokeInterruptServiceRoutine.c)
 *     ExpDeleteTimer @ 0x1402EAEC0 (ExpDeleteTimer.c)
 *     ExpSetTimerObject @ 0x1402EB930 (ExpSetTimerObject.c)
 *     ExpCancelTimer @ 0x1402EC9C0 (ExpCancelTimer.c)
 *     CmpArmLazyWriter @ 0x140349918 (CmpArmLazyWriter.c)
 *     PopFxProcessWork @ 0x14034B940 (PopFxProcessWork.c)
 *     PopFxDisableWorkOrderWatchdog @ 0x14034CDA4 (PopFxDisableWorkOrderWatchdog.c)
 *     PfSnDeactivateTrace @ 0x14036D7E0 (PfSnDeactivateTrace.c)
 *     CcDeletePrivateVolumeCacheMap @ 0x1403A8B18 (CcDeletePrivateVolumeCacheMap.c)
 *     MiModifiedPageWriter @ 0x1403BFEE0 (MiModifiedPageWriter.c)
 *     MiUnlinkUnusedControlArea @ 0x140419C98 (MiUnlinkUnusedControlArea.c)
 *     PopSetWatchdog @ 0x140457F50 (PopSetWatchdog.c)
 *     MiRebuildLargePagesThread @ 0x140475C40 (MiRebuildLargePagesThread.c)
 *     PopCompleteIrpWatchdog @ 0x14047E7E4 (PopCompleteIrpWatchdog.c)
 *     PopFxUpdateDeviceIdleTimer @ 0x14049A5F4 (PopFxUpdateDeviceIdleTimer.c)
 *     PopDisableIrpWatchdog @ 0x1404A05F4 (PopDisableIrpWatchdog.c)
 *     PopCoalescingSetActiveState @ 0x1404AC1B8 (PopCoalescingSetActiveState.c)
 *     PpmDisableHighPerfRequestDeferredExpiration @ 0x1404AEC3C (PpmDisableHighPerfRequestDeferredExpiration.c)
 *     PopSetPowerActionWatchdogState @ 0x1404BDE2C (PopSetPowerActionWatchdogState.c)
 *     PopIgnoreBatteryStatusChange @ 0x1404D9E4C (PopIgnoreBatteryStatusChange.c)
 *     CcDeletePartition @ 0x1405793DC (CcDeletePartition.c)
 *     FsRtlpSyncWithAckTimeout @ 0x14057DFDC (FsRtlpSyncWithAckTimeout.c)
 *     IopDisableTimer @ 0x140592990 (IopDisableTimer.c)
 *     DifKeCancelTimerWrapper @ 0x140620E50 (DifKeCancelTimerWrapper.c)
 *     DbgkpWerDeferredWriteRoutine @ 0x1406FCD60 (DbgkpWerDeferredWriteRoutine.c)
 *     PopCoalescingNotify @ 0x140744ED0 (PopCoalescingNotify.c)
 *     TtmiResetInactivityTimer @ 0x1407600D0 (TtmiResetInactivityTimer.c)
 *     TtmpResetEvaluationTimer @ 0x1407608C4 (TtmpResetEvaluationTimer.c)
 *     ExpTimeZoneCleanupSiloState @ 0x1407A74EC (ExpTimeZoneCleanupSiloState.c)
 *     ExpPartitionDestroy @ 0x1407B04DC (ExpPartitionDestroy.c)
 *     CmpShutdownWorkers @ 0x1407C6370 (CmpShutdownWorkers.c)
 *     CmThawRegistry @ 0x1407C8E40 (CmThawRegistry.c)
 *     PfSnPowerBoost @ 0x1408EC6A4 (PfSnPowerBoost.c)
 *     PiDrvDbLoadNode @ 0x140931A50 (PiDrvDbLoadNode.c)
 *     EtwpFreeLoggerContext @ 0x14098EB6C (EtwpFreeLoggerContext.c)
 *     EtwpLogger @ 0x14098FA20 (EtwpLogger.c)
 *     ExpRefreshTimeZoneInformation @ 0x140993940 (ExpRefreshTimeZoneInformation.c)
 *     PpmWmiDispatch @ 0x1409B64C0 (PpmWmiDispatch.c)
 *     HalpCmcWorkerRoutine @ 0x140A4B1B0 (HalpCmcWorkerRoutine.c)
 *     CmSetLazyFlushState @ 0x140A9AAA0 (CmSetLazyFlushState.c)
 *     PopBatteryWorker @ 0x140AC2900 (PopBatteryWorker.c)
 *     PopBuildDeviceNotifyList @ 0x140B59988 (PopBuildDeviceNotifyList.c)
 *     ViPendingDelayCompletion @ 0x140B81EA8 (ViPendingDelayCompletion.c)
 *     VfWdCheckForSettingsChange @ 0x140B8C8B8 (VfWdCheckForSettingsChange.c)
 *     AnFwDisableBackgroundUpdateTimer @ 0x140BA008C (AnFwDisableBackgroundUpdateTimer.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BA1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwpFadeAnimationTimer @ 0x140BA2F50 (AnFwpFadeAnimationTimer.c)
 *     AnFwpDisableProgressTimer @ 0x140BA3CB4 (AnFwpDisableProgressTimer.c)
 * Callees:
 *     EtwTraceKernelEvent @ 0x140254220 (EtwTraceKernelEvent.c)
 *     HvlNotifyLongSpinWait @ 0x14032DED0 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x14032DF00 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

BOOLEAN __stdcall KeCancelTimer(PKTIMER a1)
{
  unsigned __int8 CurrentIrql; // si
  BOOLEAN v3; // r14
  unsigned int v4; // r15d
  unsigned __int64 v5; // rcx
  unsigned int v6; // ebx
  unsigned __int64 v7; // rax
  __int64 v8; // r13
  volatile signed __int32 *v9; // rbx
  unsigned int v10; // ebp
  unsigned __int64 v11; // r9
  unsigned __int16 TimerType; // r8
  struct _LIST_ENTRY *Flink; // rcx
  unsigned __int64 v14; // r15
  struct _LIST_ENTRY *Blink; // rax
  __int64 v16; // r12
  volatile signed __int32 *v18; // r14
  unsigned int v19; // ebp
  __int64 v20; // rcx
  unsigned int v21; // ebx
  unsigned int v22; // ebp
  unsigned int v23; // ebx
  UCHAR Size; // [rsp+38h] [rbp-60h]
  PKTIMER v25; // [rsp+40h] [rbp-58h] BYREF
  __int64 v26; // [rsp+50h] [rbp-48h]
  _QWORD v27[2]; // [rsp+58h] [rbp-40h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
  v3 = 0;
  v4 = -129;
  v25 = 0LL;
LABEL_4:
  v5 = 0x140000000uLL;
  while ( 1 )
  {
    v6 = 0;
    if ( _interlockedbittestandset(&a1->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v6 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v5) )
        {
          HvlNotifyLongSpinWait(v6);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (a1->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&a1->Header.Lock, 7u) );
      v5 = 0x140000000uLL;
    }
    if ( (a1->Header.Reserved1 & 0xC0) == 0 )
      goto LABEL_19;
    Size = a1->Header.Size;
    v7 = (unsigned __int64)a1->TimerType << 8;
    v26 = KiProcessorBlock[a1->Processor];
    v8 = v26 + 16640;
    v9 = (volatile signed __int32 *)(v26 + 16640 + 32 * (v7 + Size + 16LL));
    v10 = 0;
    while ( _interlockedbittestandset64(v9, 0LL) )
    {
      do
      {
        if ( (++v10 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v5) )
        {
          HvlNotifyLongSpinWait(v10);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v9 );
    }
    if ( (a1->Header.Reserved1 & 0x80u) == 0 )
    {
      v11 = Size;
      TimerType = a1->TimerType;
      Flink = a1->TimerListEntry.Flink;
      v14 = 32 * (((unsigned __int64)TimerType << 8) + Size + 16LL);
      Blink = a1->TimerListEntry.Blink;
      v16 = 32 * (((TimerType ^ 1LL) << 8) + Size + 16LL);
      if ( Flink->Blink != &a1->TimerListEntry || Blink->Flink != &a1->TimerListEntry )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      if ( Blink != Flink )
        goto LABEL_18;
      *(_DWORD *)(v14 + v8 + 28) = -1;
      if ( TimerType )
      {
        v18 = (volatile signed __int32 *)(v8 + 32 * (Size + 16LL));
        if ( _interlockedbittestandset64(v18, 0LL) )
        {
          _mm_pause();
        }
        else if ( v18 )
        {
          goto LABEL_31;
        }
        _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
        v21 = 0;
        while ( _interlockedbittestandset64(v18, 0LL) )
        {
          do
          {
            if ( (++v21 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Flink) )
            {
              HvlNotifyLongSpinWait(v21);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v18 );
        }
        v9 = (volatile signed __int32 *)(v8 + 32 * (Size + 272LL));
        v22 = 0;
        while ( _interlockedbittestandset64(v9, 0LL) )
        {
          do
          {
            if ( (++v22 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Flink) )
            {
              HvlNotifyLongSpinWait(v22);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v9 );
        }
      }
      else
      {
        v18 = (volatile signed __int32 *)(v8 + 32 * (Size + 272LL));
        v19 = 0;
        while ( _interlockedbittestandset64(v18, 0LL) )
        {
          do
          {
            if ( (++v19 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Flink) )
            {
              HvlNotifyLongSpinWait(v19);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v18 );
        }
      }
      v11 = Size;
LABEL_31:
      if ( *(_DWORD *)(v14 + v8 + 28) == -1 && *(_DWORD *)(v16 + v8 + 28) == -1 )
      {
        v20 = qword_140FC7528[2 * *(unsigned __int8 *)(v26 + 208)];
        if ( !KiSerializeTimerExpiration )
        {
          _interlockedbittestandreset64((volatile signed __int32 *)((v11 << 6) + v20), *(unsigned __int8 *)(v26 + 209));
          _InterlockedAnd64((volatile signed __int64 *)v18, 0LL);
          goto LABEL_18;
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v20 + 8 * (v11 >> 6)), Size & 0x3F);
      }
      _InterlockedAnd64((volatile signed __int64 *)v18, 0LL);
LABEL_18:
      _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
      v3 = 1;
      v4 = -1073741953;
      goto LABEL_19;
    }
    _InterlockedAnd64((volatile signed __int64 *)v9, 0LL);
    if ( _InterlockedExchange64((volatile __int64 *)(v8 + 8LL * (a1->Header.Reserved1 & 0x3F)), 0LL) )
      break;
    _InterlockedAnd(&a1->Header.Lock, 0xFFFFFF7F);
    v5 = 0x140000000uLL;
    v23 = 0;
    if ( (a1->Header.Reserved1 & 0x80u) != 0 )
    {
      do
      {
        if ( (++v23 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v5) )
        {
          HvlNotifyLongSpinWait(v23);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( (a1->Header.Reserved1 & 0x80u) != 0 );
      goto LABEL_4;
    }
  }
  v3 = 1;
  v4 = 16777087;
LABEL_19:
  _InterlockedAnd(&a1->Header.Lock, v4);
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v3 )
  {
    v25 = a1;
    v27[0] = &v25;
    v27[1] = 8LL;
    EtwTraceKernelEvent((int)v27, 1, 0x40020000u, 3925, 1538);
  }
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  __writecr8(CurrentIrql);
  return v3;
}
