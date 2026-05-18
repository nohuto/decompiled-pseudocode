/*
 * XREFs of sub_18005DDBC @ 0x18005DDBC
 * Callers:
 *     sub_18005EAA8 @ 0x18005EAA8 (sub_18005EAA8.c)
 *     sub_18005EB54 @ 0x18005EB54 (sub_18005EB54.c)
 *     sub_1800685F4 @ 0x1800685F4 (sub_1800685F4.c)
 * Callees:
 *     sub_18005DDF0 @ 0x18005DDF0 (sub_18005DDF0.c)
 */

_QWORD *__fastcall sub_18005DDBC(__int64 a1, __int64 a2)
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
      result = (_QWORD *)sub_18005DDF0();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
