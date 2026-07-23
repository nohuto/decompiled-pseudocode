/*
 * XREFs of FlushLookUpTableBucket @ 0x140486ABC
 * Callers:
 *     LookUpTableFlushPartial @ 0x140A497B8 (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x140A498FC (LookUpTableFlushComplete.c)
 * Callees:
 *     ExfTryToWakePushLock @ 0x14028FFB0 (ExfTryToWakePushLock.c)
 *     ExAcquireSpinLockExclusive @ 0x14029EF70 (ExAcquireSpinLockExclusive.c)
 *     ExReleaseSpinLockExclusive @ 0x1402E6E40 (ExReleaseSpinLockExclusive.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x14031F1E0 (ExfAcquirePushLockExclusiveEx.c)
 *     KeAbPreAcquire @ 0x14031F730 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x1403627A0 (KeAbPostRelease.c)
 *     FlattenEventEntryTree @ 0x140486BC4 (FlattenEventEntryTree.c)
 *     FlushEventEntryList @ 0x140A41EEC (FlushEventEntryList.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbp
  unsigned __int64 *v5; // rdi
  KIRQL v6; // r15
  char *v7; // rax
  char *v8; // rsi
  const EVENT_DESCRIPTOR *v9; // r14
  unsigned int v10; // eax
  unsigned int v11; // ebp

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  v5 = (unsigned __int64 *)(a1 + 272);
  v6 = 0;
  v7 = (char *)KeAbPreAcquire(a1 + 272, 0LL);
  v8 = v7;
  if ( _interlockedbittestandset64((volatile signed __int32 *)v5, 0LL) )
    ExfAcquirePushLockExclusiveEx(v5, v7, (__int64)v5);
  if ( v8 )
    v8[10] = 1;
  if ( !*(_BYTE *)(a1 + 373) )
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280));
  v9 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v10 = FlattenEventEntryTree(v9);
  *(_DWORD *)(a1 + 256) -= v10;
  v11 = v10;
  if ( !*(_BYTE *)(a1 + 373) )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280), v6);
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)v5, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock((volatile signed __int64 *)v5);
  KeAbPostRelease((ULONG_PTR)v5);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 32LL), v9);
  return v11;
}
