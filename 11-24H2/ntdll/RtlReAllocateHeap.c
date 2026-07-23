/*
 * XREFs of RtlReAllocateHeap @ 0x18007A7D0
 * Callers:
 *     RtlpMUIEnumerateFolder @ 0x180001138 (RtlpMUIEnumerateFolder.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x1800554A0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlDebugReAllocateHeap @ 0x18005C7E8 (RtlDebugReAllocateHeap.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x180074D00 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x1800773E0 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x180079D70 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x180079FB0 (LdrRemoveLoadAsDataTable.c)
 *     RtlAllocateHandle @ 0x18007B350 (RtlAllocateHandle.c)
 *     _SafeReallocBlob @ 0x18010F064 (_SafeReallocBlob.c)
 *     NtdllpReallocateStringRoutine @ 0x18011CE08 (NtdllpReallocateStringRoutine.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x180056D80 (RtlpLogHeapFailure.c)
 *     RtlpHpTagReAllocateHeap @ 0x18005ADE0 (RtlpHpTagReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x18005AF10 (RtlpReAllocateHeapInternal.c)
 *     RtlpHeapFatalExceptionFilter @ 0x18013A364 (RtlpHeapFatalExceptionFilter.c)
 */

PVOID __cdecl RtlReAllocateHeap(PVOID HeapHandle, ULONG Flags, PVOID BaseAddress, SIZE_T Size)
{
  if ( !HeapHandle )
    RtlpLogHeapFailure(19, 0LL, (__int64)BaseAddress, 0LL, 0LL, 0LL);
  if ( *((_DWORD *)HeapHandle + 4) == -571548178 )
  {
    if ( (RtlpHpHeapFeatures & 2) == 0 )
      return (PVOID)RtlpReAllocateHeapInternal((unsigned __int16 *)HeapHandle, Flags, (__int64)BaseAddress, Size);
  }
  else if ( (RtlpHpHeapFeatures & 2) == 0 )
  {
    return (PVOID)RtlpReAllocateHeapInternal((unsigned __int16 *)HeapHandle, Flags, (__int64)BaseAddress, Size);
  }
  return (PVOID)RtlpHpTagReAllocateHeap((_RTL_SRWLOCK *)HeapHandle, (unsigned __int64)BaseAddress, Size);
}
