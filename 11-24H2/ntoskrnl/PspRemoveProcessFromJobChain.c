/*
 * XREFs of PspRemoveProcessFromJobChain @ 0x1408A9078
 * Callers:
 *     PspRundownSingleProcess @ 0x1408A8B38 (PspRundownSingleProcess.c)
 *     PspProcessDelete @ 0x1408A99B0 (PspProcessDelete.c)
 *     PspTerminateProcessesJobCallback @ 0x1408EA6B0 (PspTerminateProcessesJobCallback.c)
 *     PspEnforceLimitsJobPostCallback @ 0x1408ECC80 (PspEnforceLimitsJobPostCallback.c)
 *     PspAssignProcessToJob @ 0x140A173D0 (PspAssignProcessToJob.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 *     ExAcquireResourceExclusiveLite @ 0x1402769C0 (ExAcquireResourceExclusiveLite.c)
 *     PspSendJobNotification @ 0x140493C70 (PspSendJobNotification.c)
 *     PspInitializeProcessExecutionState @ 0x1404B4F74 (PspInitializeProcessExecutionState.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     PspSubtractAccountingValues @ 0x1407787A4 (PspSubtractAccountingValues.c)
 *     PspLockRootJobFromProcess @ 0x1408EB304 (PspLockRootJobFromProcess.c)
 *     PsQueryStatisticsProcess @ 0x1408EC910 (PsQueryStatisticsProcess.c)
 *     PspUnlockJob @ 0x1408ED360 (PspUnlockJob.c)
 *     PsTerminateProcess @ 0x140938BD4 (PsTerminateProcess.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1409EAB68 (PspFoldProcessAccountingIntoJob.c)
 *     PspUnlinkJobProcess @ 0x140A51424 (PspUnlinkJobProcess.c)
 *     EtwTraceJobRemoveProcess @ 0x140A5D094 (EtwTraceJobRemoveProcess.c)
 *     PspChangeProcessExecutionState @ 0x140AD16D4 (PspChangeProcessExecutionState.c)
 */

_UNKNOWN **__fastcall PspRemoveProcessFromJobChain(PEPROCESS Process, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  _UNKNOWN **result; // rax
  int v5; // ebx
  bool v7; // zf
  unsigned int v8; // r15d
  struct _KTHREAD *CurrentThread; // r14
  bool v11; // r13
  char v12; // r12
  __int64 v13; // rdi
  char v14; // r13
  int v15; // r15d
  int v16; // r13d
  int i; // ecx
  bool v18; // al
  _QWORD *j; // rax
  int k; // ecx
  int v21; // ecx
  char v22; // cl
  char v23; // [rsp+28h] [rbp-79h]
  char v24[7]; // [rsp+29h] [rbp-78h] BYREF
  __int64 v25; // [rsp+30h] [rbp-71h] BYREF
  int v26; // [rsp+38h] [rbp-69h]
  __int64 v27; // [rsp+40h] [rbp-61h] BYREF
  struct _KTHREAD *v28; // [rsp+48h] [rbp-59h]
  _QWORD v29[20]; // [rsp+58h] [rbp-49h] BYREF
  _UNKNOWN *retaddr; // [rsp+100h] [rbp+5Fh] BYREF
  bool v31; // [rsp+108h] [rbp+67h]
  char v33; // [rsp+118h] [rbp+77h]

  result = &retaddr;
  v33 = a3;
  v5 = 0;
  v7 = (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0;
  v8 = a3;
  v27 = 0LL;
  v25 = 0LL;
  v24[0] = 0;
  if ( v7 || (a3 & 1) != 0 )
  {
    memset_0(v29, 0, 0x68uLL);
    CurrentThread = KeGetCurrentThread();
    v28 = CurrentThread;
    v11 = !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0);
    v23 = 0;
    v31 = v11;
    if ( (v8 & 2) != 0
      && (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0
      && (Process[3].ActiveGroupsMask.Masks[1] & 0x4000000000LL) == 0 )
    {
      PsTerminateProcess(Process, a4);
      v23 = 1;
    }
    v26 = 1;
    PspLockRootJobFromProcess(Process, CurrentThread, &v27, &v25);
    if ( (PerfGlobalGroupMask & 0x80000) != 0 )
      EtwTraceJobRemoveProcess(Process, v8, a4);
    if ( (v8 & 4) == 0 || _interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 1u) )
    {
      v12 = 0;
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFFFFFFDF);
      PsQueryStatisticsProcess(Process, v29);
      v12 = 1;
    }
    v13 = v27;
    if ( v27 )
    {
      v14 = v8;
      v15 = v26;
      v16 = v14 & 8;
      do
      {
        for ( i = 0; !i; i = 1 )
        {
          if ( v13 == v25 )
            goto LABEL_14;
        }
        ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
LABEL_14:
        v18 = v31;
        if ( v31 )
        {
          --*(_DWORD *)(v13 + 216);
          v18 = v31;
          if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x2000000000LL) != 0 )
            --*(_DWORD *)(v13 + 1460);
        }
        if ( v16 && v18 )
          ++*(_DWORD *)(v13 + 220);
        if ( a2 && (!*a2 || *a2 == v13) && *(_QWORD *)(v13 + 552) && ((1 << a2[1]) & *(_DWORD *)(v13 + 1104)) != 0 )
          PspSendJobNotification(v13, a2[1], a2[2], 0);
        if ( v12 )
        {
          PspFoldProcessAccountingIntoJob(v13, Process, v29);
          if ( v13 != Process[1].Padding[3] || *(_DWORD *)(v13 + 1464) == PspEnforcementSequenceNumber )
          {
            if ( v15 == 1 )
            {
              for ( j = (_QWORD *)(v13 + 1352); (unsigned __int64)j < v13 + 1456; ++j )
              {
                if ( *j )
                {
                  PspSubtractAccountingValues((_QWORD *)(v13 + 1352), v29);
                  v15 = 2;
                  break;
                }
              }
            }
          }
          else
          {
            v15 = 0;
          }
        }
        for ( k = 0; !k; k = 1 )
        {
          if ( v13 == v25 )
            goto LABEL_30;
        }
        ExReleaseResourceLite((PERESOURCE)(v13 + 56));
LABEL_30:
        v13 = *(_QWORD *)(v13 + 1304);
      }
      while ( v13 );
      v13 = v27;
      CurrentThread = v28;
      LOBYTE(v8) = v33;
      v11 = v31;
    }
    v21 = 0;
    if ( (v8 & 1) != 0 )
    {
      while ( !v21 )
      {
        if ( v13 == v25 )
          goto LABEL_37;
        v21 = 1;
      }
      ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
LABEL_37:
      PspUnlinkJobProcess(v13, Process);
      while ( !v5 )
      {
        if ( v13 == v25 )
          return (_UNKNOWN **)PspUnlockJob(v25, CurrentThread);
        v5 = 1;
      }
      ExReleaseResourceLite((PERESOURCE)(v13 + 56));
      return (_UNKNOWN **)PspUnlockJob(v25, CurrentThread);
    }
    else
    {
      while ( !v21 )
      {
        if ( v13 == v25 )
          goto LABEL_56;
        v21 = 1;
      }
      ExAcquireResourceExclusiveLite((PERESOURCE)(v13 + 56), 1u);
LABEL_56:
      if ( v11 && (Process[1].DirectoryTableBase & 4) != 0 && !v23 )
      {
        PspInitializeProcessExecutionState(v24);
        v22 = v24[0] & 0xFD;
        if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
          v22 = v24[0];
        BYTE3(Process[4].Padding[3]) = v22;
      }
      while ( !v5 )
      {
        if ( v13 == v25 )
          goto LABEL_66;
        v5 = 1;
      }
      ExReleaseResourceLite((PERESOURCE)(v13 + 56));
LABEL_66:
      PspUnlockJob(v25, CurrentThread);
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState(Process);
      return (_UNKNOWN **)KeLeaveCriticalRegionThread();
    }
  }
  return result;
}
