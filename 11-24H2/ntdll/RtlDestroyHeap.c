/*
 * XREFs of RtlDestroyHeap @ 0x18008F580
 * Callers:
 *     LdrEnsureMrdataHeapExists @ 0x180006F10 (LdrEnsureMrdataHeapExists.c)
 *     RtlDetectHeapLeaks @ 0x18010A5F0 (RtlDetectHeapLeaks.c)
 *     RtlHeapTrkInitialize @ 0x1801134A0 (RtlHeapTrkInitialize.c)
 * Callees:
 *     RtlpCallInterceptRoutine @ 0x1800280E0 (RtlpCallInterceptRoutine.c)
 *     DbgPrint @ 0x18002FC00 (DbgPrint.c)
 *     RtlpHeapHandleError @ 0x180031DD0 (RtlpHeapHandleError.c)
 *     RtlpHpTagDestroyHeap @ 0x180047D9C (RtlpHpTagDestroyHeap.c)
 *     RtlGetCurrentServiceSessionId @ 0x180055A20 (RtlGetCurrentServiceSessionId.c)
 *     RtlpHeapLogRangeRelease @ 0x180055A44 (RtlpHeapLogRangeRelease.c)
 *     RtlpLogHeapDestroyEvent @ 0x18008EC6C (RtlpLogHeapDestroyEvent.c)
 *     RtlpDestroyHeapSegment @ 0x18008F96C (RtlpDestroyHeapSegment.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18008FA40 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpProcessHeapsRemove @ 0x18008FCA4 (RtlpProcessHeapsRemove.c)
 *     RtlpHpStackTraceHeapDestroy @ 0x18008FD48 (RtlpHpStackTraceHeapDestroy.c)
 *     RtlpHeapLogRangeDestroy @ 0x18008FDA8 (RtlpHeapLogRangeDestroy.c)
 *     RtlDeleteCriticalSection @ 0x18008FEC0 (RtlDeleteCriticalSection.c)
 *     RtlpHpHeapDestroy @ 0x180090050 (RtlpHpHeapDestroy.c)
 *     RtlDebugDestroyHeap @ 0x18011F328 (RtlDebugDestroyHeap.c)
 *     RtlpDebugPageHeapDestroy @ 0x18011FEC0 (RtlpDebugPageHeapDestroy.c)
 */

__int64 __fastcall RtlDestroyHeap(__int64 a1)
{
  int v2; // ecx
  __int64 v3; // rcx
  __int64 v4; // rsi
  _QWORD *v5; // rbx
  __int64 v6; // rbx
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
  if ( !a1 )
  {
    if ( RtlpHeapErrorHandlerThreshold >= 2 )
    {
      if ( NtCurrentPeb()->Ldr )
        DbgPrint("HEAP[%wZ]: ", &NtCurrentPeb()->Ldr->InLoadOrderModuleList.Flink[5].Blink);
      else
        DbgPrint("HEAP: ");
      DbgPrint("(HeapHandle != NULL)");
      RtlpHeapHandleError();
    }
    return 0LL;
  }
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      v13 = *(_DWORD *)(a1 + 24);
      if ( v13 )
        RtlpCallInterceptRoutine(v13, a1, 0LL, 8u, 0LL);
      RtlpHpStackTraceHeapDestroy(a1);
      RtlpHpTagDestroyHeap(a1);
      RtlpProcessHeapsRemove(a1);
      RtlpHpHeapDestroy(a1);
      return 0LL;
    }
    return a1;
  }
  if ( (*(_DWORD *)(a1 + 116) & 0x1000000) == 0 )
  {
    v2 = *(_DWORD *)(a1 + 144);
    if ( v2 )
      RtlpCallInterceptRoutine(v2, a1, 0LL, 8u, 0LL);
    RtlpHpStackTraceHeapDestroy(a1);
    if ( ((((*(_DWORD *)(a1 + 112) & 0x61000000) != 0) & !_bittest((const signed __int32 *)(a1 + 112), 0x1Cu)) == 0
       || (unsigned __int8)RtlDebugDestroyHeap(a1))
      && (void *)a1 != NtCurrentPeb()->ProcessHeap )
    {
      RtlpProcessHeapsRemove(a1);
      v4 = 2147353480LL;
      v5 = *(_QWORD **)(a1 + 272);
      while ( (_QWORD *)(a1 + 272) != v5 )
      {
        v12 = (unsigned __int64)v5;
        v5 = (_QWORD *)*v5;
        v14 = 0LL;
        v15 = v12 & 0xFFFFFFFFFFFF0000uLL;
        RtlpSecMemFreeVirtualMemory(v3, &v15, &v14, 0x8000LL);
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v3 = (__int64)NtCurrentPeb()->SharedData + 558;
        else
          v3 = 2147353480LL;
        if ( *(_BYTE *)v3 )
          RtlpHeapLogRangeRelease(a1, v15, v14);
      }
      if ( *(_BYTE *)(a1 + 418) == 2 && *(_QWORD *)(a1 + 408) )
      {
        v17 = *(_QWORD *)(a1 + 408);
        v16 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, &v17, &v16, 0x8000LL);
      }
      if ( *(_QWORD *)(a1 + 232) )
      {
        v16 = 0LL;
        RtlpSecMemFreeVirtualMemory(v3, a1 + 232, &v16, 0x8000LL);
        *(_QWORD *)(a1 + 232) = 0LL;
      }
      if ( (*(_BYTE *)(a1 + 112) & 1) == 0 )
      {
        if ( *(int *)(a1 + 112) >= 0 )
          RtlDeleteCriticalSection(*(_QWORD *)(a1 + 352));
        *(_QWORD *)(a1 + 352) = 0LL;
      }
      do
      {
        v6 = *(_QWORD *)(a1 + 296) - 24LL;
        RtlpDestroyHeapSegment(v6);
      }
      while ( v6 != a1 );
      v7 = 2147353472LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v8 = (__int64)NtCurrentPeb()->SharedData + 550;
      else
        v8 = 2147353472LL;
      if ( *(_BYTE *)v8 && (NtCurrentPeb()->TracingFlags & 1) != 0 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v7 = (__int64)NtCurrentPeb()->SharedData + 550;
        RtlpLogHeapDestroyEvent(a1, *(unsigned __int8 *)v7);
      }
      v9 = 2147353482LL;
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v10 = (__int64)NtCurrentPeb()->SharedData + 560;
      else
        v10 = 2147353482LL;
      if ( *(_BYTE *)v10 )
      {
        if ( (unsigned int)RtlGetCurrentServiceSessionId() )
          v9 = (__int64)NtCurrentPeb()->SharedData + 560;
        RtlpLogHeapDestroyEvent(a1, *(unsigned __int8 *)v9);
      }
      if ( (unsigned int)RtlGetCurrentServiceSessionId() )
        v4 = (__int64)NtCurrentPeb()->SharedData + 558;
      if ( *(_BYTE *)v4 )
        RtlpHeapLogRangeDestroy(a1);
      return 0LL;
    }
    return a1;
  }
  return RtlpDebugPageHeapDestroy();
}
