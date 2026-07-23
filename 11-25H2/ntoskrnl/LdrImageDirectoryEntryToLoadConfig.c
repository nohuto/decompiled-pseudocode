/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x140A63300
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x14025D464 (RtlGuardCheckExceptionHandler.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x140464600 (RtlGetImageBaseAndLoadConfig.c)
 *     RtlIsImageFullyRetpolined @ 0x1404C35C4 (RtlIsImageFullyRetpolined.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1405E2240 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405E4858 (RtlGuardCheckLongJumpTarget.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x14069810C (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407E084C (MiCaptureBootDriverRetpolineInfo.c)
 *     LdrInitSecurityCookie @ 0x140A63204 (LdrInitSecurityCookie.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1405E7760 (LdrImageDirectoryEntryToLoadConfigEx.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(void *a1)
{
  return LdrImageDirectoryEntryToLoadConfigEx(a1);
}
