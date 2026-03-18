/*
 * XREFs of RtlpHpSegLfhExtendContext @ 0x1404A8020
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpHeapExtendContext @ 0x1404A803C (RtlpHpHeapExtendContext.c)
 */

__int64 __fastcall RtlpHpSegLfhExtendContext(__int64 a1)
{
  return RtlpHpHeapExtendContext(*(_QWORD *)(a1 + 56));
}
