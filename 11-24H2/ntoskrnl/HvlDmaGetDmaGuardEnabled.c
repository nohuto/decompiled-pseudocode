/*
 * XREFs of HvlDmaGetDmaGuardEnabled @ 0x140583A90
 * Callers:
 *     <none>
 * Callees:
 *     HvlpHvToNtStatus @ 0x14039CC08 (HvlpHvToNtStatus.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall HvlDmaGetDmaGuardEnabled(_BYTE *a1)
{
  _QWORD *v2; // rbx
  _QWORD *v3; // rax
  _BYTE *v4; // rsi
  unsigned __int16 v5; // bx
  __m256i v7; // [rsp+20h] [rbp-E8h] BYREF
  __m256i v8; // [rsp+40h] [rbp-C8h] BYREF
  int v9; // [rsp+60h] [rbp-A8h]
  _BYTE v10[32]; // [rsp+68h] [rbp-A0h] BYREF
  _BYTE v11[2064]; // [rsp+88h] [rbp-80h] BYREF

  v9 = 0;
  v8.m256i_i32[0] = 0;
  memset(&v8.m256i_u64[1], 0, 24);
  memset(&v7.m256i_u64[1], 0, 24);
  v2 = HvlpAcquireHypercallPage((__int64)&v8.m256i_i64[1], 1, (__int64)v10, 16LL);
  v3 = HvlpAcquireHypercallPage((__int64)&v7.m256i_i64[1], 2, (__int64)v11, 1032LL);
  *(_OWORD *)v2 = 0LL;
  *(_DWORD *)v2 = 20;
  v4 = v3;
  v5 = HvcallInitiateHypercall(123);
  if ( !v5 )
    *a1 = *v4;
  HvlpReleaseHypercallPage(&v7.m256i_u32[2]);
  HvlpReleaseHypercallPage(&v8.m256i_u32[2]);
  return HvlpHvToNtStatus(v5);
}
