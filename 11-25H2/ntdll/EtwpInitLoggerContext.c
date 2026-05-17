/*
 * XREFs of EtwpInitLoggerContext @ 0x1800B5FE0
 * Callers:
 *     EtwpStartUmLogger @ 0x1800B598C (EtwpStartUmLogger.c)
 * Callees:
 *     RtlInitializeCriticalSectionEx @ 0x1800073E0 (RtlInitializeCriticalSectionEx.c)
 *     RtlAllocateHeap @ 0x180050340 (RtlAllocateHeap.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlCreateUnicodeString @ 0x180082430 (RtlCreateUnicodeString.c)
 *     RtlFreeAnsiString @ 0x1800832E0 (RtlFreeAnsiString.c)
 *     RtlQueryPerformanceCounter @ 0x18008E010 (RtlQueryPerformanceCounter.c)
 *     RtlGetSystemTimePrecise @ 0x1800912F0 (RtlGetSystemTimePrecise.c)
 *     RtlGetMultiTimePrecise @ 0x1800B64E0 (RtlGetMultiTimePrecise.c)
 *     EtwpAddInstanceIdToLogFileName @ 0x1800B66D8 (EtwpAddInstanceIdToLogFileName.c)
 *     EtwpFillProcessorStreamIndexMap @ 0x1800B6868 (EtwpFillProcessorStreamIndexMap.c)
 *     EtwpFreeStreamIndexMap @ 0x1800B786C (EtwpFreeStreamIndexMap.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     ZwCreateEvent @ 0x180163B20 (ZwCreateEvent.c)
 */

__int64 __fastcall EtwpInitLoggerContext(__int64 a1, int a2, unsigned int a3, __int64 a4, unsigned int a5)
{
  unsigned int v5; // r12d
  unsigned __int16 v7; // si
  unsigned __int16 v11; // dx
  unsigned int i; // ecx
  __int64 v13; // rdx
  __int64 SystemTimePrecise; // rax
  __int64 Heap; // rbx
  __int64 v16; // rax
  __int64 v17; // r9
  __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // eax
  void *v21; // rax
  int v22; // ecx
  int v23; // eax
  __int64 result; // rax
  void *v25; // rcx
  void *v26; // rcx
  __int64 v27; // r8
  __int64 v28; // r8
  __int64 v29; // r9
  unsigned int v30; // edx
  __int64 v31; // rcx
  int v32; // [rsp+20h] [rbp-50h]
  __int128 v33; // [rsp+30h] [rbp-40h]
  __int128 v34; // [rsp+40h] [rbp-30h] BYREF
  __int128 v35; // [rsp+50h] [rbp-20h] BYREF
  __int64 v36; // [rsp+60h] [rbp-10h]
  __int64 v37; // [rsp+B0h] [rbp+40h] BYREF
  int v38; // [rsp+C0h] [rbp+50h] BYREF

  v5 = a5;
  v7 = 1;
  v34 = 0LL;
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
  v38 = 0;
  v36 = 0LL;
  v35 = 0LL;
  RtlGetMultiTimePrecise(&v35, 5LL, &v38);
  if ( (v38 & 4) != 0 )
    SystemTimePrecise = v36;
  else
    SystemTimePrecise = RtlGetSystemTimePrecise();
  *(_QWORD *)&v33 = SystemTimePrecise;
  if ( *(_DWORD *)(a1 + 40) != 2 )
  {
    if ( *(_DWORD *)(a1 + 40) == 3 )
    {
      SystemTimePrecise = __rdtsc();
    }
    else if ( (v38 & 1) != 0 )
    {
      SystemTimePrecise = v35;
    }
    else
    {
      v37 = 0LL;
      RtlQueryPerformanceCounter(&v37, v13);
      SystemTimePrecise = v37;
    }
  }
  *((_QWORD *)&v33 + 1) = SystemTimePrecise;
  Heap = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 8 * a3 + 568);
  if ( !Heap )
    return 0LL;
  v16 = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 4 * a3);
  *(_QWORD *)(Heap + 536) = v16;
  if ( v16 )
  {
    if ( a4 )
    {
      if ( (unsigned int)EtwpFillProcessorStreamIndexMap(Heap, v7, a4, v5) )
        goto LABEL_31;
      v18 = RtlAllocateHeap((char *)NtCurrentPeb()->ProcessHeap, 8u, 12LL * v7);
      *(_QWORD *)(Heap + 496) = v18;
      if ( !v18 )
        goto LABEL_31;
    }
    else
    {
      v30 = 0;
      if ( a3 )
      {
        v31 = 0LL;
        do
        {
          *(_WORD *)(v31 + *(_QWORD *)(Heap + 536)) = 0;
          v31 += 4LL;
          *(_WORD *)(v31 + *(_QWORD *)(Heap + 536) - 2) = v30++;
        }
        while ( v30 < a3 );
      }
    }
    v19 = *(_DWORD *)(a1 + 48);
    if ( v19 )
    {
      if ( v19 > 0x4000 )
      {
        *(_DWORD *)(a1 + 48) = 0x4000;
        v19 = 0x4000;
      }
      v20 = v19 << 10;
    }
    else
    {
      v20 = 4096;
    }
    *(_DWORD *)(Heap + 192) = v20;
    if ( RtlCreateUnicodeString(Heap + 136, *(const wchar_t **)(a1 + 152))
      && !(unsigned int)EtwpAddInstanceIdToLogFileName(a1, *(unsigned int *)(a1 + 96), &v34) )
    {
      if ( (*(_DWORD *)(a1 + 64) & 0x4000) != 0 )
      {
        v21 = &EtwpGlobalSequence;
      }
      else
      {
        if ( (*(_DWORD *)(a1 + 64) & 0x8000) == 0 )
        {
LABEL_20:
          v22 = 2048;
          *(_DWORD *)(Heap + 20) = a2;
          *(_DWORD *)(Heap + 308) = 2048;
          *(_DWORD *)(Heap + 188) = a3;
          v23 = *(_DWORD *)(a1 + 64);
          if ( (v23 & 0x400) != 0 )
          {
            v22 = 3072;
          }
          else
          {
            if ( (v23 & 2) != 0 )
            {
              v22 = 2050;
            }
            else
            {
              if ( (v23 & 8) != 0 )
              {
                v22 = 2056;
                *(_OWORD *)(Heap + 168) = v34;
                goto LABEL_26;
              }
              if ( (v23 & 1) == 0 )
              {
LABEL_27:
                *(_DWORD *)(Heap + 308) = v22 | *(_DWORD *)(a1 + 64) & 0x34133024;
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
                  LOBYTE(v32) = 0;
                  if ( (int)ZwCreateEvent(Heap + 120, 2031619LL, 0LL, 1LL, v32) >= 0 )
                  {
                    RtlInitializeCriticalSectionEx(Heap + 72, 0, 0LL, v17);
                    *(_QWORD *)(Heap + 64) = 0LL;
                    result = Heap;
                    *(_DWORD *)(Heap + 312) = 1;
                    *(_OWORD *)Heap = v33;
                    return result;
                  }
                }
                goto LABEL_31;
              }
              v22 = 2049;
            }
            *(_OWORD *)(Heap + 152) = v34;
          }
LABEL_26:
          *(_DWORD *)(Heap + 308) = v22;
          goto LABEL_27;
        }
        v21 = (void *)(Heap + 392);
      }
      *(_QWORD *)(Heap + 384) = v21;
      goto LABEL_20;
    }
  }
LABEL_31:
  v25 = *(void **)(Heap + 120);
  if ( v25 )
  {
    NtClose(v25);
    *(_QWORD *)(Heap + 120) = 0LL;
  }
  v26 = *(void **)(Heap + 112);
  if ( v26 )
  {
    NtClose(v26);
    *(_QWORD *)(Heap + 112) = 0LL;
  }
  v27 = *(_QWORD *)(Heap + 496);
  if ( v27 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v27, v17);
  v28 = *(_QWORD *)(Heap + 536);
  if ( v28 )
    RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, v28, v17);
  EtwpFreeStreamIndexMap(Heap);
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 136));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 152));
  RtlFreeAnsiString((PUNICODE_STRING)(Heap + 168));
  RtlFreeHeap((__int64)NtCurrentPeb()->ProcessHeap, 0, Heap, v29);
  return 0LL;
}
