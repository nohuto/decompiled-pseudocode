/*
 * XREFs of sub_180012384 @ 0x180012384
 * Callers:
 *     sub_180012180 @ 0x180012180 (sub_180012180.c)
 *     sub_18001229C @ 0x18001229C (sub_18001229C.c)
 *     sub_180016AB8 @ 0x180016AB8 (sub_180016AB8.c)
 *     sub_18002C884 @ 0x18002C884 (sub_18002C884.c)
 *     sub_18002C9AC @ 0x18002C9AC (sub_18002C9AC.c)
 *     sub_18006A618 @ 0x18006A618 (sub_18006A618.c)
 *     sub_180089150 @ 0x180089150 (sub_180089150.c)
 *     sub_18008C754 @ 0x18008C754 (sub_18008C754.c)
 *     sub_1800CAFA0 @ 0x1800CAFA0 (sub_1800CAFA0.c)
 *     sub_1800D2008 @ 0x1800D2008 (sub_1800D2008.c)
 * Callees:
 *     sub_180010DC0 @ 0x180010DC0 (sub_180010DC0.c)
 *     sub_180012140 @ 0x180012140 (sub_180012140.c)
 */

_QWORD *__fastcall sub_180012384(__int64 a1, __int64 a2, _QWORD *a3)
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
  sub_180012140((__int64)a3, (__int64)a3);
  return a3;
}
