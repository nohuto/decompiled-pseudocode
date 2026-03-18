/*
 * XREFs of RtlpHpLfhContextUnlockExtension @ 0x1405FA60C
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1403C89FC (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1404A0110 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404BA624 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1404BA794 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextMetadataFree @ 0x1405FA4F4 (RtlpHpLfhContextMetadataFree.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x14031FBD0 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpLfhContextUnlockExtension(__int64 a1, unsigned __int8 a2)
{
  RtlpHpReleaseLockExclusive(a1 + 128, *(unsigned __int8 *)(a1 + 65), a2);
}
