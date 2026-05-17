/*
 * XREFs of RtlReAllocateHeap @ 0x1800A0E30
 * Callers:
 *     RtlpLowFragHeapAllocFromContext @ 0x180028AA0 (RtlpLowFragHeapAllocFromContext.c)
 *     LdrpSetAlternateResourceModuleHandle @ 0x18005F120 (LdrpSetAlternateResourceModuleHandle.c)
 *     LdrUnloadAlternateResourceModuleEx @ 0x180061800 (LdrUnloadAlternateResourceModuleEx.c)
 *     LdrAddLoadAsDataTable @ 0x180064190 (LdrAddLoadAsDataTable.c)
 *     LdrRemoveLoadAsDataTable @ 0x1800643D0 (LdrRemoveLoadAsDataTable.c)
 *     RtlDebugReAllocateHeap @ 0x1800A2A3C (RtlDebugReAllocateHeap.c)
 *     RtlAllocateHandle @ 0x1800AEB70 (RtlAllocateHandle.c)
 *     RtlpMUIEnumerateFolder @ 0x18010B52C (RtlpMUIEnumerateFolder.c)
 *     _SafeReallocBlob @ 0x180113D64 (_SafeReallocBlob.c)
 *     NtdllpReallocateStringRoutine @ 0x18011EBD8 (NtdllpReallocateStringRoutine.c)
 * Callees:
 *     RtlpLogHeapFailure @ 0x18002A380 (RtlpLogHeapFailure.c)
 *     RtlpHpTagReAllocateHeap @ 0x1800A0F10 (RtlpHpTagReAllocateHeap.c)
 *     RtlpReAllocateHeapInternal @ 0x1800A1040 (RtlpReAllocateHeapInternal.c)
 *     RtlpHeapFatalExceptionFilter @ 0x18013C174 (RtlpHeapFatalExceptionFilter.c)
 */

__int64 __fastcall RtlReAllocateHeap(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  if ( !a1 )
    RtlpLogHeapFailure(19, 0LL, a3, 0LL, 0LL, 0LL);
  if ( *(_DWORD *)(a1 + 16) == -571548178 )
  {
    if ( (RtlpHpHeapFeatures & 2) == 0 )
      return RtlpReAllocateHeapInternal(a1, a2, a3, a4);
  }
  else if ( (RtlpHpHeapFeatures & 2) == 0 )
  {
    return RtlpReAllocateHeapInternal(a1, a2, a3, a4);
  }
  return RtlpHpTagReAllocateHeap(a1, a3, a4, a2);
}
