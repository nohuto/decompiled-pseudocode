/*
 * XREFs of ZwQueryVirtualMemory @ 0x1801604B0
 * Callers:
 *     RtlpScanProcessVirtualMemory @ 0x180020D90 (RtlpScanProcessVirtualMemory.c)
 *     RtlDebugCreateHeap @ 0x1800232B0 (RtlDebugCreateHeap.c)
 *     RtlpCreateHeap @ 0x1800248B0 (RtlpCreateHeap.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x180028580 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpGetHeapProtection @ 0x1800288C0 (RtlpGetHeapProtection.c)
 *     RtlpProtectHeap @ 0x180028980 (RtlpProtectHeap.c)
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x1800332D0 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 *     RtlpWalkFrameChain @ 0x180042B00 (RtlpWalkFrameChain.c)
 *     RtlpxLookupFunctionTable @ 0x1800430E0 (RtlpxLookupFunctionTable.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpFreeUserBlock @ 0x180058350 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x180058780 (RtlpFreeNTHeapInternal.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x180075B00 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetImageSize @ 0x180079340 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180079430 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpMapDllWithSectionHandle @ 0x18008F450 (LdrpMapDllWithSectionHandle.c)
 *     LdrpProcessMappedModule @ 0x18008FFE0 (LdrpProcessMappedModule.c)
 *     LdrpResGetMappingSize @ 0x180095500 (LdrpResGetMappingSize.c)
 *     RtlpHpEnvQueryVA @ 0x18009E3FC (RtlpHpEnvQueryVA.c)
 *     RtlpFreeUserBlockToHeap @ 0x1800A1250 (RtlpFreeUserBlockToHeap.c)
 *     LdrpTouchThreadStack @ 0x1800B0CA8 (LdrpTouchThreadStack.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800BA5E4 (PsspCaptureAuxiliaryPages.c)
 *     LdrIsEnclaveAddress @ 0x1800D3E5C (LdrIsEnclaveAddress.c)
 *     LdrpProtectAndRelocateImage @ 0x1800E04DC (LdrpProtectAndRelocateImage.c)
 *     RtlpGetTargetRvaFlag @ 0x1800E7AD8 (RtlpGetTargetRvaFlag.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800EE0E4 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800EF5B0 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpCaptureCriticalThunks @ 0x1800F0054 (LdrpCaptureCriticalThunks.c)
 *     LdrpResValdiateMappedAddress @ 0x1800F3450 (LdrpResValdiateMappedAddress.c)
 *     LdrpCheckPagesForTampering @ 0x180108A94 (LdrpCheckPagesForTampering.c)
 *     RtlFlushSecureMemoryCache @ 0x18010B300 (RtlFlushSecureMemoryCache.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x18010E270 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpIsHeapAccessibleInClone @ 0x18010ED38 (RtlpIsHeapAccessibleInClone.c)
 *     RtlResetStackOverflow @ 0x180132B4C (RtlResetStackOverflow.c)
 *     RtlGetNonVolatileToken @ 0x180143460 (RtlGetNonVolatileToken.c)
 *     RtlpHpHeapProtect @ 0x180156174 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x180156338 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x1801567E0 (RtlpHpSegProtect.c)
 *     PsspQueryVmBulkMode @ 0x18015B170 (PsspQueryVmBulkMode.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwQueryVirtualMemory(
        HANDLE ProcessHandle,
        PVOID BaseAddress,
        MEMORY_INFORMATION_CLASS MemoryInformationClass,
        PVOID MemoryInformation,
        SIZE_T MemoryInformationLength,
        PSIZE_T ReturnLength)
{
  NTSTATUS result; // eax

  result = 35;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
