/*
 * XREFs of sub_180064EC4 @ 0x180064EC4
 * Callers:
 *     sub_1800626E4 @ 0x1800626E4 (sub_1800626E4.c)
 *     sub_180065E60 @ 0x180065E60 (sub_180065E60.c)
 * Callees:
 *     _o_powf @ 0x18000C488 (_o_powf.c)
 */

double __fastcall sub_180064EC4(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4, __int64 a5)
{
  o_powf();
  return sub_18007C4E0(*a4, a5);
}
