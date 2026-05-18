/*
 * XREFs of sub_180092D88 @ 0x180092D88
 * Callers:
 *     sub_180092C10 @ 0x180092C10 (sub_180092C10.c)
 *     sub_180092E30 @ 0x180092E30 (sub_180092E30.c)
 * Callees:
 *     sub_1800391E4 @ 0x1800391E4 (sub_1800391E4.c)
 */

_QWORD *__fastcall sub_180092D88(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 12LL;
  do
  {
    sub_1800391E4(v4, (_QWORD *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
