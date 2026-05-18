/*
 * XREFs of sub_1800698B4 @ 0x1800698B4
 * Callers:
 *     sub_180069A0C @ 0x180069A0C (sub_180069A0C.c)
 *     sub_180069C8C @ 0x180069C8C (sub_180069C8C.c)
 * Callees:
 *     sub_18008CB30 @ 0x18008CB30 (sub_18008CB30.c)
 */

_QWORD *__fastcall sub_1800698B4(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rsi
  _QWORD *result; // rax

  for ( i = a2; i != a3; i += 80LL )
  {
    if ( sub_18008CB30(i) == a4 )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
