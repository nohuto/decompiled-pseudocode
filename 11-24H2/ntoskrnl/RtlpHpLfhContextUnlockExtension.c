/*
 * XREFs of RtlpHpLfhContextUnlockExtension @ 0x14060694C
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x1402B6D78 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x14049CB38 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B9584 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1404B96F4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextMetadataFree @ 0x140606834 (RtlpHpLfhContextMetadataFree.c)
 * Callees:
 *     RtlpHpReleaseLockExclusive @ 0x1402B9650 (RtlpHpReleaseLockExclusive.c)
 */

void __fastcall RtlpHpLfhContextUnlockExtension(__int64 a1, unsigned __int8 a2)
{
  RtlpHpReleaseLockExclusive(a1 + 128, *(unsigned __int8 *)(a1 + 65), a2);
}
