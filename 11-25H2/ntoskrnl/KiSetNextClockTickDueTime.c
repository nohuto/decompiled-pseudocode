/*
 * XREFs of KiSetNextClockTickDueTime @ 0x140277974
 * Callers:
 *     KiSetClockTimer @ 0x140274458 (KiSetClockTimer.c)
 *     KiSetClockInterval @ 0x14027614C (KiSetClockInterval.c)
 *     ExpUpdateTimerConfigurationWorker @ 0x140277560 (ExpUpdateTimerConfigurationWorker.c)
 *     KeClockInterruptNotify @ 0x140279370 (KeClockInterruptNotify.c)
 *     KiCancelClockTimer @ 0x1403E9910 (KiCancelClockTimer.c)
 *     KiRestoreClockTickRate @ 0x1404C7BF0 (KiRestoreClockTickRate.c)
 *     KePrepareClockTimerForIdle @ 0x1405B52DC (KePrepareClockTimerForIdle.c)
 *     KiResetClockInterval @ 0x1405B66B0 (KiResetClockInterval.c)
 *     KeInitializeClock @ 0x140C4ECE8 (KeInitializeClock.c)
 * Callees:
 *     PoTraceSystemTimerResolutionKernel @ 0x140276EBC (PoTraceSystemTimerResolutionKernel.c)
 *     KiSetClockTickRate @ 0x140276FBC (KiSetClockTickRate.c)
 *     KiGetClockTimerEarliestDeadline @ 0x1402773B0 (KiGetClockTimerEarliestDeadline.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall KiSetNextClockTickDueTime(LARGE_INTEGER a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rdi
  LARGE_INTEGER v4; // r14
  char v5; // r11
  _KCLOCK_TIMER_DEADLINE_TYPE ClockTimerEarliestDeadline; // eax
  char v7; // r11
  unsigned int v8; // ebx
  _KCLOCK_TIMER_DEADLINE_TYPE v9; // r10d
  __int64 TolerableDelay; // rdx
  unsigned __int64 DueTime; // r8
  bool v12; // cf
  unsigned __int64 v13; // rsi
  unsigned __int64 v14; // rdx
  unsigned __int64 Min; // rax
  unsigned int v16; // r9d
  unsigned __int8 v17; // r12
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r13
  char v20; // r8
  unsigned int v21; // eax
  unsigned int TimeIncrement; // r15d
  struct _KPRCB *v23; // rcx
  signed __int32 *SchedulerAssist; // r8
  signed __int32 v26; // eax
  signed __int32 v27; // ett
  LARGE_INTEGER InterruptTimePrecise; // rax
  char v29; // [rsp+30h] [rbp-D0h]
  unsigned __int8 ClockOwner; // [rsp+31h] [rbp-CFh] BYREF
  unsigned __int8 v31; // [rsp+32h] [rbp-CEh] BYREF
  char v32; // [rsp+33h] [rbp-CDh] BYREF
  char v33; // [rsp+34h] [rbp-CCh] BYREF
  char v34; // [rsp+35h] [rbp-CBh]
  unsigned int v35; // [rsp+38h] [rbp-C8h]
  _KCLOCK_TIMER_DEADLINE_TYPE v36; // [rsp+3Ch] [rbp-C4h]
  unsigned int v37; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v38; // [rsp+44h] [rbp-BCh] BYREF
  _KCLOCK_TIMER_DEADLINE_TYPE v39; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v40; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned __int64 v41; // [rsp+50h] [rbp-B0h]
  LARGE_INTEGER v42; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v43; // [rsp+60h] [rbp-A0h] BYREF
  unsigned __int64 v44; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int64 v45; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int64 v46; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+80h] [rbp-80h] BYREF
  char v48[32]; // [rsp+90h] [rbp-70h] BYREF
  LARGE_INTEGER *v49; // [rsp+B0h] [rbp-50h]
  int v50; // [rsp+B8h] [rbp-48h]
  int v51; // [rsp+BCh] [rbp-44h]
  unsigned __int8 *p_ClockOwner; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  unsigned int *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  unsigned int *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  unsigned __int8 *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  char *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  _KCLOCK_TIMER_DEADLINE_TYPE *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  unsigned int *v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  unsigned __int64 *v66; // [rsp+130h] [rbp+30h]
  __int64 v67; // [rsp+138h] [rbp+38h]
  unsigned __int64 *v68; // [rsp+140h] [rbp+40h]
  __int64 v69; // [rsp+148h] [rbp+48h]
  unsigned __int64 *v70; // [rsp+150h] [rbp+50h]
  __int64 v71; // [rsp+158h] [rbp+58h]
  LONGLONG *v72; // [rsp+160h] [rbp+60h]
  __int64 v73; // [rsp+168h] [rbp+68h]
  char *v74; // [rsp+170h] [rbp+70h]
  __int64 v75; // [rsp+178h] [rbp+78h]

  CurrentPrcb = KeGetCurrentPrcb();
  v29 = a2;
  v4 = a1;
  v34 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))KeDisableInterrupts)((LARGE_INTEGER)a1.QuadPart, a2, a3);
  if ( !KiClockTimerReducePreciseTimeQueries )
  {
    InterruptTimePrecise = RtlGetInterruptTimePrecise(&PerformanceCounter);
    v5 = v29;
    v4 = InterruptTimePrecise;
  }
  ClockTimerEarliestDeadline = (unsigned int)KiGetClockTimerEarliestDeadline((__int64)CurrentPrcb, v5);
  v8 = KeMinimumIncrement;
  v9 = ClockTimerEarliestDeadline;
  v36 = ClockTimerEarliestDeadline;
  TolerableDelay = CurrentPrcb->ClockTimerState.ClockTimerEntries[ClockTimerEarliestDeadline].TolerableDelay;
  DueTime = CurrentPrcb->ClockTimerState.ClockTimerEntries[ClockTimerEarliestDeadline].DueTime;
  v12 = (unsigned int)TolerableDelay < KeMinimumIncrement;
  v13 = DueTime + TolerableDelay;
  v14 = DueTime + TolerableDelay;
  if ( !v12 )
    v14 -= (unsigned int)KeMinimumIncrement;
  if ( v14 > v4.QuadPart + (unsigned __int64)(unsigned int)KeMinimumIncrement )
    v8 = ((int)v14 - v4.LowPart + KeMinimumIncrement - 1) / KeMinimumIncrement * KeMinimumIncrement;
  if ( (*(_BYTE *)&KiClockIntervalRequests.0 & 1) != 0 )
  {
    if ( KiClockIntervalRequests.Min == (_RTL_BALANCED_NODE *)1 )
      Min = 0LL;
    else
      Min = (unsigned __int64)KiClockIntervalRequests.Min ^ ((unsigned __int64)&KiClockIntervalRequests.Root + 1);
  }
  else
  {
    Min = (unsigned __int64)KiClockIntervalRequests.Min;
  }
  v17 = 1;
  v35 = *(_DWORD *)(Min + 28);
  v16 = v35;
  v18 = v4.QuadPart + v35;
  v41 = v18;
  v19 = v4.QuadPart + (unsigned int)KeQuantumEndTimerIncrement;
  if ( v18 <= v13 && DueTime <= v18 )
  {
    v8 = v35;
    goto LABEL_28;
  }
  if ( DueTime <= v19 && v19 <= v13 )
  {
    v8 = KeQuantumEndTimerIncrement;
LABEL_28:
    v17 = 0;
  }
  v20 = 0;
  if ( CurrentPrcb->ClockTimerState.OneShotState != KClockTimerOneShotRearmRequired
    && (v8 == CurrentPrcb->ClockTimerState.LastRequestedTimeIncrement || v8 == CurrentPrcb->ClockTimerState.TimeIncrement) )
  {
    TimeIncrement = CurrentPrcb->ClockTimerState.TimeIncrement;
  }
  else
  {
    v21 = KiSetClockTickRate(v8, v17);
    v18 = v41;
    TimeIncrement = v21;
    v16 = v35;
    v20 = 1;
    v9 = v36;
    v7 = v29;
  }
  CurrentPrcb->ClockTimerState.ExpectedWakeReason = v9;
  CurrentPrcb->ClockTimerState.NextTickDueTime = v4.QuadPart + TimeIncrement;
  if ( (unsigned int)dword_140E07080 > 5 )
  {
    v51 = 0;
    v49 = &v42;
    ClockOwner = CurrentPrcb->ClockOwner;
    p_ClockOwner = &ClockOwner;
    v54 = &v37;
    v56 = &v38;
    v58 = &v31;
    v60 = &v32;
    v62 = &v39;
    v64 = &v40;
    v66 = &v43;
    v68 = &v44;
    v70 = &v45;
    v72 = (LONGLONG *)&v46;
    v74 = &v33;
    v43 = v13;
    v32 = v20;
    v40 = v16;
    v44 = v18;
    v42 = v4;
    v50 = 8;
    v53 = 1LL;
    v37 = v8;
    v55 = 4LL;
    v38 = TimeIncrement;
    v57 = 4LL;
    v31 = v17;
    v59 = 1LL;
    v61 = 1LL;
    v39 = v9;
    v63 = 4LL;
    v65 = 4LL;
    v67 = 8LL;
    v69 = 8LL;
    v45 = v19;
    v71 = 8LL;
    v46 = v13 - v4.QuadPart;
    v73 = 8LL;
    v33 = v7;
    v75 = 1LL;
    tlgWriteTransfer_EtwWriteTransfer(&dword_140E07080, byte_1400473F9, 0LL, 0LL, 15, v48);
  }
  if ( v17 )
    PoTraceSystemTimerResolutionKernel(TimeIncrement, 1397707336, 1);
  if ( v34 )
  {
    v23 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v23->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v26 = *SchedulerAssist;
      do
      {
        v27 = v26;
        v26 = _InterlockedCompareExchange(SchedulerAssist, v26 & 0xFFDFFFFF, v26);
      }
      while ( v27 != v26 );
      if ( (v26 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v23);
    }
    _enable();
  }
  return TimeIncrement;
}
