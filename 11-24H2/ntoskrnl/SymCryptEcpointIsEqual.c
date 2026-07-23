/*
 * XREFs of SymCryptEcpointIsEqual @ 0x140528BD8
 * Callers:
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptEcpointIsEqual(__int64 a1, __int64 a2)
{
  return ((__int64 (__fastcall *)(__int64, __int64))qword_140006CA8[16 * (unsigned __int64)(*(_DWORD *)(a1 + 4) & 7)])(
           a1,
           a2);
}
