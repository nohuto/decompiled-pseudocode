/*
 * XREFs of GetStringLength @ 0x140001010
 * Callers:
 *     CompareId @ 0x140001F10 (CompareId.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetStringLength(_BYTE *a1, unsigned int a2)
{
  __int64 result; // rax

  result = 0LL;
  if ( !a2 )
    return a2;
  while ( *a1 )
  {
    result = (unsigned int)(result + 1);
    ++a1;
    if ( (unsigned int)result >= a2 )
      return a2;
  }
  if ( (unsigned int)result >= a2 )
    return a2;
  return result;
}
