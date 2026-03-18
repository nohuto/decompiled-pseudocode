/*
 * XREFs of SymCryptEcpointCreate @ 0x14052A980
 * Callers:
 *     SymCryptEcurveInitialize @ 0x140522450 (SymCryptEcurveInitialize.c)
 *     SymCryptEckeyCreate @ 0x140522D3C (SymCryptEckeyCreate.c)
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x140522DF8 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x140522F10 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x140524044 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x1405246D8 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140529D00 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x14052A210 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptOfflinePrecomputation @ 0x14052A830 (SymCryptOfflinePrecomputation.c)
 *     SymCryptShortWeierstrassAdd @ 0x14052CBB0 (SymCryptShortWeierstrassAdd.c)
 *     SymCryptEcDhSecretAgreement @ 0x140538EE8 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     SymCryptEcpointCreateEx @ 0x14052A9A0 (SymCryptEcpointCreateEx.c)
 */

__int64 __fastcall SymCryptEcpointCreate(__int64 a1, __int64 a2, __int64 a3)
{
  return SymCryptEcpointCreateEx(a1, a2, a3, *(_DWORD *)(a3 + 8) & 0xF);
}
