/*
 * XREFs of LdrImageDirectoryEntryToLoadConfig @ 0x140A5E1A8
 * Callers:
 *     RtlGuardCheckExceptionHandler @ 0x1402312A8 (RtlGuardCheckExceptionHandler.c)
 *     RtlGetImageBaseAndLoadConfig @ 0x14045A364 (RtlGetImageBaseAndLoadConfig.c)
 *     RtlIsImageFullyRetpolined @ 0x1404BD5B4 (RtlIsImageFullyRetpolined.c)
 *     RtlpCaptureDynamicRelocationTableRva @ 0x1405EBB60 (RtlpCaptureDynamicRelocationTableRva.c)
 *     RtlGuardCheckLongJumpTarget @ 0x1405EE1EC (RtlGuardCheckLongJumpTarget.c)
 *     RtlpCaptureRetpolineBinaryInfoForImage @ 0x1406A433C (RtlpCaptureRetpolineBinaryInfoForImage.c)
 *     MiCaptureBootDriverRetpolineInfo @ 0x1407F0CBC (MiCaptureBootDriverRetpolineInfo.c)
 *     LdrInitSecurityCookie @ 0x140A5E0AC (LdrInitSecurityCookie.c)
 * Callees:
 *     LdrImageDirectoryEntryToLoadConfigEx @ 0x1405F10E8 (LdrImageDirectoryEntryToLoadConfigEx.c)
 */

_DWORD *__fastcall LdrImageDirectoryEntryToLoadConfig(void *a1)
{
  return LdrImageDirectoryEntryToLoadConfigEx(a1);
}
