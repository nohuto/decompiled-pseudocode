/*
 * XREFs of sub_1800930F0 @ 0x1800930F0
 * Callers:
 *     sub_180092F74 @ 0x180092F74 (sub_180092F74.c)
 *     sub_180093190 @ 0x180093190 (sub_180093190.c)
 *     sub_1800932FC @ 0x1800932FC (sub_1800932FC.c)
 * Callees:
 *     sub_18001244C @ 0x18001244C (sub_18001244C.c)
 */

__int64 *__fastcall sub_1800930F0(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 16LL;
  do
  {
    sub_18001244C(v4, (__int64 *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
