/*
 * XREFs of sub_180093F34 @ 0x180093F34
 * Callers:
 *     sub_180093D74 @ 0x180093D74 (sub_180093D74.c)
 *     sub_180094060 @ 0x180094060 (sub_180094060.c)
 * Callees:
 *     sub_18001254C @ 0x18001254C (sub_18001254C.c)
 */

__int64 *__fastcall sub_180093F34(__int64 *a1, __int64 a2)
{
  __int64 v3; // rsi
  __int64 *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 8LL;
  do
  {
    sub_18001254C(v4, (__int64 *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
