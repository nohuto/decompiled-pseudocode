/*
 * XREFs of LdrpWorkCallback @ 0x1800EAD70
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800148F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800149F0 (RtlLeaveCriticalSection.c)
 *     LdrpProcessWork @ 0x180021E60 (LdrpProcessWork.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x18002225C (LdrpThreadTokenSetImpersonationToken.c)
 *     LdrpUpdateStatistics @ 0x180022B6C (LdrpUpdateStatistics.c)
 */

void LdrpWorkCallback()
{
  bool v0; // di
  __int64 *v1; // rbx
  __int64 v2; // rax

  v0 = 0;
  while ( !LdrpDetourExist )
  {
    RtlEnterCriticalSection((__int64)&LdrpWorkQueueLock);
    v1 = (__int64 *)LdrpWorkQueue;
    if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue
      || (v2 = *(_QWORD *)LdrpWorkQueue, *(_QWORD *)(*(_QWORD *)LdrpWorkQueue + 8LL) != LdrpWorkQueue) )
    {
      __fastfail(3u);
    }
    LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
    *(_QWORD *)(v2 + 8) = &LdrpWorkQueue;
    if ( &LdrpWorkQueue != v1 )
    {
      ++LdrpWorkInProgress;
      LdrpUpdateStatistics();
    }
    RtlLeaveCriticalSection((__int64)&LdrpWorkQueueLock);
    if ( &LdrpWorkQueue == v1 )
      break;
    if ( !v0 && LdrpMainThreadToken )
      v0 = (int)LdrpThreadTokenSetImpersonationToken((__int64)LdrpMainThreadToken) >= 0;
    LdrpProcessWork((__int64)(v1 - 8), 0);
  }
  if ( v0 )
    LdrpThreadTokenSetImpersonationToken(0LL);
}
