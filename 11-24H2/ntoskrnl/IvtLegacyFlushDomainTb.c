/*
 * XREFs of IvtLegacyFlushDomainTb @ 0x14056D530
 * Callers:
 *     <none>
 * Callees:
 *     HalpReleaseHighLevelLock @ 0x140372268 (HalpReleaseHighLevelLock.c)
 *     HalpAcquireHighLevelLock @ 0x1403729A0 (HalpAcquireHighLevelLock.c)
 *     IvtLegacyFlushTbInternal @ 0x14056D5F8 (IvtLegacyFlushTbInternal.c)
 */

__int64 __fastcall IvtLegacyFlushDomainTb(int a1, __int64 a2, __int64 a3, int a4, __int64 a5)
{
  int v8; // r9d

  *(_BYTE *)(a2 + 96) = HalpAcquireHighLevelLock((PKSPIN_LOCK)(a2 + 88));
  LOBYTE(v8) = 1;
  IvtLegacyFlushTbInternal(a1, 0, a2, v8, 0LL, a2 + 56, a4, a5);
  return HalpReleaseHighLevelLock((volatile signed __int64 *)(a2 + 88), *(_BYTE *)(a2 + 96));
}
