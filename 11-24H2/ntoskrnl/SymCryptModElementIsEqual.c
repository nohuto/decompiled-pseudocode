/*
 * XREFs of SymCryptModElementIsEqual @ 0x14052153C
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E938 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEcurveInitialize @ 0x14051FD94 (SymCryptEcurveInitialize.c)
 *     SymCryptEcurveIsSame @ 0x14052032C (SymCryptEcurveIsSame.c)
 *     SymCryptEcDsaVerify @ 0x140521FF0 (SymCryptEcDsaVerify.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x140534CC0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x140535010 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x140535BB0 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsIsZero @ 0x140535DC0 (SymCryptTwistedEdwardsIsZero.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140535F00 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryIsEqual @ 0x140536600 (SymCryptMontgomeryIsEqual.c)
 * Callees:
 *     SymCryptFdefModElementIsEqual @ 0x140530194 (SymCryptFdefModElementIsEqual.c)
 */

__int64 SymCryptModElementIsEqual()
{
  return SymCryptFdefModElementIsEqual();
}
