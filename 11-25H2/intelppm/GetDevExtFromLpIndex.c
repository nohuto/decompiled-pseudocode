/*
 * XREFs of GetDevExtFromLpIndex @ 0x1400089A0
 * Callers:
 *     GetLpIndex @ 0x140030180 (GetLpIndex.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall GetDevExtFromLpIndex(int a1)
{
  __int64 *i; // rdx
  __int64 *result; // rax

  for ( i = (__int64 *)qword_1400191C8; ; i = (__int64 *)*i )
  {
    result = 0LL;
    if ( i == &qword_1400191C8 )
      break;
    result = i - 4;
    if ( *((_DWORD *)i + 10) == a1 )
      break;
  }
  return result;
}
