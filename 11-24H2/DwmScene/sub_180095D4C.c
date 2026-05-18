/*
 * XREFs of sub_180095D4C @ 0x180095D4C
 * Callers:
 *     sub_180049390 @ 0x180049390 (sub_180049390.c)
 *     sub_180096D6C @ 0x180096D6C (sub_180096D6C.c)
 * Callees:
 *     sub_1800403F0 @ 0x1800403F0 (sub_1800403F0.c)
 *     sub_180095C3C @ 0x180095C3C (sub_180095C3C.c)
 */

__int64 *__fastcall sub_180095D4C(__int64 a1, __int64 *a2)
{
  __int64 v3; // rdx
  __int64 v4; // r10
  __int64 v5; // r8
  _QWORD *v6; // r9
  __int64 v7; // r10

  if ( !sub_1800403F0(a1 + 184) || sub_1800403F0(v4 + 185) )
  {
    *a2 = v3;
    a2[1] = v3;
  }
  else
  {
    sub_180095C3C(v7, a2, *(_QWORD *)(v7 + 192), v5, v6);
  }
  return a2;
}
