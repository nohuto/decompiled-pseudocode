/*
 * XREFs of sub_18009A020 @ 0x18009A020
 * Callers:
 *     sub_18009A124 @ 0x18009A124 (sub_18009A124.c)
 *     sub_18009A178 @ 0x18009A178 (sub_18009A178.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 */

_QWORD *__fastcall sub_18009A020(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rcx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)sub_180010234(v3, 0x38uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
