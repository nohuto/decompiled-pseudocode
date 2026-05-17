/*
 * XREFs of ZwProtectVirtualMemory @ 0x180162690
 * Callers:
 *     LdrpChangeMrdataProtection @ 0x180007150 (LdrpChangeMrdataProtection.c)
 *     LdrpDoPostSnapWork @ 0x1800073C0 (LdrpDoPostSnapWork.c)
 *     LdrpWriteBackProtectedDelayLoad @ 0x180007900 (LdrpWriteBackProtectedDelayLoad.c)
 *     LdrpCfgProcessLoadConfig @ 0x180007A80 (LdrpCfgProcessLoadConfig.c)
 *     LdrpPrepareImportAddressTableForSnap @ 0x180008850 (LdrpPrepareImportAddressTableForSnap.c)
 *     LdrInitSecurityCookie @ 0x180008BA0 (LdrInitSecurityCookie.c)
 *     RtlFreeHeap @ 0x1800269F0 (RtlFreeHeap.c)
 *     RtlpLowFragHeapAllocFromContext @ 0x180028AA0 (RtlpLowFragHeapAllocFromContext.c)
 *     RtlpFreeUserBlock @ 0x18002B950 (RtlpFreeUserBlock.c)
 *     RtlpFreeNTHeapInternal @ 0x18002BD80 (RtlpFreeNTHeapInternal.c)
 *     RtlpLowFragHeapFlushCaches @ 0x180095D9C (RtlpLowFragHeapFlushCaches.c)
 *     RtlpFreeUserBlockToHeap @ 0x180096530 (RtlpFreeUserBlockToHeap.c)
 *     RtlpProtectHeap @ 0x18009C350 (RtlpProtectHeap.c)
 *     LdrpSetProtection @ 0x1800E5320 (LdrpSetProtection.c)
 *     AVrfpSnapDllImports @ 0x1800ECAF4 (AVrfpSnapDllImports.c)
 *     AvrfMiniLoadDll @ 0x180108F94 (AvrfMiniLoadDll.c)
 *     LdrpCorFixupImage @ 0x180109FB0 (LdrpCorFixupImage.c)
 *     RtlResetStackOverflow @ 0x18013491C (RtlResetStackOverflow.c)
 *     RtlpProtectBlock @ 0x18014CD54 (RtlpProtectBlock.c)
 *     RtlpHpHeapProtect @ 0x180157DB4 (RtlpHpHeapProtect.c)
 *     RtlpHpLargeAllocationProtect @ 0x180157F78 (RtlpHpLargeAllocationProtect.c)
 *     RtlpHpSegProtect @ 0x180158420 (RtlpHpSegProtect.c)
 * Callees:
 *     <none>
 */

__int64 ZwProtectVirtualMemory()
{
  __int64 result; // rax

  result = 80LL;
  if ( (MEMORY[0x7FFE0308] & 1) != 0 )
    __asm { int     2Eh; DOS 2+ internal - EXECUTE COMMAND }
  else
    __asm { syscall; Low latency system call }
  return result;
}
