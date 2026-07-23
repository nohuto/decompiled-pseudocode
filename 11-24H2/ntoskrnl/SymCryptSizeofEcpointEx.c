/*
 * XREFs of SymCryptSizeofEcpointEx @ 0x140528AC4
 * Callers:
 *     SymCryptEcurveValidateAndComputeSizes @ 0x140520404 (SymCryptEcurveValidateAndComputeSizes.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x140534B50 (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x140535A30 (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140536460 (SymCryptMontgomeryFillScratchSpaces.c)
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
