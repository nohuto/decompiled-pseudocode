/*
 * XREFs of SymCryptSizeofEcpointEx @ 0x14052B2B4
 * Callers:
 *     SymCryptEcurveValidateAndComputeSizes @ 0x140522AF0 (SymCryptEcurveValidateAndComputeSizes.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x14052BA6C (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x14052C4BC (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x14052DF44 (SymCryptShortWeierstrassFillScratchSpaces.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptSizeofEcpointEx(int a1, int a2)
{
  if ( (unsigned int)(a2 - 1) > 3 )
    return 0LL;
  else
    return (unsigned int)(a2 * a1 + 32);
}
