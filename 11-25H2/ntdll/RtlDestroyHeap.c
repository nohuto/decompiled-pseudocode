/*
 * XREFs of RtlDestroyHeap @ 0x1800B8900
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x1800240BC (LdrEnsureMrdataHeapExists.c)
 *     RtlDetectHeapLeaks @ 0x1800FE250 (RtlDetectHeapLeaks.c)
 *     RtlHeapTrkInitialize @ 0x180116430 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlGetCurrentServiceSessionId @ 0x180011660 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x180011684 (RtlpHeapLogRangeRelease.c)
 *     RtlpCallInterceptRoutine @ 0x18004F6D0 (RtlpCallInterceptRoutine.c)
 *     DbgPrint @ 0x1800586D0 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x18005A8A0 (RtlpHeapHandleError.c)
 *     RtlpHpTagDestroyHeap @ 0x18009BA7C (RtlpHpTagDestroyHeap.c)
 *     RtlpLogHeapDestroyEvent @ 0x1800B7B0C (RtlpLogHeapDestroyEvent.c)
 *     RtlpDestroyHeapSegment @ 0x1800B8CEC (RtlpDestroyHeapSegment.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800B8DC0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpProcessHeapsRemove @ 0x1800B9024 (RtlpProcessHeapsRemove.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x1800B90C8 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHeapLogRangeDestroy @ 0x1800B9128 (RtlpHeapLogRangeDestroy.c)
 *     RtlDeleteCriticalSection @ 0x1800B9240 (RtlDeleteCriticalSection.c)
 *     RtlpHpHeapDestroy @ 0x1800B93D0 (RtlpHpHeapDestroy.c)
 *     RtlDebugDestroyHeap @ 0x180120BF8 (RtlDebugDestroyHeap.c)
 *     RtlpDebugPageHeapDestroy @ 0x180121790 (RtlpDebugPageHeapDestroy.c)
 */

PVOID __cdecl RtlDestroyHeap(PVOID HeapHandle)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  PVOID v6; // rbx
  __int64 v7; // rbx
  __int64 v8; // rcx
  __int64 v9; // rbx
  __int64 v10; // rcx
  unsigned __int64 v12; // rax
  int v13; // ecx
  __int64 v14; // [rsp+70h] [rbp+38h] BYREF
  unsigned __int64 v15; // [rsp+78h] [rbp+40h] BYREF
  __int64 v16; // [rsp+80h] [rbp+48h] BYREF
  __int64 v17; // [rsp+88h] [rbp+50h] BYREF

  v14 = 0LL;
  v15 = 0LL;
  if ( !HeapHandle )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(HeapHandle != NULL)");
      RtlpHeapHandleError(2LL);
    }
    return 0LL;
  }
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( HeapHandle != NtCurrentPeb()->ProcessHeap )
    {
      v13 = *((_DWORD *)HeapHandle + 6);
      if ( v13 )
        RtlpCallInterceptRoutine(v13, HeapHandle, 0LL, 8u, 0LL);
      RtlpHpStackTraceHeapDestroy(HeapHandle);
      RtlpHpTagDestroyHeap((__int64)HeapHandle);
      RtlpProcessHeapsRemove(HeapHandle);
      RtlpHpHeapDestroy(HeapHandle);
      return 0LL;
    }
    return HeapHandle;
  }
  if ( (*((_DWORD *)HeapHandle + 29) & 0x1000000) == 0 )
  {
    v2 = *((_DWORD *)HeapHandle + 36);
    if ( v2 )
      RtlpCallInterceptRoutine(v2, HeapHandle, 0LL, 8u, 0LL);
    RtlpHpStackTraceHeapDestroy(HeapHandle);
    if ( ((((*((_DWORD *)HeapHandle + 28) & 0x61000000) != 0) & !_bittest(
                                                                   (const signed __int32 *)HeapHandle + 28,
                                                                   0x1Cu)) == 0
       || (unsigned __int8)RtlDebugDestroyHeap((int)HeapHandle))
      && HeapHandle != NtCurrentPeb()->ProcessHeap )
    {
      RtlpProcessHeapsRemove(HeapHandle);
      v4 = 2147353480LL;
      v5 = (_QWORD *)*((_QWORD *)HeapHandle + 34);
      while ( (char *)HeapHandle + 272 != (char *)v5 )
      {
        v12 = (unsigned __int64)v5;
        v5 = (_QWORD *)*v5;
        v14 = 0LL;
        v15 = v12 & 0xFFFFFFFFFFFF0000uLL;
        RtlpSecMemFreeVirtualMemory(v3, &v15, &v14, 0x8000LL);
        if ( RtlGetCurrentServiceSessionId() )
          v3 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v3 = 2147353480LL;
        if ( *(_BYTE *)v3 )
          RtlpHeapLogRangeRelease((__int64)HeapHandle, v15, v14);
      }
      if ( *((_BYTE *)HeapHandle + 418) == 2 && *((_QWORD *)HeapHandle + 51) )
      {
        v17 = *((_QWORD *)HeapHandle + 51);
        v16 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, &v17, &v16, 0x8000LL);
      }
      if ( *((_QWORD *)HeapHandle + 29) )
      {
        v16 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, (char *)HeapHandle + 232, &v16, 0x8000LL);
        *((_QWORD *)HeapHandle + 29) = 0LL;
      }
      if ( (*((_BYTE *)HeapHandle + 112) & 1) == 0 )
      {
        if ( *((int *)HeapHandle + 28) >= 0 )
          RtlDeleteCriticalSection(*((PRTL_CRITICAL_SECTION *)HeapHandle + 44));
        *((_QWORD *)HeapHandle + 44) = 0LL;
      }
      do
      {
        v6 = (PVOID)(*((_QWORD *)HeapHandle + 37) - 24LL);
        RtlpDestroyHeapSegment(v6);
      }
      while ( v6 != HeapHandle );
      v7 = 2147353472LL;
      if ( RtlGetCurrentServiceSessionId() )
        v8 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v8 = 2147353472LL;
      if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v7 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapDestroyEvent((__int64)HeapHandle, (void *)*(unsigned __int8 *)v7);
      }
      v9 = 2147353482LL;
      if ( RtlGetCurrentServiceSessionId() )
        v10 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v10 = 2147353482LL;
      if ( *(_BYTE *)v10 )
      {
        if ( RtlGetCurrentServiceSessionId() )
          v9 = (__int64)NtCurrentPeb()->SharedData + 560;
        RtlpLogHeapDestroyEvent((__int64)HeapHandle, (void *)*(unsigned __int8 *)v9);
      }
      if ( RtlGetCurrentServiceSessionId() )
        v4 = (__int64)NtCurrentPeb()->SharedData + 558;
      if ( *(_BYTE *)v4 )
        RtlpHeapLogRangeDestroy(HeapHandle);
      return 0LL;
    }
    return HeapHandle;
  }
  return (PVOID)RtlpDebugPageHeapDestroy();
}
