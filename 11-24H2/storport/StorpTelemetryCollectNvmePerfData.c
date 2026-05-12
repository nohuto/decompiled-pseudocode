/*
 * XREFs of StorpTelemetryCollectNvmePerfData @ 0x1400B2A40
 * Callers:
 *     NvmeCompletionDpcRoutine @ 0x14011A4A0 (NvmeCompletionDpcRoutine.c)
 * Callees:
 *     McTemplateK0qjzshqusssjqxquuhqi_EtwWriteTransfer @ 0x1400AB60C (McTemplateK0qjzshqusssjqxquuhqi_EtwWriteTransfer.c)
 */

int __fastcall StorpTelemetryCollectNvmePerfData(__int64 a1, int *a2, __int64 a3, unsigned int a4, int a5)
{
  signed __int64 QuadPart; // rax
  unsigned int v6; // r12d
  __int64 v7; // rsi
  unsigned __int64 v10; // rbx
  int v11; // edi
  int v12; // eax
  int v13; // ebp
  __int64 v14; // r13
  __int64 v15; // rcx
  const char *v16; // rbp
  int v17; // edi
  char v18; // r14
  __int64 v19; // r15
  int v20; // r15d
  int v21; // r8d
  _QWORD *v22; // rcx
  int v23; // r11d
  unsigned int v24; // eax
  __int64 v25; // rcx
  int v26; // r14d
  __int64 v27; // rax
  _QWORD *v28; // rcx
  unsigned int v29; // eax
  _QWORD *v30; // rcx
  unsigned int v31; // r10d
  int v32; // edx
  __int64 *v33; // rax
  __m128i *v34; // rdx
  __int64 v35; // rcx
  char v37; // [rsp+88h] [rbp-80h]
  unsigned int v38; // [rsp+B0h] [rbp-58h]
  int v39; // [rsp+B4h] [rbp-54h]
  int v40; // [rsp+B8h] [rbp-50h]
  int v41; // [rsp+BCh] [rbp-4Ch]
  int v42; // [rsp+C0h] [rbp-48h]
  __int64 v43; // [rsp+C8h] [rbp-40h]
  unsigned int v46; // [rsp+128h] [rbp+20h]

  QuadPart = *(_QWORD *)(a3 + 608);
  v6 = 0;
  v38 = 0;
  LOBYTE(v43) = 0;
  v7 = a3;
  v10 = 0LL;
  if ( !QuadPart || !*(_QWORD *)(QuadPart + 8) )
    return QuadPart;
  v11 = (unsigned __int8)*a2;
  v42 = v11;
  if ( (unsigned __int8)v11 <= 0x19u && (v12 = 33554742, _bittest(&v12, (unsigned __int8)v11)) )
  {
    if ( (unsigned __int8)v11 == 2 || (v39 = 1, v13 = 1, (unsigned __int8)v11 == 5) )
    {
      v41 = 1;
      v13 = 1;
      v39 = 1;
      goto LABEL_10;
    }
  }
  else
  {
    v13 = 0;
    v39 = 0;
  }
  v41 = 0;
LABEL_10:
  if ( (unsigned __int8)v11 != 9 || (v40 = 1, (a2[11] & 4) == 0) )
    v40 = 0;
  LODWORD(v14) = a4 >> 31;
  v46 = a4 >> 31;
  if ( v13 )
  {
    v43 = *((_QWORD *)a2 + 5);
    v38 = *(_DWORD *)(a3 + 64) * ((unsigned __int16)a2[12] + 1);
  }
  if ( FeatureFixTRIMAddSCSIPassthrough )
  {
    if ( UseQPCTime )
      QuadPart = KeQueryPerformanceCounter(0LL).QuadPart;
    else
      QuadPart = KeQueryUnbiasedInterruptTime();
    v15 = *(_QWORD *)(a1 + 72);
    if ( QuadPart > v15 )
    {
      v10 = QuadPart - v15;
      if ( !IsQpcInUnitOf100Ns )
      {
        if ( UseQPCTime )
        {
          QuadPart = (__int64)(10000000 * v10) / QpcFrequency.QuadPart;
          v10 = QuadPart;
        }
      }
    }
  }
  else
  {
    QuadPart = KeQueryUnbiasedInterruptTime();
    if ( QuadPart > *(_QWORD *)(a1 + 64) )
      v10 = QuadPart - *(_QWORD *)(a1 + 64);
  }
  if ( v10 >= HighLatencyIoThreshold )
  {
    QuadPart = *(_QWORD *)(v7 + 608);
    if ( _InterlockedIncrement((volatile signed __int32 *)QuadPart) <= 128 && (byte_14017146A & 0x40) != 0 )
    {
      v14 = *(_QWORD *)(v7 + 16);
      v16 = (const char *)&word_140150F48;
      v17 = *a2;
      v18 = 20;
      if ( (*(_BYTE *)(v14 + 136) & 2) == 0 )
        v18 = 17;
      if ( *(_QWORD *)(v14 + 752) )
        v16 = *(const char **)(v14 + 752);
      v37 = *a2;
      v7 = a3;
      v19 = *(_QWORD *)(v14 + 128);
      LODWORD(QuadPart) = McTemplateK0qjzshqusssjqxquuhqi_EtwWriteTransfer(
                            (unsigned int)(HighLatencyIoThreshold / 0x2710uLL),
                            v19 + 1032,
                            a3 + 160,
                            *(_DWORD *)(v19 + 56),
                            v19 + 1032,
                            *(const wchar_t **)(v19 + 1016),
                            *(const char **)(v14 + 792),
                            *(_WORD *)(v14 + 4),
                            *(_DWORD *)(a3 + 56),
                            *(_BYTE *)(v14 + 744),
                            v16,
                            (const char *)(v14 + 800),
                            (const char *)(v14 + 841),
                            a3 + 160,
                            v18,
                            HighLatencyIoThreshold / 0x2710uLL,
                            (char)v10 / 16,
                            v37,
                            BYTE1(v17) & 3,
                            *((_WORD *)a2 + 1),
                            v38,
                            v43);
      v11 = v42;
      v13 = v39;
      LOBYTE(v14) = v46;
    }
  }
  if ( v13 )
  {
    v20 = v41;
    v21 = 13;
    v22 = *(&P + 1);
    v23 = v41 ^ 1;
    v24 = 0;
    while ( (signed __int64)v10 > *v22 )
    {
      ++v24;
      ++v22;
      if ( v24 >= 0xD )
        goto LABEL_39;
    }
    v21 = v24;
LABEL_39:
    v25 = (unsigned int)dword_140170DCC;
    v26 = v40;
    v27 = v23 + v21 * (unsigned int)(unsigned __int16)TelemetryPerfContext;
  }
  else
  {
    v26 = v40;
    if ( !v40 && v11 )
      return QuadPart;
    v28 = xmmword_140170DE0;
    v21 = 4;
    v29 = 0;
    while ( (signed __int64)v10 > *v28 )
    {
      ++v29;
      ++v28;
      if ( v29 >= 4 )
        goto LABEL_47;
    }
    v21 = v29;
LABEL_47:
    v23 = v40;
    v25 = *((unsigned int *)&xmmword_140170DF0 + 3);
    v20 = v41;
    v27 = v40 + v21 * (unsigned int)(unsigned __int16)xmmword_140170DD0;
  }
  v30 = (_QWORD *)(*(_QWORD *)(*(_QWORD *)(v7 + 608) + 8LL) + (unsigned int)(dword_140170E38 * a5) + 24 * (v27 + v25));
  if ( (_BYTE)v14 )
    ++v30[1];
  else
    ++*v30;
  v30[2] += v10;
  LODWORD(QuadPart) = *(_DWORD *)(v7 + 112) & 0x100;
  if ( !v13 )
    goto LABEL_67;
  if ( (*(_DWORD *)(v7 + 112) & 0x100) == 0 || (_BYTE)v14 )
  {
    v31 = v38;
  }
  else
  {
    v31 = v38;
    v32 = 8;
    v33 = (__int64 *)xmmword_140170E10;
    while ( v38 > *v33 )
    {
      ++v6;
      ++v33;
      if ( v6 >= 8 )
        goto LABEL_59;
    }
    v32 = v6;
LABEL_59:
    v34 = (__m128i *)(*(_QWORD *)(*(_QWORD *)(v7 + 608) + 16LL)
                    + (unsigned int)(dword_140170E3C * a5)
                    + 16
                    * (*((unsigned int *)&xmmword_140170E20 + 3)
                     + (unsigned __int64)(v23
                                        + (unsigned __int16)xmmword_140170E00
                                        * (v21 * (unsigned int)WORD1(xmmword_140170E00) + v32))));
    *v34 = _mm_add_epi64(_mm_unpacklo_epi64((__m128i)1uLL, (__m128i)v10), _mm_loadu_si128(v34));
  }
  QuadPart = *(_QWORD *)(v7 + 608);
  v35 = *(_QWORD *)(QuadPart + 48);
  if ( v35 )
  {
    QuadPart = v35 + (unsigned int)(dword_140170E50 * a5);
    if ( *(_QWORD *)QuadPart < v10 )
      *(_QWORD *)QuadPart = v10;
    if ( v20 )
      *(_QWORD *)(QuadPart + 8) += v31;
    else
      *(_QWORD *)(QuadPart + 16) += v31;
  }
  else
  {
LABEL_67:
    if ( v11 )
    {
      if ( v26 )
      {
        QuadPart = *(_QWORD *)(v7 + 608);
        if ( *(_QWORD *)(QuadPart + 96) < v10 )
          *(_QWORD *)(QuadPart + 96) = v10;
      }
    }
    else
    {
      QuadPart = *(_QWORD *)(v7 + 608);
      if ( *(_QWORD *)(QuadPart + 88) < v10 )
        *(_QWORD *)(QuadPart + 88) = v10;
    }
  }
  return QuadPart;
}
