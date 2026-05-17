/*
 * XREFs of ZwQueryVirtualMemory @ 0x1801620F0
 * Callers:
 *     RtlpInsertOrRemoveScpCfgFunctionTable @ 0x1800068D0 (RtlpInsertOrRemoveScpCfgFunctionTable.c)
 *     RtlpWalkFrameChain @ 0x180016100 (RtlpWalkFrameChain.c)
 *     RtlpxLookupFunctionTable @ 0x1800166E0 (RtlpxLookupFunctionTable.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpFreeUserBlock @ 0x18002B950 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x18002BD80 (RtlpFreeNTHeapInternal.c)
 *     RtlpScanProcessVirtualMemory @ 0x180040460 (RtlpScanProcessVirtualMemory.c)
 *     RtlpCommitBlock @ 0x180042A00 (RtlpCommitBlock.c)
 *     LdrLoadAlternateResourceModuleEx @ 0x18005FF20 (LdrLoadAlternateResourceModuleEx.c)
 *     LdrpGetImageSize @ 0x180063760 (LdrpGetImageSize.c)
 *     LdrpAccessResourceDataNoMultipleLanguage @ 0x180063850 (LdrpAccessResourceDataNoMultipleLanguage.c)
 *     LdrpTouchThreadStack @ 0x180068AC8 (LdrpTouchThreadStack.c)
 *     LdrpMapDllWithSectionHandle @ 0x180072B70 (LdrpMapDllWithSectionHandle.c)
 *     LdrpProcessMappedModule @ 0x180073700 (LdrpProcessMappedModule.c)
 *     LdrpResGetMappingSize @ 0x1800791F0 (LdrpResGetMappingSize.c)
 *     RtlpSecMemFreeVirtualMemory @ 0x18008FA40 (RtlpSecMemFreeVirtualMemory.c)
 *     RtlpHpEnvQueryVA @ 0x18009386C (RtlpHpEnvQueryVA.c)
 *     RtlpFreeUserBlockToHeap @ 0x180096530 (RtlpFreeUserBlockToHeap.c)
 *     LdrpResValdiateMappedAddress @ 0x180097200 (LdrpResValdiateMappedAddress.c)
 *     RtlpProtectHeap @ 0x18009C350 (RtlpProtectHeap.c)
 *     RtlpGetHeapProtection @ 0x18009C570 (RtlpGetHeapProtection.c)
 *     RtlpFindAndCommitPages @ 0x1800A03B0 (RtlpFindAndCommitPages.c)
 *     RtlpCreateHeap @ 0x1800A7550 (RtlpCreateHeap.c)
 *     PsspCaptureAuxiliaryPages @ 0x1800C2A20 (PsspCaptureAuxiliaryPages.c)
 *     LdrIsEnclaveAddress @ 0x1800D8AEC (LdrIsEnclaveAddress.c)
 *     RtlFlushSecureMemoryCache @ 0x1800E44E0 (RtlFlushSecureMemoryCache.c)
 *     LdrpProtectAndRelocateImage @ 0x1800E502C (LdrpProtectAndRelocateImage.c)
 *     RtlpGetTargetRvaFlag @ 0x1800ECD50 (RtlpGetTargetRvaFlag.c)
 *     LdrpGetModuleInfoFromVirtualMemory @ 0x1800F3BC4 (LdrpGetModuleInfoFromVirtualMemory.c)
 *     LdrpInitializeNtdllDataTableEntry @ 0x1800F4990 (LdrpInitializeNtdllDataTableEntry.c)
 *     LdrpCaptureCriticalThunks @ 0x1800F5534 (LdrpCaptureCriticalThunks.c)
 *     LdrpCheckPagesForTampering @ 0x18010DBB4 (LdrpCheckPagesForTampering.c)
 *     RtlpUnsuppressForwardReferencingCallTarget @ 0x180112FB0 (RtlpUnsuppressForwardReferencingCallTarget.c)
 *     RtlpIsHeapAccessibleInClone @ 0x180113A38 (RtlpIsHeapAccessibleInClone.c)
 *     RtlDebugCreateHeap @ 0x180115F3C (RtlDebugCreateHeap.c)
 *     RtlResetStackOverflow @ 0x18013491C (RtlResetStackOverflow.c)
 *     RtlGetNonVolatileToken @ 0x1801450B0 (RtlGetNonVolatileToken.c)
 *     RtlpHpHeapProtect @ 0x180157DB4 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x180157F78 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x180158420 (RtlpHpSegProtect.c)
 *     PsspQueryVmBulkMode @ 0x18015CDB0 (PsspQueryVmBulkMode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ZwQueryVirtualMemory()
{
  __int64 result; // rax

  result = 35LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
