/*
 * XREFs of HvlpFastSendSyntheticClusterIpiEx @ 0x1404C62C0
 * Callers:
 *     HvlSendSyntheticClusterIpi @ 0x140267530 (HvlSendSyntheticClusterIpi.c)
 * Callees:
 *     HvlpAffinityToHvProcessorSet @ 0x14026D37C (HvlpAffinityToHvProcessorSet.c)
 *     HvcallFastExtended @ 0x14032C840 (HvcallFastExtended.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
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
