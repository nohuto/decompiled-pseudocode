/*
 * XREFs of RtlpHpSegLfhExtendContext @ 0x1404A7680
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapExtendContext @ 0x1404A769C (RtlpHpHeapExtendContext.c)
 */

__int64 __fastcall RtlpHpSegLfhExtendContext(__int64 a1)
{
  return RtlpHpHeapExtendContext(*(_QWORD *)(a1 + 56));
}
