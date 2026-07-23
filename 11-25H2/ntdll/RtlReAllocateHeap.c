/*
 * XREFs of RtlReAllocateHeap @ 0x180029DE0
 * Callers:
 *     LdrpSetAlternateResourceModuleHandle @ 0x18001AD80 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x18001D460 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x18001FDF0 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180020030 (LdrRemoveLoadAsDataTable.c)
 *     RtlDebugReAllocateHeap @ 0x18002B9EC (RtlDebugReAllocateHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180051570 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlAllocateHandle @ 0x180068460 (RtlAllocateHandle.c)
 *     RtlpMUIEnumerateFolder @ 0x18010DBCC (RtlpMUIEnumerateFolder.c)
 *     _SafeReallocBlob @ 0x180116A54 (_SafeReallocBlob.c)
 *     NtdllpReallocateStringRoutine @ 0x1801204A8 (NtdllpReallocateStringRoutine.c)
 * Callees:
 *     RtlpHpTagReAllocateHeap @ 0x180029EC0 (RtlpHpTagReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x180029FF0 (RtlpReAllocateHeapInternal.c)
 *     RtlpLogHeapFailure @ 0x180052E50 (RtlpLogHeapFailure.c)
 *     RtlpHeapFatalExceptionFilter @ 0x18013D8A4 (RtlpHeapFatalExceptionFilter.c)
 */

PVOID __cdecl RtlReAllocateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, SIZE_T Size)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0, (_DWORD)BaseAddress, 0, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( (RtlpHpHeapFeatures & 2) == 0 )
      return (PVOID)RtlpReAllocateHeapInternal((int)HeapHandle);
  }
  else if ( (RtlpHpHeapFeatures & 2) == 0 )
  {
    return (PVOID)RtlpReAllocateHeapInternal((int)HeapHandle);
  }
  return (PVOID)RtlpHpTagReAllocateHeap((_DWORD)HeapHandle);
}
