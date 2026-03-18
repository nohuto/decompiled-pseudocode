/*
 * XREFs of HvlpFastFlushAddressSpaceTbEx @ 0x1404C2F48
 * Callers:
 *     KiFlushAddressSpaceTb @ 0x14026F6A0 (KiFlushAddressSpaceTb.c)
 *     KeFlushTb @ 0x14026F7E0 (KeFlushTb.c)
 *     KeFlushCurrentTbOnly @ 0x14027027C (KeFlushCurrentTbOnly.c)
 * Callees:
 *     HvlpAffinityToHvProcessorSet @ 0x14026D37C (HvlpAffinityToHvProcessorSet.c)
 *     HvcallFastExtended @ 0x14032C840 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpFastFlushAddressSpaceTbEx(__int64 a1, __int64 a2, char a3)
{
  __int64 v3; // rax
  int v4; // eax
  _QWORD v6[2]; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v7[12]; // [rsp+50h] [rbp-78h] BYREF

  v6[0] = a1;
  v3 = (a3 != 0 ? 0 : 4) | 2u;
  if ( a1 )
    v3 = a3 != 0 ? 0 : 4;
  v6[1] = v3;
  v4 = HvlpAffinityToHvProcessorSet(a2, v7, 0x50u);
  return HvcallFastExtended(((v4 + 7) << 14) & 0x3FE0000 | 0x10013u, (__int64)v6, v4 + 32, 0LL, 0);
}
