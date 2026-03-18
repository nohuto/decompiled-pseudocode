/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x1404556B4
 * Callers:
 *     SeCompareTokens @ 0x140A235A8 (SeCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x140A318CC (SepIsSiblingTokenByPointer.c)
 * Callees:
 *     KeLeaveCriticalRegionThread @ 0x1402595A0 (KeLeaveCriticalRegionThread.c)
 *     ExReleaseResourceLite @ 0x14025A450 (ExReleaseResourceLite.c)
 */

__int64 __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread();
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  return KeLeaveCriticalRegionThread();
}
