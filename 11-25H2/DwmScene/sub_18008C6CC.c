/*
 * XREFs of sub_18008C6CC @ 0x18008C6CC
 * Callers:
 *     sub_18008C49C @ 0x18008C49C (sub_18008C49C.c)
 *     sub_1800D1EA8 @ 0x1800D1EA8 (sub_1800D1EA8.c)
 * Callees:
 *     sub_180012040 @ 0x180012040 (sub_180012040.c)
 *     sub_1800122C8 @ 0x1800122C8 (sub_1800122C8.c)
 */

_QWORD *__fastcall sub_18008C6CC(__int64 a1, __int64 a2, _QWORD *a3)
{
  _QWORD *v3; // rbx
  __int64 v4; // r9
  __int64 v5; // r10

  v3 = a3;
  if ( a2 )
  {
    v4 = a1 - (_QWORD)a3;
    do
    {
      sub_1800122C8(a1, v3, (_QWORD *)((char *)v3 + v4));
      v3 += 2;
    }
    while ( v5 != 1 );
  }
  sub_180012040((__int64)v3, (__int64)v3);
  return v3;
}
