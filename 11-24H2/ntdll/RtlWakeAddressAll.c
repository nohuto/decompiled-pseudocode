/*
 * XREFs of RtlWakeAddressAll @ 0x180098E50
 * Callers:
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180040048 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x180099FB0 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlReleaseSwapReference @ 0x1800D6A4C (RtlReleaseSwapReference.c)
 *     RtlPosixBarrier @ 0x18013DF28 (RtlPosixBarrier.c)
 *     RtlRcuReadUnlock @ 0x180147D20 (RtlRcuReadUnlock.c)
 * Callees:
 *     <none>
 */

signed __int64 __fastcall RtlWakeAddressAll(unsigned __int64 a1)
{
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v2, 0);
  return RtlpWakeByAddress(a1, 1, 0LL);
}
