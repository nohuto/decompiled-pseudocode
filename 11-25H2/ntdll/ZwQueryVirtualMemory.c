/*
 * XREFs of ZwQueryVirtualMemory @ 0x180163680
 * Callers:
 *     RtlpFreeUserBlockToHeap @ 0x180001A30 (RtlpFreeUserBlockToHeap.c)
 *     LdrpResValdiateMappedAddress @ 0x180002860 (LdrpResValdiateMappedAddress.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18001BB80 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetImageSize @ 0x18001F3C0 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x18001F4B0 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x180024960 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 *     RtlpProtectHeap @ 0x180025030 (RtlpProtectHeap.c)
 *     RtlpGetHeapProtection @ 0x180025250 (RtlpGetHeapProtection.c)
 *     RtlpFindAndCommitPages @ 0x180029360 (RtlpFindAndCommitPages.c)
 *     RtlpCreateHeap @ 0x180036390 (RtlpCreateHeap.c)
 *     RtlpFreeUserBlock @ 0x180054420 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x180054850 (RtlpFreeNTHeapInternal.c)
 *     LdrpMapDllWithSectionHandle @ 0x18006D3E0 (LdrpMapDllWithSectionHandle.c)
 *     LdrpProcessMappedModule @ 0x18006DF80 (LdrpProcessMappedModule.c)
 *     RtlpWalkFrameChain @ 0x180077FE0 (RtlpWalkFrameChain.c)
 *     RtlpxLookupFunctionTable @ 0x1800787D0 (RtlpxLookupFunctionTable.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     RtlpScanProcessVirtualMemory @ 0x180093E50 (RtlpScanProcessVirtualMemory.c)
 *     RtlpCommitBlock @ 0x1800966E0 (RtlpCommitBlock.c)
 *     LdrpResGetMappingSize @ 0x1800A3820 (LdrpResGetMappingSize.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x1800B8DC0 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpEnvQueryVA @ 0x1800BCBEC (RtlpHpEnvQueryVA.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C7130 (PsspCaptureAuxiliaryPages.c)
 *     LdrpTouchThreadStack @ 0x1800D4754 (LdrpTouchThreadStack.c)
 *     LdrIsEnclaveAddress @ 0x1800D8A94 (LdrIsEnclaveAddress.c)
 *     RtlFlushSecureMemoryCache @ 0x1800E15A0 (RtlFlushSecureMemoryCache.c)
 *     LdrpProtectAndRelocateImage @ 0x1800E3FFC (LdrpProtectAndRelocateImage.c)
 *     RtlpGetTargetRvaFlag @ 0x1800ED530 (RtlpGetTargetRvaFlag.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800F5954 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F6570 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpCaptureCriticalThunks @ 0x1800F70B4 (LdrpCaptureCriticalThunks.c)
 *     LdrpCheckPagesForTampering @ 0x180110664 (LdrpCheckPagesForTampering.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x180115F40 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpIsHeapAccessibleInClone @ 0x1801169C8 (RtlpIsHeapAccessibleInClone.c)
 *     RtlDebugCreateHeap @ 0x18011912C (RtlDebugCreateHeap.c)
 *     RtlResetStackOverflow @ 0x1801361CC (RtlResetStackOverflow.c)
 *     RtlGetNonVolatileToken @ 0x180146620 (RtlGetNonVolatileToken.c)
 *     RtlpHpHeapProtect @ 0x180159364 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x180159528 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x1801599D0 (RtlpHpSegProtect.c)
 *     PsspQueryVmBulkMode @ 0x18015E310 (PsspQueryVmBulkMode.c)
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
