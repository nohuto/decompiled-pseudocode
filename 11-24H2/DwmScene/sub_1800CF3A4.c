/*
 * XREFs of sub_1800CF3A4 @ 0x1800CF3A4
 * Callers:
 *     sub_1800CFDD0 @ 0x1800CFDD0 (sub_1800CFDD0.c)
 *     sub_1800CFF34 @ 0x1800CFF34 (sub_1800CFF34.c)
 *     sub_1800CFFF0 @ 0x1800CFFF0 (sub_1800CFFF0.c)
 * Callees:
 *     sub_1800CF3D8 @ 0x1800CF3D8 (sub_1800CF3D8.c)
 */

_QWORD *__fastcall sub_1800CF3A4(__int64 a1, __int64 a2)
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
      result = (_QWORD *)sub_1800CF3D8(a1, v3);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
