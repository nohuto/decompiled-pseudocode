/*
 * XREFs of SymCryptEcpointOnCurve @ 0x14052C0B4
 * Callers:
 *     SymCryptEckeyPerformPublicKeyValidation @ 0x140520678 (SymCryptEckeyPerformPublicKeyValidation.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointOnCurve(__int64 a1)
{
  return ((__int64 (*)(void))qword_140006C98[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])();
}
