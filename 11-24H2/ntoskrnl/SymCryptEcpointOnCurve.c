/*
 * XREFs of SymCryptEcpointOnCurve @ 0x140528CE0
 * Callers:
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x14052070C (SymCryptEckeyPerformPublicKeyValidation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointOnCurve(__int64 a1)
{
  return ((__int64 (*)(void))qword_140006CB8[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])();
}
