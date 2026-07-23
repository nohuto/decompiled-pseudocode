/*
 * XREFs of HvlpFastSendSyntheticClusterIpiEx @ 0x1403A4C68
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x1403A4B40 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1403A4864 (HvlpAffinityToHvProcessorSet.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HvlpFastSendSyntheticClusterIpiEx(__int64 a1, unsigned int a2)
{
  int v2; // eax
  __int64 v4; // [rsp+40h] [rbp-88h] BYREF
  _QWORD v5[13]; // [rsp+48h] [rbp-80h] BYREF

  v4 = a2;
  v2 = HvlpAffinityToHvProcessorSet(a1, v5, 0x58u);
  return (unsigned __int16)HvcallFastExtended(((v2 + 7) << 14) & 0x3FE0000 | 0x10015u, (__int64)&v4, v2 + 24, 0LL, 0) != 0
       ? 0xC0000001
       : 0;
}
