/*
 * XREFs of PsSynchronizeWithThreadInsertion @ 0x14093B8E4
 * Callers:
 *     DbgkpPostFakeThreadMessages @ 0x140939BE0 (DbgkpPostFakeThreadMessages.c)
 *     NtGetNextThread @ 0x14093B590 (NtGetNextThread.c)
 * Callees:
 *     KiLeaveCriticalRegionUnsafe @ 0x1402595C0 (KiLeaveCriticalRegionUnsafe.c)
 *     ExfAcquireReleasePushLockExclusive @ 0x140418A5C (ExfAcquireReleasePushLockExclusive.c)
 */

_QWORD *__fastcall PsSynchronizeWithThreadInsertion(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned __int64 *v5; // rcx
  signed __int32 v7[10]; // [rsp+0h] [rbp-28h] BYREF

  --*(_WORD *)(a2 + 484);
  v5 = (unsigned __int64 *)(a1 + 1424);
  _InterlockedOr(v7, 0);
  if ( (*v5 & 1) != 0 )
    ExfAcquireReleasePushLockExclusive(v5);
  return KiLeaveCriticalRegionUnsafe(a2, a2, a3, a4);
}
