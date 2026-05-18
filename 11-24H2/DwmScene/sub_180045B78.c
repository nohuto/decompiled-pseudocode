/*
 * XREFs of sub_180045B78 @ 0x180045B78
 * Callers:
 *     sub_1800452CC @ 0x1800452CC (sub_1800452CC.c)
 *     sub_180045484 @ 0x180045484 (sub_180045484.c)
 *     sub_1800457B4 @ 0x1800457B4 (sub_1800457B4.c)
 * Callees:
 *     sub_180044744 @ 0x180044744 (sub_180044744.c)
 */

_QWORD *__fastcall sub_180045B78(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 272);
  if ( v3 )
  {
    sub_180044744(v3, a2, a3);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
