/*
 * XREFs of RtlpCallInterceptRoutine @ 0x18004F6D0
 * Callers:
 *     RtlpReAllocateHeapInternal @ 0x180029FF0 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapSlow @ 0x18002F040 (RtlpHpAllocateHeapSlow.c)
 *     RtlpAllocateNTHeapInternal @ 0x180050E70 (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpFreeHeapSlow @ 0x180054194 (RtlpHpFreeHeapSlow.c)
 *     RtlpFreeNTHeapInternal @ 0x180054850 (RtlpFreeNTHeapInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlDestroyHeap @ 0x1800B8900 (RtlDestroyHeap.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011E180 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpSetHeapDebuggingInformation @ 0x1801441D0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpHeapTrkTrackAdd @ 0x1800901E0 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x1800902C0 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkInterceptor @ 0x180090400 (RtlpHeapTrkInterceptor.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800F97C0 (RtlpStackTraceDatabaseLogPrefix.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FD438 (RtlpHeapTrkTrackRemoveHeap.c)
 *     NtQueryPerformanceCounter @ 0x180163840 (NtQueryPerformanceCounter.c)
 *     RtlGetCurrentProcessorNumberEx @ 0x180167800 (RtlGetCurrentProcessorNumberEx.c)
 */

__int64 __fastcall RtlpCallInterceptRoutine(int a1, PVOID a2, unsigned __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int16 v6; // cx
  __int64 (__fastcall *v7)(); // rax
  unsigned int v8; // ebx
  unsigned __int64 v10; // rdi
  unsigned __int8 Number; // dl
  __int64 v12; // r8
  signed __int32 v13; // r9d
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  LARGE_INTEGER v16; // [rsp+20h] [rbp-18h] BYREF
  LARGE_INTEGER PerformanceCounter; // [rsp+28h] [rbp-10h] BYREF
  _PROCESSOR_NUMBER ProcessorNumber; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225473LL;
  v6 = a1 - 1;
  if ( v6 >= 2u )
    return 3221225473LL;
  v7 = RtlpInterceptorRoutines[v6];
  if ( (char *)v7 != (char *)RtlpHeapTrkInterceptor )
    return ((unsigned int (__fastcall *)(PVOID, unsigned __int64, _QWORD, __int64))v7)(a2, a3, a4, a5);
  v8 = 0;
  ProcessorNumber = 0;
  if ( a2 == HeapHandle || dword_1801D0878 == 1 )
    return v8;
  switch ( a4 )
  {
    case 2u:
      goto LABEL_12;
    case 3u:
    case 5u:
      if ( !a3 )
        return v8;
      RtlpHeapTrkTrackRemove(a2, (a3 >> 3) | 0xE000000000000000uLL);
      return 0LL;
    case 6u:
LABEL_12:
      if ( !a3 )
        return v8;
      v10 = (a3 >> 3) | 0xE000000000000000uLL;
      if ( dword_1801D0290 == 1 )
      {
        RtlpHeapTrkTrackAdd(a2, v10);
        return 0LL;
      }
      else
      {
        if ( dword_1801D0290 != 2 )
          return v8;
        RtlGetCurrentProcessorNumberEx(&ProcessorNumber);
        Number = ProcessorNumber.Number;
        if ( ProcessorNumber.Number >= (unsigned int)dword_1801D0830 )
          Number = 0;
        ProcessorNumber.Number = Number;
        v12 = 8LL * Number;
        v13 = **(_DWORD **)(v12 + qword_1801D0880);
        v14 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
        if ( (unsigned int)(v14 - v13) >= 0x3E8
          && v13 == _InterlockedCompareExchange(*(volatile signed __int32 **)(v12 + qword_1801D0880), v14, v13) )
        {
          _InterlockedExchange64(
            (volatile __int64 *)(*(_QWORD *)(v12 + qword_1801D0880) + 8LL),
            PerformanceFrequency.QuadPart / 100);
        }
        v15 = *(_QWORD *)(qword_1801D0880 + 8LL * ProcessorNumber.Number);
        if ( *(__int64 *)(v15 + 8) > 0 )
        {
          PerformanceCounter.QuadPart = 0LL;
          v16.QuadPart = 0LL;
          NtQueryPerformanceCounter(&PerformanceCounter, 0LL);
          RtlpHeapTrkTrackAdd(a2, v10);
          NtQueryPerformanceCounter(&v16, 0LL);
          v16.QuadPart -= PerformanceCounter.QuadPart;
          _InterlockedAdd64(
            (volatile signed __int64 *)(*(_QWORD *)(qword_1801D0880 + 8LL * ProcessorNumber.Number) + 8LL),
            ~v16.QuadPart);
          _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(qword_1801D0880 + 8LL * ProcessorNumber.Number)
                                                            + 16LL));
        }
        else
        {
          _InterlockedIncrement64((volatile signed __int64 *)(v15 + 24));
        }
        return 0LL;
      }
    case 8u:
      RtlpHeapTrkTrackRemoveHeap(a2);
      return 0LL;
    default:
      return v8;
  }
}
