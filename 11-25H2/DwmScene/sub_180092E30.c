/*
 * XREFs of sub_180092E30 @ 0x180092E30
 * Callers:
 *     sub_1800948A0 @ 0x1800948A0 (sub_1800948A0.c)
 * Callees:
 *     sub_180092D88 @ 0x180092D88 (sub_180092D88.c)
 */

_QWORD *__fastcall sub_180092E30(__int64 a1)
{
  __int64 v2; // rbx
  _QWORD *result; // rax

  *(_BYTE *)(a1 + 3468) = 1;
  v2 = 0LL;
  do
  {
    result = (_QWORD *)*(unsigned int *)(a1 + 3464);
    if ( _bittest((const int *)&result, v2) )
      result = sub_180092D88((_QWORD *)(a1 + 192 * v2 + 8), 192 * v2 + a1 + 2312);
    v2 = (unsigned int)(v2 + 1);
  }
  while ( (unsigned int)v2 < 6 );
  return result;
}
