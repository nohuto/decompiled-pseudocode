/*
 * XREFs of sub_1800CF244 @ 0x1800CF244
 * Callers:
 *     sub_1800CFC70 @ 0x1800CFC70 (sub_1800CFC70.c)
 *     sub_1800CFDD4 @ 0x1800CFDD4 (sub_1800CFDD4.c)
 *     sub_1800CFE90 @ 0x1800CFE90 (sub_1800CFE90.c)
 * Callees:
 *     sub_1800CF278 @ 0x1800CF278 (sub_1800CF278.c)
 */

_QWORD *__fastcall sub_1800CF244(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdx
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( v3 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      result = (_QWORD *)sub_1800CF278(a1, v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
