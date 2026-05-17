/*
 * XREFs of RtlWakeAddressAll @ 0x1800044C0
 * Callers:
 *     RtlpCSparseBitmapPageDecommit @ 0x180005620 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180093A38 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlReleaseSwapReference @ 0x18009F094 (RtlReleaseSwapReference.c)
 *     RtlPosixBarrier @ 0x18013F658 (RtlPosixBarrier.c)
 *     RtlRcuReadUnlock @ 0x1801492D0 (RtlRcuReadUnlock.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlWakeAddressAll(__int64 a1, __int64 a2)
{
  signed __int32 v3[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v3, 0);
  LOBYTE(a2) = 1;
  return RtlpWakeByAddress(a1, a2, 0LL);
}
