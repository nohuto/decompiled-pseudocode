/*
 * XREFs of SepReleaseOrderedReadLocks @ 0x140455508
 * Callers:
 *     SeCompareTokens @ 0x140A18FB8 (SeCompareTokens.c)
 *     SepIsSiblingTokenByPointer @ 0x140A2AE88 (SepIsSiblingTokenByPointer.c)
 * Callees:
 *     ExReleaseResourceLite @ 0x140296E10 (ExReleaseResourceLite.c)
 *     KeLeaveCriticalRegionThread @ 0x14029B9C0 (KeLeaveCriticalRegionThread.c)
 */

__int64 __fastcall SepReleaseOrderedReadLocks(__int64 a1, __int64 a2)
{
  ExReleaseResourceLite(*(PERESOURCE *)(a1 + 48));
  KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
  ExReleaseResourceLite(*(PERESOURCE *)(a2 + 48));
  return KeLeaveCriticalRegionThread((__int64)KeGetCurrentThread());
}
