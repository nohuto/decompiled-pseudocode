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

void __cdecl RtlWakeAddressAll(PVOID Address)
{
  char v1; // dl
  signed __int32 v2[10]; // [rsp+0h] [rbp-28h] BYREF

  _InterlockedOr(v2, 0);
  v1 = 1;
  RtlpWakeByAddress(Address, v1, 0LL);
}
