/*
 * XREFs of PspValidateMitigationAuditOptions @ 0x140A979C0
 * Callers:
 *     PspBuildCreateProcessContext @ 0x1408F9210 (PspBuildCreateProcessContext.c)
 *     PspReadIFEOMitigationAuditOptions @ 0x140A17214 (PspReadIFEOMitigationAuditOptions.c)
 *     PspInitPhase0 @ 0x140C676AC (PspInitPhase0.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 */

__int64 __fastcall PspValidateMitigationAuditOptions(__int128 *a1)
{
  char *v1; // rdx
  int v2; // eax
  __int64 v3; // r8
  unsigned int v4; // edx
  __int64 v5; // r10
  __int64 v6; // r9
  unsigned int v7; // r8d
  __int64 v8; // xmm1_8
  char v9; // r11
  __int64 v10; // xmm1_8
  _DWORD v12[4]; // [rsp+0h] [rbp-49h]
  __int128 v13; // [rsp+10h] [rbp-39h]
  __int64 v14; // [rsp+20h] [rbp-29h]
  _DWORD v15[3]; // [rsp+30h] [rbp-19h]
  char v16; // [rsp+3Ch] [rbp-Dh] BYREF
  int v17; // [rsp+4Ch] [rbp+3h]
  __m128i si128; // [rsp+50h] [rbp+7h]
  __m128i v19; // [rsp+60h] [rbp+17h]
  __m128i v20; // [rsp+70h] [rbp+27h]
  int v21; // [rsp+80h] [rbp+37h]

  v15[0] = 1;
  v15[1] = 7;
  v15[2] = 9;
  v1 = &v16;
  v2 = 11;
  v3 = 4LL;
  do
  {
    *(_DWORD *)v1 = v2++;
    v1 += 4;
    --v3;
  }
  while ( v3 );
  v4 = 0;
  v5 = 0LL;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v6 = 0LL;
  v20 = _mm_load_si128((const __m128i *)&_xmm);
  v7 = 40;
  v17 = 17;
  v19 = _mm_load_si128((const __m128i *)&_xmm);
  v21 = 39;
  v12[0] = 11;
  while ( v4 < 0x28 )
  {
    v8 = *((_QWORD *)a1 + 2);
    v13 = *a1;
    v14 = v8;
    v9 = (*((_QWORD *)&v13 + ((unsigned __int64)(4 * v4) >> 6)) >> ((4 * v4) & 0x3F)) & 3;
    if ( (unsigned int)v5 < 0x15 && v15[v5] == v4 )
    {
      v5 = (unsigned int)(v5 + 1);
    }
    else if ( v9 )
    {
      return 3221225485LL;
    }
    if ( (_DWORD)v6 || v12[v6] != v4 )
    {
      if ( v9 == 3 )
        return 3221225485LL;
    }
    else
    {
      v6 = 1LL;
    }
    ++v4;
  }
  while ( v7 < 0x30 )
  {
    v10 = *((_QWORD *)a1 + 2);
    v13 = *a1;
    v14 = v10;
    if ( ((*((_QWORD *)&v13 + ((unsigned __int64)(4 * v7) >> 6)) >> ((4 * v7) & 0x3F)) & 3) != 0 )
      return 3221225485LL;
    ++v7;
  }
  return 0LL;
}
