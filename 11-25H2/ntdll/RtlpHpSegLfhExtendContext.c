/*
 * XREFs of RtlpHpSegLfhExtendContext @ 0x1800B7D20
 * Callers:
 *     RtlpHpLfhContextMetadataAllocate @ 0x180009AA4 (RtlpHpLfhContextMetadataAllocate.c)
 *     RtlpHpLfhContextStart @ 0x180034658 (RtlpHpLfhContextStart.c)
 *     RtlpHpLfhBucketActivate @ 0x1800B7B70 (RtlpHpLfhBucketActivate.c)
 *     RtlpHpVsContextStart @ 0x18011E4E4 (RtlpHpVsContextStart.c)
 *     RtlpHpVsSlotCreate @ 0x18011E5C0 (RtlpHpVsSlotCreate.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlpHpSegLfhExtendContext(__int64 a1, __int64 a2)
{
  return RtlpHpHeapExtendContext(*(_RTL_SRWLOCK **)(a1 + 56), a2);
}
