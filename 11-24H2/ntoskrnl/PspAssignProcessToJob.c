/*
 * XREFs of PspAssignProcessToJob @ 0x140A173D0
 * Callers:
 *     PsAssignProcessToJobObject @ 0x140A171F0 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ExReleaseRundownProtection_0 @ 0x140245670 (ExReleaseRundownProtection_0.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     ExAcquireRundownProtection @ 0x1402792A0 (ExAcquireRundownProtection.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ObfDereferenceObjectWithTag @ 0x1403254A0 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x1403403E0 (ObfReferenceObjectWithTag.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     PspIsJobMovable @ 0x140777924 (PspIsJobMovable.c)
 *     PspQuitNextJobProcess @ 0x140777B78 (PspQuitNextJobProcess.c)
 *     PspChargeJobWakeCounter @ 0x14088E1A0 (PspChargeJobWakeCounter.c)
 *     PspRemoveProcessFromJobChain @ 0x1408A9078 (PspRemoveProcessFromJobChain.c)
 *     PspEstablishJobHierarchy @ 0x1408E62CC (PspEstablishJobHierarchy.c)
 *     PspLockJobsAndProcessExclusive @ 0x1408E705C (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1408E7358 (PspUnlockJobsAndProcessExclusive.c)
 *     PspUnlockJobAssignment @ 0x1408E77C0 (PspUnlockJobAssignment.c)
 *     PspLockJobAssignment @ 0x1408E7824 (PspLockJobAssignment.c)
 *     PspValidateJobChainLimits @ 0x1408E7964 (PspValidateJobChainLimits.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408E7AC0 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspIncrementJobChainProcessCounts @ 0x1408E7CD8 (PspIncrementJobChainProcessCounts.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1408E7DA0 (PspApplyJobChainLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x1408E8398 (MmAssignProcessToJob.c)
 *     PspLockJobExclusive @ 0x1408EB430 (PspLockJobExclusive.c)
 *     PspGetNextJobProcess @ 0x1408EB458 (PspGetNextJobProcess.c)
 *     PspUnlockJob @ 0x1408ED360 (PspUnlockJob.c)
 *     PsInvokeWin32Callout @ 0x1409BADD0 (PsInvokeWin32Callout.c)
 *     PsQueryProcessAttributes @ 0x1409D67A0 (PsQueryProcessAttributes.c)
 *     PspGetJobAssignmentDisposition @ 0x140A17278 (PspGetJobAssignmentDisposition.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x140A50B14 (PspValidateJobAssignmentMemoryPartition.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x140A58A4C (PspGetJobLockHierarchyForAssignment.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140A5B354 (PspValidateJobAssignmentSiloPolicy.c)
 *     PspValidateJobAssignmentDiskIoAttribution @ 0x140A6F418 (PspValidateJobAssignmentDiskIoAttribution.c)
 *     PspValidateJobAssignmentUILimits @ 0x140AD119C (PspValidateJobAssignmentUILimits.c)
 *     PspChangeProcessExecutionState @ 0x140AD16D4 (PspChangeProcessExecutionState.c)
 */

__int64 __fastcall PspAssignProcessToJob(_QWORD *Object, _QWORD *BugCheckParameter1, __int64 a3, int a4)
{
  unsigned int v4; // r15d
  char v5; // bl
  _QWORD *NextJobProcess; // rsi
  struct _KTHREAD *CurrentThread; // r12
  unsigned int v11; // r13d
  int v12; // edi
  _QWORD *v13; // rax
  int JobAssignmentDisposition; // eax
  __int64 v15; // rdx
  int v16; // ecx
  __int64 v17; // r12
  __int64 v18; // rax
  __int64 v19; // rdi
  char v20; // bl
  __int64 v21; // rdx
  int v22; // r8d
  __int64 v23; // rdx
  __int64 v24; // r8
  __int64 v25; // r9
  bool v26; // zf
  int v28; // [rsp+40h] [rbp-69h] BYREF
  _BYTE v29[4]; // [rsp+44h] [rbp-65h] BYREF
  unsigned int v30; // [rsp+48h] [rbp-61h] BYREF
  __int64 v31; // [rsp+50h] [rbp-59h]
  struct _KTHREAD *v32; // [rsp+58h] [rbp-51h]
  __int128 v33; // [rsp+60h] [rbp-49h] BYREF
  __int128 v34; // [rsp+70h] [rbp-39h]
  _QWORD *v35; // [rsp+80h] [rbp-29h]
  __int128 v36; // [rsp+88h] [rbp-21h] BYREF
  __int64 v37; // [rsp+98h] [rbp-11h]
  int v38[4]; // [rsp+A0h] [rbp-9h] BYREF
  __int128 v39; // [rsp+B0h] [rbp+7h]
  __int64 v40; // [rsp+C0h] [rbp+17h]

  v29[0] = 0;
  v4 = 0;
  v30 = 0;
  v5 = 0;
  LODWORD(v35) = 0;
  v37 = 0LL;
  v40 = 0LL;
  NextJobProcess = BugCheckParameter1;
  v33 = 0LL;
  v34 = 0LL;
  v36 = 0LL;
  CurrentThread = KeGetCurrentThread();
  v32 = CurrentThread;
  v28 = 0;
  *(_OWORD *)v38 = 0LL;
  v39 = 0LL;
  if ( a4 == 5 )
  {
    a3 = BugCheckParameter1[84];
    NextJobProcess = PspGetNextJobProcess((__int64)Object, (__int64)CurrentThread, &v36, 0LL);
    ObfReferenceObjectWithTag(NextJobProcess, 0x624A7350u);
    v5 = 1;
    PspQuitNextJobProcess((__int64)Object, (__int64)CurrentThread, &v36, NextJobProcess);
    v4 = v28;
  }
  if ( NextJobProcess )
  {
    if ( !ExAcquireRundownProtection((PEX_RUNDOWN_REF)NextJobProcess + 61) )
    {
      v11 = -1073741558;
      v12 = -1073741558;
      goto LABEL_86;
    }
    v5 |= 0x10u;
  }
  PspGetJobLockHierarchyForAssignment((_DWORD)Object, (_DWORD)NextJobProcess, a3, a4, (__int64)v38);
  v5 |= 6u;
  PspLockJobAssignment((__int64)CurrentThread);
  PspLockJobsAndProcessExclusive((unsigned int *)v38, (__int64)NextJobProcess, (__int64)CurrentThread, 1);
  if ( a4 == 5 )
  {
    if ( !PspIsJobMovable((__int64)Object) )
    {
LABEL_9:
      v12 = -1073741790;
      goto LABEL_85;
    }
    v13 = (_QWORD *)NextJobProcess[84];
    v28 = 5;
    if ( v13 != Object || (*((_DWORD *)NextJobProcess + 383) & 0x1000) == 0 )
    {
      v4 = v28;
      v12 = -1073741790;
      goto LABEL_85;
    }
    v4 = v28;
  }
  else
  {
    JobAssignmentDisposition = PspGetJobAssignmentDisposition((__int64)Object, (__int64)NextJobProcess, a3, &v28);
    v4 = v28;
    if ( JobAssignmentDisposition < 0 )
      goto LABEL_9;
    if ( v28 != a4 )
    {
      v12 = -1073741267;
      goto LABEL_85;
    }
    if ( v28 == 2 )
    {
      v12 = 0;
      goto LABEL_85;
    }
  }
  if ( NextJobProcess && v4 != 5 )
  {
    a3 = NextJobProcess[84];
    v4 = v28;
  }
  if ( !(unsigned __int8)PspValidateJobAssignmentUILimits(Object, a3, v4)
    || !(unsigned __int8)PspValidateJobAssignmentSiloPolicy(Object, a3, NextJobProcess, v4)
    || !(unsigned __int8)PspValidateJobAssignmentMemoryPartition(Object, a3, NextJobProcess, v4)
    || v4 == 5 && (Object[132] & 1) != 0
    || ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 && (unsigned int)*(unsigned __int8 *)(a3 + 1102) + 1 > 0x64 )
  {
    goto LABEL_17;
  }
  if ( ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 )
  {
    v16 = 0;
    while ( (unsigned int)(v16 - 1) <= 1
         || !_bittest((const signed __int32 *)Object + 388, 0x19u)
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
    goto LABEL_85;
  }
  if ( v4 == 1 || v4 == 3 )
  {
    v18 = a3;
    goto LABEL_47;
  }
  if ( v4 == 4 )
  {
    v18 = 0LL;
LABEL_47:
    v17 = (__int64)Object;
    goto LABEL_48;
  }
  if ( v4 != 5 )
  {
    v17 = 0LL;
    v31 = 0LL;
    goto LABEL_50;
  }
  v17 = a3;
  v18 = 0LL;
LABEL_48:
  v31 = v18;
  if ( v17 )
  {
    v12 = PspValidateJobChainLimits(v17, v18, (__int64)NextJobProcess, 0);
    if ( v12 < 0 )
      goto LABEL_84;
  }
LABEL_50:
  v12 = PspEstablishJobHierarchy((char *)Object, (unsigned __int64)NextJobProcess, a3, v4);
  if ( v12 < 0 )
  {
LABEL_84:
    CurrentThread = v32;
    goto LABEL_85;
  }
  if ( !NextJobProcess )
  {
    v12 = 0;
    goto LABEL_84;
  }
  if ( (Object[194] & 0x1000) != 0 )
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
      PspChargeJobWakeCounter(Object, (char *)a3, 0, *((_DWORD *)NextJobProcess + 467) & 0x7FFFFFFF, 4, 0LL, 6451018LL);
    _interlockedbittestandset((volatile signed __int32 *)NextJobProcess + 467, 0x1Fu);
  }
  if ( (_InterlockedExchangeAdd64(NextJobProcess + 57, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(NextJobProcess + 57);
  KeAbPostRelease((ULONG_PTR)(NextJobProcess + 57));
  v4 = v28;
  v20 = v5 | 8;
  v21 = v31;
  if ( v28 == 4 )
    v21 = a3;
  PspIncrementJobChainProcessCounts(v17, v21, (__int64)NextJobProcess, 0);
  PspApplyJobChainLimitsToProcess((__int64)Object, a3, (__int64)NextJobProcess);
  CurrentThread = v32;
  PspUnlockJobsAndProcessExclusive(v38, 0LL, (__int64)v32);
  v5 = v20 & 0xFB;
  if ( (Object[194] & 0x1000000) == 0 )
  {
    PsQueryProcessAttributes((__int64)NextJobProcess, v29, 0LL);
    if ( v29[0] )
      _InterlockedOr((volatile signed __int32 *)Object + 388, 0x1000000u);
    else
      _InterlockedOr((volatile signed __int32 *)Object + 388, 0x1800000u);
    v4 = v28;
  }
  v12 = PspApplyWorkingSetLimitsToProcess((__int64)NextJobProcess);
  if ( v12 < 0 )
    goto LABEL_85;
  v22 = 0;
  if ( v4 == 5 )
    v22 = 4;
  if ( (unsigned int)MmAssignProcessToJob((__int64)NextJobProcess, a3, v22) )
  {
    PspUnlockJobAssignment((__int64)CurrentThread);
    --CurrentThread->KernelApcDisable;
    v5 &= ~2u;
    PspChangeProcessExecutionState((PEPROCESS)NextJobProcess);
    KiLeaveCriticalRegionUnsafe((__int64)CurrentThread, v23, v24, v25);
    if ( *((_DWORD *)Object + 136) )
    {
      if ( (unsigned __int8)IsWin32kJobNotifyCallOutPresent() )
      {
        v30 = *((_DWORD *)Object + 144);
        if ( v30 <= 0xFFFFFFFD )
          Win32kJobAddProcessNotify(Object, NextJobProcess);
      }
      else
      {
        v26 = *((_DWORD *)Object + 136) == 0;
        DWORD2(v34) = 1;
        *(_QWORD *)&v34 = Object;
        v35 = NextJobProcess;
        if ( !v26 )
        {
          v30 = *((_DWORD *)Object + 144);
          if ( v30 <= 0xFFFFFFFD )
          {
            PspLockJobExclusive((__int64)Object, (__int64)CurrentThread);
            v12 = PsInvokeWin32Callout(6, &v33, 1, (__int64)&v30);
            PspUnlockJob((__int64)Object, (__int64)CurrentThread);
            if ( v12 < 0 )
              goto LABEL_85;
          }
        }
      }
    }
    if ( v4 == 5 )
    {
      v12 = -1073741267;
      v5 |= 0x20u;
    }
    goto LABEL_85;
  }
  v12 = -1073741756;
LABEL_85:
  v11 = -1073741558;
LABEL_86:
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
    PspUnlockJobsAndProcessExclusive(v38, (__int64)NextJobProcess, (__int64)CurrentThread);
  if ( (v5 & 2) != 0 )
    PspUnlockJobAssignment((__int64)CurrentThread);
  if ( (v5 & 1) != 0 )
    ObfDereferenceObjectWithTag(NextJobProcess, 0x624A7350u);
  return (unsigned int)v12;
}
