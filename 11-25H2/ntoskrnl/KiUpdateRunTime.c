/*
 * XREFs of KiUpdateRunTime @ 0x140273230
 * Callers:
 *     KiUpdateTime @ 0x140272C80 (KiUpdateTime.c)
 *     KeClockInterruptNotify @ 0x140279370 (KeClockInterruptNotify.c)
 * Callees:
 *     KeAccumulateTicks @ 0x140273800 (KeAccumulateTicks.c)
 *     KiSetClockTimer @ 0x140274458 (KiSetClockTimer.c)
 *     KiSetDpcRequestFlag @ 0x140274E30 (KiSetDpcRequestFlag.c)
 *     KiCheckPreferredHeteroProcessor @ 0x140274F90 (KiCheckPreferredHeteroProcessor.c)
 *     KiCheckForPendingQosUpdate @ 0x14027556C (KiCheckForPendingQosUpdate.c)
 *     RtlGetInterruptTimePrecise @ 0x14027B8D0 (RtlGetInterruptTimePrecise.c)
 *     HalpInterruptSendIpi @ 0x140288640 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140288F50 (HalpDisableInterrupts.c)
 *     KeDisableInterrupts @ 0x14028A900 (KeDisableInterrupts.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028BBC0 (KiRemoveSystemWorkPriorityKick.c)
 *     KiRequestSoftwareInterrupt @ 0x1402F3D40 (KiRequestSoftwareInterrupt.c)
 *     KiComputeThreadQos @ 0x140318250 (KiComputeThreadQos.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     KiShouldScanSharedReadyQueue @ 0x140461A78 (KiShouldScanSharedReadyQueue.c)
 *     KiShouldScanLocalReadyQueue @ 0x14046B83C (KiShouldScanLocalReadyQueue.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

LARGE_INTEGER __fastcall KiUpdateRunTime(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // edi
  unsigned __int8 v5; // si
  char v6; // r15
  char v7; // al
  int v8; // r14d
  unsigned int LastTick; // r12d
  struct _KPRCB *v10; // rcx
  signed __int32 *SchedulerAssist; // r8
  LARGE_INTEGER v12; // rdx
  LARGE_INTEGER InterruptTimePrecise; // rcx
  bool v14; // zf
  _KTHREAD *CurrentThread; // rsi
  LARGE_INTEGER result; // rax
  ULONG LowPart; // edi
  LARGE_INTEGER *v18; // r8
  char v19; // r12
  unsigned __int8 v20; // r15
  signed __int32 v21; // eax
  signed __int32 v22; // ett
  unsigned __int8 v23; // di
  int BamQosLevel; // edi
  unsigned __int8 CurrentIrql; // di
  int v26; // r12d
  __int64 v27; // r15
  unsigned __int64 v28; // rsi
  char v29; // al
  __int64 v30; // r8
  int v31; // edx
  char v32; // r9
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  char v36; // [rsp+40h] [rbp-C0h] BYREF
  char v37; // [rsp+41h] [rbp-BFh] BYREF
  char v38; // [rsp+42h] [rbp-BEh] BYREF
  int v39; // [rsp+44h] [rbp-BCh] BYREF
  int v40; // [rsp+48h] [rbp-B8h] BYREF
  int v41; // [rsp+4Ch] [rbp-B4h] BYREF
  LARGE_INTEGER v42; // [rsp+50h] [rbp-B0h] BYREF
  LARGE_INTEGER v43; // [rsp+58h] [rbp-A8h] BYREF
  LARGE_INTEGER v44; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v45; // [rsp+68h] [rbp-98h] BYREF
  __int64 v46; // [rsp+70h] [rbp-90h] BYREF
  LONGLONG v47; // [rsp+78h] [rbp-88h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+80h] [rbp-80h] BYREF
  int v49; // [rsp+88h] [rbp-78h] BYREF
  __int128 v50; // [rsp+8Ch] [rbp-74h]
  char v51[32]; // [rsp+A0h] [rbp-60h] BYREF
  LARGE_INTEGER *v52; // [rsp+C0h] [rbp-40h]
  __int64 v53; // [rsp+C8h] [rbp-38h]
  int *v54; // [rsp+D0h] [rbp-30h]
  __int64 v55; // [rsp+D8h] [rbp-28h]
  __int64 *v56; // [rsp+E0h] [rbp-20h]
  __int64 v57; // [rsp+E8h] [rbp-18h]
  __int64 *v58; // [rsp+F0h] [rbp-10h]
  __int64 v59; // [rsp+F8h] [rbp-8h]
  LONGLONG *v60; // [rsp+100h] [rbp+0h]
  __int64 v61; // [rsp+108h] [rbp+8h]
  int *v62; // [rsp+110h] [rbp+10h]
  __int64 v63; // [rsp+118h] [rbp+18h]
  char *v64; // [rsp+120h] [rbp+20h]
  __int64 v65; // [rsp+128h] [rbp+28h]
  char *v66; // [rsp+130h] [rbp+30h]
  __int64 v67; // [rsp+138h] [rbp+38h]
  char v68[32]; // [rsp+140h] [rbp+40h] BYREF
  int *v69; // [rsp+160h] [rbp+60h]
  __int64 v70; // [rsp+168h] [rbp+68h]
  char *v71; // [rsp+170h] [rbp+70h]
  __int64 v72; // [rsp+178h] [rbp+78h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = a3;
  v42.QuadPart = 0LL;
  v5 = a2;
  v6 = a1;
  ++CurrentPrcb->ClockInterrupts;
  ++CurrentPrcb->InterruptLastCount;
  v7 = KeDisableInterrupts(a1, a2, a3);
  v8 = MEMORY[0xFFFFF78000000320];
  LastTick = CurrentPrcb->LastTick;
  if ( v7 )
  {
    v10 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v10->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v21 = *SchedulerAssist;
      do
      {
        v22 = v21;
        v21 = _InterlockedCompareExchange(SchedulerAssist, v21 & 0xFFDFFFFF, v21);
      }
      while ( v22 != v21 );
      if ( (v21 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick(v10);
    }
    _enable();
  }
  KeAccumulateTicks((_DWORD)CurrentPrcb, LastTick, v8, v5, v6, v4);
  v14 = KiClockTimerPerCpuTickScheduling == 0;
  CurrentPrcb->ClockKeepAlive = 1;
  if ( !v14 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql);
    if ( KiClockTimerReducePreciseTimeQueries )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v42);
      v26 = KeMinimumIncrement;
      v27 = -(__int64)(unsigned int)KeQuantumEndTimerIncrement;
      v43.QuadPart = 0LL;
      if ( !KiClockTimerReducePreciseTimeQueries )
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&v43);
      v28 = InterruptTimePrecise.QuadPart - v27;
      if ( (unsigned int)dword_140E07080 > 5 )
      {
        v44 = InterruptTimePrecise;
        v52 = &v44;
        v53 = 8LL;
        v54 = &v39;
        v39 = 3;
        v56 = &v45;
        v55 = 4LL;
        v45 = v27;
        v46 = -v27;
        v57 = 8LL;
        v58 = &v46;
        v60 = &v47;
        v62 = &v40;
        v64 = &v36;
        v66 = &v37;
        v59 = 8LL;
        v47 = InterruptTimePrecise.QuadPart - v27;
        v61 = 8LL;
        v40 = v26;
        v63 = 4LL;
        v36 = 1;
        v65 = 1LL;
        v37 = 0;
        v67 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140E07080, byte_1400475BB, 0LL, 0LL, 10, v51);
      }
      CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TypeFlags |= 3u;
      CurrentPrcb->ClockTimerState.ClockTimerEntries[3].DueTime = v28;
      CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TolerableDelay = v26;
    }
    else
    {
      KiSetClockTimer((_DWORD)CurrentPrcb, 0, -KeQuantumEndTimerIncrement, KeMinimumIncrement, 3, 1, 0);
    }
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
    __writecr8(CurrentIrql);
  }
  CurrentThread = CurrentPrcb->CurrentThread;
  if ( CurrentThread != CurrentPrcb->IdleThread )
  {
    if ( !KiSchedulerForegroundBoostDecayPolicy && (signed int)(CurrentPrcb->NormalPriorityReadyScanTick - v8) < 0 )
    {
      if ( (unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb)
        && (CurrentPrcb->SharedReadyQueue->ReadySummary & 0x300) != 0
        || (unsigned int)KiShouldScanLocalReadyQueue(CurrentPrcb) && (CurrentPrcb->ReadySummary & 0x300) != 0 )
      {
        KiSetDpcRequestFlag(&CurrentPrcb->14524, 64LL, v33, v34);
        LOBYTE(v35) = 2;
        KiRequestSoftwareInterrupt(CurrentPrcb, v35);
      }
      else
      {
        InterruptTimePrecise.QuadPart = (unsigned int)(v8 + KiNormalPriorityBoostScanLatencyTicks);
        CurrentPrcb->NormalPriorityReadyScanTick = InterruptTimePrecise.LowPart;
      }
    }
    result = (LARGE_INTEGER)CurrentThread->CycleTime;
    if ( result.QuadPart >= CurrentThread->QuantumTarget )
      goto LABEL_16;
    BamQosLevel = CurrentThread->BamQosLevel;
    result.QuadPart = KiComputeThreadQos(CurrentThread);
    if ( BamQosLevel != result.LowPart )
      goto LABEL_16;
    result.QuadPart = KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL);
    if ( result.LowPart )
      goto LABEL_16;
    KiCheckForPendingQosUpdate(CurrentThread);
  }
  PerformanceCounter.QuadPart = 0LL;
  result = RtlGetInterruptTimePrecise(&PerformanceCounter);
  v12.QuadPart = CurrentPrcb->GenerationTarget * KeMaximumIncrement;
  InterruptTimePrecise.QuadPart = MEMORY[0xFFFFF78000000320];
  LowPart = result.LowPart;
  if ( MEMORY[0xFFFFF78000000320] > CurrentPrcb->GenerationTarget )
  {
    if ( KiClockTimerPerCpuTickScheduling )
    {
      v23 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
        KiRaiseIrqlProcessIrqlFlags(v23);
      CurrentPrcb->ClockTimerState.ClockTimerEntries[4].TypeFlags &= ~1u;
      if ( (unsigned int)dword_140E07080 > 5 )
      {
        v41 = 4;
        v69 = &v41;
        v70 = 4LL;
        v71 = &v38;
        v38 = 0;
        v72 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140E07080, word_1400477B2, 0LL, 0LL, 4, v68);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v23);
      result.QuadPart = v23;
      __writecr8(v23);
    }
LABEL_16:
    CurrentPrcb->QuantumEnd = 1;
    if ( CurrentPrcb->NestingLevel )
    {
      CurrentPrcb->InterruptRequest = 1;
    }
    else
    {
      v50 = 0LL;
      if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
      {
        v29 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD))HalpDisableInterrupts)(
                (LARGE_INTEGER)InterruptTimePrecise.QuadPart,
                (LARGE_INTEGER)v12.QuadPart,
                KeGetCurrentPrcb());
        v31 = *(_DWORD *)(v30 + 168);
        v32 = v29;
        *(_DWORD *)(v30 + 168) = v31 | 4;
        if ( !v31 )
          __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
        if ( v32 )
          _enable();
      }
      v49 = 5;
      return (LARGE_INTEGER)HalpInterruptSendIpi(&v49, 47LL);
    }
    return result;
  }
  if ( result.QuadPart > (unsigned __int64)v12.QuadPart && KiClockTimerPerCpuTickScheduling )
  {
    v19 = CurrentPrcb->GroupSchedulingOverQuota == 0;
    v20 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v20);
    KiSetClockTimer((_DWORD)CurrentPrcb, LowPart, -KeMaximumIncrement, KeMinimumIncrement, 4, v19, 0);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v20);
    __writecr8(v20);
  }
  result = (LARGE_INTEGER)CurrentThread->SchedulingGroup;
  if ( result.QuadPart )
  {
    InterruptTimePrecise.QuadPart = result.QuadPart + CurrentPrcb->ScbOffset;
    do
    {
      result.QuadPart = CurrentPrcb->ScbOffset;
      v12.QuadPart = *(unsigned __int16 *)(InterruptTimePrecise.QuadPart + 112);
      v18 = (LARGE_INTEGER *)(InterruptTimePrecise.QuadPart - result.QuadPart);
      if ( (v12.LowPart & 4) != 0 )
      {
        result = *(LARGE_INTEGER *)(InterruptTimePrecise.QuadPart + 24);
        if ( *(_QWORD *)InterruptTimePrecise.QuadPart >= result.QuadPart )
          goto LABEL_16;
      }
      else if ( (v12.LowPart & 0x20) == 0 )
      {
        result = *(LARGE_INTEGER *)(InterruptTimePrecise.QuadPart + 8);
        if ( *(_QWORD *)InterruptTimePrecise.QuadPart > result.QuadPart )
          goto LABEL_16;
      }
      if ( (v12.LowPart & 0x12) == 0 )
      {
        result = v18[6];
        if ( result.QuadPart <= 0 )
          goto LABEL_16;
        result.QuadPart = *(unsigned __int8 *)(InterruptTimePrecise.QuadPart + 112);
        if ( SLOBYTE(result.QuadPart) < 0 )
        {
          result = *(LARGE_INTEGER *)(InterruptTimePrecise.QuadPart + 16);
          if ( *(_QWORD *)InterruptTimePrecise.QuadPart >= result.QuadPart )
            goto LABEL_16;
        }
      }
      InterruptTimePrecise = *(LARGE_INTEGER *)(InterruptTimePrecise.QuadPart + 416);
    }
    while ( InterruptTimePrecise.QuadPart );
  }
  if ( (signed int)(CurrentPrcb->ReadyScanTick - v8) < 0 )
  {
    result.QuadPart = KiShouldScanSharedReadyQueue(CurrentPrcb);
    if ( !result.LowPart
      || (result.QuadPart = CurrentPrcb->SharedReadyQueue->ReadySummary, (result.LowPart & 0x7FFE) == 0) )
    {
      if ( (CurrentPrcb->ReadySummary & 0x7FFE) == 0 )
      {
        result.QuadPart = (unsigned int)(v8 + 75);
        CurrentPrcb->ReadyScanTick = result.LowPart;
      }
    }
  }
  return result;
}
