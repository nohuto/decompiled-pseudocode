/*
 * XREFs of sub_180064D64 @ 0x180064D64
 * Callers:
 *     sub_180062584 @ 0x180062584 (sub_180062584.c)
 *     sub_180065D00 @ 0x180065D00 (sub_180065D00.c)
 * Callees:
 *     _o_powf @ 0x18000C028 (_o_powf.c)
 */

double __fastcall sub_180064D64(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  o_powf();
  return sub_18007C380(*a4, a5);
}
