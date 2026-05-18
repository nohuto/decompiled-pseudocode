/*
 * XREFs of sub_1800938E0 @ 0x1800938E0
 * Callers:
 *     sub_180093704 @ 0x180093704 (sub_180093704.c)
 *     sub_180093980 @ 0x180093980 (sub_180093980.c)
 * Callees:
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 */

__int64 *__fastcall sub_1800938E0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 15LL;
  do
  {
    sub_18001254C(v4, (__int64 *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
