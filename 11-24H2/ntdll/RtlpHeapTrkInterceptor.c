/*
 * XREFs of RtlpHeapTrkInterceptor @ 0x18001CC90
 * Callers:
 *     RtlpCallInterceptRoutine @ 0x180054AE0 (RtlpCallInterceptRoutine.c)
 * Callees:
 *     RtlpHeapTrkTrackAdd @ 0x18001CA70 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkHash @ 0x18001CFC0 (RtlpHeapTrkHash.c)
 *     RtlpHeapTrkDereferenceStack @ 0x18001D070 (RtlpHeapTrkDereferenceStack.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpAcquireSRWLockExclusiveContended @ 0x180060050 (RtlpAcquireSRWLockExclusiveContended.c)
 *     RtlReleaseSRWLockExclusive @ 0x18006C390 (RtlReleaseSRWLockExclusive.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800F6138 (RtlpHeapTrkTrackRemoveHeap.c)
 *     NtQueryPerformanceCounter @ 0x180160670 (NtQueryPerformanceCounter.c)
 *     RtlGetCurrentProcessorNumberEx @ 0x180164630 (RtlGetCurrentProcessorNumberEx.c)
 */

__int64 __fastcall RtlpHeapTrkInterceptor(PVOID a1, unsigned __int64 a2, int a3)
{
  int v4; // r8d
  int v5; // r8d
  int v6; // r8d
  int v7; // r8d
  unsigned __int64 v9; // rdi
  unsigned __int8 Number; // dl
  __int64 v11; // r9
  signed __int32 v12; // eax
  unsigned __int64 v13; // r8
  __int64 v14; // rdx
  unsigned __int64 v15; // rdi
  unsigned int v16; // eax
  __int64 v17; // rbx
  __int64 v18; // r14
  void *v19; // rdx
  char *SchedulerSharedDataSlot; // r9
  unsigned int i; // r8d
  char *v22; // rcx
  _QWORD **v23; // rcx
  _QWORD *j; // rbx
  _QWORD *v25; // rdx
  _QWORD *v26; // rax
  LARGE_INTEGER v27; // [rsp+20h] [rbp-28h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+28h] [rbp-20h] BYREF
  _PROCESSOR_NUMBER ProcessorNumber; // [rsp+50h] [rbp+8h] BYREF

  ProcessorNumber = 0;
  if ( a1 == HeapHandle || dword_1801CD838 == 1 )
    return 0LL;
  v4 = a3 - 2;
  if ( !v4 )
  {
LABEL_10:
    if ( a2 )
    {
      v9 = (a2 >> 3) | 0xE000000000000000uLL;
      if ( dword_1801CD290 == 1 )
      {
        RtlpHeapTrkTrackAdd((__int64)a1, v9);
      }
      else if ( dword_1801CD290 == 2 )
      {
        RtlGetCurrentProcessorNumberEx(&ProcessorNumber);
        Number = ProcessorNumber.Number;
        if ( ProcessorNumber.Number >= (unsigned int)dword_1801CD7F0 )
          Number = 0;
        ProcessorNumber.Number = Number;
        v11 = 8LL * Number;
        v12 = **(_DWORD **)(v11 + qword_1801CD840);
        v13 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
        if ( (unsigned int)(v13 - v12) >= 0x3E8
          && v12 == _InterlockedCompareExchange(*(volatile signed __int32 **)(v11 + qword_1801CD840), v13, v12) )
        {
          _InterlockedExchange64(
            (volatile __int64 *)(*(_QWORD *)(v11 + qword_1801CD840) + 8LL),
            PerformanceFrequency.QuadPart / 100);
        }
        v14 = *(_QWORD *)(qword_1801CD840 + 8LL * ProcessorNumber.Number);
        if ( *(__int64 *)(v14 + 8) > 0 )
        {
          PerformanceCounter.QuadPart = 0LL;
          v27.QuadPart = 0LL;
          NtQueryPerformanceCounter(&PerformanceCounter, 0LL);
          RtlpHeapTrkTrackAdd((__int64)a1, v9);
          NtQueryPerformanceCounter(&v27, 0LL);
          v27.QuadPart -= PerformanceCounter.QuadPart;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(qword_1801CD840 + 8LL * ProcessorNumber.Number) + 8LL),
            ~v27.QuadPart);
          _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(qword_1801CD840 + 8LL * ProcessorNumber.Number)
                                                            + 16LL));
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
        }
      }
    }
    return 0LL;
  }
  v5 = v4 - 1;
  if ( v5 )
  {
    v6 = v5 - 2;
    if ( v6 )
    {
      v7 = v6 - 1;
      if ( v7 )
      {
        if ( v7 == 2 )
          RtlpHeapTrkTrackRemoveHeap();
        return 0LL;
      }
      goto LABEL_10;
    }
  }
  if ( a2 )
  {
    v15 = (a2 >> 3) | 0xE000000000000000uLL;
    v16 = RtlpHeapTrkHash(v15);
    v17 = v16;
    v18 = 8LL * (v16 & 0xF);
    v19 = *(void **)(v18 + qword_1801CD7E0);
    SchedulerSharedDataSlot = (char *)NtCurrentTeb()->SchedulerSharedDataSlot;
    if ( SchedulerSharedDataSlot )
    {
      for ( i = 0; i < 8; ++i )
      {
        v22 = &SchedulerSharedDataSlot[8 * i];
        if ( !*(_QWORD *)v22 )
        {
          if ( v22 )
            *(_QWORD *)v22 = v19;
          break;
        }
      }
    }
    if ( _interlockedbittestandset64((volatile signed __int32 *)v19, 0LL) )
      RtlpAcquireSRWLockExclusiveContended(v19);
    v23 = (_QWORD **)(16 * v17 + qword_1801CD280);
    for ( j = *v23; ; j = (_QWORD *)*j )
    {
      if ( j == v23 )
      {
        RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v18 + qword_1801CD7E0));
        return 0LL;
      }
      if ( j[3] == v15 && (PVOID)j[2] == a1 )
        break;
    }
    v25 = (_QWORD *)*j;
    if ( *(_QWORD **)(*j + 8LL) != j || (v26 = (_QWORD *)j[1], (_QWORD *)*v26 != j) )
      __fastfail(3u);
    *v26 = v25;
    v25[1] = v26;
    RtlReleaseSRWLockExclusive(*(PRTL_SRWLOCK *)(v18 + qword_1801CD7E0));
    if ( j[4] )
    {
      RtlpHeapTrkDereferenceStack();
      j[4] = 0LL;
    }
    RtlFreeHeap(HeapHandle, 0, j);
  }
  return 0LL;
}
