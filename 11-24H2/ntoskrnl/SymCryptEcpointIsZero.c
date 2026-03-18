/*
 * XREFs of SymCryptEcpointIsZero @ 0x14052E79C
 * Callers:
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x140522DF8 (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEcDsaVerify @ 0x1405246D8 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointMultiScalarMulWnafWithInterleaving @ 0x140529D00 (SymCryptEcpointMultiScalarMulWnafWithInterleaving.c)
 *     SymCryptEcpointScalarMulFixedWindow @ 0x14052A210 (SymCryptEcpointScalarMulFixedWindow.c)
 *     SymCryptEcDhSecretAgreement @ 0x140538EE8 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointIsZero(__int64 a1)
{
  return ((__int64 (*)(void))qword_140006CB0[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])();
}
