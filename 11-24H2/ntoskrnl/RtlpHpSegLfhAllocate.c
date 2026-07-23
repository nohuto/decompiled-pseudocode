/*
 * XREFs of RtlpHpSegLfhAllocate @ 0x140368500
 * Callers:
 *     <none>
 * Callees:
 *     RtlpHpSegSubAllocate @ 0x140368214 (RtlpHpSegSubAllocate.c)
 */

__int64 __fastcall RtlpHpSegLfhAllocate(__int64 a1, unsigned int a2, _DWORD *a3, _DWORD *a4)
{
  return RtlpHpSegSubAllocate(a1, a2, 0x8000000u, a3, a4);
}
