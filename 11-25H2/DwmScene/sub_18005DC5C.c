/*
 * XREFs of sub_18005DC5C @ 0x18005DC5C
 * Callers:
 *     sub_18005E948 @ 0x18005E948 (sub_18005E948.c)
 *     sub_18005E9F4 @ 0x18005E9F4 (sub_18005E9F4.c)
 *     sub_180068494 @ 0x180068494 (sub_180068494.c)
 * Callees:
 *     sub_18005DC90 @ 0x18005DC90 (sub_18005DC90.c)
 */

_QWORD *__fastcall sub_18005DC5C(__int64 a1, __int64 a2)
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
      result = (_QWORD *)sub_18005DC90();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
