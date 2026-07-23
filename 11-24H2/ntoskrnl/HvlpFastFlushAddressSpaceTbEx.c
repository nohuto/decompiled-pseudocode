/*
 * XREFs of HvlpFastFlushAddressSpaceTbEx @ 0x1403A4524
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x14039E4BC (KiFlushAddressSpaceTb.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14039F4A0 (KeFlushCurrentTbOnly.c)
 * Callees:
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1403A4864 (HvlpAffinityToHvProcessorSet.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpFastFlushAddressSpaceTbEx(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  int v4; // eax
  _QWORD v6[2]; // [rsp+40h] [rbp-88h] BYREF
  _BYTE v7[96]; // [rsp+50h] [rbp-78h] BYREF

  v6[0] = a1;
  v3 = (a3 != 0 ? 0 : 4) | 2u;
  if ( a1 )
    v3 = a3 != 0 ? 0 : 4;
  v6[1] = v3;
  v4 = HvlpAffinityToHvProcessorSet(a2, v7, 80LL);
  return HvcallFastExtended(((v4 + 7) << 14) & 0x3FE0000 | 0x10013u, (__int64)v6, v4 + 32, 0LL, 0);
}
