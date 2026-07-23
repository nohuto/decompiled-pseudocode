/*
 * XREFs of SymCryptIntIsLessThan @ 0x1405212B8
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E938 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x14052195C (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521FF0 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreVerifyInput @ 0x140522CCC (SymCryptRsaCoreVerifyInput.c)
 *     SymCryptEcpointSetValue @ 0x1405283D0 (SymCryptEcpointSetValue.c)
 * Callees:
 *     SymCryptFdefIntIsLessThan @ 0x1405293A8 (SymCryptFdefIntIsLessThan.c)
 */

__int64 SymCryptIntIsLessThan()
{
  return SymCryptFdefIntIsLessThan();
}
