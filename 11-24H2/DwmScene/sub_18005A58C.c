/*
 * XREFs of sub_18005A58C @ 0x18005A58C
 * Callers:
 *     sub_18005AE40 @ 0x18005AE40 (sub_18005AE40.c)
 *     sub_18005AFC0 @ 0x18005AFC0 (sub_18005AFC0.c)
 *     sub_18005BF40 @ 0x18005BF40 (sub_18005BF40.c)
 * Callees:
 *     sub_180010234 @ 0x180010234 (sub_180010234.c)
 *     sub_180030C00 @ 0x180030C00 (sub_180030C00.c)
 */

_QWORD *__fastcall sub_18005A58C(__int64 a1, __int64 a2)
{
  _QWORD *result; // rax
  _QWORD *v3; // rdi
  _QWORD *v4; // rbx

  result = *(_QWORD **)(a2 + 8);
  *result = 0LL;
  v3 = *(_QWORD **)a2;
  if ( *(_QWORD *)a2 )
  {
    do
    {
      v4 = (_QWORD *)*v3;
      sub_180030C00((__int64)(v3 + 2));
      result = (_QWORD *)sub_180010234(v3, 0x20uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
