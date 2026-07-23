/*
 * XREFs of EtwpInitLoggerContext @ 0x1800A8DF0
 * Callers:
 *     EtwpStartUmLogger @ 0x1800A879C (EtwpStartUmLogger.c)
 * Callees:
 *     RtlGetMultiTimePrecise @ 0x180019AF0 (RtlGetMultiTimePrecise.c)
 *     RtlQueryPerformanceCounter @ 0x18001A8A0 (RtlQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x18001DB80 (RtlGetSystemTimePrecise.c)
 *     RtlInitializeCriticalSectionEx @ 0x180030BC0 (RtlInitializeCriticalSectionEx.c)
 *     RtlAllocateHeap @ 0x18003DC60 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlCreateUnicodeString @ 0x180054A50 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x180081430 (RtlFreeAnsiString.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x1800A92EC (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpFillProcessorStreamIndexMap @ 0x1800A947C (EtwpFillProcessorStreamIndexMap.c)
 *     EtwpFreeStreamIndexMap @ 0x1800AA6EC (EtwpFreeStreamIndexMap.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwCreateEvent @ 0x180160950 (ZwCreateEvent.c)
 */

char *__fastcall EtwpInitLoggerContext(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r12d
  unsigned __int16 v7; // si
  unsigned __int16 v11; // dx
  unsigned int i; // ecx
  LARGE_INTEGER SystemTimePrecise; // rax
  char *Heap; // rbx
  PVOID v15; // rax
  PVOID v16; // rax
  unsigned int v17; // eax
  int v18; // eax
  void *v19; // rax
  int v20; // ecx
  int v21; // eax
  char *result; // rax
  void *v23; // rcx
  void *v24; // rcx
  void *v25; // r8
  void *v26; // r8
  unsigned int v27; // edx
  __int64 v28; // rcx
  __int128 v29; // [rsp+30h] [rbp-40h]
  __int128 v30; // [rsp+40h] [rbp-30h] BYREF
  __int128 v31; // [rsp+50h] [rbp-20h] BYREF
  LARGE_INTEGER v32; // [rsp+60h] [rbp-10h]
  LARGE_INTEGER PerformanceCounter; // [rsp+B0h] [rbp+40h] BYREF
  int v34; // [rsp+C0h] [rbp+50h] BYREF

  v5 = a5;
  v7 = 1;
  v30 = 0LL;
  if ( a4 )
  {
    v11 = 0;
    v7 = 0;
    for ( i = 0; i < a5; i += (*(unsigned __int16 *)(i + a4 + 4) + 7) & 0xFFFFFFF8 )
    {
      ++v7;
      v11 += *(_WORD *)(i + a4 + 44);
    }
    a3 = v11;
  }
  v34 = 0;
  v32.QuadPart = 0LL;
  v31 = 0LL;
  RtlGetMultiTimePrecise((LARGE_INTEGER *)&v31, 5, &v34);
  if ( (v34 & 4) != 0 )
    SystemTimePrecise = v32;
  else
    SystemTimePrecise = RtlGetSystemTimePrecise();
  *(LARGE_INTEGER *)&v29 = SystemTimePrecise;
  if ( *(_DWORD *)(a1 + 40) != 2 )
  {
    if ( *(_DWORD *)(a1 + 40) == 3 )
    {
      SystemTimePrecise.QuadPart = __rdtsc();
    }
    else if ( (v34 & 1) != 0 )
    {
      SystemTimePrecise.QuadPart = v31;
    }
    else
    {
      PerformanceCounter.QuadPart = 0LL;
      RtlQueryPerformanceCounter(&PerformanceCounter);
      SystemTimePrecise = PerformanceCounter;
    }
  }
  *((LARGE_INTEGER *)&v29 + 1) = SystemTimePrecise;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 8 * a3 + 568);
  if ( !Heap )
    return 0LL;
  v15 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 4 * a3);
  *((_QWORD *)Heap + 67) = v15;
  if ( v15 )
  {
    if ( a4 )
    {
      if ( (unsigned int)EtwpFillProcessorStreamIndexMap(Heap, v7, a4, v5) )
        goto LABEL_31;
      v16 = RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, 12LL * v7);
      *((_QWORD *)Heap + 62) = v16;
      if ( !v16 )
        goto LABEL_31;
    }
    else
    {
      v27 = 0;
      if ( a3 )
      {
        v28 = 0LL;
        do
        {
          *(_WORD *)(v28 + *((_QWORD *)Heap + 67)) = 0;
          v28 += 4LL;
          *(_WORD *)(v28 + *((_QWORD *)Heap + 67) - 2) = v27++;
        }
        while ( v27 < a3 );
      }
    }
    v17 = *(_DWORD *)(a1 + 48);
    if ( v17 )
    {
      if ( v17 > 0x4000 )
      {
        *(_DWORD *)(a1 + 48) = 0x4000;
        v17 = 0x4000;
      }
      v18 = v17 << 10;
    }
    else
    {
      v18 = 4096;
    }
    *((_DWORD *)Heap + 48) = v18;
    if ( RtlCreateUnicodeString((PUNICODE_STRING)(Heap + 136), *(PCWSTR *)(a1 + 152))
      && !(unsigned int)EtwpAddInstanceIdToLogFileName(a1, *(unsigned int *)(a1 + 96), &v30) )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x4000) != 0 )
      {
        v19 = &EtwpGlobalSequence;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x8000) == 0 )
        {
LABEL_20:
          v20 = 2048;
          *((_DWORD *)Heap + 5) = a2;
          *((_DWORD *)Heap + 77) = 2048;
          *((_DWORD *)Heap + 47) = a3;
          v21 = *(_DWORD *)(a1 + 64);
          if ( (v21 & 0x400) != 0 )
          {
            v20 = 3072;
          }
          else
          {
            if ( (v21 & 2) != 0 )
            {
              v20 = 2050;
            }
            else
            {
              if ( (v21 & 8) != 0 )
              {
                v20 = 2056;
                *(_OWORD *)(Heap + 168) = v30;
                goto LABEL_26;
              }
              if ( (v21 & 1) == 0 )
              {
LABEL_27:
                *((_DWORD *)Heap + 77) = v20 | *(_DWORD *)(a1 + 64) & 0x34133024;
                *((_DWORD *)Heap + 94) = *(_DWORD *)(a1 + 108);
                *((_DWORD *)Heap + 53) = *((_DWORD *)Heap + 52);
                *(_OWORD *)(Heap + 44) = *(_OWORD *)(a1 + 24);
                *((_DWORD *)Heap + 76) = *(_DWORD *)(a1 + 60);
                *((_DWORD *)Heap + 50) = *(_DWORD *)(a1 + 56);
                *((_DWORD *)Heap + 51) = *(_DWORD *)(a1 + 52);
                *((_QWORD *)Heap + 28) = Heap + 216;
                *((_QWORD *)Heap + 27) = Heap + 216;
                *((_QWORD *)Heap + 31) = 0LL;
                *((_QWORD *)Heap + 29) = Heap + 248;
                *((_QWORD *)Heap + 30) = Heap + 248;
                *((_QWORD *)Heap + 34) = 0LL;
                *((_QWORD *)Heap + 32) = Heap + 272;
                *((_QWORD *)Heap + 33) = Heap + 272;
                *((_QWORD *)Heap + 37) = 0LL;
                *((_QWORD *)Heap + 35) = Heap + 296;
                *((_QWORD *)Heap + 36) = Heap + 296;
                *((_QWORD *)Heap + 57) = Heap + 448;
                *((_QWORD *)Heap + 56) = Heap + 448;
                *((_QWORD *)Heap + 59) = Heap + 464;
                *((_QWORD *)Heap + 58) = Heap + 464;
                *((_DWORD *)Heap + 4) = *(_DWORD *)(a1 + 40);
                *((_DWORD *)Heap + 15) = *(_DWORD *)(a1 + 96);
                *((_DWORD *)Heap + 88) = *(_DWORD *)(a1 + 76);
                if ( ZwCreateEvent((PHANDLE)Heap + 14, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0
                  && ZwCreateEvent((PHANDLE)Heap + 15, 0x1F0003u, 0LL, SynchronizationEvent, 0) >= 0 )
                {
                  RtlInitializeCriticalSectionEx((PRTL_CRITICAL_SECTION)(Heap + 72), 0, 0);
                  *((_QWORD *)Heap + 8) = 0LL;
                  result = Heap;
                  *((_DWORD *)Heap + 78) = 1;
                  *(_OWORD *)Heap = v29;
                  return result;
                }
                goto LABEL_31;
              }
              v20 = 2049;
            }
            *(_OWORD *)(Heap + 152) = v30;
          }
LABEL_26:
          *((_DWORD *)Heap + 77) = v20;
          goto LABEL_27;
        }
        v19 = Heap + 392;
      }
      *((_QWORD *)Heap + 48) = v19;
      goto LABEL_20;
    }
  }
LABEL_31:
  v23 = (void *)*((_QWORD *)Heap + 15);
  if ( v23 )
  {
    NtClose(v23);
    *((_QWORD *)Heap + 15) = 0LL;
  }
  v24 = (void *)*((_QWORD *)Heap + 14);
  if ( v24 )
  {
    NtClose(v24);
    *((_QWORD *)Heap + 14) = 0LL;
  }
  v25 = (void *)*((_QWORD *)Heap + 62);
  if ( v25 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v25);
  v26 = (void *)*((_QWORD *)Heap + 67);
  if ( v26 )
    RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v26);
  EtwpFreeStreamIndexMap(Heap);
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 136));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 152));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 168));
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0LL;
}
