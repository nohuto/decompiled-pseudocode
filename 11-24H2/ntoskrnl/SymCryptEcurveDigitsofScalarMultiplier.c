/*
 * XREFs of SymCryptEcurveDigitsofScalarMultiplier @ 0x14051FD4C
 * Callers:
 *     SymCryptEckeyCreate @ 0x140520650 (SymCryptEckeyCreate.c)
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x140520D14 (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaSignEx @ 0x14052195C (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521FF0 (SymCryptEcDsaVerify.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x140534B50 (SymCryptShortWeierstrassFillScratchSpaces.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x140535A30 (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140536460 (SymCryptMontgomeryFillScratchSpaces.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x14052103C (SymCryptDigitsFromBits.c)
 */

__int64 __fastcall SymCryptEcurveDigitsofScalarMultiplier(__int64 a1)
{
  return SymCryptDigitsFromBits((unsigned int)(*(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 64)));
}
