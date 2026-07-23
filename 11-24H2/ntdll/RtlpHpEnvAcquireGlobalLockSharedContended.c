/*
 * XREFs of RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011AE24
 * Callers:
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpHpTagFreeHeap @ 0x180053EC0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x180057A20 (RtlpHpFreeHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x1800580C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpReAllocateHeap @ 0x18005CD30 (RtlpHpReAllocateHeap.c)
 *     RtlpHpHeapCompact @ 0x180066914 (RtlpHpHeapCompact.c)
 *     RtlpHpTagAllocateHeap @ 0x180083CE0 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpSegTlsCleanup @ 0x1800D5F50 (RtlpHpSegTlsCleanup.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011AB20 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x1800305D0 (RtlpWaitOnAddress.c)
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
