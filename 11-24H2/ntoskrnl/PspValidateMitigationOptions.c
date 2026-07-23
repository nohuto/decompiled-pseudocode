/*
 * XREFs of PspValidateMitigationOptions @ 0x140A175FC
 * Callers:
 *     PspBuildCreateProcessContext @ 0x1408F9210 (PspBuildCreateProcessContext.c)
 *     PspReadIFEOMitigationOptions @ 0x140A17298 (PspReadIFEOMitigationOptions.c)
 *     PspInitPhase0 @ 0x140C676AC (PspInitPhase0.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PspValidateMitigationOptions(__m128i *a1, char a2)
{
  char *v2; // r8
  int v3; // eax
  __int64 v6; // rcx
  unsigned int v7; // r8d
  unsigned int v8; // edx
  __int64 v9; // r9
  __int64 v10; // xmm1_8
  __int64 v11; // xmm1_8
  int v12; // ecx
  __m128i v14; // [rsp+0h] [rbp-60h]
  __int64 v15; // [rsp+10h] [rbp-50h]
  _DWORD v16[3]; // [rsp+20h] [rbp-40h]
  char v17; // [rsp+2Ch] [rbp-34h] BYREF
  __m128i si128; // [rsp+3Ch] [rbp-24h]
  int v19; // [rsp+4Ch] [rbp-14h]
  int v20; // [rsp+50h] [rbp-10h]

  v16[0] = 0;
  v2 = &v17;
  v3 = 9;
  v16[1] = 1;
  v16[2] = 2;
  v6 = 4LL;
  do
  {
    *(_DWORD *)v2 = v3++;
    v2 += 4;
    --v6;
  }
  while ( v6 );
  v7 = 40;
  v8 = 0;
  v19 = 32;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v9 = 0LL;
  v20 = 33;
  while ( v8 < 0x28 )
  {
    v10 = a1[1].m128i_i64[0];
    v14 = *a1;
    v15 = v10;
    if ( !a2 && (((unsigned __int64)v14.m128i_i64[(unsigned __int64)(4 * v8) >> 6] >> ((4 * v8) & 0x3F)) & 4) != 0 )
      return 3221225485LL;
    if ( (unsigned int)v9 < 0xD && v16[v9] == v8 )
    {
      v9 = (unsigned int)(v9 + 1);
    }
    else if ( (((unsigned __int64)v14.m128i_i64[(unsigned __int64)(4 * v8) >> 6] >> ((4 * v8) & 0x3F)) & 0xF) == 3 )
    {
      return 3221225485LL;
    }
    ++v8;
  }
  while ( v7 < 0x30 )
  {
    v11 = a1[1].m128i_i64[0];
    v14 = *a1;
    v15 = v11;
    if ( (((unsigned __int64)v14.m128i_i64[(unsigned __int64)(4 * v7) >> 6] >> ((4 * v7) & 0x3F)) & 0xF) != 0 )
      return 3221225485LL;
    ++v7;
  }
  v12 = ((_mm_srli_si128(*a1, 8).m128i_u64[0] >> 12) & 3) - 1;
  if ( v12 && (unsigned int)(v12 - 1) >= 2 )
    return 0LL;
  return 3221225485LL;
}
