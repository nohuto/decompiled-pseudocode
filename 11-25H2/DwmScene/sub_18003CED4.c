/*
 * XREFs of sub_18003CED4 @ 0x18003CED4
 * Callers:
 *     sub_18003D750 @ 0x18003D750 (sub_18003D750.c)
 *     sub_18003D894 @ 0x18003D894 (sub_18003D894.c)
 *     sub_18003DA08 @ 0x18003DA08 (sub_18003DA08.c)
 * Callees:
 *     sub_18003CF08 @ 0x18003CF08 (sub_18003CF08.c)
 */

_QWORD *__fastcall sub_18003CED4(__int64 a1, __int64 a2)
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
      result = (_QWORD *)sub_18003CF08();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
