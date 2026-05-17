/*
 * XREFs of RtlpHpSegLfhExtendContext @ 0x1800A5130
 * Callers:
 *     RtlpHpLfhContextMetadataAllocate @ 0x1800A4DB4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhBucketActivate @ 0x1800A4F80 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpLfhContextStart @ 0x1800A5818 (RtlpHpLfhContextStart.c)
 *     RtlpHpVsContextStart @ 0x18011CC54 (RtlpHpVsContextStart.c)
 *     RtlpHpVsSlotCreate @ 0x18011CD30 (RtlpHpVsSlotCreate.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpSegLfhExtendContext(__int64 a1, __int64 a2)
{
  return RtlpHpHeapExtendContext(*(__m128i **)(a1 + 56), a2);
}
