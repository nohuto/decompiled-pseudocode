/*
 * XREFs of RtlpHpSegVsAllocate @ 0x1402C07E0
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x1402B52CC (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpVsSubsegmentCreate @ 0x1402C03D4 (RtlpHpVsSubsegmentCreate.c)
 * Callees:
 *     RtlpHpSegSubAllocate @ 0x1402C0804 (RtlpHpSegSubAllocate.c)
 */

__int64 __fastcall RtlpHpSegVsAllocate(int a1, int a2, int a3, __int64 a4)
{
  return RtlpHpSegSubAllocate(a1, a2, 201326592, a3, a4);
}
