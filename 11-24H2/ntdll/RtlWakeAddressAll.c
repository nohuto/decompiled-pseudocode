/*
 * XREFs of RtlWakeAddressAll @ 0x18002DCA0
 * Callers:
 *     RtlpReleaseDescriptorPseudoGlobalLock @ 0x180020978 (RtlpReleaseDescriptorPseudoGlobalLock.c)
 *     RtlpCSparseBitmapPageDecommit @ 0x18002EE00 (RtlpCSparseBitmapPageDecommit.c)
 *     RtlReleaseSwapReference @ 0x1800D1DBC (RtlReleaseSwapReference.c)
 *     RtlPosixBarrier @ 0x18013C118 (RtlPosixBarrier.c)
 *     RtlRcuReadUnlock @ 0x1801460D0 (RtlRcuReadUnlock.c)
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
