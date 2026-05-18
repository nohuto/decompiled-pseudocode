/*
 * XREFs of sub_18002E40C @ 0x18002E40C
 * Callers:
 *     sub_18002CBC4 @ 0x18002CBC4 (sub_18002CBC4.c)
 *     sub_180038280 @ 0x180038280 (sub_180038280.c)
 *     sub_18005283C @ 0x18005283C (sub_18005283C.c)
 *     sub_18005A3A4 @ 0x18005A3A4 (sub_18005A3A4.c)
 *     sub_18005DE1C @ 0x18005DE1C (sub_18005DE1C.c)
 *     sub_18008D800 @ 0x18008D800 (sub_18008D800.c)
 * Callees:
 *     sub_180010DC0 @ 0x180010DC0 (sub_180010DC0.c)
 *     sub_18002C5D8 @ 0x18002C5D8 (sub_18002C5D8.c)
 */

_QWORD *__fastcall sub_18002E40C(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v4; // r8
  __int64 v5; // r8
  _QWORD *v6; // r9

  v4 = (_QWORD *)a1;
  if ( a1 != a2 )
  {
    do
    {
      sub_180010DC0(a1, a3, v4);
      a3 += 2;
      v4 = (_QWORD *)(v5 + 16);
    }
    while ( v4 != v6 );
  }
  sub_18002C5D8((__int64)a3, (__int64)a3);
  return a3;
}
