/*
 * XREFs of EmpQueueRuleUpdateState @ 0x14057BEE0
 * Callers:
 *     EmpProviderDeregisterEntry @ 0x14057BE50 (EmpProviderDeregisterEntry.c)
 *     EmpClientRuleRegisterNotification @ 0x1406FD804 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x1406FDA80 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x1406FDD20 (EmProviderRegisterEntry.c)
 *     EmpProviderRegister @ 0x140AAEEF0 (EmpProviderRegister.c)
 * Callees:
 *     ExfAcquirePushLockExclusiveEx @ 0x14029AB60 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14029B110 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14029BE00 (KeAbPostRelease.c)
 *     ExQueueWorkItem @ 0x140309660 (ExQueueWorkItem.c)
 *     ExfTryToWakePushLock @ 0x1403D62D0 (ExfTryToWakePushLock.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EmpQueueRuleUpdateState(__int64 a1, __int64 a2)
{
  __int64 *v4; // rax
  signed __int8 v5; // cf
  __int64 *v6; // rbx
  _QWORD *i; // rax
  _QWORD *Pool2; // rax

  v4 = KeAbPreAcquire((__int64)&EmpEvaluationQueueLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, v4, (__int64)&EmpEvaluationQueueLock);
  if ( v6 )
    *((_BYTE *)v6 + 10) = 1;
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
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL);
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
