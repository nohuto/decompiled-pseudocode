/*
 * XREFs of sub_180092EE8 @ 0x180092EE8
 * Callers:
 *     sub_180092D70 @ 0x180092D70 (sub_180092D70.c)
 *     sub_180092F90 @ 0x180092F90 (sub_180092F90.c)
 * Callees:
 *     sub_180039344 @ 0x180039344 (sub_180039344.c)
 */

_QWORD *__fastcall sub_180092EE8(_QWORD *a1, __int64 a2)
{
  __int64 v3; // rsi
  _QWORD *v4; // rbx
  __int64 v5; // rbp

  v3 = a2 - (_QWORD)a1;
  v4 = a1;
  v5 = 12LL;
  do
  {
    sub_180039344(v4, (_QWORD *)((char *)v4 + v3));
    v4 += 2;
    --v5;
  }
  while ( v5 );
  return a1;
}
