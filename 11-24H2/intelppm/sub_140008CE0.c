/*
 * XREFs of sub_140008CE0 @ 0x140008CE0
 * Callers:
 *     sub_140030280 @ 0x140030280 (sub_140030280.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall sub_140008CE0(int a1)
{
  __int64 *i; // rdx
  __int64 *result; // rax

  for ( i = (__int64 *)qword_140019198; ; i = (__int64 *)*i )
  {
    result = 0LL;
    if ( i == &qword_140019198 )
      break;
    result = i - 4;
    if ( *((_DWORD *)i + 10) == a1 )
      break;
  }
  return result;
}
