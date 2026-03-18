/*
 * XREFs of SymCryptEcpointSetRandom @ 0x14052C134
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x1405218C0 (SymCryptEcDsaSignEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointSetRandom(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))qword_140006C80[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])(a1);
}
