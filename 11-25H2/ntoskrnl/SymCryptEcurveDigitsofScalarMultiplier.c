/*
 * XREFs of SymCryptEcurveDigitsofScalarMultiplier @ 0x14051FC88
 * Callers:
 *     SymCryptEckeyCreate @ 0x1405205BC (SymCryptEckeyCreate.c)
 *     SymCryptEckeySetValue @ 0x140520790 (SymCryptEckeySetValue.c)
 *     SymCryptSizeofEckeyFromCurve @ 0x140520C7C (SymCryptSizeofEckeyFromCurve.c)
 *     SymCryptEcDsaSignEx @ 0x1405218C0 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521F1C (SymCryptEcDsaVerify.c)
 *     SymCryptTwistedEdwardsFillScratchSpaces @ 0x1405292BC (SymCryptTwistedEdwardsFillScratchSpaces.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140529D0C (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptShortWeierstrassFillScratchSpaces @ 0x14052B794 (SymCryptShortWeierstrassFillScratchSpaces.c)
 * Callees:
 *     SymCryptDigitsFromBits @ 0x140520FA0 (SymCryptDigitsFromBits.c)
 */

__int64 __fastcall SymCryptEcurveDigitsofScalarMultiplier(__int64 a1)
{
  return SymCryptDigitsFromBits((unsigned int)(*(_DWORD *)(a1 + 24) + *(_DWORD *)(a1 + 64)));
}
