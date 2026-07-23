/*
 * XREFs of RtlDestroyHeap @ 0x140A8D840
 * Callers:
 *     <none>
 * Callees:
 *     DbgPrint @ 0x140274290 (DbgPrint.c)
 *     ExDeleteResourceLite @ 0x1402E55A0 (ExDeleteResourceLite.c)
 *     RtlpCallInterceptRoutine @ 0x1404688C8 (RtlpCallInterceptRoutine.c)
 *     RtlpHeapHandleError @ 0x1405F056C (RtlpHeapHandleError.c)
 *     ZwFreeVirtualMemory @ 0x1406A7770 (ZwFreeVirtualMemory.c)
 *     RtlpDestroyHeapSegment @ 0x140783668 (RtlpDestroyHeapSegment.c)
 */

PVOID __stdcall RtlDestroyHeap(PVOID HeapHandle)
{
  int v3; // ecx
  _QWORD *v4; // rbx
  unsigned __int64 v5; // rax
  int v6; // eax
  PVOID v7; // rbx
  ULONG_PTR RegionSize; // [rsp+40h] [rbp+8h] BYREF
  PVOID BaseAddress; // [rsp+48h] [rbp+10h] BYREF

  RegionSize = 0LL;
  BaseAddress = 0LL;
  if ( HeapHandle )
  {
    if ( *((_DWORD *)HeapHandle + 4) != -857879331 )
    {
      v3 = *((_DWORD *)HeapHandle + 36);
      if ( v3 )
        RtlpCallInterceptRoutine(v3, (__int64)HeapHandle, 0LL, 8u, 0LL);
      v4 = (_QWORD *)*((_QWORD *)HeapHandle + 34);
      while ( (char *)HeapHandle + 272 != (char *)v4 )
      {
        v5 = (unsigned __int64)v4;
        v4 = (_QWORD *)*v4;
        RegionSize = 0LL;
        BaseAddress = (PVOID)(v5 & 0xFFFFFFFFFFFF0000uLL);
        ZwFreeVirtualMemory((HANDLE)0xFFFFFFFFFFFFFFFFLL, &BaseAddress, &RegionSize, 0x8000u);
      }
      v6 = *((_DWORD *)HeapHandle + 28);
      if ( (v6 & 1) == 0 )
      {
        if ( v6 >= 0 )
          ExDeleteResourceLite(*((PERESOURCE *)HeapHandle + 44));
        *((_QWORD *)HeapHandle + 44) = 0LL;
      }
      do
      {
        v7 = (PVOID)(*((_QWORD *)HeapHandle + 37) - 24LL);
        RtlpDestroyHeapSegment((__int64)v7);
      }
      while ( v7 != HeapHandle );
    }
  }
  else if ( RtlpHeapErrorHandlerThreshold >= 2 )
  {
    DbgPrint("(HeapHandle != NULL)");
    RtlpHeapHandleError();
  }
  return 0LL;
}
