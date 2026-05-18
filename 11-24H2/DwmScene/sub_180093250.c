/*
 * XREFs of sub_180093250 @ 0x180093250
 * Callers:
 *     sub_1800930D4 @ 0x1800930D4 (sub_1800930D4.c)
 *     sub_1800932F0 @ 0x1800932F0 (sub_1800932F0.c)
 *     sub_18009345C @ 0x18009345C (sub_18009345C.c)
 * Callees:
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 */

__int64 *__fastcall sub_180093250(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 16LL;
  do
  {
    sub_18001254C(v4, (__int64 *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
