/*
 * XREFs of RtlpHpLargeAllocSetExtraPresent @ 0x1800F5AF8
 * Callers:
 *     RtlpHpReallocMove @ 0x18002C3C0 (RtlpHpReallocMove.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 * Callees:
 *     RtlReleaseSRWLockShared @ 0x18004F120 (RtlReleaseSRWLockShared.c)
 *     RtlpHpLargeAllocGetMetadata @ 0x18009B4A0 (RtlpHpLargeAllocGetMetadata.c)
 *     RtlpHpLargeLockAcquireShared @ 0x1800F5B3C (RtlpHpLargeLockAcquireShared.c)
 */

__int64 __fastcall RtlpHpLargeAllocSetExtraPresent(__int64 a1, unsigned __int64 a2)
{
  unsigned __int64 Metadata; // rbx
  __int64 result; // rax

  RtlpHpLargeLockAcquireShared();
  Metadata = RtlpHpLargeAllocGetMetadata(a1, a2);
  result = RtlReleaseSRWLockShared((volatile signed __int64 *)(a1 + 64));
  *(_QWORD *)(Metadata + 32) |= 1uLL;
  return result;
}
