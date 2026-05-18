/*
 * XREFs of sub_18001773C @ 0x18001773C
 * Callers:
 *     sub_1800151E8 @ 0x1800151E8 (sub_1800151E8.c)
 *     sub_18006A040 @ 0x18006A040 (sub_18006A040.c)
 *     sub_18008AC60 @ 0x18008AC60 (sub_18008AC60.c)
 * Callees:
 *     <none>
 */

bool __fastcall sub_18001773C(__int64 a1, __int64 a2)
{
  return (unsigned int)_std_type_info_compare(a1 + 8, a2 + 8) != 0;
}
