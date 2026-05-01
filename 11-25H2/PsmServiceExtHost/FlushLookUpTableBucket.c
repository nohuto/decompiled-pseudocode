/*
 * XREFs of FlushLookUpTableBucket @ 0x180064498
 * Callers:
 *     LookUpTableFlushComplete @ 0x1800640EC (LookUpTableFlushComplete.c)
 *     LookUpTableFlushPartial @ 0x180091880 (LookUpTableFlushPartial.c)
 * Callees:
 *     FlattenEventEntryTree @ 0x180064530 (FlattenEventEntryTree.c)
 *     FlushEventEntryList @ 0x180064578 (FlushEventEntryList.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  RTL_SRWLOCK *v4; // rdi
  const EVENT_DESCRIPTOR *v5; // rsi
  unsigned int v6; // eax
  unsigned int v7; // ebx

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  v4 = (RTL_SRWLOCK *)(a1 + 264);
  AcquireSRWLockExclusive((PSRWLOCK)(a1 + 264));
  v5 = *(const EVENT_DESCRIPTOR **)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v6 = FlattenEventEntryTree(v5);
  *(_DWORD *)(a1 + 256) -= v6;
  v7 = v6;
  ReleaseSRWLockExclusive(v4);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 328) + 32LL), v5);
  return v7;
}
