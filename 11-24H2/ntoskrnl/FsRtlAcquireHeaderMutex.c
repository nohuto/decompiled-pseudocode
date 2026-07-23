/*
 * XREFs of FsRtlAcquireHeaderMutex @ 0x14031D7D0
 * Callers:
 *     FsRtlpWaitForIoAtEof @ 0x1402E1598 (FsRtlpWaitForIoAtEof.c)
 * Callees:
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

volatile signed __int32 *__fastcall FsRtlAcquireHeaderMutex(__int64 a1, volatile signed __int32 *a2)
{
  __int64 v2; // rbx
  __int64 v3; // rsi
  unsigned __int8 CurrentIrql; // r15
  int v5; // ebp
  __int64 v6; // rdi
  int i; // r14d
  signed __int32 v8; // eax
  signed __int32 v9; // ett
  signed __int32 v10; // ett
  volatile signed __int32 *result; // rax

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v3 = KeAbPreAcquire(v2, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v5 = 1;
  __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v2, 0) )
  {
    ++*(_DWORD *)(v2 + 16);
    v6 = v3;
    for ( i = 4; ; i = 2 )
    {
      v8 = *(_DWORD *)v2;
      do
      {
        while ( (v8 & 1) != 0 )
        {
          v10 = v8;
          v8 = _InterlockedCompareExchange((volatile signed __int32 *)v2, v5 ^ v8, v8);
          if ( v10 == v8 )
            goto LABEL_13;
        }
        v9 = v8;
        v8 = _InterlockedCompareExchange((volatile signed __int32 *)v2, i + v8, v8);
      }
      while ( v9 != v8 );
      if ( v6 )
        KeAbPreWait(v6);
      KeWaitForSingleObject((PVOID)(v2 + 24), WrFastMutex, 0, 0, 0LL);
      _m_prefetchw((const void *)v2);
      v5 = 3;
      if ( v6 )
        v6 = KeAbPreAcquire(v2, v6, 0LL);
    }
  }
LABEL_13:
  if ( v3 )
    *(_BYTE *)(v3 + 10) = 1;
  *(_QWORD *)(v2 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v2 + 48) = CurrentIrql;
  result = a2;
  if ( a2 )
  {
    result = a2;
    _InterlockedIncrement(a2);
  }
  return result;
}
