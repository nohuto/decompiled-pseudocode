/*
 * XREFs of sub_180095BEC @ 0x180095BEC
 * Callers:
 *     sub_180049230 @ 0x180049230 (sub_180049230.c)
 *     sub_180096C0C @ 0x180096C0C (sub_180096C0C.c)
 * Callees:
 *     sub_180040290 @ 0x180040290 (sub_180040290.c)
 *     sub_180095ADC @ 0x180095ADC (sub_180095ADC.c)
 */

__int64 *__fastcall sub_180095BEC(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // r8
  _QWORD *v6; // r9
  __int64 v7; // r10

  if ( !sub_180040290(a1 + 184) || sub_180040290(v4 + 185) )
  {
    *a2 = v3;
    a2[1] = v3;
  }
  else
  {
    sub_180095ADC(v7, a2, *(_QWORD *)(v7 + 192), v5, v6);
  }
  return a2;
}
