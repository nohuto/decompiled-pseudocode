/*
 * XREFs of sub_18005A42C @ 0x18005A42C
 * Callers:
 *     sub_18005ACE0 @ 0x18005ACE0 (sub_18005ACE0.c)
 *     sub_18005AE60 @ 0x18005AE60 (sub_18005AE60.c)
 *     sub_18005BDE0 @ 0x18005BDE0 (sub_18005BDE0.c)
 * Callees:
 *     sub_180010134 @ 0x180010134 (sub_180010134.c)
 *     sub_180030AA0 @ 0x180030AA0 (sub_180030AA0.c)
 */

_QWORD *__fastcall sub_18005A42C(__int64 a1, __int64 a2)
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
      sub_180030AA0((__int64)(v3 + 2));
      result = (_QWORD *)sub_180010134(v3, 0x20uLL);
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
