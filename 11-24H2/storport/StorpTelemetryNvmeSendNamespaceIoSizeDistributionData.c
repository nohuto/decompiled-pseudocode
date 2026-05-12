/*
 * XREFs of StorpTelemetryNvmeSendNamespaceIoSizeDistributionData @ 0x1400B7B28
 * Callers:
 *     StorpTelemetryNvmeSendNamespacePerfData @ 0x1400B835C (StorpTelemetryNvmeSendNamespacePerfData.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     McTemplateK0qjzshqussssjqzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer @ 0x1400ABFE8 (McTemplateK0qjzshqussssjqzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer.c)
 *     StringCchCatA @ 0x1400BD2F0 (StringCchCatA.c)
 *     StringCchPrintfA @ 0x1400BD388 (StringCchPrintfA.c)
 *     __security_check_cookie @ 0x140143690 (__security_check_cookie.c)
 *     memmove @ 0x140143780 (memmove.c)
 *     memset_0 @ 0x140143A80 (memset_0.c)
 */

__int64 __fastcall StorpTelemetryNvmeSendNamespaceIoSizeDistributionData(__int64 a1)
{
  __int64 v1; // r15
  __int64 v2; // rsi
  __int64 v3; // r13
  unsigned int v4; // edi
  void *v5; // r14
  _QWORD *v6; // r12
  __int64 v7; // rax
  ULONG RecommendedSharedDataAlignment; // ebx
  ULONG v9; // eax
  unsigned int i; // edx
  __int64 v11; // r9
  _QWORD *v12; // rcx
  __int64 v13; // r8
  __int64 v14; // rcx
  _QWORD *v15; // r8
  char *v16; // r9
  char *v17; // r10
  __int64 v18; // r11
  __int64 v19; // rdx
  int v20; // r13d
  __int64 v21; // rax
  __int64 v22; // rbx
  char *v23; // rax
  __int64 v24; // r9
  char *v25; // r15
  void *v26; // rax
  int v27; // r15d
  char *v28; // rsi
  __int64 v29; // rbx
  size_t v30; // rdx
  size_t v31; // rdx
  size_t v32; // rdx
  size_t v33; // rdx
  bool v34; // cc
  __int64 v35; // r11
  _WORD *v36; // rax
  __int16 v37; // ax
  char v38; // al
  unsigned __int8 v39; // cl
  char v40; // cl
  unsigned __int8 v41; // cl
  char v42; // cl
  unsigned __int8 v43; // cl
  unsigned __int8 v44; // cl
  __int64 v45; // rax
  const char *v46; // r8
  __int64 v47; // rbx
  __int64 v48; // rsi
  PVOID v49; // rcx
  PVOID v50; // rcx
  int v52; // [rsp+1C8h] [rbp-80h]
  __int64 v53; // [rsp+1D0h] [rbp-78h]
  __int64 v54; // [rsp+1D8h] [rbp-70h]
  char v55; // [rsp+1E0h] [rbp-68h]
  __int64 v56; // [rsp+1E8h] [rbp-60h]
  char *v57; // [rsp+1F8h] [rbp-50h]
  _QWORD *Pool; // [rsp+208h] [rbp-40h]
  PVOID P[18]; // [rsp+218h] [rbp-30h] BYREF
  PVOID v61[18]; // [rsp+2A8h] [rbp+60h] BYREF
  char v62[13]; // [rsp+338h] [rbp+F0h] BYREF
  int v63; // [rsp+345h] [rbp+FDh]
  __int64 v64; // [rsp+350h] [rbp+108h] BYREF
  char v65; // [rsp+358h] [rbp+110h]
  char pszDest[16]; // [rsp+360h] [rbp+118h] BYREF
  int v67; // [rsp+370h] [rbp+128h]
  char pszSrc[16]; // [rsp+378h] [rbp+130h] BYREF
  int v69; // [rsp+388h] [rbp+140h]
  __int128 v70; // [rsp+390h] [rbp+148h] BYREF
  __int128 v71; // [rsp+3A0h] [rbp+158h]
  __int64 v72; // [rsp+3B0h] [rbp+168h]
  char v73; // [rsp+3B8h] [rbp+170h]

  v1 = HIDWORD(qword_140170E30);
  v2 = a1;
  v3 = 0LL;
  v55 = 0;
  v4 = -1073741823;
  v5 = 0LL;
  v6 = 0LL;
  memset_0(P, 0, sizeof(P));
  memset_0(v61, 0, sizeof(v61));
  v63 = 0;
  v72 = 0LL;
  v73 = 0;
  v64 = 0LL;
  v65 = 0;
  v7 = *(_QWORD *)(v2 + 608);
  strcpy(v62, "PCI vendor: ");
  v70 = 0LL;
  v56 = 2LL;
  v71 = 0LL;
  if ( !*(_QWORD *)(v7 + 16) )
    goto LABEL_44;
  Pool = (_QWORD *)RaidAllocatePool(72LL, (unsigned int)dword_140170E44, 1700028754LL, *(_QWORD *)(v2 + 8));
  v5 = Pool;
  if ( !Pool )
    goto LABEL_43;
  RecommendedSharedDataAlignment = KeGetRecommendedSharedDataAlignment();
  v9 = KeGetRecommendedSharedDataAlignment();
  v6 = (_QWORD *)RaidAllocatePool(
                   72LL,
                   -v9 & (RecommendedSharedDataAlignment + 16 * (_DWORD)v1 - 1),
                   1700028754LL,
                   *(_QWORD *)(v2 + 8));
  if ( !v6 )
    goto LABEL_43;
  memmove(Pool, *(const void **)(*(_QWORD *)(v2 + 608) + 16LL), (unsigned int)dword_140170E44);
  for ( i = 1; i < g_RaidNumberProcessors; ++i )
  {
    v11 = (unsigned int)dword_140170E3C * i;
    if ( (_DWORD)v1 )
    {
      v12 = Pool + 1;
      v13 = v1;
      do
      {
        *(v12 - 1) += *(_QWORD *)((char *)v12 + v11 - 8);
        *v12 += *(_QWORD *)((char *)v12 + v11);
        v12 += 2;
        --v13;
      }
      while ( v13 );
    }
  }
  v14 = *(_QWORD *)(*(_QWORD *)(v2 + 608) + 40LL);
  if ( (_DWORD)v1 )
  {
    v15 = (_QWORD *)(v14 + 8);
    v16 = (char *)Pool - v14;
    v17 = (char *)v6 - v14;
    v18 = v1;
    do
    {
      v19 = *(_QWORD *)((char *)v15 + (_QWORD)v16 - 8) - *(v15 - 1);
      *(_QWORD *)((char *)v15 + (_QWORD)v17 - 8) = v19;
      v3 += v19;
      *(_QWORD *)((char *)v15 + (_QWORD)v17) = *(_QWORD *)((char *)v15 + (_QWORD)v16) - *v15;
      v15 += 2;
      --v18;
    }
    while ( v18 );
    v55 = v3;
  }
  memmove(*(void **)(*(_QWORD *)(v2 + 608) + 40LL), Pool, (unsigned int)dword_140170E3C);
  if ( v3 )
  {
    v20 = 0;
    v21 = 0LL;
    v54 = 0LL;
LABEL_15:
    v52 = 0;
    v22 = v21;
    v53 = v21;
    while ( 1 )
    {
      v23 = (char *)RaidAllocatePool(64LL, 351LL, 1700028754LL, *(_QWORD *)(v2 + 8));
      v24 = *(_QWORD *)(v2 + 8);
      v57 = v23;
      *(PVOID *)((char *)P + v22) = v23;
      v25 = v23;
      v26 = (void *)RaidAllocatePool(64LL, 351LL, 1700028754LL, v24);
      *(PVOID *)((char *)v61 + v22) = v26;
      if ( !v25 || !v26 )
        break;
      v27 = 0;
      v28 = (char *)v26;
      do
      {
        v67 = 0;
        v69 = 0;
        *(_OWORD *)pszDest = 0LL;
        *(_OWORD *)pszSrc = 0LL;
        v29 = 2LL * (v20 + (unsigned __int16)xmmword_140170E00 * (v52 + v27 * (unsigned int)WORD1(xmmword_140170E00)));
        StringCchPrintfA(
          pszDest,
          0x14uLL,
          "%lld",
          v6[2 * v20 + 2 * (unsigned __int16)xmmword_140170E00 * (v52 + v27 * (unsigned int)WORD1(xmmword_140170E00))]);
        StringCchPrintfA(pszSrc, 0x14uLL, "%lld", v6[v29 + 1]);
        StringCchCatA(v57, v30, pszDest);
        StringCchCatA(v28, v31, pszSrc);
        if ( (unsigned int)v27 < 0xD )
        {
          StringCchCatA(v57, v32, ", ");
          StringCchCatA(v28, v33, ", ");
        }
        ++v27;
      }
      while ( v27 < 14 );
      v2 = a1;
      v22 = v53 + 8;
      v5 = Pool;
      v34 = ++v52 < 9;
      v4 = -1073741823;
      v53 += 8LL;
      if ( !v34 )
      {
        ++v20;
        v21 = v54 + 72;
        v54 += 72LL;
        if ( v20 < 2 )
          goto LABEL_15;
        v35 = *(_QWORD *)(a1 + 16);
        if ( v35 )
        {
          v36 = *(_WORD **)(v35 + 592);
          if ( v36 )
          {
            v37 = *v36 >> 12;
            if ( (unsigned __int8)v37 > 9u )
              v38 = v37 + 55;
            else
              v38 = v37 + 48;
            v62[12] = v38;
            v39 = *(_BYTE *)(*(_QWORD *)(v35 + 592) + 1LL) & 0xF;
            if ( v39 > 9u )
              v40 = v39 + 55;
            else
              v40 = v39 + 48;
            LOBYTE(v63) = v40;
            v41 = (**(_BYTE **)(v35 + 592) >> 4) & 0xF;
            if ( v41 > 9u )
              v42 = v41 + 55;
            else
              v42 = v41 + 48;
            BYTE1(v63) = v42;
            v43 = **(_BYTE **)(v35 + 592) & 0xF;
            if ( v43 > 9u )
              v44 = v43 + 55;
            else
              v44 = v43 + 48;
            HIWORD(v63) = v44;
            v45 = *(_QWORD *)(v35 + 592);
            v70 = *(_OWORD *)(v45 + 24);
            v71 = *(_OWORD *)(v45 + 40);
            v72 = *(_QWORD *)(v45 + 56);
            v64 = *(_QWORD *)(*(_QWORD *)(v35 + 592) + 64LL);
          }
        }
        if ( (byte_14017146A & 0x20) != 0 )
        {
          v46 = (const char *)&word_140150F48;
          if ( *(_QWORD *)(v35 + 752) )
            v46 = *(const char **)(v35 + 752);
          McTemplateK0qjzshqussssjqzzxssssssssssssssssssssssssssssssssssss_EtwWriteTransfer(
            (__int64)&StorPortEventProvider_Context,
            (__int64)&NVMeNamespaceIoSizeDistribution,
            0LL,
            *(_DWORD *)(*(_QWORD *)(v35 + 128) + 56LL),
            *(_QWORD *)(v35 + 128) + 1032LL,
            *(const wchar_t **)(*(_QWORD *)(v35 + 128) + 1016LL),
            *(const char **)(v35 + 792),
            *(_WORD *)(v35 + 4),
            *(_DWORD *)(a1 + 56),
            *(_BYTE *)(v35 + 744),
            v46,
            v62,
            (const char *)&v70,
            (const char *)&v64,
            a1 + 160,
            (*(_BYTE *)(v35 + 136) & 2) != 0 ? 20 : 17,
            (int)L"4K, 8K, 16K, 32K, 64K, 128K, 256K, 1M, 1M+",
            (int)L"128us, 256us, 512us, 1ms, 4ms, 16ms, 64ms, 128ms, 256ms, 512ms, 1000ms, 2000ms, 10000ms, 10000+ms",
            v55,
            (const char *)P[0],
            (const char *)v61[0],
            (const char *)P[1],
            (const char *)v61[1],
            (const char *)P[2],
            (const char *)v61[2],
            (const char *)P[3],
            (const char *)v61[3],
            (const char *)P[4],
            (const char *)v61[4],
            (const char *)P[5],
            (const char *)v61[5],
            (const char *)P[6],
            (const char *)v61[6],
            (const char *)P[7],
            (const char *)v61[7],
            (const char *)P[8],
            (const char *)v61[8],
            (const char *)P[9],
            (const char *)v61[9],
            (const char *)P[10],
            (const char *)v61[10],
            (const char *)P[11],
            (const char *)v61[11],
            (const char *)P[12],
            (const char *)v61[12],
            (const char *)P[13],
            (const char *)v61[13],
            (const char *)P[14],
            (const char *)v61[14],
            (const char *)P[15],
            (const char *)v61[15],
            (const char *)P[16],
            (const char *)v61[16],
            (const char *)P[17],
            (const char *)v61[17]);
        }
        goto LABEL_44;
      }
    }
LABEL_43:
    v4 = -1073741801;
  }
LABEL_44:
  v47 = 0LL;
  do
  {
    v48 = 9LL;
    do
    {
      v49 = P[v47];
      if ( v49 )
      {
        ExFreePoolWithTag(v49, 0x65546152u);
        P[v47] = 0LL;
      }
      v50 = v61[v47];
      if ( v50 )
      {
        ExFreePoolWithTag(v50, 0x65546152u);
        v61[v47] = 0LL;
      }
      ++v47;
      --v48;
    }
    while ( v48 );
    --v56;
  }
  while ( v56 );
  if ( v6 )
    ExFreePoolWithTag(v6, 0x65546152u);
  if ( v5 )
    ExFreePoolWithTag(v5, 0x65546152u);
  return v4;
}
