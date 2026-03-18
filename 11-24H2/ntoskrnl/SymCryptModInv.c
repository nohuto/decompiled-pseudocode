/*
 * XREFs of SymCryptModInv @ 0x140523E44
 * Callers:
 *     SymCryptEcDsaSignEx @ 0x140524044 (SymCryptEcDsaSignEx.c)
 *     SymCryptEcDsaVerify @ 0x1405246D8 (SymCryptEcDsaVerify.c)
 *     SymCryptEcpointTransform @ 0x14052ADC8 (SymCryptEcpointTransform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall SymCryptModInv(_DWORD *a1, __int64 a2)
{
  return (*(__int64 (__fastcall **)(_DWORD *, __int64))((char *)&off_140006808 + (*a1 & 0x380)))(a1, a2);
}
