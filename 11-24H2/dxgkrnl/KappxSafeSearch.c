/*
 * XREFs of KappxSafeSearch @ 0x140234990
 * Callers:
 *     KappxParsePackageFullNameFromToken @ 0x1402347D0 (KappxParsePackageFullNameFromToken.c)
 * Callees:
 *     <none>
 */

unsigned __int16 __fastcall KappxSafeSearch(__int64 a1, unsigned __int16 a2, __int16 a3)
{
  unsigned __int16 result; // ax

  for ( result = 0; result < a2; ++result )
  {
    if ( *(_WORD *)(a1 + 2LL * result) == a3 )
    {
      *(_WORD *)(a1 + 2LL * result) = 0;
      return result;
    }
  }
  return result;
}
