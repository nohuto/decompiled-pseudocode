/*
 * XREFs of sub_180032A24 @ 0x180032A24
 * Callers:
 *     sub_180031110 @ 0x180031110 (sub_180031110.c)
 *     sub_180031D5C @ 0x180031D5C (sub_180031D5C.c)
 * Callees:
 *     sub_18001197C @ 0x18001197C (sub_18001197C.c)
 */

_QWORD *__fastcall sub_180032A24(__int64 a1, _QWORD *a2, __int64 a3)
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
  if ( v5 && sub_18001197C(v5) )
  {
    *v3 = *v6;
    v3[1] = v6[1];
  }
  return v3;
}
