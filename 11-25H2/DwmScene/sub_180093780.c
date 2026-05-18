/*
 * XREFs of sub_180093780 @ 0x180093780
 * Callers:
 *     sub_1800935A4 @ 0x1800935A4 (sub_1800935A4.c)
 *     sub_180093820 @ 0x180093820 (sub_180093820.c)
 * Callees:
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 */

__int64 *__fastcall sub_180093780(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 15LL;
  do
  {
    sub_18001244C(v4, (__int64 *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
