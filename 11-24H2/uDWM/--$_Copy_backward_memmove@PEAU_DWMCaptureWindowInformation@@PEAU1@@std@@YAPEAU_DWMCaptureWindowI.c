/*
 * XREFs of ??$_Copy_backward_memmove@PEAU_DWMCaptureWindowInformation@@PEAU1@@std@@YAPEAU_DWMCaptureWindowInformation@@PEAU1@00@Z @ 0x1800ABCEC
 * Callers:
 *     ?_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QEAUCAPTURE_FILTERED_WINDOW@1@PEAVCWindowData@@@Z @ 0x1800B30CC (-_AddWindowToFilteredCapture@CCaptureManager@@AEAAJPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@$$QE.c)
 * Callees:
 *     <none>
 */

void *__fastcall std::_Copy_backward_memmove<_DWMCaptureWindowInformation *,_DWMCaptureWindowInformation *>(
        void *Src,
        __int64 a2,
        __int64 a3)
{
  return memmove_0((void *)(a3 - (a2 - (_QWORD)Src)), Src, a2 - (_QWORD)Src);
}
