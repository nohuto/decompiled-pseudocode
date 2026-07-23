/*
 * XREFs of RtlpHpSegLfhExtendContext @ 0x1800D6AA0
 * Callers:
 *     RtlpHpLfhContextStart @ 0x1800D631C (RtlpHpLfhContextStart.c)
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800D6728 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhBucketActivate @ 0x1800D68F0 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpVsContextStart @ 0x18011AE84 (RtlpHpVsContextStart.c)
 *     RtlpHpVsSlotCreate @ 0x18011AF60 (RtlpHpVsSlotCreate.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpHpSegLfhExtendContext(__int64 a1)
{
  return RtlpHpHeapExtendContext(*(_QWORD *)(a1 + 56));
}
