/*
 * XREFs of KeSetCoalescableTimer @ 0x140334000
 * Callers:
 *     EtwpRequestFlushTimer @ 0x14024D0B4 (EtwpRequestFlushTimer.c)
 *     CmpArmLazyWriter @ 0x14027B0B0 (CmpArmLazyWriter.c)
 *     PopFxDispatchPluginWorkOnce @ 0x140315E30 (PopFxDispatchPluginWorkOnce.c)
 *     PopPepArmIdleTimer @ 0x1403785FC (PopPepArmIdleTimer.c)
 *     ExpTimerResume @ 0x1403E4104 (ExpTimerResume.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x14043CC1C (CcRescheduleLazyWriteScanOnVolume.c)
 *     CcRescheduleLazyWriteScan @ 0x14043CD34 (CcRescheduleLazyWriteScan.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x1404516A0 (PopFxEnableWorkOrderWatchdog.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x14046E034 (PopFxScheduleDeviceIdleTimer.c)
 *     PopFxArmResidentTimer @ 0x140483290 (PopFxArmResidentTimer.c)
 *     ExpTimerDpcRoutine @ 0x140496BE0 (ExpTimerDpcRoutine.c)
 *     CmpCompleteLazyWrite @ 0x140497950 (CmpCompleteLazyWrite.c)
 *     CcPostPVCMDelayedDelete @ 0x1404B825C (CcPostPVCMDelayedDelete.c)
 *     CcBcbProfiler @ 0x140507CE0 (CcBcbProfiler.c)
 *     CcProcessDelayedDeletePVCM @ 0x14057C520 (CcProcessDelayedDeletePVCM.c)
 *     IopEnableTimer @ 0x140596230 (IopEnableTimer.c)
 *     ExpTimerAdjust @ 0x140657490 (ExpTimerAdjust.c)
 *     sub_1406FC4F0 @ 0x1406FC4F0 (sub_1406FC4F0.c)
 *     PiDrvDbNodeActionCallback @ 0x140925E10 (PiDrvDbNodeActionCallback.c)
 *     ExpWorkQueueManagerThread @ 0x140A21D40 (ExpWorkQueueManagerThread.c)
 *     IopErrorLogQueueRequest @ 0x140A49674 (IopErrorLogQueueRequest.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x140A5327C (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x140A71200 (CcTelemetryPeriodicTimerCallback.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140AC25B4 (CcSetTelemetryPeriodicTimer.c)
 *     AnFwProgressIndicatorTransition @ 0x140BB0008 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BB1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140BB1FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayFade @ 0x140BB36EC (AnFwDisplayFade.c)
 *     CcInitializeBcbProfiler @ 0x140BDEC74 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140C304CC (PopInitializeSystemIdleDetection.c)
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

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  LARGE_INTEGER v6; // rbx
  _KDPC *v8; // rsi
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  BOOLEAN v11; // r12
  unsigned int v12; // ebp
  volatile signed __int32 *v13; // r14
  unsigned int v14; // ebp
  unsigned __int64 v15; // r11
  unsigned __int16 TimerType; // r8
  __int64 v17; // r12
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v19; // r10
  unsigned __int64 v20; // r13
  struct _LIST_ENTRY *Blink; // rax
  __int64 v22; // r9
  _KPROCESS *Process; // rcx
  unsigned __int16 v24; // dx
  char v25; // cl
  __int64 v26; // rdx
  LONGLONG v27; // rax
  PKDPC v28; // r14
  unsigned __int64 v30; // rcx
  unsigned __int64 v31; // rcx
  unsigned __int64 v32; // r8
  unsigned int v33; // ecx
  volatile signed __int32 *v34; // rbp
  unsigned int v35; // r12d
  __int64 v36; // rcx
  unsigned int v37; // r14d
  unsigned int v38; // r12d
  unsigned int v39; // ebp
  int v40; // eax
  ULONG v41; // ecx
  ULONG v42; // [rsp+30h] [rbp-C8h]
  __int64 v43; // [rsp+40h] [rbp-B8h]
  UCHAR Size; // [rsp+48h] [rbp-B0h]
  LONG LockNV; // [rsp+50h] [rbp-A8h]
  __int64 v46; // [rsp+68h] [rbp-90h]
  PKTIMER v47; // [rsp+70h] [rbp-88h] BYREF
  PKDPC v48; // [rsp+80h] [rbp-78h]
  __int128 v49; // [rsp+88h] [rbp-70h]
  __int64 v50; // [rsp+98h] [rbp-60h]
  _QWORD v51[2]; // [rsp+A0h] [rbp-58h] BYREF

  v42 = Period;
  v48 = Dpc;
  v50 = 0LL;
  v6 = DueTime;
  v49 = 0LL;
  if ( TolerableDelay )
  {
    v30 = 10000LL * TolerableDelay;
    if ( v30 > 0xFC0000 )
    {
      v31 = v30 - 16515072;
      if ( DueTime.QuadPart >= 0 )
      {
        v32 = DueTime.QuadPart + v31;
        if ( (__int64)(DueTime.QuadPart + v31) < DueTime.QuadPart )
          v32 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v32 = DueTime.QuadPart - v31;
        if ( (__int64)(DueTime.QuadPart - v31) > DueTime.QuadPart )
          v32 = 0x8000000000000000uLL;
      }
      if ( Period )
      {
        v40 = -1;
        v41 = Period + (int)v31 / 10000;
        if ( v41 >= Period )
          v40 = v41;
        v42 = v40;
      }
      LODWORD(v30) = 16515072;
      v6.QuadPart = v32;
    }
    v33 = (unsigned int)v30 >> 18;
    if ( v33 > 0x3F )
      LOBYTE(v33) = 63;
    BYTE1(v49) = 4 * v33;
  }
  v8 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64(KiWaitAlways ^ (unsigned __int64)Dpc),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  v51[0] = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql, 2LL);
  CurrentPrcb = KeGetCurrentPrcb();
  v47 = 0LL;
  v11 = 0;
  while ( 1 )
  {
    v12 = 0;
    if ( _interlockedbittestandset(&Timer->Header.Lock, 7u) )
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
      while ( (Timer->Header.LockNV & 0x80u) != 0 || _interlockedbittestandset(&Timer->Header.Lock, 7u) );
    }
    if ( (Timer->Header.Reserved1 & 0xC0) == 0 )
      goto LABEL_19;
    Size = Timer->Header.Size;
    v43 = KiProcessorBlock[Timer->Processor];
    v13 = (volatile signed __int32 *)(v43 + 16640 + 32 * (((unsigned __int64)Timer->TimerType << 8) + Size + 16LL));
    v14 = 0;
    while ( _interlockedbittestandset64(v13, 0LL) )
    {
      do
      {
        if ( (++v14 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && KiCheckVpBackingLongSpinWaitHypercall() )
        {
          HvlNotifyLongSpinWait(v14);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v13 );
    }
    if ( (Timer->Header.Reserved1 & 0x80u) == 0 )
    {
      v15 = Size;
      TimerType = Timer->TimerType;
      v17 = v43;
      Flink = Timer->TimerListEntry.Flink;
      v19 = v43 + 16640;
      v20 = v43 + 16640 + 32 * (((unsigned __int64)TimerType << 8) + Size + 16LL);
      Blink = Timer->TimerListEntry.Blink;
      v22 = v43 + 16640 + 32 * (((TimerType ^ 1LL) << 8) + Size + 16LL);
      v46 = v22;
      if ( Flink->Blink != &Timer->TimerListEntry || Blink->Flink != &Timer->TimerListEntry )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      if ( Blink != Flink )
        goto LABEL_18;
      *(_DWORD *)(v20 + 28) = -1;
      if ( TimerType )
      {
        v34 = (volatile signed __int32 *)(v19 + 32 * (Size + 16LL));
        if ( _interlockedbittestandset64(v34, 0LL) )
        {
          _mm_pause();
        }
        else if ( v34 )
        {
          goto LABEL_53;
        }
        _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
        v37 = 0;
        while ( _interlockedbittestandset64(v34, 0LL) )
        {
          do
          {
            if ( (++v37 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v37);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v34 );
        }
        v13 = (volatile signed __int32 *)(v43 + 16640 + 32 * (Size + 272LL));
        v38 = 0;
        while ( _interlockedbittestandset64(v13, 0LL) )
        {
          do
          {
            if ( (++v38 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && KiCheckVpBackingLongSpinWaitHypercall() )
            {
              HvlNotifyLongSpinWait(v38);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v13 );
        }
      }
      else
      {
        v34 = (volatile signed __int32 *)(v19 + 32 * (Size + 272LL));
        v35 = 0;
        while ( _interlockedbittestandset64(v34, 0LL) )
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
          while ( *(_QWORD *)v34 );
        }
      }
      v17 = v43;
      v15 = Size;
      v22 = v46;
LABEL_53:
      if ( *(_DWORD *)(v20 + 28) == -1 && *(_DWORD *)(v22 + 28) == -1 )
      {
        v36 = qword_140FC7508[2 * *(unsigned __int8 *)(v17 + 208)];
        if ( !KiSerializeTimerExpiration )
        {
          _interlockedbittestandreset64((volatile signed __int32 *)((v15 << 6) + v36), *(unsigned __int8 *)(v17 + 209));
          _InterlockedAnd64((volatile signed __int64 *)v34, 0LL);
          goto LABEL_18;
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v36 + 8 * (v15 >> 6)), Size & 0x3F);
      }
      _InterlockedAnd64((volatile signed __int64 *)v34, 0LL);
LABEL_18:
      _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
      _InterlockedAnd(&Timer->Header.Lock, 0xBFFFFFFF);
      LOBYTE(CurrentIrql) = v51[0];
      v11 = 1;
      goto LABEL_19;
    }
    _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
    if ( _InterlockedExchange64((volatile __int64 *)(v43 + 8LL * (Timer->Header.Reserved1 & 0x3F) + 16640), 0LL) )
      break;
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
    v39 = 0;
    while ( (Timer->Header.Reserved1 & 0x80u) != 0 )
    {
      if ( (++v39 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && KiCheckVpBackingLongSpinWaitHypercall() )
      {
        HvlNotifyLongSpinWait(v39);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFFu);
  v11 = 1;
LABEL_19:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v11 )
  {
    v47 = Timer;
    v51[0] = &v47;
    v51[1] = 8LL;
    EtwTraceKernelEvent((int)v51, 1, 0x40020000u, 3925, 1538);
  }
  v24 = 0;
  if ( !KiGlobalTimerResolutionRequests )
  {
    if ( CurrentPrcb->NestingLevel
      || (Process = KeGetCurrentThread()->ApcState.Process, (Process[1].DirectoryTableBase & 0x100000000000LL) == 0)
      || (Process[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) != 0 )
    {
      v24 = 1;
    }
  }
  Timer->TimerType = v24;
  Timer->Period = v42;
  Timer->Dpc = v8;
  v25 = BYTE1(v49);
  LockNV = Timer->Header.LockNV;
  BYTE1(LockNV) = BYTE1(v49);
  if ( v6.HighPart >= 0 )
  {
    BYTE1(LockNV) = BYTE1(v49) | 1;
    v6.QuadPart = MEMORY[0xFFFFF78000000014] - v6.QuadPart;
    if ( v6.HighPart < 0 )
    {
      v25 = BYTE1(v49) | 1;
      goto LABEL_25;
    }
    Timer->Header.LockNV = LockNV;
    Timer->DueTime.QuadPart = 0LL;
    goto LABEL_44;
  }
LABEL_25:
  v26 = 0LL;
  if ( (v25 & 0xFC) != 0 )
    v26 = (unsigned __int8)(v25 & 0xFC) << 16;
  HIBYTE(LockNV) |= 0x40u;
  v27 = MEMORY[0xFFFFF78000000008] - v6.QuadPart;
  Timer->DueTime.QuadPart = MEMORY[0xFFFFF78000000008] - v6.QuadPart;
  BYTE2(LockNV) = (unsigned __int64)(v26 + v27) >> 18;
  Timer->Header.LockNV = LockNV;
  Timer->Header.SignalState = 0;
  v28 = v48;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)Timer, (_DWORD)v48, BYTE2(LockNV), 0LL) )
  {
LABEL_44:
    KiTimerWaitTest(CurrentPrcb, Timer, 0LL);
    goto LABEL_30;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(Timer, v28, 0LL);
  else
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
LABEL_30:
  KiExitDispatcher((unsigned __int64)CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v11;
}
