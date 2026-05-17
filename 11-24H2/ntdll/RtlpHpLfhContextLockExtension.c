/*
 * XREFs of RtlpHpLfhContextLockExtension @ 0x1800A4E8C
 * Callers:
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x18004B3D8 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextLockUnlock @ 0x1800A4A18 (RtlpHpLfhContextLockUnlock.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1800A4C98 (RtlpHpLfhContextMetadataFree.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800A4DB4 (RtlpHpLfhContextMetadataAllocate.c)
 * Callees:
 *     RtlAcquireSRWLockExclusive @ 0x180055AE0 (RtlAcquireSRWLockExclusive.c)
 */

char __fastcall RtlpHpLfhContextLockExtension(__int64 a1, volatile signed __int32 **a2, unsigned __int64 a3)
{
  RtlAcquireSRWLockExclusive((volatile signed __int32 *)(a1 + 128), a2, a3);
  return -1;
}
