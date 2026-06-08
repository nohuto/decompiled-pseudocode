/*
 * XREFs of GetDevExtFromLpIndex @ 0x140004A80
 * Callers:
 *     GetLpIndex @ 0x140025AC0 (GetLpIndex.c)
 * Callees:
 *     <none>
 */

__int64 *__fastcall GetDevExtFromLpIndex(int a1)
{
  __int64 *i; // rdx
  __int64 *result; // rax

  for ( i = (__int64 *)qword_1400145E8; ; i = (__int64 *)*i )
  {
    result = 0LL;
    if ( i == &qword_1400145E8 )
      break;
    result = i - 4;
    if ( *((_DWORD *)i + 10) == a1 )
      break;
  }
  return result;
}
