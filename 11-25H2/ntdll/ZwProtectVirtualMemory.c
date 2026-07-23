/*
 * XREFs of ZwProtectVirtualMemory @ 0x180163C20
 * Callers:
 *     RtlpLowFragHeapFlushCaches @ 0x18000129C (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x180001A30 (RtlpFreeUserBlockToHeap.c)
 *     LdrpChangeMrdataProtection @ 0x180020B20 (LdrpChangeMrdataProtection.c)
 *     LdrpDoPostSnapWork @ 0x180020D90 (LdrpDoPostSnapWork.c)
 *     LdrpCfgProcessLoadConfig @ 0x1800212A0 (LdrpCfgProcessLoadConfig.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180022070 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x1800223C0 (LdrInitSecurityCookie.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180023540 (LdrpWriteBackProtectedDelayLoad.c)
 *     RtlpProtectHeap @ 0x180025030 (RtlpProtectHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180051570 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeUserBlock @ 0x180054420 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x180054850 (RtlpFreeNTHeapInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 *     LdrpSetProtection @ 0x1800E42F0 (LdrpSetProtection.c)
 *     AVrfpSnapDllImports @ 0x1800ED2D4 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x18010B9A4 (AvrfMiniLoadDll.c)
 *     LdrpCorFixupImage @ 0x18010CA20 (LdrpCorFixupImage.c)
 *     RtlResetStackOverflow @ 0x1801361CC (RtlResetStackOverflow.c)
 *     RtlpProtectBlock @ 0x18014E304 (RtlpProtectBlock.c)
 *     RtlpHpHeapProtect @ 0x180159364 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x180159528 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x1801599D0 (RtlpHpSegProtect.c)
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
