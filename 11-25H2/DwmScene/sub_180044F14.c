/*
 * XREFs of sub_180044F14 @ 0x180044F14
 * Callers:
 *     sub_180056CE0 @ 0x180056CE0 (sub_180056CE0.c)
 *     sub_1800577C8 @ 0x1800577C8 (sub_1800577C8.c)
 *     sub_18006AE18 @ 0x18006AE18 (sub_18006AE18.c)
 *     sub_18007FA70 @ 0x18007FA70 (sub_18007FA70.c)
 *     sub_1800CAD20 @ 0x1800CAD20 (sub_1800CAD20.c)
 *     sub_1800D4C20 @ 0x1800D4C20 (sub_1800D4C20.c)
 *     sub_1800D4C60 @ 0x1800D4C60 (sub_1800D4C60.c)
 *     sub_1800D4CA0 @ 0x1800D4CA0 (sub_1800D4CA0.c)
 *     sub_1800D4CE0 @ 0x1800D4CE0 (sub_1800D4CE0.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_180044F14(__int64 a1, __int64 a2)
{
  return (unsigned int)_std_type_info_compare(a1 + 8, a2 + 8) == 0;
}
