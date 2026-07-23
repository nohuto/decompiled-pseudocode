/*
 * XREFs of HvlpWithdrawPages @ 0x140582CD0
 * Callers:
 *     HvlpAddRemovePhysicalMemory @ 0x1406A1D78 (HvlpAddRemovePhysicalMemory.c)
 * Callees:
 *     MiFreePagesFromMdl @ 0x140218F60 (MiFreePagesFromMdl.c)
 *     HvlpReleaseHypercallPage @ 0x14039DEB0 (HvlpReleaseHypercallPage.c)
 *     HvcallInitiateHypercall @ 0x14039DF20 (HvcallInitiateHypercall.c)
 *     HvlpAcquireHypercallPage @ 0x14045D900 (HvlpAcquireHypercallPage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 HvlpWithdrawPages()
{
  _QWORD *v0; // rbx
  unsigned __int64 *v1; // r13
  unsigned __int64 v2; // r14
  unsigned int v3; // r15d
  unsigned int v4; // eax
  __int16 v5; // cx
  unsigned __int64 *v6; // r12
  __int16 v7; // di
  __int64 v8; // rbx
  _QWORD *v9; // rcx
  __int64 v10; // r8
  unsigned int v12; // [rsp+28h] [rbp-E0h]
  __int64 v13; // [rsp+38h] [rbp-D0h]
  unsigned __int64 *v14; // [rsp+40h] [rbp-C8h]
  __m256i v15; // [rsp+50h] [rbp-B8h] BYREF
  __m256i v16; // [rsp+70h] [rbp-98h] BYREF
  __int64 v17; // [rsp+90h] [rbp-78h]
  ULONG_PTR BugCheckParameter2; // [rsp+98h] [rbp-70h] BYREF
  __int16 v19; // [rsp+A0h] [rbp-68h]
  __int16 v20; // [rsp+A2h] [rbp-66h]
  __int64 v21; // [rsp+B8h] [rbp-50h]
  int v22; // [rsp+C0h] [rbp-48h]
  int v23; // [rsp+C4h] [rbp-44h]
  _BYTE v24[512]; // [rsp+C8h] [rbp-40h] BYREF

  LODWORD(v17) = 0;
  memset(&v16.m256i_u64[1], 0, 24);
  v16.m256i_i32[0] = 0;
  memset(&v15.m256i_u64[1], 0, 24);
  memset_0(&BugCheckParameter2, 0, 0x230uLL);
  v0 = HvlpAcquireHypercallPage((__int64)&v16.m256i_i64[1], 1, 0LL, 0LL);
  v14 = HvlpAcquireHypercallPage((__int64)&v15.m256i_i64[1], 2, 0LL, 0LL);
  v0[1] = 0LL;
  v1 = v14;
  *v0 = -1LL;
  if ( !(unsigned __int16)HvcallInitiateHypercall(74) )
  {
    v2 = *v14;
    v0[1] = 0LL;
    *v0 = -1LL;
    v3 = 0;
    do
    {
      if ( !v2 )
        break;
      v4 = v3;
      v5 = 512;
      if ( v2 < 0x200 )
        v5 = v2;
      v3 = v3 & 0xFFFFF000 | v5 & 0xFFF;
      v12 = v4 & 0xFFFFF000 | v5 & 0xFFF;
      v13 = HvcallInitiateHypercall(73);
      v6 = v1;
      v2 -= WORD2(v13) & 0xFFF;
      if ( (v13 & 0xFFF00000000LL) != 0 )
      {
        v7 = WORD2(v13);
        do
        {
          BugCheckParameter2 = 0LL;
          v8 = v7 & 0xFFF;
          v20 = 0;
          v21 = 0LL;
          v23 = 0;
          if ( (unsigned int)v8 > 0x40 )
            v8 = 64LL;
          v22 = (_DWORD)v8 << 12;
          v19 = 8 * (v8 + 6);
          if ( (_DWORD)v8 )
          {
            v9 = v24;
            v10 = (unsigned int)v8;
            do
            {
              *v9 = *(_QWORD *)((char *)v9 + (char *)v6 - v24);
              ++v9;
              --v10;
            }
            while ( v10 );
          }
          MiFreePagesFromMdl((ULONG_PTR)&BugCheckParameter2, 0, 0, 0);
          v6 += v8;
          v7 = v7 & 0xF000 | (v7 - v8) & 0xFFF;
        }
        while ( (v7 & 0xFFF) != 0 );
        v3 = v12;
        v1 = v14;
      }
    }
    while ( !(_WORD)v13 );
  }
  HvlpReleaseHypercallPage(&v15.m256i_u32[2]);
  return HvlpReleaseHypercallPage(&v16.m256i_u32[2]);
}
