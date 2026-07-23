/*
 * XREFs of KiUpdateRunTime @ 0x1402AA8E0
 * Callers:
 *     KiUpdateTime @ 0x1402AA2B0 (KiUpdateTime.c)
 *     KeClockInterruptNotify @ 0x140319AC0 (KeClockInterruptNotify.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiComputeThreadQos @ 0x1402A8F40 (KiComputeThreadQos.c)
 *     KeAccumulateTicks @ 0x1402AAEB0 (KeAccumulateTicks.c)
 *     KiCheckPreferredHeteroProcessor @ 0x1402AC3E0 (KiCheckPreferredHeteroProcessor.c)
 *     KiSetDpcRequestFlag @ 0x1402AC800 (KiSetDpcRequestFlag.c)
 *     KiCheckForPendingQosUpdate @ 0x1402AC93C (KiCheckForPendingQosUpdate.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     HalpInterruptSendIpi @ 0x1402C8970 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x1402C9320 (HalpDisableInterrupts.c)
 *     KeDisableInterrupts @ 0x1402CAA10 (KeDisableInterrupts.c)
 *     KiRequestSoftwareInterrupt @ 0x1402DC510 (KiRequestSoftwareInterrupt.c)
 *     RtlGetInterruptTimePrecise @ 0x14031C170 (RtlGetInterruptTimePrecise.c)
 *     KiSetClockTimer @ 0x14043504C (KiSetClockTimer.c)
 *     KiShouldScanSharedReadyQueue @ 0x140454E2C (KiShouldScanSharedReadyQueue.c)
 *     KiShouldScanLocalReadyQueue @ 0x140462854 (KiShouldScanLocalReadyQueue.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

LARGE_INTEGER __fastcall KiUpdateRunTime(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v5; // edi
  unsigned __int8 v6; // si
  char v7; // r15
  char v8; // al
  int v9; // r14d
  unsigned int LastTick; // r12d
  LARGE_INTEGER v11; // rdx
  LARGE_INTEGER InterruptTimePrecise; // rcx
  bool v13; // zf
  __int64 CurrentThread; // rsi
  LARGE_INTEGER result; // rax
  ULONG LowPart; // edi
  LARGE_INTEGER *v17; // r8
  char v18; // r12
  unsigned __int8 v19; // r15
  int v20; // edi
  struct _KPRCB *v21; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int8 CurrentIrql; // r15
  int v24; // r12d
  __int64 v25; // rsi
  unsigned __int64 v26; // rdi
  unsigned __int8 v27; // di
  signed __int32 v28; // eax
  signed __int32 v29; // ett
  char v30; // al
  __int64 v31; // r8
  int v32; // edx
  char v33; // r9
  __int64 v34; // rcx
  __int64 v35; // r8
  __int64 v36; // r9
  __int64 v37; // rdx
  char v38; // [rsp+40h] [rbp-C0h] BYREF
  char v39; // [rsp+41h] [rbp-BFh] BYREF
  char v40; // [rsp+42h] [rbp-BEh] BYREF
  int v41; // [rsp+44h] [rbp-BCh] BYREF
  int v42; // [rsp+48h] [rbp-B8h] BYREF
  int v43; // [rsp+4Ch] [rbp-B4h] BYREF
  LARGE_INTEGER v44; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER v45; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER v46; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v47; // [rsp+68h] [rbp-98h] BYREF
  __int64 v48; // [rsp+70h] [rbp-90h] BYREF
  LONGLONG v49; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+80h] [rbp-80h] BYREF
  int v51; // [rsp+88h] [rbp-78h] BYREF
  __int128 v52; // [rsp+8Ch] [rbp-74h]
  char v53[32]; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER *v54; // [rsp+C0h] [rbp-40h]
  __int64 v55; // [rsp+C8h] [rbp-38h]
  int *v56; // [rsp+D0h] [rbp-30h]
  __int64 v57; // [rsp+D8h] [rbp-28h]
  __int64 *v58; // [rsp+E0h] [rbp-20h]
  __int64 v59; // [rsp+E8h] [rbp-18h]
  __int64 *v60; // [rsp+F0h] [rbp-10h]
  __int64 v61; // [rsp+F8h] [rbp-8h]
  LONGLONG *v62; // [rsp+100h] [rbp+0h]
  __int64 v63; // [rsp+108h] [rbp+8h]
  int *v64; // [rsp+110h] [rbp+10h]
  __int64 v65; // [rsp+118h] [rbp+18h]
  char *v66; // [rsp+120h] [rbp+20h]
  __int64 v67; // [rsp+128h] [rbp+28h]
  char *v68; // [rsp+130h] [rbp+30h]
  __int64 v69; // [rsp+138h] [rbp+38h]
  char v70[32]; // [rsp+140h] [rbp+40h] BYREF
  int *v71; // [rsp+160h] [rbp+60h]
  __int64 v72; // [rsp+168h] [rbp+68h]
  char *v73; // [rsp+170h] [rbp+70h]
  __int64 v74; // [rsp+178h] [rbp+78h]

  CurrentPrcb = KeGetCurrentPrcb();
  v5 = a3;
  v44.QuadPart = 0LL;
  v6 = a2;
  v7 = a1;
  ++CurrentPrcb->ClockInterrupts;
  ++CurrentPrcb->InterruptLastCount;
  v8 = KeDisableInterrupts(a1, a2, a3, a4);
  v9 = MEMORY[0xFFFFF78000000320];
  LastTick = CurrentPrcb->LastTick;
  if ( v8 )
  {
    v21 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v21->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v28 = *SchedulerAssist;
      do
      {
        v29 = v28;
        v28 = _InterlockedCompareExchange(SchedulerAssist, v28 & 0xFFDFFFFF, v28);
      }
      while ( v29 != v28 );
      if ( (v28 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v21);
    }
    _enable();
  }
  KeAccumulateTicks((_DWORD)CurrentPrcb, LastTick, v9, v6, v7, v5);
  v13 = KiClockTimerPerCpuTickScheduling == 0;
  CurrentPrcb->ClockKeepAlive = 1;
  if ( !v13 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
    if ( KiClockTimerReducePreciseTimeQueries )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v44);
      v24 = KeMinimumIncrement;
      v25 = -(__int64)(unsigned int)KeQuantumEndTimerIncrement;
      v45.QuadPart = 0LL;
      if ( !KiClockTimerReducePreciseTimeQueries )
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&v45);
      v26 = InterruptTimePrecise.QuadPart - v25;
      if ( (unsigned int)dword_140E07080 > 5 )
      {
        v46 = InterruptTimePrecise;
        v54 = &v46;
        v55 = 8LL;
        v56 = &v41;
        v41 = 3;
        v58 = &v47;
        v57 = 4LL;
        v47 = v25;
        v48 = -v25;
        v59 = 8LL;
        v60 = &v48;
        v62 = &v49;
        v64 = &v42;
        v66 = &v38;
        v68 = &v39;
        v61 = 8LL;
        v49 = InterruptTimePrecise.QuadPart - v25;
        v63 = 8LL;
        v42 = v24;
        v65 = 4LL;
        v38 = 1;
        v67 = 1LL;
        v39 = 0;
        v69 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140E07080, &word_1400480C6, 0LL, 0LL, 10, v53);
      }
      CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TypeFlags |= 3u;
      CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TolerableDelay = v24;
      CurrentPrcb->ClockTimerState.ClockTimerEntries[3].DueTime = v26;
    }
    else
    {
      KiSetClockTimer((_DWORD)CurrentPrcb, 0, -KeQuantumEndTimerIncrement, KeMinimumIncrement, 3, 1, 0);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  CurrentThread = (__int64)CurrentPrcb->CurrentThread;
  if ( (_KTHREAD *)CurrentThread != CurrentPrcb->IdleThread )
  {
    if ( !KiSchedulerForegroundBoostDecayPolicy && (signed int)(CurrentPrcb->NormalPriorityReadyScanTick - v9) < 0 )
    {
      if ( (unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb)
        && (CurrentPrcb->SharedReadyQueue->ReadySummary & 0x300) != 0
        || (unsigned int)KiShouldScanLocalReadyQueue(v34) && (CurrentPrcb->ReadySummary & 0x300) != 0 )
      {
        KiSetDpcRequestFlag(&CurrentPrcb->14524, 64LL, v35, v36);
        LOBYTE(v37) = 2;
        KiRequestSoftwareInterrupt(CurrentPrcb, v37);
      }
      else
      {
        InterruptTimePrecise.QuadPart = (unsigned int)(v9 + KiNormalPriorityBoostScanLatencyTicks);
        CurrentPrcb->NormalPriorityReadyScanTick = InterruptTimePrecise.LowPart;
      }
    }
    result = *(LARGE_INTEGER *)(CurrentThread + 72);
    if ( result.QuadPart >= *(_QWORD *)(CurrentThread + 32) )
      goto LABEL_14;
    v20 = *(unsigned __int8 *)(CurrentThread + 516);
    result.QuadPart = KiComputeThreadQos(CurrentThread);
    if ( v20 != result.LowPart )
      goto LABEL_14;
    result.QuadPart = KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL);
    if ( result.LowPart )
      goto LABEL_14;
    KiCheckForPendingQosUpdate(CurrentThread);
  }
  PerformanceCounter.QuadPart = 0LL;
  result = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v11.QuadPart = CurrentPrcb->GenerationTarget * KeMaximumIncrement;
  InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000320];
  LowPart = result.LowPart;
  if ( MEMORY[0xFFFFF78000000320] > CurrentPrcb->GenerationTarget )
  {
    if ( KiClockTimerPerCpuTickScheduling )
    {
      v27 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v11.LowPart) = 15;
        ((void (__fastcall *)(_QWORD, _QWORD))KiRaiseIrqlProcessIrqlFlags)(v27, (LARGE_INTEGER)v11.QuadPart);
      }
      CurrentPrcb->ClockTimerState.ClockTimerEntries[4].TypeFlags &= ~1u;
      if ( (unsigned int)dword_140E07080 > 5 )
      {
        v43 = 4;
        v71 = &v43;
        v72 = 4LL;
        v73 = &v40;
        v40 = 0;
        v74 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140E07080, word_14004808A, 0LL, 0LL, 4, v70);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v27);
      result.QuadPart = v27;
      __writecr8(v27);
    }
LABEL_14:
    CurrentPrcb->QuantumEnd = 1;
    if ( CurrentPrcb->NestingLevel )
    {
      CurrentPrcb->InterruptRequest = 1;
    }
    else
    {
      v52 = 0LL;
      if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
      {
        v30 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpDisableInterrupts)(
                (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
                (LARGE_INTEGER)v11.QuadPart,
                KeGetCurrentPrcb());
        v32 = *(_DWORD *)(v31 + 168);
        v33 = v30;
        *(_DWORD *)(v31 + 168) = v32 | 4;
        if ( !v32 )
          __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
        if ( v33 )
          _enable();
      }
      v51 = 5;
      return (LARGE_INTEGER)HalpInterruptSendIpi(&v51, 47LL);
    }
    return result;
  }
  if ( result.QuadPart > (unsigned __int64)v11.QuadPart && KiClockTimerPerCpuTickScheduling )
  {
    v18 = CurrentPrcb->GroupSchedulingOverQuota == 0;
    v19 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v19, 15LL);
    KiSetClockTimer((_DWORD)CurrentPrcb, LowPart, -KeMaximumIncrement, KeMinimumIncrement, 4, v18, 0);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v19);
    __writecr8(v19);
  }
  result = *(LARGE_INTEGER *)(CurrentThread + 104);
  if ( result.QuadPart )
  {
    InterruptTimePrecise.QuadPart = result.QuadPart + CurrentPrcb->ScbOffset;
    do
    {
      result.QuadPart = CurrentPrcb->ScbOffset;
      v11.QuadPart = *(unsigned __int16 *)(InterruptTimePrecise.QuadPart + 112);
      v17 = (LARGE_INTEGER *)(InterruptTimePrecise.QuadPart - result.QuadPart);
      if ( (v11.LowPart & 4) != 0 )
      {
        result = *(LARGE_INTEGER *)(InterruptTimePrecise.QuadPart + 24);
        if ( *(_QWORD *)InterruptTimePrecise.QuadPart >= result.QuadPart )
          goto LABEL_14;
      }
      else if ( (v11.LowPart & 0x20) == 0 )
      {
        result = *(LARGE_INTEGER *)(InterruptTimePrecise.QuadPart + 8);
        if ( *(_QWORD *)InterruptTimePrecise.QuadPart > result.QuadPart )
          goto LABEL_14;
      }
      if ( (v11.LowPart & 0x12) == 0 )
      {
        result = v17[6];
        if ( result.QuadPart <= 0 )
          goto LABEL_14;
        result.QuadPart = *(unsigned __int8 *)(InterruptTimePrecise.QuadPart + 112);
        if ( SLOBYTE(result.QuadPart) < 0 )
        {
          result = *(LARGE_INTEGER *)(InterruptTimePrecise.QuadPart + 16);
          if ( *(_QWORD *)InterruptTimePrecise.QuadPart >= result.QuadPart )
            goto LABEL_14;
        }
      }
      InterruptTimePrecise = *(LARGE_INTEGER *)(InterruptTimePrecise.QuadPart + 416);
    }
    while ( InterruptTimePrecise.QuadPart );
  }
  if ( (signed int)(CurrentPrcb->ReadyScanTick - v9) < 0 )
  {
    result.QuadPart = KiShouldScanSharedReadyQueue(CurrentPrcb);
    if ( !result.LowPart
      || (result.QuadPart = CurrentPrcb->SharedReadyQueue->ReadySummary, (result.LowPart & 0x7FFE) == 0) )
    {
      if ( (CurrentPrcb->ReadySummary & 0x7FFE) == 0 )
        CurrentPrcb->ReadyScanTick = v9 + KiPriorityBoostScanLatencyTicks;
    }
  }
  return result;
}
