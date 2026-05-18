/*
 * XREFs of sub_18002E2AC @ 0x18002E2AC
 * Callers:
 *     sub_18002CA64 @ 0x18002CA64 (sub_18002CA64.c)
 *     sub_180038120 @ 0x180038120 (sub_180038120.c)
 *     sub_1800526DC @ 0x1800526DC (sub_1800526DC.c)
 *     sub_18005A244 @ 0x18005A244 (sub_18005A244.c)
 *     sub_18005DCBC @ 0x18005DCBC (sub_18005DCBC.c)
 *     sub_18008D6A0 @ 0x18008D6A0 (sub_18008D6A0.c)
 * Callees:
 *     sub_180010CC0 @ 0x180010CC0 (sub_180010CC0.c)
 *     sub_18002C478 @ 0x18002C478 (sub_18002C478.c)
 */

_QWORD *__fastcall sub_18002E2AC(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // r8
  __int64 v5; // r8
  _QWORD *v6; // r9

  v4 = (_QWORD *)a1;
  if ( a1 != a2 )
  {
    do
    {
      sub_180010CC0(a1, a3, v4);
      a3 += 2;
      v4 = (_QWORD *)(v5 + 16);
    }
    while ( v4 != v6 );
  }
  sub_18002C478((__int64)a3, (__int64)a3);
  return a3;
}
