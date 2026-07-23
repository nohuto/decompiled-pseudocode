/*
 * XREFs of SymCryptModElementIsZero @ 0x140521554
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x14052195C (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521FF0 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointTransform @ 0x1405285D8 (SymCryptEcpointTransform.c)
 *     SymCryptShortWeierstrassAdd @ 0x1405337B0 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptShortWeierstrassAddSideChannelUnsafe @ 0x140533D78 (SymCryptShortWeierstrassAddSideChannelUnsafe.c)
 *     SymCryptShortWeierstrassIsZero @ 0x140534F40 (SymCryptShortWeierstrassIsZero.c)
 *     SymCryptTwistedEdwardsIsZero @ 0x140535DC0 (SymCryptTwistedEdwardsIsZero.c)
 *     SymCryptMontgomeryIsZero @ 0x140536710 (SymCryptMontgomeryIsZero.c)
 * Callees:
 *     SymCryptFdefModElementIsZero @ 0x1405301D0 (SymCryptFdefModElementIsZero.c)
 */

__int64 SymCryptModElementIsZero()
{
  return SymCryptFdefModElementIsZero();
}
