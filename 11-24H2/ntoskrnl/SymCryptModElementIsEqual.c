/*
 * XREFs of SymCryptModElementIsEqual @ 0x140523C24
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEcurveInitialize @ 0x140522450 (SymCryptEcurveInitialize.c)
 *     SymCryptEcurveIsSame @ 0x140522A18 (SymCryptEcurveIsSame.c)
 *     SymCryptEcDsaVerify @ 0x1405246D8 (SymCryptEcDsaVerify.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x14052BBF0 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsIsZero @ 0x14052BE00 (SymCryptTwistedEdwardsIsZero.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x14052BF40 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryIsEqual @ 0x14052C660 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x14052E0B0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x14052E400 (SymCryptShortWeierstrassOnCurve.c)
 * Callees:
 *     SymCryptFdefModElementIsEqual @ 0x140535CF4 (SymCryptFdefModElementIsEqual.c)
 */

__int64 SymCryptModElementIsEqual()
{
  return SymCryptFdefModElementIsEqual();
}
