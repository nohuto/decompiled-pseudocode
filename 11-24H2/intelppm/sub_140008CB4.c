/*
 * XREFs of sub_140008CB4 @ 0x140008CB4
 * Callers:
 *     sub_14003382C @ 0x14003382C (sub_14003382C.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_140008CB4(int a1)
{
  __int64 *i; // rdx
  __int64 *result; // rax

  for ( i = (__int64 *)qword_140019198; ; i = (__int64 *)*i )
  {
    result = 0LL;
    if ( i == &qword_140019198 )
      break;
    result = i - 4;
    if ( *((_DWORD *)i + 5) == a1 )
      break;
  }
  return result;
}
