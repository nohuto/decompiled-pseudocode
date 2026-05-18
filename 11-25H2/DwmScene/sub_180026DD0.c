/*
 * XREFs of sub_180026DD0 @ 0x180026DD0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

_QWORD *__fastcall sub_180026DD0(__int64 a1, _QWORD *a2)
{
  __int64 v2; // rax
  _QWORD *result; // rax
  __int64 v4; // [rsp+8h] [rbp+8h]

  v2 = *(_QWORD *)(a1 + 96);
  if ( v2 )
    v4 = *(_QWORD *)(v2 + 152);
  else
    v4 = 0LL;
  result = a2;
  *a2 = v4;
  return result;
}
