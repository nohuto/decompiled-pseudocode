/*
 * XREFs of SymCryptModSub @ 0x140523F90
 * Callers:
 *     SymCryptCrtSolve @ 0x140528E24 (SymCryptCrtSolve.c)
 *     SymCryptTwistedEdwardsAdd @ 0x14052B300 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x14052B720 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x14052C1FC (SymCryptMontgomeryDoubleAndAdd.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x14052CD70 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x14052D178 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x14052D950 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassDoubleSpecializedAm3 @ 0x14052DC60 (SymCryptShortWeierstrassDoubleSpecializedAm3.c)
 *     SymCryptFdefModInvGeneric @ 0x140536010 (SymCryptFdefModInvGeneric.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModSub(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)&off_1400067E8 + (*a1 & 0x380)))(a1, a2);
}
