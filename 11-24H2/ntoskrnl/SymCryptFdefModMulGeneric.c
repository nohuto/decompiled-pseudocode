/*
 * XREFs of SymCryptFdefModMulGeneric @ 0x140530990
 * Callers:
 *     <none>
 * Callees:
 *     xHalTimerWatchdogStop @ 0x14048E2E0 (xHalTimerWatchdogStop.c)
 *     SymCryptFdefRawDivMod @ 0x140529820 (SymCryptFdefRawDivMod.c)
 *     SymCryptFdefRawMul @ 0x140529B0C (SymCryptFdefRawMul.c)
 */

void __fastcall SymCryptFdefModMulGeneric(__int64 a1, int a2, int a3, void *a4, char *Src)
{
  int v5; // r14d

  v5 = *(_DWORD *)(a1 + 4);
  xHalTimerWatchdogStop();
  SymCryptFdefRawMul(a2, v5, a3, v5, (__int64)Src);
  SymCryptFdefRawDivMod(Src, 2 * v5, (_DWORD *)(a1 + 64), 0LL, a4, &Src[v5 << 7]);
}
