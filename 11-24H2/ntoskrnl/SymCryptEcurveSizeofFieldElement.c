/*
 * XREFs of SymCryptEcurveSizeofFieldElement @ 0x1405203EC
 * Callers:
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x14052195C (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x140521FF0 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointGetValue @ 0x140528240 (SymCryptEcpointGetValue.c)
 *     SymCryptEcpointSetValue @ 0x1405283D0 (SymCryptEcpointSetValue.c)
 *     SymCryptEcDhSecretAgreement @ 0x140533388 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcurveSizeofFieldElement(__int64 a1)
{
  return *(unsigned int *)(a1 + 20);
}
