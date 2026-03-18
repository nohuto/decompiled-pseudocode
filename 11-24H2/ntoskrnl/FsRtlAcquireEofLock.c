/*
 * XREFs of FsRtlAcquireEofLock @ 0x14040D140
 * Callers:
 *     <none>
 * Callees:
 *     KeReleaseGuardedMutex @ 0x14031E470 (KeReleaseGuardedMutex.c)
 *     KeAbPreWait @ 0x14033E810 (KeAbPreWait.c)
 *     KeWaitForSingleObject @ 0x14033E960 (KeWaitForSingleObject.c)
 *     KeAbPreAcquire @ 0x140340250 (KeAbPreAcquire.c)
 *     FsRtlpWaitForIoAtEof @ 0x14040D308 (FsRtlpWaitForIoAtEof.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __fastcall FsRtlAcquireEofLock(__int64 a1, volatile signed __int32 *a2)
{
  struct _KTHREAD *CurrentThread; // r14
  __int64 v4; // rbx
  _QWORD *v5; // rbp
  __int64 v6; // r8
  unsigned __int8 CurrentIrql; // r13
  __int64 v8; // rdx
  _QWORD *v9; // rsi
  int v10; // r12d
  int i; // r15d
  signed __int32 v12; // eax
  signed __int32 v13; // ett
  signed __int32 v14; // ett

  CurrentThread = KeGetCurrentThread();
  v4 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 48LL);
  v5 = KeAbPreAcquire(v4, 0LL);
  CurrentIrql = KeGetCurrentIrql();
  v8 = 1LL;
  __writecr8(1uLL);
  if ( KiIrqlFlags )
  {
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 1LL);
    v8 = 1LL;
  }
  if ( !_interlockedbittestandreset((volatile signed __int32 *)v4, 0) )
  {
    ++*(_DWORD *)(v4 + 16);
    v9 = v5;
    v10 = 1;
    for ( i = 4; ; i = 2 )
    {
      v12 = *(_DWORD *)v4;
      do
      {
        while ( (v12 & 1) != 0 )
        {
          v14 = v12;
          v12 = _InterlockedCompareExchange((volatile signed __int32 *)v4, v10 ^ v12, v12);
          if ( v14 == v12 )
            goto LABEL_13;
        }
        v13 = v12;
        v12 = _InterlockedCompareExchange((volatile signed __int32 *)v4, i + v12, v12);
      }
      while ( v13 != v12 );
      if ( v9 )
        KeAbPreWait((__int64)v9, v8, v6);
      KeWaitForSingleObject((PVOID)(v4 + 24), WrFastMutex, 0, 0, 0LL);
      _m_prefetchw((const void *)v4);
      v10 = 3;
      if ( v9 )
        v9 = KeAbPreAcquire(v4, (__int64)v9);
    }
  }
LABEL_13:
  if ( v5 )
    *((_BYTE *)v5 + 10) = 1;
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
