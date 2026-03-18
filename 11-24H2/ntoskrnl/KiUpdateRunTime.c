/*
 * XREFs of KiUpdateRunTime @ 0x14029BDF0
 * Callers:
 *     KiUpdateTime @ 0x14029B7C0 (KiUpdateTime.c)
 *     KeClockInterruptNotify @ 0x14033A5E0 (KeClockInterruptNotify.c)
 * Callees:
 *     KiRemoveSystemWorkPriorityKick @ 0x14025E408 (KiRemoveSystemWorkPriorityKick.c)
 *     KiRequestSoftwareInterrupt @ 0x140297BA0 (KiRequestSoftwareInterrupt.c)
 *     KiComputeThreadQos @ 0x14029A450 (KiComputeThreadQos.c)
 *     KeAccumulateTicks @ 0x14029C3C0 (KeAccumulateTicks.c)
 *     KiCheckPreferredHeteroProcessor @ 0x14029D8F0 (KiCheckPreferredHeteroProcessor.c)
 *     KiSetDpcRequestFlag @ 0x14029DD10 (KiSetDpcRequestFlag.c)
 *     KiCheckForPendingQosUpdate @ 0x14029DE4C (KiCheckForPendingQosUpdate.c)
 *     KiSetClockTimer @ 0x14029F85C (KiSetClockTimer.c)
 *     HalpInterruptSendIpi @ 0x14031FDE0 (HalpInterruptSendIpi.c)
 *     HalpDisableInterrupts @ 0x140320790 (HalpDisableInterrupts.c)
 *     KeDisableInterrupts @ 0x140321E80 (KeDisableInterrupts.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     RtlGetInterruptTimePrecise @ 0x14033CC90 (RtlGetInterruptTimePrecise.c)
 *     KiShouldScanSharedReadyQueue @ 0x14045FF4C (KiShouldScanSharedReadyQueue.c)
 *     KiShouldScanLocalReadyQueue @ 0x140469A40 (KiShouldScanLocalReadyQueue.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 */

unsigned __int64 __fastcall KiUpdateRunTime(__int64 a1, __int64 a2, __int64 a3)
{
  struct _KPRCB *CurrentPrcb; // rbx
  int v4; // edi
  unsigned __int8 v5; // si
  char v6; // r15
  char v7; // al
  int v8; // r14d
  unsigned int LastTick; // r12d
  unsigned __int64 v10; // rdx
  __int64 InterruptTimePrecise; // rcx
  bool v12; // zf
  __int64 CurrentThread; // rsi
  unsigned __int64 result; // rax
  int v15; // edi
  unsigned __int64 v16; // r8
  char v17; // r12
  unsigned __int8 v18; // r15
  int v19; // edi
  struct _KPRCB *v20; // rcx
  signed __int32 *SchedulerAssist; // r8
  unsigned __int8 CurrentIrql; // r15
  int v23; // r12d
  __int64 v24; // rsi
  unsigned __int64 v25; // rdi
  unsigned __int8 v26; // di
  signed __int32 v27; // eax
  signed __int32 v28; // ett
  char v29; // al
  __int64 v30; // r8
  int v31; // edx
  char v32; // r9
  __int64 v33; // rcx
  __int64 v34; // r8
  __int64 v35; // r9
  __int64 v36; // rdx
  char v37; // [rsp+40h] [rbp-C0h] BYREF
  char v38; // [rsp+41h] [rbp-BFh] BYREF
  char v39; // [rsp+42h] [rbp-BEh] BYREF
  int v40; // [rsp+44h] [rbp-BCh] BYREF
  int v41; // [rsp+48h] [rbp-B8h] BYREF
  int v42; // [rsp+4Ch] [rbp-B4h] BYREF
  __int64 v43; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v44; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v46; // [rsp+68h] [rbp-98h] BYREF
  __int64 v47; // [rsp+70h] [rbp-90h] BYREF
  __int64 v48; // [rsp+78h] [rbp-88h] BYREF
  __int64 v49; // [rsp+80h] [rbp-80h] BYREF
  int v50; // [rsp+88h] [rbp-78h] BYREF
  __int128 v51; // [rsp+8Ch] [rbp-74h]
  char v52[32]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 *v53; // [rsp+C0h] [rbp-40h]
  __int64 v54; // [rsp+C8h] [rbp-38h]
  int *v55; // [rsp+D0h] [rbp-30h]
  __int64 v56; // [rsp+D8h] [rbp-28h]
  __int64 *v57; // [rsp+E0h] [rbp-20h]
  __int64 v58; // [rsp+E8h] [rbp-18h]
  __int64 *v59; // [rsp+F0h] [rbp-10h]
  __int64 v60; // [rsp+F8h] [rbp-8h]
  __int64 *v61; // [rsp+100h] [rbp+0h]
  __int64 v62; // [rsp+108h] [rbp+8h]
  int *v63; // [rsp+110h] [rbp+10h]
  __int64 v64; // [rsp+118h] [rbp+18h]
  char *v65; // [rsp+120h] [rbp+20h]
  __int64 v66; // [rsp+128h] [rbp+28h]
  char *v67; // [rsp+130h] [rbp+30h]
  __int64 v68; // [rsp+138h] [rbp+38h]
  char v69[32]; // [rsp+140h] [rbp+40h] BYREF
  int *v70; // [rsp+160h] [rbp+60h]
  __int64 v71; // [rsp+168h] [rbp+68h]
  char *v72; // [rsp+170h] [rbp+70h]
  __int64 v73; // [rsp+178h] [rbp+78h]

  CurrentPrcb = KeGetCurrentPrcb();
  v4 = a3;
  v43 = 0LL;
  v5 = a2;
  v6 = a1;
  ++CurrentPrcb->ClockInterrupts;
  ++CurrentPrcb->InterruptLastCount;
  v7 = KeDisableInterrupts(a1, a2, a3);
  v8 = MEMORY[0xFFFFF78000000320];
  LastTick = CurrentPrcb->LastTick;
  if ( v7 )
  {
    v20 = KeGetCurrentPrcb();
    SchedulerAssist = (signed __int32 *)v20->SchedulerAssist;
    if ( SchedulerAssist )
    {
      _m_prefetchw(SchedulerAssist);
      v27 = *SchedulerAssist;
      do
      {
        v28 = v27;
        v27 = _InterlockedCompareExchange(SchedulerAssist, v27 & 0xFFDFFFFF, v27);
      }
      while ( v28 != v27 );
      if ( (v27 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v20);
    }
    _enable();
  }
  KeAccumulateTicks((_DWORD)CurrentPrcb, LastTick, v8, v5, v6, v4);
  v12 = KiClockTimerPerCpuTickScheduling == 0;
  CurrentPrcb->ClockKeepAlive = 1;
  if ( !v12 )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15LL);
    if ( KiClockTimerReducePreciseTimeQueries )
    {
      InterruptTimePrecise = RtlGetInterruptTimePrecise(&v43);
      v23 = KeMinimumIncrement;
      v24 = -(__int64)(unsigned int)KeQuantumEndTimerIncrement;
      v44 = 0LL;
      if ( !KiClockTimerReducePreciseTimeQueries )
        InterruptTimePrecise = RtlGetInterruptTimePrecise(&v44);
      v25 = InterruptTimePrecise - v24;
      if ( (unsigned int)dword_140E070B8 > 5 )
      {
        v45 = InterruptTimePrecise;
        v53 = &v45;
        v54 = 8LL;
        v55 = &v40;
        v40 = 3;
        v57 = &v46;
        v56 = 4LL;
        v46 = v24;
        v47 = -v24;
        v58 = 8LL;
        v59 = &v47;
        v61 = &v48;
        v63 = &v41;
        v65 = &v37;
        v67 = &v38;
        v60 = 8LL;
        v48 = InterruptTimePrecise - v24;
        v62 = 8LL;
        v41 = v23;
        v64 = 4LL;
        v37 = 1;
        v66 = 1LL;
        v38 = 0;
        v68 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140E070B8, word_140047B72, 0LL, 0LL, 10, v52);
      }
      CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TypeFlags |= 3u;
      CurrentPrcb->ClockTimerState.ClockTimerEntries[3].TolerableDelay = v23;
      CurrentPrcb->ClockTimerState.ClockTimerEntries[3].DueTime = v25;
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
    if ( !KiSchedulerForegroundBoostDecayPolicy && (signed int)(CurrentPrcb->NormalPriorityReadyScanTick - v8) < 0 )
    {
      if ( (unsigned int)KiShouldScanSharedReadyQueue(CurrentPrcb)
        && (CurrentPrcb->SharedReadyQueue->ReadySummary & 0x300) != 0
        || (unsigned int)KiShouldScanLocalReadyQueue(v33) && (CurrentPrcb->ReadySummary & 0x300) != 0 )
      {
        KiSetDpcRequestFlag(&CurrentPrcb->14524, 64LL, v34, v35);
        LOBYTE(v36) = 2;
        KiRequestSoftwareInterrupt(CurrentPrcb, v36);
      }
      else
      {
        InterruptTimePrecise = (unsigned int)(v8 + KiNormalPriorityBoostScanLatencyTicks);
        CurrentPrcb->NormalPriorityReadyScanTick = InterruptTimePrecise;
      }
    }
    result = *(_QWORD *)(CurrentThread + 72);
    if ( result >= *(_QWORD *)(CurrentThread + 32) )
      goto LABEL_14;
    v19 = *(unsigned __int8 *)(CurrentThread + 516);
    result = KiComputeThreadQos(CurrentThread);
    if ( v19 != (_DWORD)result )
      goto LABEL_14;
    result = KiCheckPreferredHeteroProcessor(CurrentThread, CurrentPrcb, 1LL);
    if ( (_DWORD)result )
      goto LABEL_14;
    KiCheckForPendingQosUpdate(CurrentThread);
  }
  v49 = 0LL;
  result = RtlGetInterruptTimePrecise(&v49);
  v10 = CurrentPrcb->GenerationTarget * (unsigned int)KeMaximumIncrement;
  InterruptTimePrecise = MEMORY[0xFFFFF78000000320];
  v15 = result;
  if ( MEMORY[0xFFFFF78000000320] > CurrentPrcb->GenerationTarget )
  {
    if ( KiClockTimerPerCpuTickScheduling )
    {
      v26 = KeGetCurrentIrql();
      __writecr8(0xFuLL);
      if ( KiIrqlFlags )
      {
        LOBYTE(v10) = 15;
        KiRaiseIrqlProcessIrqlFlags(v26, v10);
      }
      CurrentPrcb->ClockTimerState.ClockTimerEntries[4].TypeFlags &= ~1u;
      if ( (unsigned int)dword_140E070B8 > 5 )
      {
        v42 = 4;
        v70 = &v42;
        v71 = 4LL;
        v72 = &v39;
        v39 = 0;
        v73 = 1LL;
        tlgWriteTransfer_EtwWriteTransfer(&dword_140E070B8, word_140047BFA, 0LL, 0LL, 4, v69);
      }
      if ( KiIrqlFlags )
        KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v26);
      result = v26;
      __writecr8(v26);
    }
LABEL_14:
    CurrentPrcb->QuantumEnd = 1;
    if ( CurrentPrcb->NestingLevel )
    {
      CurrentPrcb->InterruptRequest = 1;
    }
    else
    {
      v51 = 0LL;
      if ( KiAmdTprLowerInterruptDelayDynamicWorkaround )
      {
        v29 = HalpDisableInterrupts(InterruptTimePrecise, v10, KeGetCurrentPrcb());
        v31 = *(_DWORD *)(v30 + 168);
        v32 = v29;
        *(_DWORD *)(v30 + 168) = v31 | 4;
        if ( !v31 )
          __writemsr(0xC0010015, __readmsr(0xC0010015) | 0x100000000LL);
        if ( v32 )
          _enable();
      }
      v50 = 5;
      return HalpInterruptSendIpi(&v50, 47LL);
    }
    return result;
  }
  if ( result > v10 && KiClockTimerPerCpuTickScheduling )
  {
    v17 = CurrentPrcb->GroupSchedulingOverQuota == 0;
    v18 = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(v18, 15LL);
    KiSetClockTimer((_DWORD)CurrentPrcb, v15, -KeMaximumIncrement, KeMinimumIncrement, 4, v17, 0);
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v18);
    __writecr8(v18);
  }
  result = *(_QWORD *)(CurrentThread + 104);
  if ( result )
  {
    InterruptTimePrecise = result + CurrentPrcb->ScbOffset;
    do
    {
      result = CurrentPrcb->ScbOffset;
      v10 = *(unsigned __int16 *)(InterruptTimePrecise + 112);
      v16 = InterruptTimePrecise - result;
      if ( (v10 & 4) != 0 )
      {
        result = *(_QWORD *)(InterruptTimePrecise + 24);
        if ( *(_QWORD *)InterruptTimePrecise >= result )
          goto LABEL_14;
      }
      else if ( (v10 & 0x20) == 0 )
      {
        result = *(_QWORD *)(InterruptTimePrecise + 8);
        if ( *(_QWORD *)InterruptTimePrecise > result )
          goto LABEL_14;
      }
      if ( (v10 & 0x12) == 0 )
      {
        result = *(_QWORD *)(v16 + 48);
        if ( (__int64)result <= 0 )
          goto LABEL_14;
        result = *(unsigned __int8 *)(InterruptTimePrecise + 112);
        if ( (result & 0x80u) != 0LL )
        {
          result = *(_QWORD *)(InterruptTimePrecise + 16);
          if ( *(_QWORD *)InterruptTimePrecise >= result )
            goto LABEL_14;
        }
      }
      InterruptTimePrecise = *(_QWORD *)(InterruptTimePrecise + 416);
    }
    while ( InterruptTimePrecise );
  }
  if ( (signed int)(CurrentPrcb->ReadyScanTick - v8) < 0 )
  {
    result = KiShouldScanSharedReadyQueue(CurrentPrcb);
    if ( !(_DWORD)result || (result = CurrentPrcb->SharedReadyQueue->ReadySummary, (result & 0x7FFE) == 0) )
    {
      if ( (CurrentPrcb->ReadySummary & 0x7FFE) == 0 )
      {
        result = (unsigned int)(v8 + 75);
        CurrentPrcb->ReadyScanTick = result;
      }
    }
  }
  return result;
}
