/*
 * XREFs of EraseBitmap @ 0x1C009A324
 * Callers:
 *     xxxSwitchDesktop @ 0x1C002C52C (xxxSwitchDesktop.c)
 * Callees:
 *     GreExtGetObjectW @ 0x1C004B0D0 (GreExtGetObjectW.c)
 *     NtGdiPatBlt @ 0x1C00BD720 (NtGdiPatBlt.c)
 */

__int64 __fastcall EraseBitmap(HBRUSH a1)
{
  __int64 v2; // rbx
  int v4[4]; // [rsp+30h] [rbp-28h] BYREF
  __int128 v5; // [rsp+40h] [rbp-18h]

  *(_OWORD *)v4 = 0LL;
  v5 = 0LL;
  GreExtGetObjectW(a1, 32LL, (__int64)v4);
  v2 = GreSelectBitmap(ghdcMem, a1);
  NtGdiPatBlt(ghdcMem, v4[2], 66);
  return GreSelectBitmap(ghdcMem, v2);
}
