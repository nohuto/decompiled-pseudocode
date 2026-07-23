/*
 * XREFs of SymCryptModElementToInt @ 0x1405216A0
 * Callers:
 *     SymCryptRsakeyCalculatePrimesFromPrivateExponent @ 0x14051E938 (SymCryptRsakeyCalculatePrimesFromPrivateExponent.c)
 *     SymCryptEckeySetValue @ 0x140520824 (SymCryptEckeySetValue.c)
 *     SymCryptEcDsaVerify @ 0x140521FF0 (SymCryptEcDsaVerify.c)
 *     SymCryptRsaCoreDecCrt @ 0x1405225B4 (SymCryptRsaCoreDecCrt.c)
 *     SymCryptCrtSolve @ 0x140526744 (SymCryptCrtSolve.c)
 *     SymCryptEcpointGenericSetRandom @ 0x140527440 (SymCryptEcpointGenericSetRandom.c)
 * Callees:
 *     SymCryptFdefModElementToIntGeneric @ 0x140530434 (SymCryptFdefModElementToIntGeneric.c)
 */

__int64 __fastcall SymCryptModElementToInt(_DWORD *a1, __int64 a2, int a3, __int64 a4, __int64 a5)
{
  int v5; // r14d
  int v6; // edi
  int v8; // eax

  v5 = (int)a1;
  v6 = a4;
  v8 = (*(__int64 (__fastcall **)(_DWORD *, __int64, __int64, __int64))((char *)off_140006818 + (*a1 & 0x380)))(
         a1,
         a2,
         a4,
         a5);
  return SymCryptFdefModElementToIntGeneric(v5, v8, a3, v6, a5);
}
