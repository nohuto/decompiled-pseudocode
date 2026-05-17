/*
 * XREFs of RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011E484
 * Callers:
 *     RtlpHpHeapCompact @ 0x18000C974 (RtlpHpHeapCompact.c)
 *     RtlpHpReAllocateHeap @ 0x18002BF34 (RtlpHpReAllocateHeap.c)
 *     RtlpHpTagAllocateHeap @ 0x18002E060 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlpHpFreeHeap @ 0x180053AF0 (RtlpHpFreeHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x180054194 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpTagFreeHeap @ 0x1800818A0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpSegTlsCleanup @ 0x1800FCB90 (RtlpHpSegTlsCleanup.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011E180 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x180006DF0 (RtlpWaitOnAddress.c)
 */

__int64 __fastcall RtlpHpEnvAcquireGlobalLockSharedContended(unsigned int *a1, int a2)
{
  __int64 result; // rax
  __int64 v4; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v4) = a2;
  do
  {
    __writegsqword(0x1858u, 0LL);
    RtlpWaitOnAddress((unsigned __int64)a1, &v4, 4LL, 0LL, (unsigned int)RtlpWaitOnAddressSpinCycleCount, 0LL);
    __writegsqword(0x1858u, (unsigned __int64)a1);
    result = *a1;
    LODWORD(v4) = result;
  }
  while ( (result & 0x10) != 0 );
  return result;
}
