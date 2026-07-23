/*
 * XREFs of RtlpCallInterceptRoutine @ 0x180054AE0
 * Callers:
 *     RtlDestroyHeap @ 0x1800280C0 (RtlDestroyHeap.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpAllocateNTHeapInternal @ 0x180054DA0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpFreeHeapSlow @ 0x1800580C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpFreeNTHeapInternal @ 0x180058780 (RtlpFreeNTHeapInternal.c)
 *     RtlpReAllocateHeapInternal @ 0x18005AF10 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapSlow @ 0x18009FA50 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011AB20 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpSetHeapDebuggingInformation @ 0x180140E90 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpHeapTrkTrackAdd @ 0x18001CA70 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x18001CB50 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkInterceptor @ 0x18001CC90 (RtlpHeapTrkInterceptor.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800F27A0 (RtlpStackTraceDatabaseLogPrefix.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800F6138 (RtlpHeapTrkTrackRemoveHeap.c)
 *     NtQueryPerformanceCounter @ 0x180160670 (NtQueryPerformanceCounter.c)
 *     RtlGetCurrentProcessorNumberEx @ 0x180164630 (RtlGetCurrentProcessorNumberEx.c)
 */

__int64 __fastcall RtlpCallInterceptRoutine(int a1, PVOID a2, unsigned __int64 a3, int a4)
{
  unsigned __int16 v5; // cx
  unsigned int (__fastcall *v6)(PVOID, unsigned __int64, int); // rax
  unsigned int v7; // ebx
  unsigned __int64 v9; // rdi
  unsigned __int8 Number; // dl
  __int64 v11; // r8
  signed __int32 v12; // r9d
  unsigned __int64 v13; // rdx
  __int64 v14; // rdx
  LARGE_INTEGER v15; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+28h] [rbp-10h] BYREF
  _PROCESSOR_NUMBER ProcessorNumber; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225473LL;
  v5 = a1 - 1;
  if ( v5 >= 2u )
    return 3221225473LL;
  v6 = (unsigned int (__fastcall *)(PVOID, unsigned __int64, int))RtlpInterceptorRoutines[v5];
  if ( (char *)v6 != (char *)RtlpHeapTrkInterceptor )
    return v6(a2, a3, a4);
  v7 = 0;
  ProcessorNumber = 0;
  if ( a2 == HeapHandle || dword_1801CD838 == 1 )
    return v7;
  switch ( a4 )
  {
    case 2:
      goto LABEL_12;
    case 3:
    case 5:
      if ( !a3 )
        return v7;
      RtlpHeapTrkTrackRemove((__int64)a2, (a3 >> 3) | 0xE000000000000000uLL);
      return 0LL;
    case 6:
LABEL_12:
      if ( !a3 )
        return v7;
      v9 = (a3 >> 3) | 0xE000000000000000uLL;
      if ( dword_1801CD290 == 1 )
      {
        RtlpHeapTrkTrackAdd((__int64)a2, v9);
        return 0LL;
      }
      else
      {
        if ( dword_1801CD290 != 2 )
          return v7;
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
          v15.QuadPart = 0LL;
          NtQueryPerformanceCounter(&PerformanceCounter, 0LL);
          RtlpHeapTrkTrackAdd((__int64)a2, v9);
          NtQueryPerformanceCounter(&v15, 0LL);
          v15.QuadPart -= PerformanceCounter.QuadPart;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(qword_1801CD840 + 8LL * ProcessorNumber.Number) + 8LL),
            ~v15.QuadPart);
          _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(qword_1801CD840 + 8LL * ProcessorNumber.Number)
                                                            + 16LL));
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v14 + 24));
        }
        return 0LL;
      }
    case 8:
      RtlpHeapTrkTrackRemoveHeap(a2);
      return 0LL;
    default:
      return v7;
  }
}
