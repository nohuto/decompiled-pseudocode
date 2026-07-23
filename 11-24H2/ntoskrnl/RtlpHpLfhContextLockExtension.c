/*
 * XREFs of RtlpHpLfhContextLockExtension @ 0x140603DC0
 * Callers:
 *     RtlpHpLfhSlotAllocateSlow @ 0x14035EE00 (RtlpHpLfhSlotAllocateSlow.c)
 *     RtlpHpLfhContextSlotStandbyProcess @ 0x1404977E0 (RtlpHpLfhContextSlotStandbyProcess.c)
 *     RtlpHpLfhContextSlotAllocate @ 0x1404B4424 (RtlpHpLfhContextSlotAllocate.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1404B4594 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextMetadataFree @ 0x140603E74 (RtlpHpLfhContextMetadataFree.c)
 * Callees:
 *     RtlpHpAcquireLockExclusive @ 0x140336AF0 (RtlpHpAcquireLockExclusive.c)
 */

char __fastcall RtlpHpLfhContextLockExtension(__int64 a1)
{
  return RtlpHpAcquireLockExclusive((int *)(a1 + 128), *(unsigned __int8 *)(a1 + 65));
}
