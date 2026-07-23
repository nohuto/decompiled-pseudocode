/*
 * XREFs of LdrpWorkCallback @ 0x1800E6AB0
 * Callers:
 *     <none>
 * Callees:
 *     RtlEnterCriticalSection @ 0x1800412F0 (RtlEnterCriticalSection.c)
 *     RtlLeaveCriticalSection @ 0x1800413F0 (RtlLeaveCriticalSection.c)
 *     LdrpProcessWork @ 0x18004E860 (LdrpProcessWork.c)
 *     LdrpThreadTokenSetImpersonationToken @ 0x18004EC5C (LdrpThreadTokenSetImpersonationToken.c)
 *     LdrpUpdateStatistics @ 0x18004F56C (LdrpUpdateStatistics.c)
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
      v3 = (int)LdrpThreadTokenSetImpersonationToken((__int64)LdrpMainThreadToken) >= 0;
    LdrpProcessWork((__int64)(v4 - 8), 0);
  }
  if ( v3 )
    LdrpThreadTokenSetImpersonationToken(0LL);
}
