/*
 * XREFs of EmpRuleUpdateWorkerThread @ 0x14057C800
 * Callers:
 *     <none>
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     EmpUpdateRuleState @ 0x14048CA20 (EmpUpdateRuleState.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 EmpRuleUpdateWorkerThread()
{
  char *v0; // rax
  signed __int8 v1; // cf
  char *v2; // rbx
  __int64 *i; // rsi
  __int64 *v4; // r14
  char *v5; // rax
  char *v6; // rsi
  char *v7; // rax
  char *v8; // rsi
  __int64 result; // rax

  v0 = (char *)KeAbPreAcquire((__int64)&EmpEvaluationQueueLock, 0LL);
  v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
  v2 = v0;
  if ( v1 )
    ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, v0, (__int64)&EmpEvaluationQueueLock);
  if ( v2 )
    v2[10] = 1;
  for ( i = (__int64 *)EmpRuleUpdateQueue; EmpRuleUpdateQueue; i = (__int64 *)EmpRuleUpdateQueue )
  {
    EmpRuleUpdateQueue = *i;
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
    KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
    v4 = i - 1;
    v5 = (char *)KeAbPreAcquire((__int64)&EmpDatabaseLock, 0LL);
    v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpDatabaseLock, 0LL);
    v6 = v5;
    if ( v1 )
      ExfAcquirePushLockExclusiveEx(&EmpDatabaseLock, v5, (__int64)&EmpDatabaseLock);
    if ( v6 )
      v6[10] = 1;
    EmpUpdateRuleState(*v4, v4[2]);
    if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpDatabaseLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
      ExfTryToWakePushLock((volatile signed __int64 *)&EmpDatabaseLock);
    KeAbPostRelease((ULONG_PTR)&EmpDatabaseLock);
    ExFreePoolWithTag(v4, 0x75714D45u);
    v7 = (char *)KeAbPreAcquire((__int64)&EmpEvaluationQueueLock, 0LL);
    v1 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
    v8 = v7;
    if ( v1 )
      ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, v7, (__int64)&EmpEvaluationQueueLock);
    if ( v8 )
      v8[10] = 1;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
  result = KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
  _InterlockedExchange(&EmpWorkerBusy, 0);
  return result;
}
