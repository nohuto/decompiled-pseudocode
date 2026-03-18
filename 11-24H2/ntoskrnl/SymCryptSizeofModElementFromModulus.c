/*
 * XREFs of SymCryptSizeofModElementFromModulus @ 0x140524014
 * Callers:
 *     SymCryptRsakeyCreateAllObjects @ 0x1405219BC (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcDsaSignEx @ 0x140524044 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x1405246D8 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreDecCrt @ 0x140524C9C (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x1405251DC (SymCryptRsaCoreEnc.c)
 *     SymCryptRsaCoreEncScratchSpace @ 0x14052536C (SymCryptRsaCoreEncScratchSpace.c)
 *     SymCryptCrtSolve @ 0x140528E24 (SymCryptCrtSolve.c)
 *     SymCryptTwistedEdwardsAdd @ 0x14052B300 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x14052B720 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x14052BBF0 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x14052BF40 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryFillScratchSpaces @ 0x14052C4BC (SymCryptMontgomeryFillScratchSpaces.c)
 *     SymCryptMontgomeryIsEqual @ 0x14052C660 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x14052C7A0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptFdefModInvGeneric @ 0x140536010 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x1405377AC (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x1405378D8 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefSizeofModElementFromModulus @ 0x1405223FC (SymCryptFdefSizeofModElementFromModulus.c)
 */

__int64 __fastcall SymCryptSizeofModElementFromModulus(__int64 a1)
{
  return SymCryptFdefSizeofModElementFromModulus(a1);
}
