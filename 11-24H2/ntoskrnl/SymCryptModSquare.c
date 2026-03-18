/*
 * XREFs of SymCryptModSquare @ 0x140523F5C
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x140521068 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptTwistedEdwardsDouble @ 0x14052B720 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x14052BF40 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x14052C1FC (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x14052CD70 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x14052D178 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x14052D950 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassDoubleSpecializedAm3 @ 0x14052DC60 (SymCryptShortWeierstrassDoubleSpecializedAm3.c)
 *     SymCryptShortWeierstrassIsEqual @ 0x14052E0B0 (SymCryptShortWeierstrassIsEqual.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x14052E400 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptModExpSquareAndMultiply32 @ 0x1405377AC (SymCryptModExpSquareAndMultiply32.c)
 *     SymCryptModExpWindowed @ 0x1405378D8 (SymCryptModExpWindowed.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModSquare(_DWORD *a1)
{
  return (*(__int64 (__fastcall **)(_DWORD *))((char *)&off_140006800 + (*a1 & 0x380)))(a1);
}
