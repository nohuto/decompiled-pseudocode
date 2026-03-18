/*
 * XREFs of SymCryptSizeofEckeyFromCurve @ 0x1405233FC
 * Callers:
 *     SymCryptEckeyAllocate @ 0x140522CE8 (SymCryptEckeyAllocate.c)
 *     SymCryptEckeyWipe @ 0x1405233D0 (SymCryptEckeyWipe.c)
 * Callees:
 *     SymCryptEcurveDigitsofScalarMultiplier @ 0x140522408 (SymCryptEcurveDigitsofScalarMultiplier.c)
 *     SymCryptSizeofIntFromDigits @ 0x140523FFC (SymCryptSizeofIntFromDigits.c)
 *     SymCryptSizeofEcpointFromCurve @ 0x14052B2D0 (SymCryptSizeofEcpointFromCurve.c)
 */

__int64 __fastcall SymCryptSizeofEckeyFromCurve(__int64 a1)
{
  unsigned int v2; // eax
  int v3; // ebx

  v2 = SymCryptEcurveDigitsofScalarMultiplier(a1);
  v3 = SymCryptSizeofIntFromDigits(v2);
  return v3 + (unsigned int)SymCryptSizeofEcpointFromCurve(a1) + 64;
}
