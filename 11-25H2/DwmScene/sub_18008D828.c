/*
 * XREFs of sub_18008D828 @ 0x18008D828
 * Callers:
 *     sub_18008DBB8 @ 0x18008DBB8 (sub_18008DBB8.c)
 *     sub_18008DC70 @ 0x18008DC70 (sub_18008DC70.c)
 *     sub_18008DD0C @ 0x18008DD0C (sub_18008DD0C.c)
 * Callees:
 *     sub_18008D85C @ 0x18008D85C (sub_18008D85C.c)
 */

_QWORD *__fastcall sub_18008D828(__int64 a1, __int64 a2)
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
      result = (_QWORD *)sub_18008D85C();
      v3 = v4;
    }
    while ( v4 );
  }
  return result;
}
