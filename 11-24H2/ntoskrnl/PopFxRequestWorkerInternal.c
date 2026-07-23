/*
 * XREFs of PopFxRequestWorkerInternal @ 0x1403AB3E4
 * Callers:
 *     PopFxRequestWorker @ 0x1405CF640 (PopFxRequestWorker.c)
 * Callees:
 *     KeReleaseSemaphoreEx @ 0x1403AB4BC (KeReleaseSemaphoreEx.c)
 *     ExpTryQueueWorkItem @ 0x1403AB6FC (ExpTryQueueWorkItem.c)
 */

__int64 __fastcall PopFxRequestWorkerInternal(__int64 a1, char a2)
{
  volatile signed __int32 *v3; // rbx
  __int64 result; // rax
  __int64 v5; // rsi
  __int64 v6; // [rsp+40h] [rbp+8h] BYREF

  if ( a1 )
  {
    v3 = (volatile signed __int32 *)(a1 + 120);
  }
  else
  {
    v3 = (volatile signed __int32 *)&PopFxSystemWorkPool;
    if ( (a2 & 1) != 0 )
      v3 = (volatile signed __int32 *)&PopFxNoFaultSystemWorkPool;
  }
  result = KeReleaseSemaphoreEx((PVOID)(v3 + 16), 8, (__int64)&v6);
  if ( !a1 || (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v5 = 0LL;
    do
    {
      _m_prefetchw((const void *)(v3 + 24));
      result = (unsigned int)_InterlockedOr(v3 + 24, 1 << v5);
      if ( ((unsigned int)result & (1 << v5)) == 0 )
      {
        result = ExpTryQueueWorkItem(*((_QWORD *)PspSystemPartition + 2), &v3[8 * v5 + 28 + 2 * (unsigned int)v5], 48LL);
        if ( (_BYTE)result )
          return result;
        _InterlockedAnd(v3 + 24, ~(1 << v5));
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < 4 );
  }
  return result;
}
