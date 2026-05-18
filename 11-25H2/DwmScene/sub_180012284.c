/*
 * XREFs of sub_180012284 @ 0x180012284
 * Callers:
 *     sub_180012080 @ 0x180012080 (sub_180012080.c)
 *     sub_18001219C @ 0x18001219C (sub_18001219C.c)
 *     sub_1800169B8 @ 0x1800169B8 (sub_1800169B8.c)
 *     sub_18002C724 @ 0x18002C724 (sub_18002C724.c)
 *     sub_18002C84C @ 0x18002C84C (sub_18002C84C.c)
 *     sub_18006A4B8 @ 0x18006A4B8 (sub_18006A4B8.c)
 *     sub_180088FF0 @ 0x180088FF0 (sub_180088FF0.c)
 *     sub_18008C5F4 @ 0x18008C5F4 (sub_18008C5F4.c)
 *     sub_1800CAE40 @ 0x1800CAE40 (sub_1800CAE40.c)
 *     sub_1800D1EA8 @ 0x1800D1EA8 (sub_1800D1EA8.c)
 * Callees:
 *     sub_180010CC0 @ 0x180010CC0 (sub_180010CC0.c)
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 */

_QWORD *__fastcall sub_180012284(__int64 a1, __int64 a2, _QWORD *a3)
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
  sub_180012040((__int64)a3, (__int64)a3);
  return a3;
}
