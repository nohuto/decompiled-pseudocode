/*
 * XREFs of EtwpInitLoggerContext @ 0x18008D330
 * Callers:
 *     EtwpStartUmLogger @ 0x18008CCDC (EtwpStartUmLogger.c)
 * Callees:
 *     RtlAllocateHeap @ 0x180011260 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlCreateUnicodeString @ 0x180028050 (RtlCreateUnicodeString.c)
 *     RtlGetMultiTimePrecise @ 0x180039870 (RtlGetMultiTimePrecise.c)
 *     RtlQueryPerformanceCounter @ 0x18003A620 (RtlQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x18003D900 (RtlGetSystemTimePrecise.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x18008D82C (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpFillProcessorStreamIndexMap @ 0x18008D9BC (EtwpFillProcessorStreamIndexMap.c)
 *     EtwpFreeStreamIndexMap @ 0x18008E9CC (EtwpFreeStreamIndexMap.c)
 *     RtlInitializeCriticalSectionEx @ 0x18009BD70 (RtlInitializeCriticalSectionEx.c)
 *     RtlFreeAnsiString @ 0x1800B4B90 (RtlFreeAnsiString.c)
 *     NtClose @ 0x180161E70 (NtClose.c)
 *     ZwCreateEvent @ 0x180162590 (ZwCreateEvent.c)
 */

unsigned __int64 __fastcall EtwpInitLoggerContext(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r12d
  unsigned __int16 v7; // si
  unsigned __int16 v11; // dx
  unsigned int i; // ecx
  __int64 v13; // rdx
  __int64 SystemTimePrecise; // rax
  unsigned __int64 Heap; // rbx
  __int64 v16; // rax
  __int64 v17; // rax
  unsigned int v18; // eax
  int v19; // eax
  void *v20; // rax
  int v21; // ecx
  int v22; // eax
  unsigned __int64 result; // rax
  void *v24; // rcx
  void *v25; // rcx
  unsigned __int64 v26; // r8
  unsigned __int64 v27; // r8
  unsigned int v28; // edx
  __int64 v29; // rcx
  int v30; // [rsp+20h] [rbp-50h]
  __int128 v31; // [rsp+30h] [rbp-40h]
  __int128 v32; // [rsp+40h] [rbp-30h] BYREF
  __int128 v33; // [rsp+50h] [rbp-20h] BYREF
  __int64 v34; // [rsp+60h] [rbp-10h]
  __int64 v35; // [rsp+B0h] [rbp+40h] BYREF
  int v36; // [rsp+C0h] [rbp+50h] BYREF

  v5 = a5;
  v7 = 1;
  v32 = 0LL;
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
  v36 = 0;
  v34 = 0LL;
  v33 = 0LL;
  RtlGetMultiTimePrecise((unsigned __int64 *)&v33, 5, &v36);
  if ( (v36 & 4) != 0 )
    SystemTimePrecise = v34;
  else
    SystemTimePrecise = RtlGetSystemTimePrecise();
  *(_QWORD *)&v31 = SystemTimePrecise;
  if ( *(_DWORD *)(a1 + 40) != 2 )
  {
    if ( *(_DWORD *)(a1 + 40) == 3 )
    {
      SystemTimePrecise = __rdtsc();
    }
    else if ( (v36 & 1) != 0 )
    {
      SystemTimePrecise = v33;
    }
    else
    {
      v35 = 0LL;
      RtlQueryPerformanceCounter(&v35, v13);
      SystemTimePrecise = v35;
    }
  }
  *((_QWORD *)&v31 + 1) = SystemTimePrecise;
  Heap = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 8 * a3 + 568);
  if ( !Heap )
    return 0LL;
  v16 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 4 * a3);
  *(_QWORD *)(Heap + 536) = v16;
  if ( v16 )
  {
    if ( a4 )
    {
      if ( (unsigned int)EtwpFillProcessorStreamIndexMap(Heap, v7, a4, v5) )
        goto LABEL_31;
      v17 = RtlAllocateHeap((__int64)NtCurrentPeb()->ProcessHeap, 8u, 12LL * v7);
      *(_QWORD *)(Heap + 496) = v17;
      if ( !v17 )
        goto LABEL_31;
    }
    else
    {
      v28 = 0;
      if ( a3 )
      {
        v29 = 0LL;
        do
        {
          *(_WORD *)(v29 + *(_QWORD *)(Heap + 536)) = 0;
          v29 += 4LL;
          *(_WORD *)(v29 + *(_QWORD *)(Heap + 536) - 2) = v28++;
        }
        while ( v28 < a3 );
      }
    }
    v18 = *(_DWORD *)(a1 + 48);
    if ( v18 )
    {
      if ( v18 > 0x4000 )
      {
        *(_DWORD *)(a1 + 48) = 0x4000;
        v18 = 0x4000;
      }
      v19 = v18 << 10;
    }
    else
    {
      v19 = 4096;
    }
    *(_DWORD *)(Heap + 192) = v19;
    if ( RtlCreateUnicodeString(Heap + 136, *(const wchar_t **)(a1 + 152))
      && !(unsigned int)EtwpAddInstanceIdToLogFileName(a1, *(unsigned int *)(a1 + 96), &v32) )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x4000) != 0 )
      {
        v20 = &EtwpGlobalSequence;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x8000) == 0 )
        {
LABEL_20:
          v21 = 2048;
          *(_DWORD *)(Heap + 20) = a2;
          *(_DWORD *)(Heap + 308) = 2048;
          *(_DWORD *)(Heap + 188) = a3;
          v22 = *(_DWORD *)(a1 + 64);
          if ( (v22 & 0x400) != 0 )
          {
            v21 = 3072;
          }
          else
          {
            if ( (v22 & 2) != 0 )
            {
              v21 = 2050;
            }
            else
            {
              if ( (v22 & 8) != 0 )
              {
                v21 = 2056;
                *(_OWORD *)(Heap + 168) = v32;
                goto LABEL_26;
              }
              if ( (v22 & 1) == 0 )
              {
LABEL_27:
                *(_DWORD *)(Heap + 308) = v21 | *(_DWORD *)(a1 + 64) & 0x34133024;
                *(_DWORD *)(Heap + 376) = *(_DWORD *)(a1 + 108);
                *(_DWORD *)(Heap + 212) = *(_DWORD *)(Heap + 208);
                *(_OWORD *)(Heap + 44) = *(_OWORD *)(a1 + 24);
                *(_DWORD *)(Heap + 304) = *(_DWORD *)(a1 + 60);
                *(_DWORD *)(Heap + 200) = *(_DWORD *)(a1 + 56);
                *(_DWORD *)(Heap + 204) = *(_DWORD *)(a1 + 52);
                *(_QWORD *)(Heap + 224) = Heap + 216;
                *(_QWORD *)(Heap + 216) = Heap + 216;
                *(_QWORD *)(Heap + 248) = 0LL;
                *(_QWORD *)(Heap + 232) = Heap + 248;
                *(_QWORD *)(Heap + 240) = Heap + 248;
                *(_QWORD *)(Heap + 272) = 0LL;
                *(_QWORD *)(Heap + 256) = Heap + 272;
                *(_QWORD *)(Heap + 264) = Heap + 272;
                *(_QWORD *)(Heap + 296) = 0LL;
                *(_QWORD *)(Heap + 280) = Heap + 296;
                *(_QWORD *)(Heap + 288) = Heap + 296;
                *(_QWORD *)(Heap + 456) = Heap + 448;
                *(_QWORD *)(Heap + 448) = Heap + 448;
                *(_QWORD *)(Heap + 472) = Heap + 464;
                *(_QWORD *)(Heap + 464) = Heap + 464;
                *(_DWORD *)(Heap + 16) = *(_DWORD *)(a1 + 40);
                *(_DWORD *)(Heap + 60) = *(_DWORD *)(a1 + 96);
                *(_DWORD *)(Heap + 352) = *(_DWORD *)(a1 + 76);
                if ( (int)ZwCreateEvent(Heap + 112, 2031619LL, 0LL, 1LL, 0) >= 0 )
                {
                  LOBYTE(v30) = 0;
                  if ( (int)ZwCreateEvent(Heap + 120, 2031619LL, 0LL, 1LL, v30) >= 0 )
                  {
                    RtlInitializeCriticalSectionEx(Heap + 72, 0LL, 0LL);
                    *(_QWORD *)(Heap + 64) = 0LL;
                    result = Heap;
                    *(_DWORD *)(Heap + 312) = 1;
                    *(_OWORD *)Heap = v31;
                    return result;
                  }
                }
                goto LABEL_31;
              }
              v21 = 2049;
            }
            *(_OWORD *)(Heap + 152) = v32;
          }
LABEL_26:
          *(_DWORD *)(Heap + 308) = v21;
          goto LABEL_27;
        }
        v20 = (void *)(Heap + 392);
      }
      *(_QWORD *)(Heap + 384) = v20;
      goto LABEL_20;
    }
  }
LABEL_31:
  v24 = *(void **)(Heap + 120);
  if ( v24 )
  {
    NtClose(v24);
    *(_QWORD *)(Heap + 120) = 0LL;
  }
  v25 = *(void **)(Heap + 112);
  if ( v25 )
  {
    NtClose(v25);
    *(_QWORD *)(Heap + 112) = 0LL;
  }
  v26 = *(_QWORD *)(Heap + 496);
  if ( v26 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v26);
  v27 = *(_QWORD *)(Heap + 536);
  if ( v27 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v27);
  EtwpFreeStreamIndexMap(Heap);
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 136));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 152));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 168));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap);
  return 0LL;
}
