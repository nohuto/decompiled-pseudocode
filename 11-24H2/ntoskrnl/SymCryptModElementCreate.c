/*
 * XREFs of SymCryptModElementCreate @ 0x140523BD8
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptRsakeyCreateAllObjects @ 0x1405219BC (SymCryptRsakeyCreateAllObjects.c)
 *     SymCryptEcurveInitialize @ 0x140522450 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeySetValue @ 0x140522F10 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x140524044 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x1405246D8 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreDecCrt @ 0x140524C9C (SymCryptRsaCoreDecCrt.c)
 *     SymCryptRsaCoreEnc @ 0x1405251DC (SymCryptRsaCoreEnc.c)
 *     SymCryptCrtSolve @ 0x140528E24 (SymCryptCrtSolve.c)
 *     SymCryptEcpointGenericSetRandom @ 0x140529C30 (SymCryptEcpointGenericSetRandom.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x14052A210 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcpointCreateEx @ 0x14052A9A0 (SymCryptEcpointCreateEx.c)
 *     SymCryptEcpointTransform @ 0x14052ADC8 (SymCryptEcpointTransform.c)
 *     SymCryptTwistedEdwardsAdd @ 0x14052B300 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x14052B720 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x14052BBF0 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsNegate @ 0x14052BE70 (SymCryptTwistedEdwardsNegate.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x14052BF40 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryIsEqual @ 0x14052C660 (SymCryptMontgomeryIsEqual.c)
 *     SymCryptMontgomeryPointScalarMul @ 0x14052C7A0 (SymCryptMontgomeryPointScalarMul.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x14052CD70 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x14052D178 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x14052D950 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassDoubleSpecializedAm3 @ 0x14052DC60 (SymCryptShortWeierstrassDoubleSpecializedAm3.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x14052E0B0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassNegate @ 0x14052E360 (SymCryptShortWeierstrassNegate.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x14052E400 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptFdefModInvGeneric @ 0x140536010 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x1405377AC (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x1405378D8 (SymCryptModExpWindowed.c)
 * Callees:
 *     SymCryptFdefModElementCreate @ 0x140535C10 (SymCryptFdefModElementCreate.c)
 */

__int64 SymCryptModElementCreate()
{
  return SymCryptFdefModElementCreate();
}
