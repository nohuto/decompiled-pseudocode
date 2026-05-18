/*
 * XREFs of sub_1800177FC @ 0x1800177FC
 * Callers:
 *     sub_1800152E8 @ 0x1800152E8 (sub_1800152E8.c)
 *     sub_18006A1A0 @ 0x18006A1A0 (sub_18006A1A0.c)
 *     sub_18008ADC0 @ 0x18008ADC0 (sub_18008ADC0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_1800177FC(__int64 a1, __int64 a2)
{
  return (unsigned int)_std_type_info_compare(a1 + 8, a2 + 8) != 0;
}
