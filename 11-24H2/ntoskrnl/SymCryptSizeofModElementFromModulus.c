/*
 * XREFs of SymCryptSizeofModElementFromModulus @ 0x14052192C
 * Callers:
 *     SymCryptRsakeyCreateAllObjects @ 0x14051F310 (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcDsaSignEx @ 0x14052195C (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521FF0 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreDecCrt @ 0x1405225B4 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x140522AF4 (SymCryptRsaCoreEnc.c)
 *     SymCryptRsaCoreEncScratchSpace @ 0x140522C84 (SymCryptRsaCoreEncScratchSpace.c)
 *     SymCryptCrtSolve @ 0x140526744 (SymCryptCrtSolve.c)
 *     SymCryptFdefModInvGeneric @ 0x1405304B0 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140531C4C (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140531D78 (SymCryptModExpWindowed.c)
 *     SymCryptTwistedEdwardsAdd @ 0x1405352C0 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1405356E0 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x140535BB0 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140535F00 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x140536460 (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryIsEqual @ 0x140536600 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x140536740 (SymCryptMontgomeryPointScalarMul.c)
 * Callees:
 *     SymCryptFdefSizeofModElementFromModulus @ 0x14051FD40 (SymCryptFdefSizeofModElementFromModulus.c)
 */

__int64 __fastcall SymCryptSizeofModElementFromModulus(__int64 a1)
{
  return SymCryptFdefSizeofModElementFromModulus(a1);
}
