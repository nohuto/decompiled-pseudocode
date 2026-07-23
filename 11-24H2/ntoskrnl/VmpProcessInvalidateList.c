/*
 * XREFs of VmpProcessInvalidateList @ 0x1404A41E8
 * Callers:
 *     VmpFlushTb @ 0x1402A1F80 (VmpFlushTb.c)
 *     KeFlushTb @ 0x14039E600 (KeFlushTb.c)
 *     VmpInsertInvalidateListRange @ 0x14039FB08 (VmpInsertInvalidateListRange.c)
 *     VmpInvalidateSlatBatched @ 0x140479E38 (VmpInvalidateSlatBatched.c)
 * Callees:
 *     KeQueryUnbiasedInterruptTimePrecise @ 0x140313830 (KeQueryUnbiasedInterruptTimePrecise.c)
 *     HvlMapSparseGpaPages @ 0x14039CD8C (HvlMapSparseGpaPages.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     VmpInvalidateSingleGpaRange @ 0x1404AD974 (VmpInvalidateSingleGpaRange.c)
 *     VmpLogTbFlushSlatInvalidate @ 0x14064A3E8 (VmpLogTbFlushSlatInvalidate.c)
 */

char __fastcall VmpProcessInvalidateList(__int64 a1, __int64 a2)
{
  __int64 v2; // r14
  ULONG64 v4; // r13
  __int16 v5; // r8
  unsigned int v6; // r12d
  unsigned __int64 v7; // rdi
  unsigned int i; // edx
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // r9
  _QWORD *v11; // rcx
  __int64 v12; // rcx
  int v13; // eax
  int v14; // ecx
  __int64 v15; // r8
  unsigned __int64 v16; // r14
  __int64 v17; // rbp
  __int64 v18; // rdi
  __int64 v19; // rsi
  unsigned __int64 v20; // r15
  unsigned __int64 QpcTimeStamp; // [rsp+78h] [rbp+10h] BYREF

  v2 = a1;
  if ( *(_QWORD *)&VmpTraceLoggingProvider
    && **(_DWORD **)&VmpTraceLoggingProvider
    && (*(_BYTE *)(*(_QWORD *)&VmpTraceLoggingProvider + 16LL) & 2) != 0
    && (*(_QWORD *)(*(_QWORD *)&VmpTraceLoggingProvider + 24LL) & 2LL) == *(_QWORD *)(*(_QWORD *)&VmpTraceLoggingProvider
                                                                                    + 24LL) )
  {
    v4 = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
  }
  else
  {
    v4 = 0LL;
  }
  v5 = *(_WORD *)(a2 + 6) & 2;
  v6 = v5 != 0 ? 2 : 0;
  if ( (*(_DWORD *)(a2 + 4) & 1) != 0 )
  {
    v16 = *(_QWORD *)(a2 + 8);
    v17 = *(_QWORD *)(a2 + 16) >> 12;
    v18 = ((v17 + 511) & 0xFFFFFFFFFFFFFE00uLL) - v17;
    LOBYTE(v13) = -(char)v17;
    if ( v16 < v18 + 512 )
    {
      v18 = 0LL;
      v20 = 0LL;
      v19 = *(_QWORD *)(a2 + 8);
    }
    else
    {
      v19 = ((_WORD)v16 - (_WORD)v18) & 0x1FF;
      v20 = v16 - v19 - v18;
      if ( v18 )
        LOBYTE(v13) = VmpInvalidateSingleGpaRange(
                        *(_QWORD *)(a1 + 104),
                        *(_QWORD *)(a2 + 16) >> 12,
                        ((v17 + 511) & 0xFFFFFFFFFFFFFE00uLL) - v17,
                        v6);
    }
    v2 = a1;
    if ( v20 )
      LOBYTE(v13) = VmpInvalidateSingleGpaRange(*(_QWORD *)(a1 + 104), v18 + v17, v20 >> 9, v6 | 1);
    if ( v19 )
      LOBYTE(v13) = VmpInvalidateSingleGpaRange(*(_QWORD *)(a1 + 104), v17 + v18 + v20, v19, v6);
  }
  else
  {
    v7 = 0LL;
    for ( i = 0; i < *(_DWORD *)a2; ++i )
    {
      v9 = *(_QWORD *)(a2 + 8LL * i + 16) >> 12;
      v10 = (*(_QWORD *)(a2 + 8LL * i + 16) & 0xFFFLL) + v9 - 1;
      if ( v9 <= v10 )
      {
        v11 = (_QWORD *)(a2 + 4112 + 16 * v7);
        v7 += *(_QWORD *)(a2 + 8LL * i + 16) & 0xFFFLL;
        do
        {
          *v11 = v9++;
          v11 += 2;
        }
        while ( v9 <= v10 );
      }
    }
    v12 = *(_QWORD *)(v2 + 104);
    QpcTimeStamp = 0LL;
    v13 = HvlMapSparseGpaPages(v12, v5 != 0 ? 16875520 : 16842752, v7, a2 + 4112, &QpcTimeStamp);
    if ( v13 < 0 )
      __int2c();
    if ( QpcTimeStamp != v7 )
      __int2c();
  }
  if ( v4 )
  {
    LOBYTE(v13) = KeQueryUnbiasedInterruptTimePrecise(&QpcTimeStamp);
    if ( *(_QWORD *)&VmpTraceLoggingProvider )
    {
      if ( **(_DWORD **)&VmpTraceLoggingProvider )
      {
        LOBYTE(v13) = tlgKeywordOn(*(__int64 *)&VmpTraceLoggingProvider, 2LL);
        if ( (_BYTE)v13 )
          LOBYTE(v13) = VmpLogTbFlushSlatInvalidate(
                          v14,
                          *(_QWORD *)(a2 + 8),
                          *(_DWORD *)a2,
                          *(_DWORD *)(a2 + 4),
                          v15,
                          *(_QWORD *)(v2 + 104));
      }
    }
  }
  *(_QWORD *)a2 = 0LL;
  *(_QWORD *)(a2 + 8) = 0LL;
  return v13;
}
