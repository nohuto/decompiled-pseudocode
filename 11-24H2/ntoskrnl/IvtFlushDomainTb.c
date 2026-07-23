/*
 * XREFs of IvtFlushDomainTb @ 0x1403721E0
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     IvtFlushTbInternal @ 0x140372B58 (IvtFlushTbInternal.c)
 */

__int64 __fastcall IvtFlushDomainTb(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  __int64 v8; // rdx

  *(_BYTE *)(a2 + 96) = HalpAcquireHighLevelLock((PKSPIN_LOCK)(a2 + 88));
  IvtFlushTbInternal(a1, 0, 0, a2, 1, 0LL, a2 + 56, a4, a5);
  LOBYTE(v8) = *(_BYTE *)(a2 + 96);
  return HalpReleaseHighLevelLock(a2 + 88, v8);
}
