/*
 * XREFs of RtlpHpLfhContextLockExtension @ 0x140606780
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x14049CB38 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B9584 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1404B96F4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextMetadataFree @ 0x140606834 (RtlpHpLfhContextMetadataFree.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x14020D790 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpLfhContextLockExtension(__int64 a1, __int64 a2, __int64 a3)
{
  return RtlpHpAcquireLockExclusive((int *)(a1 + 128), *(unsigned __int8 *)(a1 + 65), a3);
}
