/*
 * XREFs of RtlpHpEnvAcquireGlobalLockSharedContended @ 0x18011CBF4
 * Callers:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpHpTagFreeHeap @ 0x1800274C0 (RtlpHpTagFreeHeap.c)
 *     RtlpHpFreeHeap @ 0x18002B020 (RtlpHpFreeHeap.c)
 *     RtlpHpFreeHeapSlow @ 0x18002B6C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpHpHeapCompact @ 0x180050D34 (RtlpHpHeapCompact.c)
 *     RtlpHpTagAllocateHeap @ 0x180094EF0 (RtlpHpTagAllocateHeap.c)
 *     RtlpHpReAllocateHeap @ 0x1800A2F84 (RtlpHpReAllocateHeap.c)
 *     RtlpHpSegTlsCleanup @ 0x1800A43A0 (RtlpHpSegTlsCleanup.c)
 *     RtlpHpAllocateHeapSlow @ 0x1800ACEF0 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011C8F0 (RtlpHpReAllocateHeapSlow.c)
 * Callees:
 *     RtlpWaitOnAddress @ 0x18009B780 (RtlpWaitOnAddress.c)
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
