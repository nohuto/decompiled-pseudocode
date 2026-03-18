/*
 * XREFs of SymCryptFdef369ModSubGeneric @ 0x140538E10
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x140493990 (xHalTimerWatchdogStop.c)
 *     SymCryptFdef369RawAddAsm @ 0x140539880 (SymCryptFdef369RawAddAsm.c)
 *     SymCryptFdef369RawSubAsm @ 0x1405398D0 (SymCryptFdef369RawSubAsm.c)
 *     SymCryptFdef369MaskedCopyAsm @ 0x140539920 (SymCryptFdef369MaskedCopyAsm.c)
 */

__int64 __fastcall SymCryptFdef369ModSubGeneric(__int64 a1, __int64 a2, __int64 a3, __int64 a4, __int64 a5)
{
  unsigned int v5; // r14d

  v5 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  LODWORD(a3) = SymCryptFdef369RawSubAsm(a2, a3, a4, v5);
  SymCryptFdef369RawAddAsm(a4, a1 + 128, a5, v5);
  return SymCryptFdef369MaskedCopyAsm(a5, a4, v5, (unsigned int)-(int)a3);
}
