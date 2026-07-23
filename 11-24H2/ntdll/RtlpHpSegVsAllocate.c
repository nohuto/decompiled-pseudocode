/*
 * XREFs of RtlpHpSegVsAllocate @ 0x1800EE0C0
 * Callers:
 *     RtlpHpVsSubsegmentCreate @ 0x180065860 (RtlpHpVsSubsegmentCreate.c)
 *     RtlpHpLfhSubsegmentCreate @ 0x1800669B0 (RtlpHpLfhSubsegmentCreate.c)
 * Callees:
 *     RtlpHpSegSubAllocate @ 0x180066E50 (RtlpHpSegSubAllocate.c)
 */

__int64 __fastcall RtlpHpSegVsAllocate(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  return RtlpHpSegSubAllocate(a1, a2, 201326592, a3, a4);
}
