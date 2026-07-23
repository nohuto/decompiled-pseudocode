/*
 * XREFs of RtlHeapTrkInitialize @ 0x18010E7A0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlDestroyHeap @ 0x1800280C0 (RtlDestroyHeap.c)
 *     RtlpEnumProcessHeaps @ 0x18002A930 (RtlpEnumProcessHeaps.c)
 *     RtlSetHeapInformation @ 0x18002BE70 (RtlSetHeapInformation.c)
 *     RtlRandomEx @ 0x18002CC00 (RtlRandomEx.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlpHeapTrkAllocCacheAligned @ 0x18010EBEC (RtlpHeapTrkAllocCacheAligned.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwMapViewOfSection @ 0x180160550 (ZwMapViewOfSection.c)
 *     NtUnmapViewOfSection @ 0x180160590 (NtUnmapViewOfSection.c)
 *     NtQueryPerformanceCounter @ 0x180160670 (NtQueryPerformanceCounter.c)
 */

NTSTATUS __fastcall RtlHeapTrkInitialize(void *a1)
{
  NTSTATUS result; // eax
  _WORD *v3; // rdi
  __int64 v4; // rsi
  char *Heap; // rax
  char *v6; // rax
  _QWORD *v7; // rdx
  __int64 v8; // r10
  __int64 v9; // r9
  char *v10; // r8
  char *v11; // rcx
  _QWORD *v12; // rax
  ULONG_PTR ViewSize; // [rsp+50h] [rbp-29h] BYREF
  LARGE_INTEGER SectionOffset; // [rsp+58h] [rbp-21h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+60h] [rbp-19h] BYREF
  _QWORD v16[2]; // [rsp+68h] [rbp-11h] BYREF
  __int128 v17; // [rsp+78h] [rbp-1h]
  __int64 v18; // [rsp+88h] [rbp+Fh]
  __int64 (__fastcall *v19)(__int64, __int64, unsigned __int64, const void *); // [rsp+90h] [rbp+17h]
  ULONG Seed; // [rsp+E0h] [rbp+67h] BYREF
  int HeapInformation; // [rsp+E8h] [rbp+6Fh] BYREF
  PVOID BaseAddress; // [rsp+F0h] [rbp+77h] BYREF
  LARGE_INTEGER v23; // [rsp+F8h] [rbp+7Fh] BYREF

  ViewSize = 0x10000LL;
  PerformanceCounter.QuadPart = 0LL;
  BaseAddress = 0LL;
  SectionOffset.QuadPart = 0LL;
  if ( SectionHandle )
    return -1073741823;
  if ( !a1
    || ZwMapViewOfSection(
         a1,
         (HANDLE)0xFFFFFFFFFFFFFFFFLL,
         &BaseAddress,
         0LL,
         0LL,
         &SectionOffset,
         &ViewSize,
         ViewShare,
         0,
         4u) < 0 )
  {
    return -1073741811;
  }
  if ( *(_QWORD *)BaseAddress < 0x400uLL )
    return -1073741789;
  if ( *((_DWORD *)BaseAddress + 13) > 0x40u
    || *((_DWORD *)BaseAddress + 14) > 2u
    || !*((_QWORD *)BaseAddress + 1)
    || *((_QWORD *)BaseAddress + 1) == -1LL
    || !*((_QWORD *)BaseAddress + 2)
    || *((_QWORD *)BaseAddress + 2) == -1LL
    || !*((_QWORD *)BaseAddress + 3)
    || *((_QWORD *)BaseAddress + 3) == -1LL )
  {
    return -1073741811;
  }
  result = NtQueryPerformanceCounter(&PerformanceCounter, &PerformanceFrequency);
  if ( result >= 0 )
  {
    if ( PerformanceFrequency.QuadPart )
    {
      dword_1801CD290 = *((_DWORD *)BaseAddress + 14);
      v23.QuadPart = 0LL;
      NtQueryPerformanceCounter(&v23, 0LL);
      v3 = &unk_1801CD818;
      Seed = v23.LowPart;
      v4 = 8LL;
      do
      {
        *v3++ = RtlRandomEx(&Seed) % 0x1EEF;
        --v4;
      }
      while ( v4 );
      Heap = RtlpCreateHeap(
               *((_DWORD *)BaseAddress + 13) == 0 ? 2 : 0,
               0LL,
               (unsigned int)(*((_DWORD *)BaseAddress + 13) << 20),
               0LL,
               0LL,
               0LL,
               0);
      HeapHandle = Heap;
      if ( Heap )
      {
        HeapInformation = 2;
        RtlSetHeapInformation(Heap, HeapCompatibilityInformation, &HeapInformation, 4uLL);
        dword_1801CD7F0 = NtCurrentPeb()->NumberOfProcessors;
        if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801CD840, &qword_1801CD808, 32LL) )
        {
          if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801CD7E0, &qword_1801CD7D8, 8LL) )
          {
            if ( (unsigned __int8)RtlpHeapTrkAllocCacheAligned(&qword_1801CD7F8, &qword_1801CD7D0, 8LL) )
            {
              qword_1801CD280 = (__int64)RtlAllocateHeap(HeapHandle, 0, 0x1EEF0uLL);
              if ( qword_1801CD280 )
              {
                v6 = (char *)RtlAllocateHeap(HeapHandle, 0, 0x1EEF0uLL);
                qword_1801CD288 = (__int64)v6;
                if ( v6 )
                {
                  v7 = (_QWORD *)qword_1801CD280;
                  v8 = 7919LL;
                  SectionHandle = a1;
                  v9 = qword_1801CD280 - (_QWORD)v6;
                  dword_1801CD20C = 0;
                  v10 = &v6[-qword_1801CD280];
                  do
                  {
                    v11 = (char *)v7 + (_QWORD)v10;
                    *v7 = v7;
                    *(_QWORD *)&v11[v9 + 8] = v7;
                    v12 = (_QWORD *)((char *)v7 + (_QWORD)v10);
                    v7 += 2;
                    *((_QWORD *)v11 + 1) = v12;
                    *v12 = v12;
                    --v8;
                  }
                  while ( v8 );
                  v16[0] = RtlpHeapTrkInterceptor;
                  v18 = 0LL;
                  dword_1801D2FEC = 0;
                  v19 = RtlpHeapTrkLeakCallback;
                  *((_QWORD *)&xmmword_1801D3000 + 1) = RtlpHeapTrkLeakCallback;
                  *(_QWORD *)&xmmword_1801D3000 = 0LL;
                  v17 = 0LL;
                  v16[1] = 0LL;
                  *((_QWORD *)&xmmword_1801D2FF0 + 1) = _mm_srli_si128((__m128i)0LL, 8).m128i_u64[0];
                  LODWORD(xmmword_1801D2FF0) = _mm_cvtsi128_si32((__m128i)0LL);
                  RtlpEnumProcessHeaps(
                    (__int64 (__fastcall *)(__int64, __int64, __int64 *))RtlpSetHeapDebuggingInformation,
                    (__int64)v16,
                    0);
                  NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
                  return 0;
                }
              }
            }
          }
        }
        RtlDestroyHeap(HeapHandle);
        HeapHandle = 0LL;
        qword_1801CD808 = 0LL;
        qword_1801CD280 = 0LL;
        qword_1801CD7E0 = 0LL;
        qword_1801CD7D8 = 0LL;
        qword_1801CD288 = 0LL;
        qword_1801CD7F8 = 0LL;
        qword_1801CD7D0 = 0LL;
        if ( BaseAddress )
          NtUnmapViewOfSection((HANDLE)0xFFFFFFFFFFFFFFFFLL, BaseAddress);
        if ( SectionHandle )
        {
          NtClose(SectionHandle);
          SectionHandle = 0LL;
        }
      }
    }
    return -1073741823;
  }
  return result;
}
