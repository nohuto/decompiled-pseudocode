/*
 * XREFs of KeSetCoalescableTimer @ 0x1402ECF90
 * Callers:
 *     ExpTimerResume @ 0x1402F48B8 (ExpTimerResume.c)
 *     CmpArmLazyWriter @ 0x140349918 (CmpArmLazyWriter.c)
 *     PopFxDispatchPluginWorkOnce @ 0x14034CB24 (PopFxDispatchPluginWorkOnce.c)
 *     PopPepArmIdleTimer @ 0x1403A4ADC (PopPepArmIdleTimer.c)
 *     PopFxArmResidentTimer @ 0x1403A4B70 (PopFxArmResidentTimer.c)
 *     CcRescheduleLazyWriteScanOnVolume @ 0x1403A7C1C (CcRescheduleLazyWriteScanOnVolume.c)
 *     CcRescheduleLazyWriteScan @ 0x1403A7D34 (CcRescheduleLazyWriteScan.c)
 *     EtwpRequestFlushTimer @ 0x1403E4890 (EtwpRequestFlushTimer.c)
 *     PopFxEnableWorkOrderWatchdog @ 0x14044FDD0 (PopFxEnableWorkOrderWatchdog.c)
 *     PopFxScheduleDeviceIdleTimer @ 0x14046F768 (PopFxScheduleDeviceIdleTimer.c)
 *     ExpTimerDpcRoutine @ 0x1404970A0 (ExpTimerDpcRoutine.c)
 *     CmpCompleteLazyWrite @ 0x140498018 (CmpCompleteLazyWrite.c)
 *     CcPostPVCMDelayedDelete @ 0x1404B89CC (CcPostPVCMDelayedDelete.c)
 *     CcBcbProfiler @ 0x140505560 (CcBcbProfiler.c)
 *     CcProcessDelayedDeletePVCM @ 0x140579210 (CcProcessDelayedDeletePVCM.c)
 *     IopEnableTimer @ 0x140592BD0 (IopEnableTimer.c)
 *     ExpTimerAdjust @ 0x14064B52C (ExpTimerAdjust.c)
 *     sub_1406F0690 @ 0x1406F0690 (sub_1406F0690.c)
 *     PiDrvDbNodeActionCallback @ 0x140931920 (PiDrvDbNodeActionCallback.c)
 *     ExpWorkQueueManagerThread @ 0x140A17020 (ExpWorkQueueManagerThread.c)
 *     IopErrorLogQueueRequest @ 0x140A44D9C (IopErrorLogQueueRequest.c)
 *     ExpSetWorkerFactoryDeferredCreateTimer @ 0x140A4F838 (ExpSetWorkerFactoryDeferredCreateTimer.c)
 *     CcTelemetryPeriodicTimerCallback @ 0x140A6F330 (CcTelemetryPeriodicTimerCallback.c)
 *     CcSetTelemetryPeriodicTimer @ 0x140ABE7C4 (CcSetTelemetryPeriodicTimer.c)
 *     AnFwProgressIndicatorTransition @ 0x140BA0008 (AnFwProgressIndicatorTransition.c)
 *     AnFwDisplayBackgroundUpdate @ 0x140BA1E44 (AnFwDisplayBackgroundUpdate.c)
 *     AnFwDisplayProgressIndicator @ 0x140BA1FD0 (AnFwDisplayProgressIndicator.c)
 *     AnFwDisplayFade @ 0x140BA36EC (AnFwDisplayFade.c)
 *     CcInitializeBcbProfiler @ 0x140BCDC74 (CcInitializeBcbProfiler.c)
 *     PopInitializeSystemIdleDetection @ 0x140C1F3CC (PopInitializeSystemIdleDetection.c)
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

BOOLEAN __stdcall KeSetCoalescableTimer(
        PKTIMER Timer,
        LARGE_INTEGER DueTime,
        ULONG Period,
        ULONG TolerableDelay,
        PKDPC Dpc)
{
  LARGE_INTEGER v6; // rbx
  __int64 v8; // rcx
  _KDPC *v9; // rsi
  __int64 CurrentIrql; // r13
  struct _KPRCB *CurrentPrcb; // r15
  BOOLEAN v12; // r12
  unsigned int v13; // ebp
  unsigned __int64 Size; // rcx
  volatile signed __int32 *v15; // r14
  unsigned int v16; // ebp
  unsigned __int64 v17; // r11
  unsigned __int16 TimerType; // r8
  __int64 v19; // r12
  struct _LIST_ENTRY *Flink; // rcx
  __int64 v21; // r10
  unsigned __int64 v22; // r13
  struct _LIST_ENTRY *Blink; // rax
  __int64 v24; // r9
  _KPROCESS *Process; // rcx
  unsigned __int16 v26; // dx
  char v27; // cl
  __int64 v28; // rdx
  LONGLONG v29; // rax
  PKDPC v30; // r14
  unsigned __int64 v32; // rcx
  unsigned __int64 v33; // rcx
  unsigned __int64 v34; // r8
  unsigned int v35; // ecx
  volatile signed __int32 *v36; // rbp
  unsigned int v37; // r12d
  __int64 v38; // rcx
  unsigned int v39; // r14d
  unsigned int v40; // r12d
  unsigned int v41; // ebp
  int v42; // eax
  ULONG v43; // ecx
  ULONG v44; // [rsp+30h] [rbp-C8h]
  unsigned __int64 v45; // [rsp+38h] [rbp-C0h]
  __int64 v46; // [rsp+40h] [rbp-B8h]
  UCHAR v47; // [rsp+48h] [rbp-B0h]
  LONG LockNV; // [rsp+50h] [rbp-A8h]
  __int64 v49; // [rsp+68h] [rbp-90h]
  PKTIMER v50; // [rsp+70h] [rbp-88h] BYREF
  PKDPC v51; // [rsp+80h] [rbp-78h]
  __int128 v52; // [rsp+88h] [rbp-70h]
  __int64 v53; // [rsp+98h] [rbp-60h]
  _QWORD v54[2]; // [rsp+A0h] [rbp-58h] BYREF

  v44 = Period;
  v51 = Dpc;
  v53 = 0LL;
  v6 = DueTime;
  v52 = 0LL;
  if ( TolerableDelay )
  {
    v32 = 10000LL * TolerableDelay;
    if ( v32 > 0xFC0000 )
    {
      v33 = v32 - 16515072;
      if ( DueTime.QuadPart >= 0 )
      {
        v34 = DueTime.QuadPart + v33;
        if ( (__int64)(DueTime.QuadPart + v33) < DueTime.QuadPart )
          v34 = 0x7FFFFFFFFFFFFFFFLL;
      }
      else
      {
        v34 = DueTime.QuadPart - v33;
        if ( (__int64)(DueTime.QuadPart - v33) > DueTime.QuadPart )
          v34 = 0x8000000000000000uLL;
      }
      if ( Period )
      {
        v42 = -1;
        v43 = Period + (int)v33 / 10000;
        if ( v43 >= Period )
          v42 = v43;
        v44 = v42;
      }
      LODWORD(v32) = 16515072;
      v6.QuadPart = v34;
    }
    v35 = (unsigned int)v32 >> 18;
    if ( v35 > 0x3F )
      LOBYTE(v35) = 63;
    BYTE1(v52) = 4 * v35;
  }
  v8 = (unsigned int)KiWaitNever;
  v9 = (_KDPC *)(KiWaitNever ^ __ROR8__(
                                 (unsigned __int64)Timer ^ _byteswap_uint64(KiWaitAlways ^ (unsigned __int64)Dpc),
                                 KiWaitNever));
  CurrentIrql = KeGetCurrentIrql();
  v54[0] = CurrentIrql;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags((unsigned __int8)CurrentIrql);
  CurrentPrcb = KeGetCurrentPrcb();
  v50 = 0LL;
  v12 = 0;
  while ( 1 )
  {
    v13 = 0;
    if ( _interlockedbittestandset(&Timer->Header.Lock, 7u) )
    {
      do
      {
        if ( (++v13 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
        {
          HvlNotifyLongSpinWait(v13);
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
    v47 = Timer->Header.Size;
    v45 = Size;
    v46 = KiProcessorBlock[Timer->Processor];
    v15 = (volatile signed __int32 *)(v46 + 16640 + 32 * (((unsigned __int64)Timer->TimerType << 8) + Size + 16));
    v16 = 0;
    while ( _interlockedbittestandset64(v15, 0LL) )
    {
      do
      {
        if ( (++v16 & HvlLongSpinCountMask) == 0
          && (HvlEnlightenments & 0x40) != 0
          && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Size) )
        {
          HvlNotifyLongSpinWait(v16);
        }
        else
        {
          _mm_pause();
        }
      }
      while ( *(_QWORD *)v15 );
    }
    if ( (Timer->Header.Reserved1 & 0x80u) == 0 )
    {
      v17 = v45;
      TimerType = Timer->TimerType;
      v19 = v46;
      Flink = Timer->TimerListEntry.Flink;
      v21 = v46 + 16640;
      v22 = v46 + 16640 + 32 * (((unsigned __int64)TimerType << 8) + v45 + 16);
      Blink = Timer->TimerListEntry.Blink;
      v24 = v46 + 16640 + 32 * (((TimerType ^ 1LL) << 8) + v45 + 16);
      v49 = v24;
      if ( Flink->Blink != &Timer->TimerListEntry || Blink->Flink != &Timer->TimerListEntry )
        __fastfail(3u);
      Blink->Flink = Flink;
      Flink->Blink = Blink;
      if ( Blink != Flink )
        goto LABEL_18;
      *(_DWORD *)(v22 + 28) = -1;
      if ( TimerType )
      {
        v36 = (volatile signed __int32 *)(v21 + 32 * (v45 + 16));
        if ( _interlockedbittestandset64(v36, 0LL) )
        {
          _mm_pause();
        }
        else if ( v36 )
        {
          goto LABEL_53;
        }
        _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
        v39 = 0;
        while ( _interlockedbittestandset64(v36, 0LL) )
        {
          do
          {
            if ( (++v39 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Flink) )
            {
              HvlNotifyLongSpinWait(v39);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v36 );
        }
        v15 = (volatile signed __int32 *)(v46 + 16640 + 32 * (v45 + 272));
        v40 = 0;
        while ( _interlockedbittestandset64(v15, 0LL) )
        {
          do
          {
            if ( (++v40 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Flink) )
            {
              HvlNotifyLongSpinWait(v40);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v15 );
        }
      }
      else
      {
        v36 = (volatile signed __int32 *)(v21 + 32 * (v45 + 272));
        v37 = 0;
        while ( _interlockedbittestandset64(v36, 0LL) )
        {
          do
          {
            if ( (++v37 & HvlLongSpinCountMask) == 0
              && (HvlEnlightenments & 0x40) != 0
              && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(Flink) )
            {
              HvlNotifyLongSpinWait(v37);
            }
            else
            {
              _mm_pause();
            }
          }
          while ( *(_QWORD *)v36 );
        }
      }
      v19 = v46;
      v17 = v45;
      v24 = v49;
LABEL_53:
      if ( *(_DWORD *)(v22 + 28) == -1 && *(_DWORD *)(v24 + 28) == -1 )
      {
        v38 = qword_140FC7528[2 * *(unsigned __int8 *)(v19 + 208)];
        if ( !KiSerializeTimerExpiration )
        {
          _interlockedbittestandreset64((volatile signed __int32 *)((v17 << 6) + v38), *(unsigned __int8 *)(v19 + 209));
          _InterlockedAnd64((volatile signed __int64 *)v36, 0LL);
          goto LABEL_18;
        }
        _interlockedbittestandreset64((volatile signed __int32 *)(v38 + 8 * (v17 >> 6)), v47 & 0x3F);
      }
      _InterlockedAnd64((volatile signed __int64 *)v36, 0LL);
LABEL_18:
      _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
      _InterlockedAnd(&Timer->Header.Lock, 0xBFFFFFFF);
      LOBYTE(CurrentIrql) = v54[0];
      v12 = 1;
      goto LABEL_19;
    }
    _InterlockedAnd64((volatile signed __int64 *)v15, 0LL);
    v8 = _InterlockedExchange64((volatile __int64 *)(v46 + 8LL * (Timer->Header.Reserved1 & 0x3F) + 16640), 0LL);
    if ( v8 )
      break;
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
    v41 = 0;
    while ( (Timer->Header.Reserved1 & 0x80u) != 0 )
    {
      if ( (++v41 & HvlLongSpinCountMask) == 0
        && (HvlEnlightenments & 0x40) != 0
        && (unsigned __int8)KiCheckVpBackingLongSpinWaitHypercall(v8) )
      {
        HvlNotifyLongSpinWait(v41);
      }
      else
      {
        _mm_pause();
      }
    }
  }
  _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFFu);
  v12 = 1;
LABEL_19:
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 && v12 )
  {
    v50 = Timer;
    v54[0] = &v50;
    v54[1] = 8LL;
    EtwTraceKernelEvent((int)v54, 1, 0x40020000u, 3925, 1538);
  }
  v26 = 0;
  if ( !KiGlobalTimerResolutionRequests )
  {
    if ( CurrentPrcb->NestingLevel
      || (Process = KeGetCurrentThread()->ApcState.Process, (Process[1].DirectoryTableBase & 0x100000000000LL) == 0)
      || (Process[3].ActiveGroupsMask.Masks[1] & 0x400000000000000LL) != 0 )
    {
      v26 = 1;
    }
  }
  Timer->TimerType = v26;
  Timer->Period = v44;
  Timer->Dpc = v9;
  v27 = BYTE1(v52);
  LockNV = Timer->Header.LockNV;
  BYTE1(LockNV) = BYTE1(v52);
  if ( v6.HighPart >= 0 )
  {
    BYTE1(LockNV) = BYTE1(v52) | 1;
    v6.QuadPart = MEMORY[0xFFFFF78000000014] - v6.QuadPart;
    if ( v6.HighPart < 0 )
    {
      v27 = BYTE1(v52) | 1;
      goto LABEL_25;
    }
    Timer->Header.LockNV = LockNV;
    Timer->DueTime.QuadPart = 0LL;
    goto LABEL_44;
  }
LABEL_25:
  v28 = 0LL;
  if ( (v27 & 0xFC) != 0 )
    v28 = (unsigned __int8)(v27 & 0xFC) << 16;
  HIBYTE(LockNV) |= 0x40u;
  v29 = MEMORY[0xFFFFF78000000008] - v6.QuadPart;
  Timer->DueTime.QuadPart = MEMORY[0xFFFFF78000000008] - v6.QuadPart;
  BYTE2(LockNV) = (unsigned __int64)(v28 + v29) >> 18;
  Timer->Header.LockNV = LockNV;
  Timer->Header.SignalState = 0;
  v30 = v51;
  if ( !(unsigned __int8)KiInsertTimerTable((_DWORD)CurrentPrcb, (_DWORD)Timer, (_DWORD)v51, BYTE2(LockNV), 0LL) )
  {
LABEL_44:
    KiTimerWaitTest(CurrentPrcb, Timer, 0LL);
    goto LABEL_30;
  }
  if ( (DWORD2(PerfGlobalGroupMask) & 0x20000) != 0 )
    KiTraceSetTimer(Timer, v30, 0LL);
  else
    _InterlockedAnd(&Timer->Header.Lock, 0xFFFFFF7F);
LABEL_30:
  KiExitDispatcher(CurrentPrcb, 0LL, 1u, 0, CurrentIrql);
  return v12;
}
