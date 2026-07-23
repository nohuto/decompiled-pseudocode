/*
 * XREFs of HvlWakeVirtualProcessors @ 0x140586AD0
 * Callers:
 *     KeWakeAddressAll @ 0x1402CA630 (KeWakeAddressAll.c)
 *     KiHaltOnAddressWakeEntireList @ 0x1402CA924 (KiHaltOnAddressWakeEntireList.c)
 * Callees:
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvcallFastExtended @ 0x14039DBD0 (HvcallFastExtended.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAffinityToHvProcessorSet @ 0x1403A4864 (HvlpAffinityToHvProcessorSet.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall HvlWakeVirtualProcessors(__int64 a1)
{
  int v2; // eax
  unsigned __int16 v3; // bx
  _QWORD *v4; // rax
  char v5; // cl
  int v6; // eax
  _QWORD *v7; // rax
  __int128 v9; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v10; // [rsp+48h] [rbp-B8h]
  __int64 v11; // [rsp+50h] [rbp-B0h]
  __int64 v12; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v13[21]; // [rsp+68h] [rbp-98h] BYREF

  v10 = 0LL;
  LODWORD(v11) = 0;
  v9 = 0LL;
  memset_0(&v12, 0, 0xB0uLL);
  if ( (HvlEnlightenments & 0x80u) == 0 || (unsigned __int64)((HvlpFlags >> 8) & 0xF) + 4 >= 0xE )
  {
    v4 = HvlpAcquireHypercallPage((__int64)&v9, 1, (__int64)&v12, 88LL);
    v5 = v9 & 2;
    *v4 = -1LL;
    v6 = HvlpAffinityToHvProcessorSet(a1, v4 + 1, v5 != 0 ? 64 : 4072);
    if ( v6 == -1 )
    {
      HvlpReleaseHypercallPage((unsigned int *)&v9);
      v7 = HvlpAcquireHypercallPage((__int64)&v9, 1, 0LL, 0LL);
      v6 = HvlpAffinityToHvProcessorSet(a1, v7 + 1, 0xFE8u);
    }
    v3 = HvcallInitiateHypercall(((v6 + 7) << 14) & 0x3FE0000 | 0x114u);
    HvlpReleaseHypercallPage((unsigned int *)&v9);
  }
  else
  {
    v12 = -1LL;
    v2 = HvlpAffinityToHvProcessorSet(a1, v13, 0x58u);
    v3 = HvcallFastExtended(((v2 + 7) << 14) & 0x3FE0000 | 0x10114u, (__int64)&v12, v2 + 24, 0LL, 0);
  }
  return HvlpHvToNtStatus(v3);
}
