/*
 * XREFs of FsRtlAcquireEofLock @ 0x1402E13D0
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x1402C7000 (KeReleaseGuardedMutex.c)
 *     FsRtlpWaitForIoAtEof @ 0x1402E1598 (FsRtlpWaitForIoAtEof.c)
 *     KeAbPreWait @ 0x14031DCF0 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14031DE40 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall FsRtlAcquireEofLock(__int64 a1, volatile signed __int32 *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rbx
  __int64 v5; // rbp
  unsigned __int8 CurrentIrql; // r13
  __int64 v7; // rsi
  int v8; // r12d
  int i; // r15d
  signed __int32 v10; // eax
  signed __int32 v11; // ett
  signed __int32 v12; // ett

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v5 = KeAbPreAcquire(v4, 0LL, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(1uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
  {
    ++*(_DWORD *)(v4 + 16);
    v7 = v5;
    v8 = 1;
    for ( i = 4; ; i = 2 )
    {
      v10 = *(_DWORD *)v4;
      do
      {
        while ( (v10 & 1) != 0 )
        {
          v12 = v10;
          v10 = _InterlockedCompareExchange((volatile signed __int32 *)v4, v8 ^ v10, v10);
          if ( v12 == v10 )
            goto LABEL_13;
        }
        v11 = v10;
        v10 = _InterlockedCompareExchange((volatile signed __int32 *)v4, i + v10, v10);
      }
      while ( v11 != v10 );
      if ( v7 )
        KeAbPreWait(v7);
      KeWaitForSingleObject((PVOID)(v4 + 24), WrFastMutex, 0, 0, 0LL);
      _m_prefetchw((const void *)v4);
      v8 = 3;
      if ( v7 )
        v7 = KeAbPreAcquire(v4, v7, 0LL);
    }
  }
LABEL_13:
  if ( v5 )
    *(_BYTE *)(v5 + 10) = 1;
  *(_QWORD *)(v4 + 8) = KeGetCurrentThread();
  *(_DWORD *)(v4 + 48) = CurrentIrql;
  if ( a2 )
    _InterlockedIncrement(a2);
  if ( *(struct _KTHREAD **)a1 == CurrentThread )
  {
    ++*(_WORD *)(a1 + 38);
  }
  else if ( *(_QWORD *)a1 )
  {
    FsRtlpWaitForIoAtEof(a1, a2, -1LL);
  }
  else
  {
    *(_QWORD *)a1 = CurrentThread;
    *(_WORD *)(a1 + 38) = 1;
  }
  if ( a2 )
    _InterlockedIncrement(a2);
  KeReleaseGuardedMutex(*(PKGUARDED_MUTEX *)(*(_QWORD *)(a1 + 24) + 48LL));
}
