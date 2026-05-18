/*
 * XREFs of sub_180045A50 @ 0x180045A50
 * Callers:
 *     sub_180045654 @ 0x180045654 (sub_180045654.c)
 * Callees:
 *     sub_1800445E4 @ 0x1800445E4 (sub_1800445E4.c)
 */

_QWORD *__fastcall sub_180045A50(__int64 a1, _QWORD *a2, int a3)
{
  __int64 v3; // rcx

  v3 = *(_QWORD *)(a1 + 160);
  if ( v3 )
  {
    sub_1800445E4(v3, a2, a3);
  }
  else
  {
    *a2 = 0LL;
    a2[1] = 0LL;
  }
  return a2;
}
