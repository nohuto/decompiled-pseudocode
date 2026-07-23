/*
 * XREFs of SymCryptSizeofEckeyFromCurve @ 0x140520D14
 * Callers:
 *     SymCryptEckeyAllocate @ 0x1405205FC (SymCryptEckeyAllocate.c)
 *     SymCryptEckeyWipe @ 0x140520CE8 (SymCryptEckeyWipe.c)
 * Callees:
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x14051FD4C (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptSizeofIntFromDigits @ 0x140521914 (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x140528AE0 (SymCryptSizeofEcpointFromCurve.c)
 */

__int64 __fastcall SymCryptSizeofEckeyFromCurve(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // ebx

  v2 = SymCryptEcurveDigitsofScalarMultiplier(a1);
  v3 = SymCryptSizeofIntFromDigits(v2);
  return v3 + (unsigned int)SymCryptSizeofEcpointFromCurve(a1) + 64;
}
