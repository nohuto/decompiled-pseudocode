/*
 * XREFs of PspRemoveProcessFromJobChain @ 0x1408FF2D8
 * Callers:
 *     PspTerminateProcessesJobCallback @ 0x14085BEE0 (PspTerminateProcessesJobCallback.c)
 *     PspEnforceLimitsJobPostCallback @ 0x14085E4B0 (PspEnforceLimitsJobPostCallback.c)
 *     PspRundownSingleProcess @ 0x1408FED98 (PspRundownSingleProcess.c)
 *     PspProcessDelete @ 0x1408FFC10 (PspProcessDelete.c)
 *     PspAssignProcessToJob @ 0x140A105B0 (PspAssignProcessToJob.c)
 * Callees:
 *     ExAcquireResourceExclusiveLite @ 0x14022BF50 (ExAcquireResourceExclusiveLite.c)
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 *     PspSendJobNotification @ 0x14048E6FC (PspSendJobNotification.c)
 *     PspInitializeProcessExecutionState @ 0x1404AF774 (PspInitializeProcessExecutionState.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     PspSubtractAccountingValues @ 0x140778898 (PspSubtractAccountingValues.c)
 *     PspLockRootJobFromProcess @ 0x14085CB34 (PspLockRootJobFromProcess.c)
 *     PsQueryStatisticsProcess @ 0x14085E140 (PsQueryStatisticsProcess.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 *     PsTerminateProcess @ 0x1408F32A4 (PsTerminateProcess.c)
 *     PspFoldProcessAccountingIntoJob @ 0x1409E5458 (PspFoldProcessAccountingIntoJob.c)
 *     PspUnlinkJobProcess @ 0x140A485E4 (PspUnlinkJobProcess.c)
 *     EtwTraceJobRemoveProcess @ 0x140A54DC4 (EtwTraceJobRemoveProcess.c)
 *     PspChangeProcessExecutionState @ 0x140ACFA40 (PspChangeProcessExecutionState.c)
 */

void __fastcall PspRemoveProcessFromJobChain(PEPROCESS Process, _QWORD *a2, unsigned int a3, unsigned int a4)
{
  int v4; // ebx
  bool v6; // zf
  unsigned int v7; // r15d
  struct _KTHREAD *CurrentThread; // r14
  bool v10; // r13
  char v11; // r12
  __int64 v12; // rdi
  char v13; // r13
  int v14; // r15d
  int v15; // r13d
  int i; // ecx
  bool v17; // al
  _QWORD *j; // rax
  int k; // ecx
  int v20; // ecx
  char v21; // cl
  char v22; // [rsp+28h] [rbp-79h]
  char v23[7]; // [rsp+29h] [rbp-78h] BYREF
  __int64 v24; // [rsp+30h] [rbp-71h] BYREF
  int v25; // [rsp+38h] [rbp-69h]
  __int64 v26; // [rsp+40h] [rbp-61h] BYREF
  struct _KTHREAD *v27; // [rsp+48h] [rbp-59h]
  _QWORD v28[20]; // [rsp+58h] [rbp-49h] BYREF
  bool v29; // [rsp+108h] [rbp+67h]
  char v31; // [rsp+118h] [rbp+77h]

  v31 = a3;
  v4 = 0;
  v6 = (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000000LL) == 0;
  v7 = a3;
  v26 = 0LL;
  v24 = 0LL;
  v23[0] = 0;
  if ( v6 || (a3 & 1) != 0 )
  {
    memset_0(v28, 0, 0x68uLL);
    CurrentThread = KeGetCurrentThread();
    v27 = CurrentThread;
    v10 = !_interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0);
    v22 = 0;
    v29 = v10;
    if ( (v7 & 2) != 0
      && (Process[1].DirectoryTableBase & 0x400000000000000LL) != 0
      && (Process[3].ActiveGroupsMask.Masks[1] & 0x4000000000LL) == 0 )
    {
      PsTerminateProcess(Process);
      v22 = 1;
    }
    v25 = 1;
    PspLockRootJobFromProcess((__int64)Process, (__int64)CurrentThread, &v26, &v24);
    if ( (PerfGlobalGroupMask[0] & 0x80000) != 0 )
      EtwTraceJobRemoveProcess(Process, v7, a4);
    if ( (v7 & 4) == 0 || _interlockedbittestandset((volatile signed __int32 *)&Process[1].DirectoryTableBase, 1u) )
    {
      v11 = 0;
    }
    else
    {
      _InterlockedAnd((volatile signed __int32 *)&Process[1].DirectoryTableBase, 0xFFFFFFDF);
      PsQueryStatisticsProcess(Process, v28);
      v11 = 1;
    }
    v12 = v26;
    if ( v26 )
    {
      v13 = v7;
      v14 = v25;
      v15 = v13 & 8;
      do
      {
        for ( i = 0; !i; i = 1 )
        {
          if ( v12 == v24 )
            goto LABEL_14;
        }
        ExAcquireResourceExclusiveLite((PERESOURCE)(v12 + 56), 1u);
LABEL_14:
        v17 = v29;
        if ( v29 )
        {
          --*(_DWORD *)(v12 + 216);
          v17 = v29;
          if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x2000000000LL) != 0 )
            --*(_DWORD *)(v12 + 1460);
        }
        if ( v15 && v17 )
          ++*(_DWORD *)(v12 + 220);
        if ( a2 && (!*a2 || *a2 == v12) && *(_QWORD *)(v12 + 552) && ((1 << a2[1]) & *(_DWORD *)(v12 + 1104)) != 0 )
          PspSendJobNotification(v12, a2[1], a2[2], 0);
        if ( v11 )
        {
          PspFoldProcessAccountingIntoJob(v12, Process, v28);
          if ( v12 != Process[1].Padding[3] || *(_DWORD *)(v12 + 1464) == PspEnforcementSequenceNumber )
          {
            if ( v14 == 1 )
            {
              for ( j = (_QWORD *)(v12 + 1352); (unsigned __int64)j < v12 + 1456; ++j )
              {
                if ( *j )
                {
                  PspSubtractAccountingValues((_QWORD *)(v12 + 1352), v28);
                  v14 = 2;
                  break;
                }
              }
            }
          }
          else
          {
            v14 = 0;
          }
        }
        for ( k = 0; !k; k = 1 )
        {
          if ( v12 == v24 )
            goto LABEL_30;
        }
        ExReleaseResourceLite((PERESOURCE)(v12 + 56));
LABEL_30:
        v12 = *(_QWORD *)(v12 + 1304);
      }
      while ( v12 );
      v12 = v26;
      CurrentThread = v27;
      LOBYTE(v7) = v31;
      v10 = v29;
    }
    v20 = 0;
    if ( (v7 & 1) != 0 )
    {
      while ( !v20 )
      {
        if ( v12 == v24 )
          goto LABEL_37;
        v20 = 1;
      }
      ExAcquireResourceExclusiveLite((PERESOURCE)(v12 + 56), 1u);
LABEL_37:
      PspUnlinkJobProcess(v12, Process);
      while ( !v4 )
      {
        if ( v12 == v24 )
          goto LABEL_42;
        v4 = 1;
      }
      ExReleaseResourceLite((PERESOURCE)(v12 + 56));
LABEL_42:
      PspUnlockJob(v24, (__int64)CurrentThread);
    }
    else
    {
      while ( !v20 )
      {
        if ( v12 == v24 )
          goto LABEL_56;
        v20 = 1;
      }
      ExAcquireResourceExclusiveLite((PERESOURCE)(v12 + 56), 1u);
LABEL_56:
      if ( v10 && (Process[1].DirectoryTableBase & 4) != 0 && !v22 )
      {
        PspInitializeProcessExecutionState(v23);
        v21 = v23[0] & 0xFD;
        if ( (Process[3].ActiveGroupsMask.Masks[1] & 0x100000000LL) == 0 )
          v21 = v23[0];
        BYTE3(Process[4].Padding[3]) = v21;
      }
      while ( !v4 )
      {
        if ( v12 == v24 )
          goto LABEL_66;
        v4 = 1;
      }
      ExReleaseResourceLite((PERESOURCE)(v12 + 56));
LABEL_66:
      PspUnlockJob(v24, (__int64)CurrentThread);
      --CurrentThread->KernelApcDisable;
      PspChangeProcessExecutionState(Process);
      KeLeaveCriticalRegionThread();
    }
  }
}
