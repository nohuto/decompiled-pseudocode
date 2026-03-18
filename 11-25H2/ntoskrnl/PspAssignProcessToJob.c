/*
 * XREFs of PspAssignProcessToJob @ 0x140A0E960
 * Callers:
 *     PsAssignProcessToJobObject @ 0x140A0E780 (PsAssignProcessToJobObject.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x140257820 (ObfDereferenceObjectWithTag.c)
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     KiLeaveCriticalRegionUnsafe @ 0x14029B9E0 (KiLeaveCriticalRegionUnsafe.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExReleaseRundownProtection_0 @ 0x140324280 (ExReleaseRundownProtection_0.c)
 *     ExAcquireRundownProtection_0 @ 0x140326750 (ExAcquireRundownProtection_0.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PspIsJobMovable @ 0x140767E44 (PspIsJobMovable.c)
 *     PspQuitNextJobProcess @ 0x140768098 (PspQuitNextJobProcess.c)
 *     PspChargeJobWakeCounter @ 0x1408B3740 (PspChargeJobWakeCounter.c)
 *     PspLockJobsAndProcessExclusive @ 0x1408D7E24 (PspLockJobsAndProcessExclusive.c)
 *     PspUnlockJobAssignment @ 0x1408D84CC (PspUnlockJobAssignment.c)
 *     PspLockJobAssignment @ 0x1408D8530 (PspLockJobAssignment.c)
 *     PspUnlockJobsAndProcessExclusive @ 0x1408D8590 (PspUnlockJobsAndProcessExclusive.c)
 *     PspValidateJobChainLimits @ 0x1408D872C (PspValidateJobChainLimits.c)
 *     PspApplyWorkingSetLimitsToProcess @ 0x1408D8888 (PspApplyWorkingSetLimitsToProcess.c)
 *     PspIncrementJobChainProcessCounts @ 0x1408D8AA0 (PspIncrementJobChainProcessCounts.c)
 *     PspApplyJobChainLimitsToProcess @ 0x1408D8B68 (PspApplyJobChainLimitsToProcess.c)
 *     MmAssignProcessToJob @ 0x1408D9124 (MmAssignProcessToJob.c)
 *     PspLockJobExclusive @ 0x1408DC060 (PspLockJobExclusive.c)
 *     PspGetNextJobProcess @ 0x1408DC088 (PspGetNextJobProcess.c)
 *     PspUnlockJob @ 0x1408DDFF0 (PspUnlockJob.c)
 *     PspRemoveProcessFromJobChain @ 0x1408E09E4 (PspRemoveProcessFromJobChain.c)
 *     PspEstablishJobHierarchy @ 0x1409040C0 (PspEstablishJobHierarchy.c)
 *     PsInvokeWin32Callout @ 0x140961150 (PsInvokeWin32Callout.c)
 *     PsQueryProcessAttributes @ 0x1409BE6C0 (PsQueryProcessAttributes.c)
 *     PspGetJobAssignmentDisposition @ 0x140A0E808 (PspGetJobAssignmentDisposition.c)
 *     PspValidateJobAssignmentMemoryPartition @ 0x140A4DAA8 (PspValidateJobAssignmentMemoryPartition.c)
 *     PspGetJobLockHierarchyForAssignment @ 0x140A553AC (PspGetJobLockHierarchyForAssignment.c)
 *     PspValidateJobAssignmentSiloPolicy @ 0x140A58CFC (PspValidateJobAssignmentSiloPolicy.c)
 *     PspDoesJobHierarchyPermitUILimits @ 0x140A60890 (PspDoesJobHierarchyPermitUILimits.c)
 *     PspValidateJobAssignmentDiskIoAttribution @ 0x140A6E398 (PspValidateJobAssignmentDiskIoAttribution.c)
 *     PspChangeProcessExecutionState @ 0x140AC7CBC (PspChangeProcessExecutionState.c)
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
    if ( !ExAcquireRundownProtection_0((PEX_RUNDOWN_REF)NextJobProcess + 61) )
    {
      v11 = -1073741558;
      v12 = -1073741558;
      goto LABEL_89;
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
      goto LABEL_88;
    }
    v13 = (_QWORD *)NextJobProcess[84];
    v28 = 5;
    if ( v13 != Object || (*((_DWORD *)NextJobProcess + 383) & 0x1000) == 0 )
    {
      v4 = v28;
      v12 = -1073741790;
      goto LABEL_88;
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
      goto LABEL_88;
    }
    if ( v28 == 2 )
    {
      v12 = 0;
      goto LABEL_88;
    }
  }
  if ( NextJobProcess && v4 != 5 )
  {
    a3 = NextJobProcess[84];
    v4 = v28;
  }
  if ( v4 == 4
    && (Object[194] & 0x10) != 0
    && ((*(_DWORD *)(a3 + 1552) & 0x10) != 0 || !(unsigned __int8)PspDoesJobHierarchyPermitUILimits(a3))
    || !(unsigned __int8)PspValidateJobAssignmentSiloPolicy(Object, a3, NextJobProcess, v4)
    || !(unsigned __int8)PspValidateJobAssignmentMemoryPartition(Object, a3, NextJobProcess, v4)
    || v4 == 5 && (Object[132] & 1) != 0
    || ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 && (unsigned int)*(unsigned __int8 *)(a3 + 1102) + 1 > 0x64 )
  {
    goto LABEL_20;
  }
  if ( ((v4 - 4) & 0xFFFFFFFC) == 0 && v4 != 6 )
  {
    v16 = 0;
    while ( (unsigned int)(v16 - 1) <= 1
         || !_bittest((const signed __int32 *)Object + 388, 0x19u)
         || !_bittest((const signed __int32 *)(a3 + 1552), 0x19u) )
    {
      if ( ++v16 >= 3 )
        goto LABEL_41;
    }
    goto LABEL_20;
  }
LABEL_41:
  if ( !(unsigned __int8)PspValidateJobAssignmentDiskIoAttribution(Object, v15, v4) )
  {
LABEL_20:
    v12 = -1073741637;
    goto LABEL_88;
  }
  if ( v4 == 1 || v4 == 3 )
  {
    v18 = a3;
    goto LABEL_50;
  }
  if ( v4 == 4 )
  {
    v18 = 0LL;
LABEL_50:
    v17 = (__int64)Object;
    goto LABEL_51;
  }
  if ( v4 != 5 )
  {
    v17 = 0LL;
    v31 = 0LL;
    goto LABEL_53;
  }
  v17 = a3;
  v18 = 0LL;
LABEL_51:
  v31 = v18;
  if ( v17 )
  {
    v12 = PspValidateJobChainLimits(v17, v18, (__int64)NextJobProcess, 0);
    if ( v12 < 0 )
      goto LABEL_87;
  }
LABEL_53:
  v12 = PspEstablishJobHierarchy((char *)Object, (unsigned __int64)NextJobProcess, a3, v4);
  if ( v12 < 0 )
  {
LABEL_87:
    CurrentThread = v32;
    goto LABEL_88;
  }
  if ( !NextJobProcess )
  {
    v12 = 0;
    goto LABEL_87;
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
    goto LABEL_88;
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
              goto LABEL_88;
          }
        }
      }
    }
    if ( v4 == 5 )
    {
      v12 = -1073741267;
      v5 |= 0x20u;
    }
    goto LABEL_88;
  }
  v12 = -1073741756;
LABEL_88:
  v11 = -1073741558;
LABEL_89:
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
