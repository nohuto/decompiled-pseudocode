/*
 * XREFs of RtlpHpLfhContextLockExtension @ 0x1405FA440
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1404A0110 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404BA624 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1404BA794 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1405FA4F4 (RtlpHpLfhContextMetadataFree.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140212CB0 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpLfhContextLockExtension(__int64 a1)
{
  return RtlpHpAcquireLockExclusive((int *)(a1 + 128), *(unsigned __int8 *)(a1 + 65));
}
