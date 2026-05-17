/*
 * XREFs of RtlpCallInterceptRoutine @ 0x1800280E0
 * Callers:
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpAllocateNTHeapInternal @ 0x1800283A0 (RtlpAllocateNTHeapInternal.c)
 *     RtlpHpFreeHeapSlow @ 0x18002B6C4 (RtlpHpFreeHeapSlow.c)
 *     RtlpFreeNTHeapInternal @ 0x18002BD80 (RtlpFreeNTHeapInternal.c)
 *     RtlDestroyHeap @ 0x18008F580 (RtlDestroyHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x1800A1040 (RtlpReAllocateHeapInternal.c)
 *     RtlpHpAllocateHeapSlow @ 0x1800ACEF0 (RtlpHpAllocateHeapSlow.c)
 *     RtlpHpReAllocateHeapSlow @ 0x18011C8F0 (RtlpHpReAllocateHeapSlow.c)
 *     RtlpSetHeapDebuggingInformation @ 0x180142AE0 (RtlpSetHeapDebuggingInformation.c)
 * Callees:
 *     RtlpHeapTrkTrackAdd @ 0x18003C7F0 (RtlpHeapTrkTrackAdd.c)
 *     RtlpHeapTrkTrackRemove @ 0x18003C8D0 (RtlpHeapTrkTrackRemove.c)
 *     RtlpHeapTrkInterceptor @ 0x18003CA10 (RtlpHeapTrkInterceptor.c)
 *     RtlpStackTraceDatabaseLogPrefix @ 0x1800F7C30 (RtlpStackTraceDatabaseLogPrefix.c)
 *     RtlpHeapTrkTrackRemoveHeap @ 0x1800FB208 (RtlpHeapTrkTrackRemoveHeap.c)
 *     NtQueryPerformanceCounter @ 0x1801622B0 (NtQueryPerformanceCounter.c)
 *     RtlGetCurrentProcessorNumberEx @ 0x180166270 (RtlGetCurrentProcessorNumberEx.c)
 */

__int64 __fastcall RtlpCallInterceptRoutine(int a1, __int64 a2, unsigned __int64 a3, unsigned int a4, __int64 a5)
{
  unsigned __int16 v6; // cx
  __int64 (__fastcall *v7)(); // rax
  unsigned int v8; // ebx
  unsigned __int64 v10; // rdi
  unsigned __int8 v11; // dl
  __int64 v12; // r8
  signed __int32 v13; // r9d
  unsigned __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // [rsp+20h] [rbp-18h] BYREF
  __int64 v17; // [rsp+28h] [rbp-10h] BYREF
  int v18; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 )
    return 3221225473LL;
  v6 = a1 - 1;
  if ( v6 >= 2u )
    return 3221225473LL;
  v7 = RtlpInterceptorRoutines[v6];
  if ( (char *)v7 != (char *)RtlpHeapTrkInterceptor )
    return ((unsigned int (__fastcall *)(__int64, unsigned __int64, _QWORD, __int64))v7)(a2, a3, a4, a5);
  v8 = 0;
  v18 = 0;
  if ( a2 == qword_1801CE808 || dword_1801CE840 == 1 )
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
      if ( dword_1801CE290 == 1 )
      {
        RtlpHeapTrkTrackAdd(a2, v10);
        return 0LL;
      }
      else
      {
        if ( dword_1801CE290 != 2 )
          return v8;
        RtlGetCurrentProcessorNumberEx(&v18);
        v11 = BYTE2(v18);
        if ( BYTE2(v18) >= (unsigned int)dword_1801CE7F8 )
          v11 = 0;
        BYTE2(v18) = v11;
        v12 = 8LL * v11;
        v13 = **(_DWORD **)(v12 + qword_1801CE848);
        v14 = (MEMORY[0x7FFE0320] * (unsigned __int64)MEMORY[0x7FFE0004]) >> 24;
        if ( (unsigned int)(v14 - v13) >= 0x3E8
          && v13 == _InterlockedCompareExchange(*(volatile signed __int32 **)(v12 + qword_1801CE848), v14, v13) )
        {
          _InterlockedExchange64((volatile __int64 *)(*(_QWORD *)(v12 + qword_1801CE848) + 8LL), qword_1801CE838 / 100);
        }
        v15 = *(_QWORD *)(qword_1801CE848 + 8LL * BYTE2(v18));
        if ( *(__int64 *)(v15 + 8) > 0 )
        {
          v17 = 0LL;
          v16 = 0LL;
          NtQueryPerformanceCounter(&v17, 0LL);
          RtlpHeapTrkTrackAdd(a2, v10);
          NtQueryPerformanceCounter(&v16, 0LL);
          v16 -= v17;
          _InterlockedAdd64((volatile signed __int64 *)(*(_QWORD *)(qword_1801CE848 + 8LL * BYTE2(v18)) + 8LL), ~v16);
          _InterlockedIncrement64((volatile signed __int64 *)(*(_QWORD *)(qword_1801CE848 + 8LL * BYTE2(v18)) + 16LL));
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
