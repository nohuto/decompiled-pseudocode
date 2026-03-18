/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x140A659D8
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x14027BD18 (RtlGuardCheckExceptionHandler.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x140463C24 (RtlGetImageBaseAndLoadConfig.c)
 *     RtlIsImageFullyRetpolined @ 0x1404C1FC4 (RtlIsImageFullyRetpolined.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1405EE580 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405F0BAC (RtlGuardCheckLongJumpTarget.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1406A32EC (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407F06EC (MiCaptureBootDriverRetpolineInfo.c)
 *     LdrInitSecurityCookie @ 0x140A658DC (LdrInitSecurityCookie.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1405F3AA8 (LdrImageDirectoryEntryToLoadConfigEx.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(unsigned __int64 a1)
{
  return LdrImageDirectoryEntryToLoadConfigEx(a1);
}
