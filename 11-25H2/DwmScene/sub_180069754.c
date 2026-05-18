/*
 * XREFs of sub_180069754 @ 0x180069754
 * Callers:
 *     sub_1800698AC @ 0x1800698AC (sub_1800698AC.c)
 *     sub_180069B2C @ 0x180069B2C (sub_180069B2C.c)
 * Callees:
 *     sub_18008C9D0 @ 0x18008C9D0 (sub_18008C9D0.c)
 */

_QWORD *__fastcall sub_180069754(_QWORD *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 i; // rsi
  _QWORD *result; // rax

  for ( i = a2; i != a3; i += 80LL )
  {
    if ( sub_18008C9D0(i) == a4 )
      break;
  }
  result = a1;
  *a1 = i;
  return result;
}
