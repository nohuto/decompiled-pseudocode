/*
 * XREFs of RtlpHpSegVsAllocate @ 0x1402F84D0
 * Callers:
 *     RtlpHpLfhSubsegmentCreate @ 0x1402F792C (RtlpHpLfhSubsegmentCreate.c)
 *     RtlpHpVsSubsegmentCreate @ 0x1402F8374 (RtlpHpVsSubsegmentCreate.c)
 * Callees:
 *     RtlpHpSegSubAllocate @ 0x1402F84F4 (RtlpHpSegSubAllocate.c)
 */

__int64 __fastcall RtlpHpSegVsAllocate(int a1, int a2, int a3, __int64 a4)
{
  return RtlpHpSegSubAllocate(a1, a2, 201326592, a3, a4);
}
