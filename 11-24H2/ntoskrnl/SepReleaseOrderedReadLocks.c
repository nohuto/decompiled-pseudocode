/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x14044A464
 * Callers:
 *     SeCompareTokens @ 0x140A179B8 (SeCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x140A25848 (SepIsSiblingTokenByPointer.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x140289BB0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14028AA60 (ExReleaseResourceLite.c)
 */

__int64 __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  return KeLeaveCriticalRegionThread();
}
