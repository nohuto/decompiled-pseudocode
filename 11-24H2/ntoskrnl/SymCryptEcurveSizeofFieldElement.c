/*
 * XREFs of SymCryptEcurveSizeofFieldElement @ 0x140522AD8
 * Callers:
 *     SymCryptEckeySetValue @ 0x140522F10 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x140524044 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x1405246D8 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointGetValue @ 0x14052AA30 (SymCryptEcpointGetValue.c)
 *     SymCryptEcpointSetValue @ 0x14052ABC0 (SymCryptEcpointSetValue.c)
 *     SymCryptEcDhSecretAgreement @ 0x140538EE8 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcurveSizeofFieldElement(__int64 a1)
{
  return *(unsigned int *)(a1 + 20);
}
