/*
 * XREFs of HvlpQueryHypervisorSchedulerType @ 0x140582FF4
 * Callers:
 *     HvlPhase2Initialize @ 0x14057FF00 (HvlPhase2Initialize.c)
 *     HvlpDetermineEnlightenments @ 0x140588CEC (HvlpDetermineEnlightenments.c)
 * Callees:
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 HvlpQueryHypervisorSchedulerType()
{
  unsigned int v0; // edi
  _QWORD *v1; // rbx
  _QWORD *v2; // rsi
  __m256i v4; // [rsp+20h] [rbp-E8h] BYREF
  __m256i v5; // [rsp+40h] [rbp-C8h] BYREF
  int v6; // [rsp+60h] [rbp-A8h]
  _BYTE v7[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v8[2064]; // [rsp+88h] [rbp-80h] BYREF

  v6 = 0;
  memset(&v5.m256i_u64[1], 0, 24);
  v5.m256i_i32[0] = 0;
  memset(&v4.m256i_u64[1], 0, 24);
  v0 = 0;
  v1 = HvlpAcquireHypercallPage((__int64)&v5.m256i_i64[1], 1, (__int64)v7, 16LL);
  v2 = HvlpAcquireHypercallPage((__int64)&v4.m256i_i64[1], 2, (__int64)v8, 1032LL);
  *(_DWORD *)v1 = 15;
  if ( !(unsigned __int16)HvcallInitiateHypercall(123) )
    v0 = *(_DWORD *)v2;
  HvlpReleaseHypercallPage(&v4.m256i_u32[2]);
  HvlpReleaseHypercallPage(&v5.m256i_u32[2]);
  return v0;
}
