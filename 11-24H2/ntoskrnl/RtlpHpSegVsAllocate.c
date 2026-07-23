/*
 * XREFs of RtlpHpSegVsAllocate @ 0x1403681F0
 * Callers:
 *     RtlpHpVsSubsegmentCreate @ 0x140367D08 (RtlpHpVsSubsegmentCreate.c)
 * Callees:
 *     RtlpHpSegSubAllocate @ 0x140368214 (RtlpHpSegSubAllocate.c)
 */

__int64 __fastcall RtlpHpSegVsAllocate(int a1, int a2, int a3, __int64 a4)
{
  return RtlpHpSegSubAllocate(a1, a2, 201326592, a3, a4);
}
