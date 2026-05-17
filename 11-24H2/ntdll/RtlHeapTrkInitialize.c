/*
 * XREFs of RtlHeapTrkInitialize @ 0x1801134A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlpEnumProcessHeaps @ 0x1800469B0 (RtlpEnumProcessHeaps.c)
 *     RtlDestroyHeap @ 0x18008F580 (RtlDestroyHeap.c)
 *     RtlSetHeapInformation @ 0x180096E70 (RtlSetHeapInformation.c)
 *     RtlRandomEx @ 0x180097DB0 (RtlRandomEx.c)
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x1801138EC (RtlpHeapTrkAllocCacheAligned.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180162190 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x1801621D0 (NtUnmapViewOfSection.c)
 *     NtQueryPerformanceCounter @ 0x1801622B0 (NtQueryPerformanceCounter.c)
 */

__int64 __fastcall RtlHeapTrkInitialize(void *a1)
{
  __int64 result; // rax
  _WORD *v3; // rdi
  __int64 v4; // rsi
  _DWORD *Heap; // rax
  __int64 v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r9
  __int64 v10; // r8
  char *v11; // rcx
  _QWORD *v12; // rax
  __int64 v13; // [rsp+50h] [rbp-29h] BYREF
  __int64 v14; // [rsp+58h] [rbp-21h] BYREF
  __int64 v15; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v16[2]; // [rsp+68h] [rbp-11h] BYREF
  __int128 v17; // [rsp+78h] [rbp-1h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  __int64 (__fastcall *v19)(__int64, __int64, unsigned __int64, const void *); // [rsp+90h] [rbp+17h]
  __int32 v20; // [rsp+E0h] [rbp+67h] BYREF
  int v21; // [rsp+E8h] [rbp+6Fh] BYREF
  __int64 v22; // [rsp+F0h] [rbp+77h] BYREF
  __int64 v23; // [rsp+F8h] [rbp+7Fh] BYREF

  v13 = 0x10000LL;
  v15 = 0LL;
  v22 = 0LL;
  v14 = 0LL;
  if ( Handle )
    return 3221225473LL;
  if ( !a1 || (int)ZwMapViewOfSection(a1, -1LL, &v22, 0LL, 0LL, &v14, &v13, 1, 0, 4) < 0 )
    return 3221225485LL;
  if ( *(_QWORD *)v22 < 0x400uLL )
    return 3221225507LL;
  if ( *(_DWORD *)(v22 + 52) > 0x40u
    || *(_DWORD *)(v22 + 56) > 2u
    || !*(_QWORD *)(v22 + 8)
    || *(_QWORD *)(v22 + 8) == -1LL
    || !*(_QWORD *)(v22 + 16)
    || *(_QWORD *)(v22 + 16) == -1LL
    || !*(_QWORD *)(v22 + 24)
    || *(_QWORD *)(v22 + 24) == -1LL )
  {
    return 3221225485LL;
  }
  result = NtQueryPerformanceCounter(&v15, &qword_1801CE838);
  if ( (int)result >= 0 )
  {
    if ( qword_1801CE838 )
    {
      dword_1801CE290 = *(_DWORD *)(v22 + 56);
      v23 = 0LL;
      NtQueryPerformanceCounter(&v23, 0LL);
      v3 = &unk_1801CE820;
      v20 = v23;
      v4 = 8LL;
      do
      {
        *v3++ = (unsigned int)RtlRandomEx(&v20) % 0x1EEF;
        --v4;
      }
      while ( v4 );
      Heap = (_DWORD *)RtlpCreateHeap(
                         *(_DWORD *)(v22 + 52) == 0 ? 2 : 0,
                         0LL,
                         (unsigned int)(*(_DWORD *)(v22 + 52) << 20),
                         0LL,
                         0LL,
                         0LL,
                         0);
      qword_1801CE808 = (__int64)Heap;
      if ( Heap )
      {
        v21 = 2;
        RtlSetHeapInformation(Heap, 0, (__int64)&v21, 4uLL);
        dword_1801CE7F8 = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801CE848, &qword_1801CE810, 32LL) )
        {
          if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801CE7E8, &qword_1801CE7E0, 8LL) )
          {
            if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801CE800, &qword_1801CE7D8, 8LL) )
            {
              qword_1801CE280 = RtlAllocateHeap(qword_1801CE808, 0, 0x1EEF0uLL);
              if ( qword_1801CE280 )
              {
                v6 = RtlAllocateHeap(qword_1801CE808, 0, 0x1EEF0uLL);
                qword_1801CE288 = v6;
                if ( v6 )
                {
                  v7 = (_QWORD *)qword_1801CE280;
                  v8 = 7919LL;
                  Handle = a1;
                  v9 = qword_1801CE280 - v6;
                  dword_1801CE20C = 0;
                  v10 = v6 - qword_1801CE280;
                  do
                  {
                    v11 = (char *)v7 + v10;
                    *v7 = v7;
                    *(_QWORD *)&v11[v9 + 8] = v7;
                    v12 = (_QWORD *)((char *)v7 + v10);
                    v7 += 2;
                    *((_QWORD *)v11 + 1) = v12;
                    *v12 = v12;
                    --v8;
                  }
                  while ( v8 );
                  v16[0] = RtlpHeapTrkInterceptor;
                  v18 = 0LL;
                  dword_1801D3FEC = 0;
                  v19 = RtlpHeapTrkLeakCallback;
                  *((_QWORD *)&xmmword_1801D4000 + 1) = RtlpHeapTrkLeakCallback;
                  *(_QWORD *)&xmmword_1801D4000 = 0LL;
                  v17 = 0LL;
                  v16[1] = 0LL;
                  *((_QWORD *)&xmmword_1801D3FF0 + 1) = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
                  LODWORD(xmmword_1801D3FF0) = _mm_cvtsi128_si32((__m128i)0LL);
                  RtlpEnumProcessHeaps(
                    (__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpSetHeapDebuggingInformation,
                    (__int64)v16,
                    0);
                  NtUnmapViewOfSection(-1LL);
                  return 0LL;
                }
              }
            }
          }
        }
        RtlDestroyHeap(qword_1801CE808);
        qword_1801CE808 = 0LL;
        qword_1801CE810 = 0LL;
        qword_1801CE280 = 0LL;
        qword_1801CE7E8 = 0LL;
        qword_1801CE7E0 = 0LL;
        qword_1801CE288 = 0LL;
        qword_1801CE800 = 0LL;
        qword_1801CE7D8 = 0LL;
        if ( v22 )
          NtUnmapViewOfSection(-1LL);
        if ( Handle )
        {
          NtClose(Handle);
          Handle = 0LL;
        }
      }
    }
    return 3221225473LL;
  }
  return result;
}
