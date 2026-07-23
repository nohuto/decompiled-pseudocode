/*
 * XREFs of ZwProtectVirtualMemory @ 0x180160A50
 * Callers:
 *     RtlpProtectHeap @ 0x180028980 (RtlpProtectHeap.c)
 *     LdrpChangeMrdataProtection @ 0x180033B50 (LdrpChangeMrdataProtection.c)
 *     LdrpDoPostSnapWork @ 0x180033DC0 (LdrpDoPostSnapWork.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180034300 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpCfgProcessLoadConfig @ 0x180034480 (LdrpCfgProcessLoadConfig.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180035250 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x1800355A0 (LdrInitSecurityCookie.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x1800554A0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeUserBlock @ 0x180058350 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x180058780 (RtlpFreeNTHeapInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x1800A0AC0 (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x1800A1250 (RtlpFreeUserBlockToHeap.c)
 *     LdrpSetProtection @ 0x1800E07D0 (LdrpSetProtection.c)
 *     AVrfpSnapDllImports @ 0x1800E7724 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x180103EC4 (AvrfMiniLoadDll.c)
 *     LdrpCorFixupImage @ 0x180104EE0 (LdrpCorFixupImage.c)
 *     RtlResetStackOverflow @ 0x180132B4C (RtlResetStackOverflow.c)
 *     RtlpProtectBlock @ 0x18014B11C (RtlpProtectBlock.c)
 *     RtlpHpHeapProtect @ 0x180156174 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x180156338 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x1801567E0 (RtlpHpSegProtect.c)
 * Callees:
 *     <none>
 */

NTSTATUS __cdecl ZwProtectVirtualMemory(
        HANDLE ProcessHandle,
        PVOID *BaseAddress,
        PSIZE_T RegionSize,
        ULONG NewProtect,
        PULONG OldProtect)
{
  NTSTATUS result; // eax

  result = 80;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
