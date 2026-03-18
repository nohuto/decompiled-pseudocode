/*
 * XREFs of FsRtlpOplockPerfSummarizeData @ 0x140700284
 * Callers:
 *     FsRtlpOplockPerfSendData @ 0x1406FFED4 (FsRtlpOplockPerfSendData.c)
 * Callees:
 *     KiQueryUnbiasedInterruptTime @ 0x14042F3F0 (KiQueryUnbiasedInterruptTime.c)
 *     FsRtlpComputeLargeRatio @ 0x14057D860 (FsRtlpComputeLargeRatio.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     FsRtlpOplockPerfGetLatencyNsBucket @ 0x1406FFD18 (FsRtlpOplockPerfGetLatencyNsBucket.c)
 */

unsigned __int64 FsRtlpOplockPerfSummarizeData()
{
  __int64 v0; // rdi
  __int64 v1; // rsi
  __int64 v2; // rdx
  _OWORD *v3; // rax
  _OWORD *v4; // rcx
  __int128 v5; // xmm1
  __int64 v6; // rcx
  unsigned __int64 result; // rax
  __int64 v8; // rbp
  __int64 v9; // r14
  __int64 v10; // rdx
  __int64 v11; // rbx
  __int64 v12; // rax
  __int64 v13; // r9
  unsigned __int16 v14; // r8
  _OWORD *v15; // rcx
  __int128 v16; // xmm1

  v0 = 0LL;
  if ( byte_140E658E0 )
    memset_0(&word_140E65910, 0, 0x50uLL);
  v1 = 2LL;
  v2 = 2LL;
  v3 = **(_OWORD ***)g_OplockPerfData;
  v4 = (_OWORD *)g_OplockPerfSummaryContext;
  do
  {
    *v4 = *v3;
    v4[1] = v3[1];
    v4[2] = v3[2];
    v4[3] = v3[3];
    v4[4] = v3[4];
    v4[5] = v3[5];
    v4[6] = v3[6];
    v4 += 8;
    v5 = v3[7];
    v3 += 8;
    *(v4 - 1) = v5;
    --v2;
  }
  while ( v2 );
  v6 = *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 16LL);
  *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 16LL) = 0LL;
  qword_140E65930 = FsRtlpComputeLargeRatio(v6, 1000000000LL, qword_140E65A70);
  qword_140E658D8 = KiQueryUnbiasedInterruptTime();
  qword_140E65950 = qword_140E658D8 - *(_QWORD *)(g_OplockPerfData + 8);
  result = 0x624DD2F1A9FBE77LL * (qword_140E65950 / 0xAuLL);
  qword_140E65958 = qword_140E65950 / 0xAuLL / 0x3E8;
  if ( byte_140E658E0 )
  {
    *(_QWORD *)(g_OplockPerfData + 8) = qword_140E658D8;
    v8 = 16LL;
    v9 = 0LL;
    do
    {
      v10 = *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 8LL);
      v11 = *(_QWORD *)(v9 + g_OplockPerfSummaryContext) - *(_QWORD *)(v9 + v10);
      v12 = FsRtlpComputeLargeRatio(
              *(_QWORD *)(v9 + g_OplockPerfSummaryContext + 8) - *(_QWORD *)(v9 + v10 + 8),
              1000000000LL,
              qword_140E65A70);
      v9 += 16LL;
      *(_QWORD *)(xmmword_140E658F0 + 8LL * (unsigned __int16)word_140E65910) = v11;
      qword_140E65918 += v11;
      ++word_140E65910;
      *(_QWORD *)(*((_QWORD *)&xmmword_140E658F0 + 1) + 8LL * (unsigned __int16)word_140E65912) = v12;
      qword_140E65920 += v12;
      ++word_140E65912;
      --v8;
    }
    while ( v8 );
    v13 = 0LL;
    v14 = 0;
    while ( 1 )
    {
      v13 += *(_QWORD *)(xmmword_140E658F0 + 8LL * v14);
      if ( v13 >= qword_140E65918 / 2 )
        break;
      if ( ++v14 >= 0x10u )
        goto LABEL_13;
    }
    qword_140E65948 = qword_140E659F0[v14];
LABEL_13:
    if ( qword_140E65918 <= 0 )
    {
      qword_140E65928 = 0LL;
    }
    else
    {
      v0 = qword_140E65920 / qword_140E65918;
      qword_140E65928 = qword_140E65920 / qword_140E65918;
    }
    qword_140E65940 = FsRtlpOplockPerfGetLatencyNsBucket(v0);
    qword_140E65938 = FsRtlpOplockPerfGetLatencyNsBucket(qword_140E65930);
    result = *(_QWORD *)(*(_QWORD *)g_OplockPerfData + 8LL);
    v15 = (_OWORD *)g_OplockPerfSummaryContext;
    do
    {
      *(_OWORD *)result = *v15;
      *(_OWORD *)(result + 16) = v15[1];
      *(_OWORD *)(result + 32) = v15[2];
      *(_OWORD *)(result + 48) = v15[3];
      *(_OWORD *)(result + 64) = v15[4];
      *(_OWORD *)(result + 80) = v15[5];
      *(_OWORD *)(result + 96) = v15[6];
      result += 128LL;
      v16 = v15[7];
      v15 += 8;
      *(_OWORD *)(result - 16) = v16;
      --v1;
    }
    while ( v1 );
  }
  return result;
}
