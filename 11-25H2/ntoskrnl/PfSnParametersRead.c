/*
 * XREFs of PfSnParametersRead @ 0x14073BCB0
 * Callers:
 *     PfpParametersWatcher @ 0x14073C490 (PfpParametersWatcher.c)
 *     PfpParametersInitialize @ 0x140C1BC3C (PfpParametersInitialize.c)
 * Callees:
 *     RtlStringCbCopyW @ 0x140436640 (RtlStringCbCopyW.c)
 *     RtlStringCbCatW @ 0x14044D218 (RtlStringCbCatW.c)
 *     _wcsupr @ 0x1404FBF50 (_wcsupr.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     PfSnParametersVerify @ 0x14073C0B8 (PfSnParametersVerify.c)
 *     PfpGetParameter @ 0x14073C1C4 (PfpGetParameter.c)
 */

__int64 __fastcall PfSnParametersRead(__int64 a1)
{
  __int64 v1; // rdi
  _OWORD *v3; // rax
  _OWORD *v4; // rdx
  __int64 v5; // rcx
  __int128 v6; // xmm1
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int64 v14; // rax
  void *v15; // r15
  _DWORD *v16; // rsi
  int v17; // r12d
  int *v18; // rbx
  const wchar_t **v19; // r14
  const wchar_t *v20; // r13
  int v21; // eax
  const wchar_t *v22; // r8
  unsigned int v23; // r11d
  unsigned int v24; // r11d
  __int64 result; // rax
  _OWORD *v26; // rbx
  _OWORD *v27; // rax
  __int128 v28; // xmm1
  __int128 v29; // xmm0
  __int128 v30; // xmm1
  __int128 v31; // xmm0
  __int128 v32; // xmm1
  __int128 v33; // xmm0
  __int128 v34; // xmm1
  __int128 v35; // xmm0
  __int64 v36; // rax
  __int64 v37; // [rsp+38h] [rbp-D0h] BYREF
  char *v38; // [rsp+40h] [rbp-C8h]
  _OWORD *v39; // [rsp+48h] [rbp-C0h]
  _BYTE v40[16]; // [rsp+58h] [rbp-B0h] BYREF
  char v41; // [rsp+68h] [rbp-A0h] BYREF
  wchar_t String[128]; // [rsp+E8h] [rbp-20h] BYREF
  wchar_t pszDest[80]; // [rsp+1F8h] [rbp+F0h] BYREF

  v1 = 3LL;
  v39 = (_OWORD *)(a1 + 96);
  v3 = (_OWORD *)(a1 + 96);
  v4 = v40;
  v5 = 3LL;
  do
  {
    v6 = v3[1];
    *v4 = *v3;
    v7 = v3[2];
    v4[1] = v6;
    v8 = v3[3];
    v4[2] = v7;
    v9 = v3[4];
    v4[3] = v8;
    v10 = v3[5];
    v4[4] = v9;
    v11 = v3[6];
    v4[5] = v10;
    v12 = v3[7];
    v3 += 8;
    v4[6] = v11;
    v4 += 8;
    *(v4 - 1) = v12;
    --v5;
  }
  while ( v5 );
  v13 = *v3;
  v14 = *((_QWORD *)v3 + 2);
  v15 = *(void **)(a1 + 8);
  *v4 = v13;
  *((_QWORD *)v4 + 2) = v14;
  v37 = 4LL;
  v16 = (_DWORD *)&v37 + 1;
  v17 = 0;
  if ( (int)PfpGetParameter(v15, (__int64)&v37) < 0 )
    v16 = 0LL;
  v38 = &v41;
  v18 = (int *)v40;
  v19 = (const wchar_t **)(a1 + 520);
  do
  {
    v20 = *v19;
    if ( v16 )
      v21 = 2 - ((*v16 & (1 << v17)) != 0);
    else
      v21 = 0;
    v22 = *v19;
    *v18 = v21;
    RtlStringCbCopyW(pszDest, 0xA0uLL, v22);
    RtlStringCbCatW(pszDest, 0xA0uLL, L"MaxNumPages");
    LODWORD(v37) = 4;
    PfpGetParameter(v15, (__int64)&v37);
    RtlStringCbCopyW(pszDest, 0xA0uLL, v20);
    RtlStringCbCatW(pszDest, v23, L"MaxNumSections");
    LODWORD(v37) = 4;
    PfpGetParameter(v15, (__int64)&v37);
    RtlStringCbCopyW(pszDest, 0xA0uLL, v20);
    RtlStringCbCatW(pszDest, v24, L"TimerPeriod");
    LODWORD(v37) = 8;
    PfpGetParameter(v15, (__int64)&v37);
    v38 += 16;
    ++v18;
    ++v17;
    ++v19;
  }
  while ( v17 < 2 );
  LODWORD(v37) = 96;
  PfpGetParameter(v15, (__int64)&v37);
  LODWORD(v37) = 4;
  PfpGetParameter(v15, (__int64)&v37);
  LODWORD(v37) = 4;
  PfpGetParameter(v15, (__int64)&v37);
  LODWORD(v37) = 4;
  PfpGetParameter(v15, (__int64)&v37);
  LODWORD(v37) = 256;
  PfpGetParameter(v15, (__int64)&v37);
  String[127] = 0;
  wcsupr(String);
  LODWORD(v37) = 4;
  PfpGetParameter(v15, (__int64)&v37);
  result = PfSnParametersVerify(v40);
  v26 = v39;
  if ( (int)result >= 0 )
  {
    v27 = v40;
    do
    {
      v28 = v27[1];
      *v26 = *v27;
      v29 = v27[2];
      v26[1] = v28;
      v30 = v27[3];
      v26[2] = v29;
      v31 = v27[4];
      v26[3] = v30;
      v32 = v27[5];
      v26[4] = v31;
      v33 = v27[6];
      v26[5] = v32;
      v34 = v27[7];
      v27 += 8;
      v26[6] = v33;
      v26 += 8;
      *(v26 - 1) = v34;
      --v1;
    }
    while ( v1 );
    v35 = *v27;
    v36 = *((_QWORD *)v27 + 2);
    *v26 = v35;
    *((_QWORD *)v26 + 2) = v36;
    return 0LL;
  }
  return result;
}
