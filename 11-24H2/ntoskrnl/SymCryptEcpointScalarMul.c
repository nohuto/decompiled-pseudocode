/*
 * XREFs of SymCryptEcpointScalarMul @ 0x140528D0C
 * Callers:
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x14052070C (SymCryptEckeyPerformPublicKeyValidation.c)
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaSignEx @ 0x14052195C (SymCryptEcDsaSignEx.c)
 *     SymCryptEcpointGenericSetRandom @ 0x140527440 (SymCryptEcpointGenericSetRandom.c)
 *     SymCryptEcDhSecretAgreement @ 0x140533388 (SymCryptEcDhSecretAgreement.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointScalarMul(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4,
        __int64 a5,
        __int64 a6,
        __int64 a7)
{
  return ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64, __int64, __int64))qword_140006CE0[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])(
           a1,
           a2,
           a3,
           a4,
           a5,
           a6,
           a7);
}
