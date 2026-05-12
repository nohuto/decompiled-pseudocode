/*
 * XREFs of StorpTelemetryCollectNvmePerfData2 @ 0x1400B2FA0
 * Callers:
 *     NvmeCompletionDpcRoutine @ 0x14011A4A0 (NvmeCompletionDpcRoutine.c)
 * Callees:
 *     McTemplateK0qjzshqusssjqxquuhqi_EtwWriteTransfer @ 0x1400AB60C (McTemplateK0qjzshqusssjqxquuhqi_EtwWriteTransfer.c)
 */

__int64 __fastcall StorpTelemetryCollectNvmePerfData2(__int64 a1, int *a2, __int64 a3, int a4, unsigned int a5)
{
  __int64 result; // rax
  unsigned int v6; // r12d
  __int64 v7; // rdi
  __int64 v10; // rbx
  int v11; // eax
  bool v12; // si
  unsigned int v13; // ebp
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v15; // rcx
  signed __int64 UnbiasedInterruptTime; // rax
  __int64 v17; // rcx
  __int64 v18; // r13
  const char *v19; // rbp
  int v20; // esi
  char v21; // r14
  __int64 v22; // r15
  int v23; // r14d
  __int64 *v24; // rcx
  int v25; // r9d
  unsigned int v26; // eax
  _QWORD *v27; // r8
  __int64 *v28; // rax
  int v29; // edx
  __m128i *v30; // rdx
  __int64 v31; // rdx
  __int64 *v32; // rcx
  char v33; // [rsp+90h] [rbp-68h]
  unsigned int v34; // [rsp+B0h] [rbp-48h]
  int v35; // [rsp+B4h] [rbp-44h]
  __int64 v36; // [rsp+B8h] [rbp-40h]
  bool v39; // [rsp+118h] [rbp+20h]

  result = *(_QWORD *)(a3 + 608);
  v6 = 0;
  v7 = a3;
  v10 = 0LL;
  if ( result && *(_QWORD *)(result + 8) )
  {
    v11 = (unsigned __int8)*a2;
    if ( v11 == 2 || (v35 = 0, v11 == 5) )
      v35 = 1;
    v12 = a4 >= 0;
    v36 = *((_QWORD *)a2 + 5);
    v13 = ((unsigned __int16)a2[12] + 1) << *(_BYTE *)(a3 + 61);
    v39 = a4 >= 0;
    v34 = v13;
    if ( FeatureFixTRIMAddSCSIPassthrough )
    {
      if ( UseQPCTime )
        PerformanceCounter = KeQueryPerformanceCounter(0LL);
      else
        PerformanceCounter.QuadPart = KeQueryUnbiasedInterruptTime();
      v15 = *(_QWORD *)(a1 + 72);
      if ( PerformanceCounter.QuadPart > v15 )
      {
        v10 = PerformanceCounter.QuadPart - v15;
        if ( !IsQpcInUnitOf100Ns )
        {
          if ( UseQPCTime )
            v10 = 10000000 * v10 / QpcFrequency.QuadPart;
        }
      }
    }
    else
    {
      UnbiasedInterruptTime = KeQueryUnbiasedInterruptTime();
      if ( UnbiasedInterruptTime > *(_QWORD *)(a1 + 64) )
        v10 = UnbiasedInterruptTime - *(_QWORD *)(a1 + 64);
    }
    v17 = *(_QWORD *)(v7 + 608);
    if ( (unsigned __int64)v10 >= *(_QWORD *)(v17 + 2320)
      && _InterlockedIncrement((volatile signed __int32 *)v17) <= 128
      && (byte_14017146A & 0x40) != 0 )
    {
      v18 = *(_QWORD *)(v7 + 16);
      v19 = (const char *)&word_140150F48;
      v20 = *a2;
      v21 = 20;
      if ( (*(_BYTE *)(v18 + 136) & 2) == 0 )
        v21 = 17;
      if ( *(_QWORD *)(v18 + 752) )
        v19 = *(const char **)(v18 + 752);
      v33 = BYTE1(*a2) & 3;
      v7 = a3;
      v22 = *(_QWORD *)(v18 + 128);
      McTemplateK0qjzshqusssjqxquuhqi_EtwWriteTransfer(
        (unsigned int)(*(_QWORD *)(*(_QWORD *)(a3 + 608) + 2320LL) / 0x2710uLL),
        v18 + 800,
        a3 + 160,
        *(_DWORD *)(v22 + 56),
        v22 + 1032,
        *(const wchar_t **)(v22 + 1016),
        *(const char **)(v18 + 792),
        *(_WORD *)(v18 + 4),
        *(_DWORD *)(a3 + 56),
        *(_BYTE *)(v18 + 744),
        v19,
        (const char *)(v18 + 800),
        (const char *)(v18 + 841),
        a3 + 160,
        v21,
        *(_QWORD *)(*(_QWORD *)(a3 + 608) + 2320LL) / 0x2710uLL,
        ((((unsigned __int128)(v10 * (__int128)0x346DC5D63886594BLL) >> 64) & 0x8000000000000000uLL) != 0LL)
      + ((__int64)((unsigned __int128)(v10 * (__int128)0x346DC5D63886594BLL) >> 64) >> 11),
        v20,
        v33,
        *((_WORD *)a2 + 1),
        v34,
        v36);
      v12 = v39;
      v13 = v34;
    }
    v23 = 13;
    v24 = (__int64 *)*(&P + 1);
    v25 = v35 ^ 1;
    v26 = 0;
    while ( v10 > *v24 )
    {
      ++v26;
      ++v24;
      if ( v26 >= 0xD )
        goto LABEL_29;
    }
    v23 = v26;
LABEL_29:
    v27 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 608) + 8LL)
                   + *((unsigned int *)qword_140170E58 + a5)
                   + 24
                   * ((unsigned int)dword_140170DCC
                    + (unsigned __int64)(v25 + v23 * (unsigned int)(unsigned __int16)TelemetryPerfContext)));
    if ( v12 )
      ++*v27;
    else
      ++v27[1];
    v27[2] += v10;
    if ( (*(_DWORD *)(v7 + 112) & 0x100LL) != 0 && v12 )
    {
      v28 = (__int64 *)xmmword_140170E10;
      v29 = 8;
      while ( v13 > *v28 )
      {
        ++v6;
        ++v28;
        if ( v6 >= 8 )
          goto LABEL_39;
      }
      v29 = v6;
LABEL_39:
      v30 = (__m128i *)(*(_QWORD *)(*(_QWORD *)(v7 + 608) + 16LL)
                      + *((unsigned int *)qword_140170E60 + a5)
                      + 16
                      * (*((unsigned int *)&xmmword_140170E20 + 3)
                       + (unsigned __int64)(v25
                                          + (unsigned __int16)xmmword_140170E00
                                          * (v23 * (unsigned int)WORD1(xmmword_140170E00) + v29))));
      *v30 = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)1uLL, (__m128i)(unsigned __int64)v10), _mm_loadu_si128(v30));
    }
    result = *(_QWORD *)(v7 + 608);
    v31 = *(_QWORD *)(result + 48);
    if ( v31 )
    {
      v32 = (__int64 *)(v31 + *((unsigned int *)qword_140170E68 + a5));
      if ( *v32 < (unsigned __int64)v10 )
        *v32 = v10;
      result = v13;
      if ( v35 )
        v32[1] += v13;
      else
        v32[2] += v13;
    }
  }
  return result;
}
