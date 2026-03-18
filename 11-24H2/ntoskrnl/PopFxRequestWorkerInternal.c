/*
 * XREFs of PopFxRequestWorkerInternal @ 0x1402A142C
 * Callers:
 *     PopFxRequestWorker @ 0x1405D1F20 (PopFxRequestWorker.c)
 * Callees:
 *     ExpTryQueueWorkItem @ 0x1402A0DCC (ExpTryQueueWorkItem.c)
 *     KeReleaseSemaphoreEx @ 0x1402A1600 (KeReleaseSemaphoreEx.c)
 */

char __fastcall PopFxRequestWorkerInternal(__int64 a1, char a2)
{
  volatile signed __int32 *v3; // rbx
  signed __int32 v4; // eax
  __int64 v5; // rsi
  __int64 v7; // [rsp+40h] [rbp+8h] BYREF

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
  LOBYTE(v4) = KeReleaseSemaphoreEx((PVOID)(v3 + 16), 8, (__int64)&v7);
  if ( !a1 || (*(_BYTE *)(a1 + 24) & 1) != 0 )
  {
    v5 = 0LL;
    do
    {
      _m_prefetchw((const void *)(v3 + 24));
      v4 = _InterlockedOr(v3 + 24, 1 << v5);
      if ( (v4 & (1 << v5)) == 0 )
      {
        LOBYTE(v4) = ExpTryQueueWorkItem(
                       *((_QWORD *)PspSystemPartition + 2),
                       &v3[8 * v5 + 28 + 2 * (unsigned int)v5],
                       48,
                       0);
        if ( (_BYTE)v4 )
          return v4;
        _InterlockedAnd(v3 + 24, ~(1 << v5));
      }
      v5 = (unsigned int)(v5 + 1);
    }
    while ( (unsigned int)v5 < 4 );
  }
  return v4;
}
