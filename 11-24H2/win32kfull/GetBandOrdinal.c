/*
 * XREFs of GetBandOrdinal @ 0x140157480
 * Callers:
 *     SetWindowGroupBand @ 0x1401571C4 (SetWindowGroupBand.c)
 *     LinkWindow @ 0x1402B47A8 (LinkWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GetBandOrdinal(int a1)
{
  __int64 result; // rax
  _DWORD *v2; // rdx

  result = 0LL;
  v2 = dword_1403533D0;
  do
  {
    if ( *v2 == a1 )
      break;
    result = (unsigned int)(result + 1);
    ++v2;
  }
  while ( (unsigned int)result < 0x12 );
  return result;
}
