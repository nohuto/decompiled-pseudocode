/*
 * XREFs of PspGetNextJobProcess @ 0x14085CC88
 * Callers:
 *     PspExecuteJobFreezeThawCallback @ 0x14047E350 (PspExecuteJobFreezeThawCallback.c)
 *     PspTerminateSiloSubsystemProcesses @ 0x1407738D8 (PspTerminateSiloSubsystemProcesses.c)
 *     PspWaitOnAllProcessesJobCallback @ 0x140778990 (PspWaitOnAllProcessesJobCallback.c)
 *     PspTerminateProcessesJobCallback @ 0x14085BEE0 (PspTerminateProcessesJobCallback.c)
 *     PspSetCpuRateControlJobPostCallback @ 0x1408D77E0 (PspSetCpuRateControlJobPostCallback.c)
 *     PspAssignProcessToJob @ 0x140A105B0 (PspAssignProcessToJob.c)
 * Callees:
 *     ObfDereferenceObjectWithTag @ 0x1402CE030 (ObfDereferenceObjectWithTag.c)
 *     ObReferenceObjectSafeWithTag @ 0x14031DCB0 (ObReferenceObjectSafeWithTag.c)
 *     PspLockJobExclusive @ 0x14085CC60 (PspLockJobExclusive.c)
 *     PspUnlockJob @ 0x14085EB90 (PspUnlockJob.c)
 */

_QWORD *__fastcall PspGetNextJobProcess(__int64 a1, __int64 a2, _QWORD *a3, void *a4)
{
  _QWORD *v8; // r14
  _QWORD *v9; // rdi
  _QWORD *v10; // rsi
  _QWORD *v12; // rax
  __int64 v13; // rcx
  _QWORD *v14; // rcx
  _QWORD *v15; // rax

  PspLockJobExclusive(a1, a2);
  if ( a4 )
  {
    v8 = (_QWORD *)(a1 + 40);
  }
  else
  {
    v12 = (_QWORD *)(a1 + 1320);
    v13 = *(_QWORD *)(a1 + 1320);
    if ( *(_QWORD *)(v13 + 8) != a1 + 1320 )
      goto LABEL_10;
    *a3 = v13;
    v8 = (_QWORD *)(a1 + 40);
    a3[1] = v12;
    *(_QWORD *)(v13 + 8) = a3;
    *v12 = a3;
    a3[2] = a1 + 40;
  }
  v9 = (_QWORD *)a3[2];
  while ( 1 )
  {
    v9 = (_QWORD *)*v9;
    if ( v9 == v8 )
      break;
    v10 = v9 - 107;
    if ( ObReferenceObjectSafeWithTag((__int64)(v9 - 107), 0x624A7350u) )
      goto LABEL_6;
  }
  v14 = (_QWORD *)*a3;
  if ( *(_QWORD **)(*a3 + 8LL) != a3 || (v15 = (_QWORD *)a3[1], (_QWORD *)*v15 != a3) )
LABEL_10:
    __fastfail(3u);
  *v15 = v14;
  v10 = 0LL;
  v14[1] = v15;
  if ( v15 != v14 )
    v10 = 0LL;
LABEL_6:
  a3[2] = v9;
  PspUnlockJob(a1, a2);
  if ( a4 )
    ObfDereferenceObjectWithTag(a4, 0x624A7350u);
  return v10;
}
