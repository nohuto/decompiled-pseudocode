/*
 * XREFs of FlushLookUpTableBucket @ 0x140046310
 * Callers:
 *     LookUpTableFlushPartial @ 0x14008F7C4 (LookUpTableFlushPartial.c)
 *     LookUpTableFlushComplete @ 0x14010679C (LookUpTableFlushComplete.c)
 * Callees:
 *     FlattenEventEntryTree @ 0x14004BBB4 (FlattenEventEntryTree.c)
 *     FlushEventEntryList @ 0x1400910E0 (FlushEventEntryList.c)
 */

__int64 __fastcall FlushLookUpTableBucket(__int64 a1, unsigned int a2)
{
  __int64 v2; // rdi
  __int64 v5; // r15
  KIRQL v6; // si
  __int64 v7; // r14
  unsigned int v8; // eax
  unsigned int v9; // edi

  v2 = a2;
  if ( !*(_QWORD *)(a1 + 8LL * a2) )
    return 0LL;
  v5 = a1 + 272;
  v6 = 0;
  ExAcquirePushLockExclusiveEx(a1 + 272, 0LL);
  if ( !*(_BYTE *)(a1 + 373) )
    v6 = ExAcquireSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280));
  v7 = *(_QWORD *)(a1 + 8 * v2);
  *(_QWORD *)(a1 + 8 * v2) = 0LL;
  v8 = FlattenEventEntryTree(v7);
  *(_DWORD *)(a1 + 256) -= v8;
  v9 = v8;
  if ( !*(_BYTE *)(a1 + 373) )
    ExReleaseSpinLockExclusive((PEX_SPIN_LOCK)(a1 + 280), v6);
  ExReleasePushLockExclusiveEx(v5, 0LL);
  FlushEventEntryList(*(_QWORD *)(*(_QWORD *)(a1 + 344) + 32LL));
  return v9;
}
