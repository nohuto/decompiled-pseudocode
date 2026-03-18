/*
 * XREFs of EmpQueueRuleUpdateState @ 0x14057F200
 * Callers:
 *     EmpProviderDeregisterEntry @ 0x14057F170 (EmpProviderDeregisterEntry.c)
 *     EmpClientRuleRegisterNotification @ 0x1407096E4 (EmpClientRuleRegisterNotification.c)
 *     EmProviderDeregister @ 0x140709960 (EmProviderDeregister.c)
 *     EmProviderRegisterEntry @ 0x140709C00 (EmProviderRegisterEntry.c)
 *     EmpProviderRegister @ 0x140AB3EE0 (EmpProviderRegister.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14025F9A0 (ExfTryToWakePushLock.c)
 *     KeAbPostRelease @ 0x1402BB060 (KeAbPostRelease.c)
 *     ExQueueWorkItem @ 0x140325850 (ExQueueWorkItem.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14033FD00 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EmpQueueRuleUpdateState(__int64 a1, __int64 a2)
{
  _QWORD *v4; // rax
  signed __int8 v5; // cf
  _QWORD *v6; // rbx
  _QWORD *i; // rax
  _QWORD *Pool2; // rax

  v4 = KeAbPreAcquire((__int64)&EmpEvaluationQueueLock, 0LL);
  v5 = _interlockedbittestandset64((volatile signed __int32 *)&EmpEvaluationQueueLock, 0LL);
  v6 = v4;
  if ( v5 )
    ExfAcquirePushLockExclusiveEx(&EmpEvaluationQueueLock, (__int64)v4, (__int64)&EmpEvaluationQueueLock);
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
