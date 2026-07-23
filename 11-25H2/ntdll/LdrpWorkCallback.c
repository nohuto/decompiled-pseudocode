/*
 * XREFs of LdrpWorkCallback @ 0x18006F910
 * Callers:
 *     <none>
 * Callees:
 *     LdrpUpdateStatistics @ 0x18006F9F4 (LdrpUpdateStatistics.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x18006FA38 (LdrpThreadTokenSetImpersonationToken.c)
 *     LdrpProcessWork @ 0x18006FC70 (LdrpProcessWork.c)
 *     RtlEnterCriticalSection @ 0x18007BF00 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x18007C000 (RtlLeaveCriticalSection.c)
 */

void __fastcall LdrpWorkCallback(PTP_CALLBACK_INSTANCE a1, PVOID a2, PTP_WORK a3)
{
  bool v3; // di
  __int64 *v4; // rbx
  __int64 v5; // rax

  v3 = 0;
  while ( !LdrpDetourExist )
  {
    RtlEnterCriticalSection(&LdrpWorkQueueLock);
    v4 = (__int64 *)LdrpWorkQueue;
    if ( *(__int64 **)(LdrpWorkQueue + 8) != &LdrpWorkQueue
      || (v5 = *(_QWORD *)LdrpWorkQueue, *(_QWORD *)(*(_QWORD *)LdrpWorkQueue + 8LL) != LdrpWorkQueue) )
    {
      __fastfail(3u);
    }
    LdrpWorkQueue = *(_QWORD *)LdrpWorkQueue;
    *(_QWORD *)(v5 + 8) = &LdrpWorkQueue;
    if ( &LdrpWorkQueue != v4 )
    {
      ++LdrpWorkInProgress;
      LdrpUpdateStatistics();
    }
    RtlLeaveCriticalSection(&LdrpWorkQueueLock);
    if ( &LdrpWorkQueue == v4 )
      break;
    if ( !v3 && LdrpMainThreadToken )
      v3 = (int)LdrpThreadTokenSetImpersonationToken(LdrpMainThreadToken) >= 0;
    LdrpProcessWork(v4 - 8, 0LL);
  }
  if ( v3 )
    LdrpThreadTokenSetImpersonationToken(0LL);
}
