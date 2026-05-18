/*
 * XREFs of sub_180032B84 @ 0x180032B84
 * Callers:
 *     sub_180031270 @ 0x180031270 (sub_180031270.c)
 *     sub_180031EBC @ 0x180031EBC (sub_180031EBC.c)
 * Callees:
 *     sub_180011A7C @ 0x180011A7C (sub_180011A7C.c)
 */

_QWORD *__fastcall sub_180032B84(__int64 a1, _QWORD *a2, __int64 a3)
{
  _QWORD *v3; // r9
  __int64 v4; // r8
  __int64 v5; // rcx
  _QWORD *v6; // r8

  v3 = a2;
  v4 = *(_QWORD *)(a1 + 888) + 16 * a3;
  *a2 = 0LL;
  a2[1] = 0LL;
  v5 = *(_QWORD *)(v4 + 8);
  if ( v5 && sub_180011A7C(v5) )
  {
    *v3 = *v6;
    v3[1] = v6[1];
  }
  return v3;
}
