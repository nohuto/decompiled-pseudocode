/*
 * XREFs of SymCryptModMul @ 0x140521798
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x14052195C (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521FF0 (SymCryptEcDsaVerify.c)
 *     SymCryptCrtSolve @ 0x140526744 (SymCryptCrtSolve.c)
 *     SymCryptEcpointTransform @ 0x1405285D8 (SymCryptEcpointTransform.c)
 *     SymCryptFdefModInvGeneric @ 0x1405304B0 (SymCryptFdefModInvGeneric.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x140531C4C (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x140531D78 (SymCryptModExpWindowed.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x140533970 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x140533D78 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x140534550 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassDoubleSpecializedAm3 @ 0x140534860 (SymCryptShortWeierstrassDoubleSpecializedAm3.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x140534CC0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x140535010 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptTwistedEdwardsAdd @ 0x1405352C0 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1405356E0 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsIsEqual @ 0x140535BB0 (SymCryptTwistedEdwardsIsEqual.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140535F00 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x14053619C (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptMontgomeryIsEqual @ 0x140536600 (SymCryptMontgomeryIsEqual.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModMul(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)&off_1400067F8 + (*a1 & 0x380)))(a1, a2);
}
