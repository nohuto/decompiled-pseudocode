/*
 * XREFs of RtlpHpSegLfhAllocate @ 0x1402F8350
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegSubAllocate @ 0x1402F84F4 (RtlpHpSegSubAllocate.c)
 */

__int64 __fastcall RtlpHpSegLfhAllocate(int a1, int a2, int a3, __int64 a4)
{
  return RtlpHpSegSubAllocate(a1, a2, 0x8000000, a3, a4);
}
