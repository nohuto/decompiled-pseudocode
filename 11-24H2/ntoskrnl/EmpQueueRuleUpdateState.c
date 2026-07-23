/*
 * XREFs of EmpQueueRuleUpdateState @ 0x14057C690
 * Callers:
 *     EmpProviderDeregisterEntry @ 0x14057C600 (EmpProviderDeregisterEntry.c)
 *     EmpClientRuleRegisterNotification @ 0x1407072A4 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x140707520 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x1407077C0 (EmProviderRegisterEntry.c)
 *     EmpProviderRegister @ 0x140AAEE50 (EmpProviderRegister.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExQueueWorkItem @ 0x1402CE3E0 (ExQueueWorkItem.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EmpQueueRuleUpdateState(__int64 a1, __int64 a2)
{
  char *v4; // rax
  signed __int8 v5; // cf
  char *v6; // rbx
  _QWORD *i; // rax
  _QWORD *Pool2; // rax

  v4 = (char *)KeAbPreAcquire((__int64)&EmpEvaluationQueueLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, v4, (__int64)&EmpEvaluationQueueLock);
  if ( v6 )
    v6[10] = 1;
  for ( i = (_QWORD *)EmpRuleUpdateQueue; i; i = (_QWORD *)*i )
  {
    if ( *(i - 1) == a1 )
    {
      if ( i != (_QWORD *)8 )
      {
        i[1] = 0LL;
        goto LABEL_14;
      }
      break;
    }
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x18uLL, 0x75714D45u);
  if ( Pool2 )
  {
    *Pool2 = a1;
    Pool2[2] = a2;
    Pool2[1] = EmpRuleUpdateQueue;
    EmpRuleUpdateQueue = (__int64)(Pool2 + 1);
    if ( !EmpWorkerBusy )
    {
      _InterlockedExchange(&EmpWorkerBusy, 1);
      ExQueueWorkItem(&EmpRuleUpdateWorker, DelayedWorkQueue);
    }
  }
LABEL_14:
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)&EmpEvaluationQueueLock, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)&EmpEvaluationQueueLock);
  return KeAbPostRelease((ULONG_PTR)&EmpEvaluationQueueLock);
}
