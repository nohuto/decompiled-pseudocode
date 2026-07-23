/*
 * XREFs of SymCryptEcpointSetRandom @ 0x140528D60
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x14052195C (SymCryptEcDsaSignEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointSetRandom(__int64 a1)
{
  return ((__int64 (__fastcall *)(__int64))qword_140006CA0[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])(a1);
}
