/*
 * XREFs of SymCryptModAdd @ 0x140521458
 * Callers:
 *     SymCryptEcurveInitialize @ 0x14051FD94 (SymCryptEcurveInitialize.c)
 *     SymCryptEcDsaSignEx @ 0x14052195C (SymCryptEcDsaSignEx.c)
 *     SymCryptShortWeierstrassAddDiffNonZero @ 0x140533970 (SymCryptShortWeierstrassAddDiffNonZero.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x140533D78 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassDouble @ 0x140534550 (SymCryptShortWeierstrassDouble.c)
 *     SymCryptShortWeierstrassDoubleSpecializedAm3 @ 0x140534860 (SymCryptShortWeierstrassDoubleSpecializedAm3.c)
 *     SymCryptShortWeierstrassOnCurve @ 0x140535010 (SymCryptShortWeierstrassOnCurve.c)
 *     SymCryptTwistedEdwardsAdd @ 0x1405352C0 (SymCryptTwistedEdwardsAdd.c)
 *     SymCryptTwistedEdwardsDouble @ 0x1405356E0 (SymCryptTwistedEdwardsDouble.c)
 *     SymCryptTwistedEdwardsOnCurve @ 0x140535F00 (SymCryptTwistedEdwardsOnCurve.c)
 *     SymCryptMontgomeryDoubleAndAdd @ 0x14053619C (SymCryptMontgomeryDoubleAndAdd.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModAdd(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)g_SymCryptModFns + (*a1 & 0x380)))(a1, a2);
}
