/*
 * XREFs of KeQueryTotalCycleTimeThread @ 0x1403E03C0
 * Callers:
 *     NtQueryInformationThread @ 0x1409910D0 (NtQueryInformationThread.c)
 * Callees:
 *     KeAddProcessorAffinityEx @ 0x140287740 (KeAddProcessorAffinityEx.c)
 *     KiRemoveSystemWorkPriorityKick @ 0x14028EA18 (KiRemoveSystemWorkPriorityKick.c)
 *     KiIpiSendRequest @ 0x1402A24D0 (KiIpiSendRequest.c)
 *     KiAcquirePrcbLocksForIsolationUnit @ 0x1402A2D90 (KiAcquirePrcbLocksForIsolationUnit.c)
 *     HvlNotifyLongSpinWait @ 0x1402A2E60 (HvlNotifyLongSpinWait.c)
 *     KiCheckVpBackingLongSpinWaitHypercall @ 0x1402A2E90 (KiCheckVpBackingLongSpinWaitHypercall.c)
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KxWaitForLockChainValid @ 0x1402CA8D0 (KxWaitForLockChainValid.c)
 *     KiAcquireThreadLockRaiseToDpc @ 0x1402D1150 (KiAcquireThreadLockRaiseToDpc.c)
 *     KiReleasePrcbLocksForIsolationUnit @ 0x140318810 (KiReleasePrcbLocksForIsolationUnit.c)
 *     KxWaitForLockOwnerShip @ 0x140357C10 (KxWaitForLockOwnerShip.c)
 *     HalRequestSoftwareInterrupt @ 0x140369040 (HalRequestSoftwareInterrupt.c)
 *     KiEndCounterAccumulation @ 0x14036AA0C (KiEndCounterAccumulation.c)
 *     KiUpdateThreadHgsFeedback @ 0x14036CDAC (KiUpdateThreadHgsFeedback.c)
 *     KeQueryPerformanceCounter @ 0x14036DEF0 (KeQueryPerformanceCounter.c)
 *     KeFlushProcessWriteBuffers @ 0x14039E2AC (KeFlushProcessWriteBuffers.c)
 *     KiIpiStallOnPacketTargetsPrcb @ 0x14039E420 (KiIpiStallOnPacketTargetsPrcb.c)
 *     KiReleaseThreadStateLock @ 0x1403A0FC0 (KiReleaseThreadStateLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

ULONG64 __stdcall KeQueryTotalCycleTimeThread(PKTHREAD Thread, PULONG64 CycleTimeStamp)
{
  struct _KPRCB *CurrentPrcb; // rbx
  LARGE_INTEGER v4; // r11
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  LARGE_INTEGER PerformanceCounter; // rax
  unsigned __int8 QpcToTscIncrementShift; // cl
  unsigned __int64 QpcToTscIncrement; // rax
  LARGE_INTEGER v10; // rdx
  unsigned __int64 StartCyclesQpc; // r9
  unsigned __int64 v12; // r10
  LARGE_INTEGER v13; // rdx
  int v14; // r9d
  _KSCHEDULING_GROUP *volatile SchedulingGroup; // rax
  char *v16; // rcx
  char *v17; // rdx
  int v18; // r8d
  volatile unsigned __int64 v19; // r12
  unsigned __int64 v20; // rcx
  signed __int8 Size; // di
  unsigned int SelectedPercent; // r14d
  _KPROCESS *Process; // rax
  _QWORD *ExSaPageArray; // r8
  unsigned __int64 PerProcessorCycleTimes_low; // r9
  unsigned int v26; // ecx
  int v27; // edx
  __int64 v28; // rcx
  __int64 v29; // rdx
  char *v30; // rdx
  _DWORD *SparePtr; // r9
  _PROC_PERF_DOMAIN *Domain; // rax
  _PROC_PERF_CONSTRAINT *Constraint; // rdx
  unsigned int LatestFrequencyPercent; // edx
  unsigned int GuaranteedPercent; // eax
  unsigned int v36; // r8d
  unsigned __int16 *FrequencyBucketThresholds; // rcx
  unsigned __int8 ArchitecturalEfficiencyClass; // r10
  __int64 v39; // rdx
  unsigned int v40; // ecx
  unsigned int v41; // ecx
  int BamQosLevel; // ecx
  __int64 v43; // rdx
  __int64 v44; // rdx
  _BYTE *SchedulerAssist; // rax
  unsigned int CurrentRunTime; // edx
  __int64 v47; // rcx
  _KSCHEDULING_GROUP *volatile v48; // rcx
  _QWORD *v49; // rax
  LARGE_INTEGER v50; // r11
  unsigned __int64 v51; // r15
  unsigned __int64 v52; // rdi
  unsigned __int64 v53; // rsi
  LARGE_INTEGER v54; // rax
  unsigned __int8 v55; // cl
  LARGE_INTEGER v56; // rdx
  unsigned __int64 v57; // r9
  unsigned __int64 v58; // r10
  LARGE_INTEGER v59; // rdx
  int v60; // edx
  _PROC_PERF_DOMAIN *v61; // rcx
  _PROC_PERF_CONSTRAINT *v62; // rax
  unsigned int v63; // ecx
  unsigned __int16 *v64; // rdx
  __int64 v65; // rax
  _BYTE *v66; // rax
  _QWORD *v67; // r9
  __int64 v68; // r11
  unsigned int *v69; // r8
  _QWORD *v70; // r9
  __int64 v71; // r10
  __int64 v72; // rdi
  bool v73; // zf
  struct _KPRCB *v74; // rcx
  signed __int32 *v75; // r8
  signed __int32 v76; // eax
  signed __int32 v77; // ett
  int v79; // r15d
  __int64 v80; // rdi
  volatile __int64 *v81; // rsi
  unsigned __int64 v82; // rcx
  char v83; // al
  __int64 v84; // r14
  unsigned int v85; // ebx
  __int64 v86; // r14
  __int64 v87; // rax
  __int64 v88; // rax
  _QWORD *v89; // rdx
  unsigned int v90; // ebx
  __int64 v91; // rax
  unsigned __int8 v92; // dl
  unsigned __int64 *v93; // r8
  int v94; // edx
  unsigned __int64 v95; // r9
  __int64 NextProcessor; // r14
  unsigned int v97; // ebx
  unsigned __int64 *v98; // r8
  int v99; // edx
  unsigned __int64 v100; // r9
  volatile unsigned int v101; // ebx
  __int64 CurrentIrql; // rcx
  __int64 v103; // rcx
  volatile unsigned __int64 CycleTime; // r14
  unsigned __int64 v105; // rcx
  unsigned __int64 v106; // rbx
  unsigned __int8 v107[8]; // [rsp+30h] [rbp-D0h] BYREF
  unsigned __int64 v108; // [rsp+38h] [rbp-C8h] BYREF
  __int128 v109; // [rsp+40h] [rbp-C0h] BYREF
  int v110; // [rsp+50h] [rbp-B0h]
  __int64 v111; // [rsp+58h] [rbp-A8h]
  PULONG64 v112; // [rsp+60h] [rbp-A0h]
  unsigned __int64 v113; // [rsp+68h] [rbp-98h]
  unsigned __int64 v114; // [rsp+70h] [rbp-90h]
  unsigned __int64 v115; // [rsp+78h] [rbp-88h]
  unsigned __int64 v116; // [rsp+80h] [rbp-80h]
  unsigned __int64 v117; // [rsp+88h] [rbp-78h]
  unsigned __int64 v118; // [rsp+90h] [rbp-70h]
  unsigned __int64 v119; // [rsp+98h] [rbp-68h] BYREF
  unsigned __int64 v120; // [rsp+A0h] [rbp-60h] BYREF
  __int128 v121; // [rsp+A8h] [rbp-58h] BYREF
  __int64 v122; // [rsp+B8h] [rbp-48h]
  __int64 (__fastcall *v123)(); // [rsp+C0h] [rbp-40h]
  __int64 v124; // [rsp+D0h] [rbp-30h] BYREF
  char v125[264]; // [rsp+D8h] [rbp-28h] BYREF

  v112 = CycleTimeStamp;
  memset_0(&v124, 0, 0x108uLL);
  v107[0] = 0;
  v108 = 0LL;
  v109 = 0LL;
  if ( Thread == KeGetCurrentThread() )
  {
    _disable();
    CurrentPrcb = KeGetCurrentPrcb();
    v4.QuadPart = 0LL;
    v5 = 0LL;
    v6 = 0LL;
    CurrentPrcb->NestingLevel = 1;
    if ( !CurrentPrcb->CycleAccumulationInitialized )
      goto LABEL_29;
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    QpcToTscIncrementShift = CurrentPrcb->QpcToTscIncrementShift;
    v4 = PerformanceCounter;
    QpcToTscIncrement = CurrentPrcb->QpcToTscIncrement;
    v10 = v4;
    v117 = 0LL;
    if ( QpcToTscIncrementShift )
      v10.QuadPart = v4.QuadPart << QpcToTscIncrementShift;
    v117 = ((unsigned __int64)v10.QuadPart * (unsigned __int128)QpcToTscIncrement) >> 64;
    v6 = v117 - CurrentPrcb->StartCycles;
    v5 = v117;
    if ( !KiTickAccumulationFromAccountingPeriods )
      goto LABEL_29;
    StartCyclesQpc = CurrentPrcb->StartCyclesQpc;
    if ( !MEMORY[0xFFFFF78000000300] )
      goto LABEL_29;
    v113 = 0LL;
    v114 = 0LL;
    if ( MEMORY[0xFFFFF78000000369] )
    {
      v12 = ((StartCyclesQpc << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v113 = v12;
      v13.QuadPart = v4.QuadPart << MEMORY[0xFFFFF78000000369];
    }
    else
    {
      v12 = (StartCyclesQpc * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
      v113 = v12;
      v13 = v4;
    }
    v114 = ((unsigned __int64)v13.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
    v14 = ((unsigned __int64)((v114 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
        - ((unsigned __int64)((v12 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
    if ( !v14 )
      goto LABEL_29;
    if ( (Thread->MiscFlags & 0x400) != 0
      || (((unsigned __int64)v4.QuadPart >> 4) & 0x1F) >= (unsigned int)__popcnt(Thread->ModeHistory) )
    {
      CurrentPrcb->KernelTime += v14;
      Thread->SchedulerApc.SpareLong0 += v14;
    }
    else
    {
      CurrentPrcb->UserTime += v14;
      Thread->UserTime += v14;
    }
    if ( Thread == CurrentPrcb->IdleThread )
      goto LABEL_29;
    if ( Thread->Priority < 16 )
    {
      if ( Thread->SchedulingGroup )
      {
        SchedulingGroup = Thread->SchedulingGroup;
        if ( SchedulingGroup )
        {
          v16 = (char *)SchedulingGroup + CurrentPrcb->ScbOffset;
          if ( Thread->Priority >= 16 )
            goto LABEL_29;
          if ( (*((_DWORD *)&Thread->0 + 1) & 0x200) == 0 )
          {
            v17 = (char *)SchedulingGroup + CurrentPrcb->ScbOffset;
            while ( (v17[112] & 2) == 0 )
            {
              v17 = (char *)*((_QWORD *)v17 + 52);
              if ( !v17 )
              {
                do
                {
                  v18 = *((_DWORD *)v16 + 31);
                  if ( v18 )
                    break;
                  v16 = (char *)*((_QWORD *)v16 + 52);
                }
                while ( v16 );
                if ( v18 )
                  goto LABEL_28;
                goto LABEL_27;
              }
            }
            goto LABEL_28;
          }
        }
      }
    }
LABEL_27:
    if ( Thread->Priority < 8 )
LABEL_28:
      CurrentPrcb->AvailableTime += v14;
LABEL_29:
    CurrentPrcb->StartCyclesQpc = v4.QuadPart;
    CurrentPrcb->StartCycles = v5;
    v19 = v6 + Thread->CycleTime;
    Thread->CycleTime = v19;
    if ( Thread != CurrentPrcb->IdleThread )
    {
      v20 = ((v6 * CurrentPrcb->CpuCycleScalingFactor) >> 16) + Thread->CurrentRunTime;
      if ( v20 > 0xFFFFFFFF )
        LODWORD(v20) = -1;
      Thread->CurrentRunTime = v20;
    }
    Size = Thread->Header.Size;
    SelectedPercent = 100;
    if ( (Size & 0xBE) != 0 )
    {
      if ( Size < 0 )
      {
        Process = Thread->Process;
        ExSaPageArray = CurrentPrcb->ExSaPageArray;
        v110 = 0;
        PerProcessorCycleTimes_low = LODWORD(Process->PerProcessorCycleTimes);
        LODWORD(Process) = (LODWORD(Process->PerProcessorCycleTimes) >> 13) & 0x3FFFF;
        _BitScanReverse(&v26, (unsigned int)Process);
        v27 = 1 << v26;
        v28 = v26 - 2;
        v110 = v28;
        v29 = *(_QWORD *)(ExSaPageArray[v28] + 8LL * ((unsigned int)Process ^ v27) + 8);
        *(_QWORD *)(v29 + 8 * ((PerProcessorCycleTimes_low >> 4) & 0x1FF)) += v6;
        Size &= ~0x80u;
      }
      if ( (Size & 0x10) != 0 )
      {
        v30 = (char *)CurrentPrcb + 8 * (unsigned __int8)Thread->Tag;
        *((_QWORD *)v30 + 4305) += v6;
        Size &= ~0x10u;
      }
      if ( (Size & 0x20) != 0 )
      {
        SparePtr = Thread[1].WaitBlock[2].SparePtr;
        if ( SparePtr )
        {
          Domain = CurrentPrcb->PowerState.CheckContext.Domain;
          Constraint = CurrentPrcb->PowerState.CheckContext.Constraint;
          if ( Domain && Constraint )
          {
            if ( Constraint->Selection.Autonomous )
            {
              LatestFrequencyPercent = Constraint->LatestFrequencyPercent;
            }
            else
            {
              LatestFrequencyPercent = Constraint->Selection.SelectedPercent;
              GuaranteedPercent = Domain->GuaranteedPercent;
              if ( LatestFrequencyPercent >= GuaranteedPercent )
                LatestFrequencyPercent = GuaranteedPercent;
            }
          }
          else
          {
            LatestFrequencyPercent = 100;
          }
          v36 = 0;
          FrequencyBucketThresholds = CurrentPrcb->PowerState.FrequencyBucketThresholds;
          do
          {
            if ( LatestFrequencyPercent <= *FrequencyBucketThresholds )
              break;
            ++v36;
            ++FrequencyBucketThresholds;
          }
          while ( v36 < 3 );
          ArchitecturalEfficiencyClass = CurrentPrcb->PowerState.ArchitecturalEfficiencyClass;
          v39 = ArchitecturalEfficiencyClass != 0 ? 8 : 0;
          *(_QWORD *)((char *)&SparePtr[4 * v36] + v39) += v6;
          v40 = SparePtr[48];
          if ( KiTimelineBitmapTime <= v40 )
          {
            v41 = v40 - KiTimelineBitmapTime;
            if ( v41 < 0x20 )
              SparePtr[49] |= 1 << v41;
          }
          else
          {
            LODWORD(v111) = KiTimelineBitmapTime;
            if ( KiTimelineBitmapTime - v40 >= 0x20 )
              HIDWORD(v111) = 1;
            else
              HIDWORD(v111) = (SparePtr[49] << (KiTimelineBitmapTime - v40)) | 1;
            *((_QWORD *)SparePtr + 24) = v111;
          }
          if ( !KiEfficiencyClassSystem )
          {
            BamQosLevel = Thread->BamQosLevel;
            if ( ((BamQosLevel - 2) & 0xFFFFFFFB) == 0 || (_BYTE)BamQosLevel == 5 )
              *(_QWORD *)&SparePtr[4 * v36 + 2] += v6;
          }
          if ( Thread[1].WaitBlock[1].Object )
          {
            v43 = ArchitecturalEfficiencyClass != 0 ? 8 : 0;
            *(_QWORD *)((char *)&SparePtr[4 * v36 + 32] + v43) += v6;
            v44 = 64LL;
            if ( ArchitecturalEfficiencyClass )
              v44 = 72LL;
            _InterlockedAdd64(
              (volatile signed __int64 *)(v44 + *((_QWORD *)Thread[1].WaitBlock[1].Object + 209) + 16LL * v36),
              v6);
          }
        }
        Size &= ~0x20u;
      }
      if ( (Size & 0x40) != 0 )
      {
        SchedulerAssist = Thread->SchedulerAssist;
        if ( SchedulerAssist )
          SchedulerAssist[64] = 0;
      }
      if ( KiHgsPlusEnabled )
        KiUpdateThreadHgsFeedback(CurrentPrcb, (__int64)Thread, v6, 0);
      if ( CurrentPrcb->CyclesByThreadType
        && Thread->Process != (_KPROCESS *)&KiInitialProcess
        && Thread->BamQosLevel < 7u )
      {
        CurrentRunTime = Thread->CurrentRunTime;
        if ( CurrentRunTime <= Thread->ExpectedRunTime )
          CurrentRunTime = Thread->ExpectedRunTime;
        v47 = Thread->HardwareFeedbackClass
            + KiHgsPlusConfiguration
            * ((CurrentRunTime >= KiDynamicHeteroCpuPolicyExpectedCycles) + 2 * (unsigned int)Thread->BamQosLevel);
        CurrentPrcb->CyclesByThreadType[v47] += v6;
      }
      if ( (Size & 0xBE) != 0 )
      {
        v48 = Thread->SchedulingGroup;
        if ( v48 )
        {
          v49 = (_QWORD *)((char *)&v48->Policy + CurrentPrcb->ScbOffset);
          do
          {
            *v49 += v6;
            v49 = (_QWORD *)v49[52];
          }
          while ( v49 );
        }
        if ( (Thread->Header.Size & 8) != 0
          && Thread->Process != (_KPROCESS *)&KiInitialProcess
          && (CurrentPrcb->SchedulerSubNode->Affinity.Mask & Thread->Affinity->Bitmap[CurrentPrcb->SchedulerSubNode->Affinity.Group]) != CurrentPrcb->SchedulerSubNode->Affinity.Mask )
        {
          CurrentPrcb->AffinitizedCycles += v6;
        }
        if ( Thread->WaitBlock[0].SparePtr )
          KiEndCounterAccumulation((__int64)Thread);
      }
    }
    if ( v112 )
      *v112 = v5;
    v50.QuadPart = 0LL;
    v51 = 0LL;
    v52 = 0LL;
    v53 = 0LL;
    if ( CurrentPrcb->CycleAccumulationInitialized )
    {
      v54 = KeQueryPerformanceCounter(0LL);
      v55 = CurrentPrcb->QpcToTscIncrementShift;
      v118 = 0LL;
      v50 = v54;
      v56 = v54;
      if ( v55 )
        v56.QuadPart = v54.QuadPart << v55;
      v57 = CurrentPrcb->StartCyclesQpc;
      v52 = v54.QuadPart - v57;
      v118 = ((unsigned __int64)v56.QuadPart * (unsigned __int128)CurrentPrcb->QpcToTscIncrement) >> 64;
      v53 = v118 - CurrentPrcb->StartCycles;
      v51 = v118;
      if ( KiTickAccumulationFromAccountingPeriods && MEMORY[0xFFFFF78000000300] )
      {
        v115 = 0LL;
        v116 = 0LL;
        if ( MEMORY[0xFFFFF78000000369] )
        {
          v58 = ((v57 << MEMORY[0xFFFFF78000000369]) * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
          v115 = v58;
          v59.QuadPart = v54.QuadPart << MEMORY[0xFFFFF78000000369];
        }
        else
        {
          v58 = (v57 * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
          v115 = v58;
          v59 = v54;
        }
        v116 = ((unsigned __int64)v59.QuadPart * (unsigned __int128)MEMORY[0xFFFFF78000000360]) >> 64;
        v60 = ((unsigned __int64)((v116 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount)
            - ((unsigned __int64)((v58 * (unsigned __int128)(unsigned __int64)KiMaximumIncrementReciprocal) >> 64) >> KiMaximumIncrementShiftCount);
        if ( v60 )
        {
          CurrentPrcb->KernelTime += v60;
          CurrentPrcb->InterruptTime += v60;
        }
      }
    }
    CurrentPrcb->CycleTimeQpc += v52;
    CurrentPrcb->CycleTime += v53;
    if ( (Thread->Header.Size & 0x20) != 0 )
    {
      v61 = CurrentPrcb->PowerState.CheckContext.Domain;
      v62 = CurrentPrcb->PowerState.CheckContext.Constraint;
      if ( v61 && v62 )
      {
        if ( v62->Selection.Autonomous )
        {
          SelectedPercent = v62->LatestFrequencyPercent;
        }
        else
        {
          SelectedPercent = v62->Selection.SelectedPercent;
          if ( SelectedPercent >= v61->GuaranteedPercent )
            SelectedPercent = v61->GuaranteedPercent;
        }
      }
      v63 = 0;
      v64 = CurrentPrcb->PowerState.FrequencyBucketThresholds;
      do
      {
        if ( SelectedPercent <= *v64 )
          break;
        ++v63;
        ++v64;
      }
      while ( v63 < 3 );
      v65 = (CurrentPrcb->PowerState.ArchitecturalEfficiencyClass != 0) + 4336LL + 2LL * v63;
      *((_QWORD *)&CurrentPrcb->MxCsr + v65) += v53;
    }
    if ( (Thread->Header.Size & 0x40) != 0 )
    {
      v66 = Thread->SchedulerAssist;
      if ( v66 )
        v66[64] = 1;
    }
    CurrentPrcb->StartCyclesQpc = v50.QuadPart;
    CurrentPrcb->StartCycles = v51;
    if ( (Thread->Header.Size & 2) != 0 )
    {
      v67 = Thread->WaitBlock[0].SparePtr;
      v68 = v67[4];
      if ( v68 )
      {
        if ( KiHwCountersCount )
        {
          v69 = (unsigned int *)&KiHwCounters;
          v70 = v67 + 6;
          v71 = (unsigned int)KiHwCountersCount;
          v72 = 1LL;
          do
          {
            if ( (v68 & v72) != 0 )
              *v70 = __readpmc(*v69);
            v72 *= 2LL;
            v70 += 3;
            ++v69;
            --v71;
          }
          while ( v71 );
        }
      }
    }
    v73 = CurrentPrcb->InterruptRequest == 0;
    CurrentPrcb->NestingLevel = 0;
    if ( !v73 )
    {
      CurrentPrcb->InterruptRequest = 0;
      HalRequestSoftwareInterrupt(2);
    }
    v74 = KeGetCurrentPrcb();
    v75 = (signed __int32 *)v74->SchedulerAssist;
    if ( v75 )
    {
      _m_prefetchw(v75);
      v76 = *v75;
      do
      {
        v77 = v76;
        v76 = _InterlockedCompareExchange(v75, v76 & 0xFFDFFFFF, v76);
      }
      while ( v77 != v76 );
      if ( (v76 & 0x200000) != 0 )
        KiRemoveSystemWorkPriorityKick((__int64)v74);
    }
    _enable();
    return v19;
  }
  KiAcquireThreadLockRaiseToDpc((__int64)Thread, v107);
  while ( 1 )
  {
    while ( 1 )
    {
      while ( 1 )
      {
        while ( 1 )
        {
          v79 = Thread->WaitBlockFill6[68];
          v80 = 0LL;
          v81 = 0LL;
          v82 = Thread->WaitBlockFill6[68];
          if ( v79 != 3 )
            break;
          NextProcessor = Thread->NextProcessor;
          if ( (int)NextProcessor >= 0 )
          {
            v80 = KiProcessorBlock[NextProcessor];
            v97 = 0;
            v108 = v80 & 0xFFFFFFFFFFFFFFFEuLL;
            while ( _interlockedbittestandset64((volatile signed __int32 *)(v80 + 48), 0LL) )
            {
              do
              {
                if ( (++v97 & HvlLongSpinCountMask) == 0
                  && (HvlEnlightenments & 0x40) != 0
                  && KiCheckVpBackingLongSpinWaitHypercall() )
                {
                  HvlNotifyLongSpinWait(v97);
                }
                else
                {
                  _mm_pause();
                }
              }
              while ( *(_QWORD *)(v80 + 48) );
            }
            if ( Thread == *(PKTHREAD *)(v80 + 16) )
              goto LABEL_205;
            if ( Thread->WaitBlockFill6[68] == 3 && Thread->NextProcessor == (_DWORD)NextProcessor )
              __fastfail(0x1Eu);
            v98 = 0LL;
            v99 = 0;
            v100 = v108 & 0xFFFFFFFFFFFFFFFEuLL;
            v120 = v108 & 0xFFFFFFFFFFFFFFFEuLL;
            if ( (v108 & 1) == 0 )
            {
              v98 = &v120;
              v99 = 1;
              do
LABEL_201:
                _InterlockedAnd64((volatile signed __int64 *)(v98[--v99] + 48), 0LL);
              while ( v99 );
              goto LABEL_202;
            }
            if ( (v108 & 1) == 1 )
            {
              v98 = (unsigned __int64 *)(*(_QWORD *)(v100 + 36440) + 8LL);
              v99 = **(unsigned __int8 **)(v100 + 36440);
            }
            if ( v99 )
              goto LABEL_201;
LABEL_202:
            v108 = 0LL;
          }
        }
        v82 = (unsigned int)(v82 - 1);
        if ( !(_DWORD)v82 )
          break;
        v82 = (unsigned int)(v82 - 1);
        if ( (_DWORD)v82 )
        {
          if ( (_DWORD)v82 != 3 )
            goto LABEL_205;
          v83 = Thread->WaitRegister.Flags & 7;
          if ( v83 == 1 || (unsigned __int8)(v83 - 3) <= 3u )
            goto LABEL_205;
          LOBYTE(v79) = 2;
        }
        v84 = Thread->NextProcessor;
        if ( (int)v84 >= 0 )
        {
          v80 = KiProcessorBlock[v84];
          v85 = 0;
          v108 = v80 & 0xFFFFFFFFFFFFFFFEuLL;
          while ( _interlockedbittestandset64((volatile signed __int32 *)(v80 + 48), 0LL) )
          {
            do
            {
              if ( (++v85 & HvlLongSpinCountMask) == 0
                && (HvlEnlightenments & 0x40) != 0
                && KiCheckVpBackingLongSpinWaitHypercall() )
              {
                HvlNotifyLongSpinWait(v85);
              }
              else
              {
                _mm_pause();
              }
            }
            while ( *(_QWORD *)(v80 + 48) );
          }
          if ( Thread == *(PKTHREAD *)(v80 + 8) )
            goto LABEL_205;
          if ( Thread->WaitBlockFill6[68] == 2 && Thread->NextProcessor == (_DWORD)v84 )
            __fastfail(0x4Au);
          KiReleasePrcbLocksForIsolationUnit((__int64 *)&v108);
        }
      }
      v86 = Thread->NextProcessor;
      if ( (int)v86 < 0 )
        break;
      v80 = KiProcessorBlock[v86];
      KiAcquirePrcbLocksForIsolationUnit(v80, 0LL, &v108);
      if ( Thread->WaitBlockFill6[68] == 1 && Thread->NextProcessor == (_DWORD)v86 )
        goto LABEL_205;
      v93 = 0LL;
      v94 = 0;
      v95 = v108 & 0xFFFFFFFFFFFFFFFEuLL;
      v119 = v108 & 0xFFFFFFFFFFFFFFFEuLL;
      if ( (v108 & 1) == 0 )
      {
        v93 = &v119;
        v94 = 1;
        do
LABEL_180:
          _InterlockedAnd64((volatile signed __int64 *)(v93[--v94] + 48), 0LL);
        while ( v94 );
        goto LABEL_181;
      }
      if ( (v108 & 1) == 1 )
      {
        v93 = (unsigned __int64 *)(*(_QWORD *)(v95 + 36440) + 8LL);
        v94 = **(unsigned __int8 **)(v95 + 36440);
      }
      if ( v94 )
        goto LABEL_180;
LABEL_181:
      v108 = 0LL;
    }
    v87 = (unsigned int)v86;
    LODWORD(v87) = v86 & 0x7FFFFFFF;
    v88 = KiProcessorBlock[v87];
    v81 = *(volatile __int64 **)(v88 + 36424);
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      *((_QWORD *)&v109 + 1) = *(_QWORD *)(v88 + 36424);
      *(_QWORD *)&v109 = 0LL;
      v89 = (_QWORD *)_InterlockedExchange64(v81, (__int64)&v109);
      if ( v89 )
        KxWaitForLockOwnerShip((__int64)&v109, v89);
    }
    else
    {
      v90 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)v81, 0LL) )
      {
        do
        {
          if ( (++v90 & HvlLongSpinCountMask) == 0
            && (HvlEnlightenments & 0x40) != 0
            && KiCheckVpBackingLongSpinWaitHypercall() )
          {
            HvlNotifyLongSpinWait(v90);
          }
          else
          {
            _mm_pause();
          }
        }
        while ( *v81 );
      }
    }
    if ( Thread->WaitBlockFill6[68] == 1 && Thread->NextProcessor == (_DWORD)v86 )
      break;
    if ( (KiVelocityFlags & 0x200000) != 0 )
    {
      _m_prefetchw(&v109);
      v91 = v109;
      if ( (_QWORD)v109 )
      {
LABEL_169:
        *(_QWORD *)&v109 = 0LL;
        v92 = BYTE8(v109);
        if ( ((v92 ^ (unsigned __int8)_InterlockedExchange64((volatile __int64 *)(v91 + 8), *((__int64 *)&v109 + 1))) & 4) != 0 )
          KeWakeAddressAll(v91 + 8, (__int64)KiProcessorBlock);
      }
      else if ( (__int128 *)_InterlockedCompareExchange64(
                              *((volatile signed __int64 **)&v109 + 1),
                              0LL,
                              (signed __int64)&v109) != &v109 )
      {
        v91 = KxWaitForLockChainValid((__int64 *)&v109);
        goto LABEL_169;
      }
    }
    else
    {
      _InterlockedAnd64(v81, 0LL);
    }
  }
LABEL_205:
  if ( (_BYTE)v79 == 2 )
  {
    v101 = Thread->NextProcessor;
    KiReleaseThreadStateLock(v82, v80, (__int64 *)&v108, v81, (volatile signed __int64 **)&v109);
    Thread->ThreadLock = 0LL;
    v124 = 2097153LL;
    memset_0(v125, 0, 0x100uLL);
    KeAddProcessorAffinityEx((unsigned __int16 *)&v124, v101);
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xCuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 12LL);
    v123 = xHalTimerWatchdogStop;
    v122 = 0LL;
    v121 = 0LL;
    KiIpiSendRequest((__int64)KeGetCurrentPrcb(), 0, (char *)&v124, &v121, 5LL);
    KiIpiStallOnPacketTargetsPrcb(v103, (__int64)KeGetCurrentPrcb());
    *v112 = __rdtsc();
    CycleTime = Thread->CycleTime;
  }
  else
  {
    if ( Thread->Running )
    {
      LOBYTE(v82) = 1;
      KeFlushProcessWriteBuffers(v82);
    }
    v105 = (unsigned __int64)v112;
    *v112 = __rdtsc();
    CycleTime = Thread->CycleTime;
    KiReleaseThreadStateLock(v105, v80, (__int64 *)&v108, v81, (volatile signed __int64 **)&v109);
    Thread->ThreadLock = 0LL;
  }
  v106 = v107[0];
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v107[0]);
  __writecr8(v106);
  return CycleTime;
}
