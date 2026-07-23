/*
 * XREFs of PspAssignProcessToJob @ 0x140A105B0
 * Callers:
 *     PsAssignProcessToJobObject @ 0x140A103D0 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x14020DE50 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x14022E830 (ExAcquireRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x140289BD0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     PspIsJobMovable @ 0x140777AE4 (PspIsJobMovable.c)
 *     PspQuitNextJobProcess @ 0x140777D38 (PspQuitNextJobProcess.c)
 *     PspGetNextJobProcess @ 0x14085CC88 (PspGetNextJobProcess.c)
 *     PspLockJobsAndProcessExclusive @ 0x1408D78C4 (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1408D7BB8 (PspUnlockJobsAndProcessExclusive.c)
 *     PspUnlockJobAssignment @ 0x1408D801C (PspUnlockJobAssignment.c)
 *     PspLockJobAssignment @ 0x1408D8080 (PspLockJobAssignment.c)
 *     PspValidateJobChainLimits @ 0x1408D81A8 (PspValidateJobChainLimits.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408D8304 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspIncrementJobChainProcessCounts @ 0x1408D851C (PspIncrementJobChainProcessCounts.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1408D85E4 (PspApplyJobChainLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x1408D8B78 (MmAssignProcessToJob.c)
 *     PspRemoveProcessFromJobChain @ 0x1408FF2D8 (PspRemoveProcessFromJobChain.c)
 *     PspEstablishJobHierarchy @ 0x14091B360 (PspEstablishJobHierarchy.c)
 *     PspChargeJobWakeCounter @ 0x1409AECC0 (PspChargeJobWakeCounter.c)
 *     PsQueryProcessAttributes @ 0x1409C65D0 (PsQueryProcessAttributes.c)
 *     PspGetJobAssignmentDisposition @ 0x140A10458 (PspGetJobAssignmentDisposition.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x140A47E70 (PspValidateJobAssignmentMemoryPartition.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x140A501FC (PspGetJobLockHierarchyForAssignment.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140A52C64 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspValidateJobAssignmentDiskIoAttribution @ 0x140A6889C (PspValidateJobAssignmentDiskIoAttribution.c)
 *     PspValidateJobAssignmentUILimits @ 0x140ACF1F8 (PspValidateJobAssignmentUILimits.c)
 *     PspChangeProcessExecutionState @ 0x140ACFA40 (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PspAssignProcessToJob(signed __int32 *Object, _QWORD *BugCheckParameter1, __int64 a3, int a4)
{
  unsigned int v4; // r14d
  char v5; // bl
  struct _KTHREAD *CurrentThread; // r12
  _QWORD *NextJobProcess; // rsi
  unsigned int v11; // r13d
  int v12; // edi
  signed __int32 *v13; // rax
  int JobAssignmentDisposition; // eax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdi
  char v20; // bl
  __int64 v21; // rdx
  int v22; // r8d
  _BYTE v24[4]; // [rsp+40h] [rbp-39h] BYREF
  int v25; // [rsp+44h] [rbp-35h] BYREF
  __int64 v26; // [rsp+48h] [rbp-31h]
  struct _KTHREAD *v27; // [rsp+50h] [rbp-29h]
  __int128 v28; // [rsp+58h] [rbp-21h] BYREF
  __int64 v29; // [rsp+68h] [rbp-11h]
  int v30[4]; // [rsp+70h] [rbp-9h] BYREF
  __int128 v31; // [rsp+80h] [rbp+7h]
  __int64 v32; // [rsp+90h] [rbp+17h]

  v24[0] = 0;
  v4 = 0;
  v28 = 0LL;
  v29 = 0LL;
  v5 = 0;
  CurrentThread = KeGetCurrentThread();
  v27 = CurrentThread;
  v32 = 0LL;
  NextJobProcess = BugCheckParameter1;
  v25 = 0;
  *(_OWORD *)v30 = 0LL;
  v31 = 0LL;
  if ( a4 == 5 )
  {
    a3 = BugCheckParameter1[84];
    NextJobProcess = PspGetNextJobProcess((__int64)Object, (__int64)CurrentThread, &v28, 0LL);
    ObfReferenceObjectWithTag(NextJobProcess, 0x624A7350u);
    v5 = 1;
    PspQuitNextJobProcess((__int64)Object, (__int64)CurrentThread, &v28, NextJobProcess);
    v4 = v25;
  }
  if ( NextJobProcess )
  {
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)NextJobProcess + 61) )
    {
      v11 = -1073741558;
      v12 = -1073741558;
      goto LABEL_83;
    }
    v5 |= 0x10u;
  }
  PspGetJobLockHierarchyForAssignment((_DWORD)Object, (_DWORD)NextJobProcess, a3, a4, (__int64)v30);
  v5 |= 6u;
  PspLockJobAssignment((__int64)CurrentThread);
  PspLockJobsAndProcessExclusive((unsigned int *)v30, (__int64)NextJobProcess, (__int64)CurrentThread, 1);
  if ( a4 != 5 )
  {
    JobAssignmentDisposition = PspGetJobAssignmentDisposition((__int64)Object, (__int64)NextJobProcess, a3, &v25);
    v4 = v25;
    if ( JobAssignmentDisposition < 0 )
      goto LABEL_9;
    if ( v25 != a4 )
    {
      v12 = -1073741267;
      goto LABEL_82;
    }
    if ( v25 == 2 )
    {
      v12 = 0;
      goto LABEL_82;
    }
    goto LABEL_13;
  }
  if ( PspIsJobMovable((__int64)Object) )
  {
    v13 = (signed __int32 *)NextJobProcess[84];
    v25 = 5;
    if ( v13 != Object || (*((_DWORD *)NextJobProcess + 383) & 0x1000) == 0 )
    {
      v4 = v25;
      v12 = -1073741790;
      goto LABEL_82;
    }
    v4 = v25;
LABEL_13:
    if ( NextJobProcess && v4 != 5 )
    {
      a3 = NextJobProcess[84];
      v4 = v25;
    }
    if ( !(unsigned __int8)PspValidateJobAssignmentUILimits(Object, a3, v4)
      || !(unsigned __int8)PspValidateJobAssignmentSiloPolicy(Object, a3, NextJobProcess, v4)
      || !(unsigned __int8)PspValidateJobAssignmentMemoryPartition(Object, a3, NextJobProcess, v4)
      || v4 == 5 && (Object[264] & 1) != 0
      || ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 && (unsigned int)*(unsigned __int8 *)(a3 + 1102) + 1 > 0x64 )
    {
      goto LABEL_17;
    }
    if ( ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 )
    {
      v16 = 0;
      while ( (unsigned int)(v16 - 1) <= 1
           || !_bittest(Object + 388, 0x19u)
           || !_bittest((const signed __int32 *)(a3 + 1552), 0x19u) )
      {
        if ( ++v16 >= 3 )
          goto LABEL_38;
      }
      goto LABEL_17;
    }
LABEL_38:
    if ( !(unsigned __int8)PspValidateJobAssignmentDiskIoAttribution(Object, v15, v4) )
    {
LABEL_17:
      v12 = -1073741637;
      goto LABEL_82;
    }
    switch ( v4 )
    {
      case 1u:
      case 3u:
        v18 = a3;
        break;
      case 4u:
        v18 = 0LL;
        break;
      case 5u:
        v17 = a3;
        v18 = 0LL;
LABEL_48:
        v26 = v18;
        if ( v17 )
        {
          v12 = PspValidateJobChainLimits(v17, v18, (__int64)NextJobProcess, 0);
          if ( v12 < 0 )
          {
LABEL_81:
            CurrentThread = v27;
            goto LABEL_82;
          }
        }
LABEL_50:
        v12 = PspEstablishJobHierarchy((char *)Object, (unsigned __int64)NextJobProcess, a3, v4);
        if ( v12 >= 0 )
        {
          if ( NextJobProcess )
          {
            if ( (Object[388] & 0x1000) != 0 )
            {
              v19 = 0LL;
              do
              {
                if ( (*((_DWORD *)NextJobProcess + (int)v19 + 458) & 0x7FFFFFFF) != 0 )
                  PspChargeJobWakeCounter(
                    Object,
                    (char *)a3,
                    v19,
                    *((_DWORD *)NextJobProcess + (int)v19 + 458) & 0x7FFFFFFF,
                    0,
                    0LL,
                    6451018LL);
                _interlockedbittestandset((volatile signed __int32 *)NextJobProcess + v19 + 458, 0x1Fu);
                v19 = (unsigned int)(v19 + 1);
              }
              while ( (unsigned int)v19 < 7 );
              if ( (*((_DWORD *)NextJobProcess + 467) & 0x7FFFFFFF) != 0 )
                PspChargeJobWakeCounter(
                  Object,
                  (char *)a3,
                  0,
                  *((_DWORD *)NextJobProcess + 467) & 0x7FFFFFFF,
                  4,
                  0LL,
                  6451018LL);
              _interlockedbittestandset((volatile signed __int32 *)NextJobProcess + 467, 0x1Fu);
            }
            if ( (_InterlockedExchangeAdd64(NextJobProcess + 57, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
              ExfTryToWakePushLock(NextJobProcess + 57);
            KeAbPostRelease((ULONG_PTR)(NextJobProcess + 57));
            v4 = v25;
            v20 = v5 | 8;
            v21 = v26;
            if ( v25 == 4 )
              v21 = a3;
            PspIncrementJobChainProcessCounts(v17, v21, (__int64)NextJobProcess, 0);
            PspApplyJobChainLimitsToProcess((__int64)Object, a3, (__int64)NextJobProcess);
            CurrentThread = v27;
            PspUnlockJobsAndProcessExclusive(v30, 0LL, (__int64)v27);
            v5 = v20 & 0xFB;
            if ( (Object[388] & 0x1000000) == 0 )
            {
              PsQueryProcessAttributes((__int64)NextJobProcess, v24, 0LL);
              if ( v24[0] )
                _InterlockedOr(Object + 388, 0x1000000u);
              else
                _InterlockedOr(Object + 388, 0x1800000u);
              v4 = v25;
            }
            v12 = PspApplyWorkingSetLimitsToProcess((__int64)NextJobProcess);
            if ( v12 >= 0 )
            {
              v22 = 0;
              if ( v4 == 5 )
                v22 = 4;
              if ( (unsigned int)MmAssignProcessToJob((__int64)NextJobProcess, a3, v22) )
              {
                PspUnlockJobAssignment((__int64)CurrentThread);
                --CurrentThread->KernelApcDisable;
                v5 &= ~2u;
                PspChangeProcessExecutionState((PEPROCESS)NextJobProcess);
                KiLeaveCriticalRegionUnsafe((__int64)CurrentThread);
                if ( Object[136]
                  && (unsigned __int8)IsWin32kJobNotifyCallOutPresent()
                  && (unsigned int)Object[144] <= 0xFFFFFFFD )
                {
                  Win32kJobAddProcessNotify(Object, NextJobProcess);
                }
                if ( v4 == 5 )
                {
                  v12 = -1073741267;
                  v5 |= 0x20u;
                }
              }
              else
              {
                v12 = -1073741756;
              }
            }
            goto LABEL_82;
          }
          v12 = 0;
        }
        goto LABEL_81;
      default:
        v17 = 0LL;
        v26 = 0LL;
        goto LABEL_50;
    }
    v17 = (__int64)Object;
    goto LABEL_48;
  }
LABEL_9:
  v12 = -1073741790;
LABEL_82:
  v11 = -1073741558;
LABEL_83:
  if ( (v5 & 0x10) != 0 )
    ExReleaseRundownProtection_0((PEX_RUNDOWN_REF)NextJobProcess + 61);
  if ( (v5 & 0x20) == 0 && v12 < 0 && (v5 & 8) != 0 )
  {
    if ( v4 == 5 )
      KeBugCheckEx(0xEFu, (ULONG_PTR)NextJobProcess, 0LL, (ULONG_PTR)Object, v12);
    if ( v12 != -1073741558 )
      v11 = -1073741756;
    PspRemoveProcessFromJobChain((PEPROCESS)NextJobProcess, 0LL, 0xAu, v11);
  }
  if ( (v5 & 4) != 0 )
    PspUnlockJobsAndProcessExclusive(v30, (__int64)NextJobProcess, (__int64)CurrentThread);
  if ( (v5 & 2) != 0 )
    PspUnlockJobAssignment((__int64)CurrentThread);
  if ( (v5 & 1) != 0 )
    ObfDereferenceObjectWithTag(NextJobProcess, 0x624A7350u);
  return (unsigned int)v12;
}
