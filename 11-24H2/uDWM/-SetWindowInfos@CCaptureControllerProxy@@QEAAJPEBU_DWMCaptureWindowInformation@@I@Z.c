/*
 * XREFs of ?SetWindowInfos@CCaptureControllerProxy@@QEAAJPEBU_DWMCaptureWindowInformation@@I@Z @ 0x1800A867C
 * Callers:
 *     ?OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800650D0 (-OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowOffsetUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180065270 (-OnWindowOffsetUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowZOrderUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180074AD0 (-OnWindowZOrderUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180084730 (-OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowClosed@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x18008EC60 (-OnWindowClosed@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800AD280 (-AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKE.c)
 *     ?OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF0B0 (-OnWindowClosed@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowOffsetUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF400 (-OnWindowOffsetUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF6F0 (-OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF970 (-OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AFB30 (-OnWindowZOrderUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800B2CA0 (-_AddRemoveWindowToFilteredDisplayCapture@CCaptureManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTER.c)
 *     ?AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAPTURE_TOKEN@@@Z @ 0x1800CB590 (-AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@UEAAJPEAUHWND__@@HAEBUDWM_CAP.c)
 *     ?_AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@AEAAJPEAUHWND__@@_NPEAUCAPTURE_FILTERED_DISPLAY_MAP_ENTRY@1@@Z @ 0x1800CE538 (-_AddRemoveWindowToFilteredDisplayCapture@CProjectionBorderManager@@AEAAJPEAUHWND__@@_NPEAUCAPTU.c)
 * Callees:
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CCaptureControllerProxy::SetWindowInfos(
        CCaptureControllerProxy *this,
        const struct _DWMCaptureWindowInformation *a2,
        unsigned int a3)
{
  return (*(__int64 (__fastcall **)(_QWORD, _QWORD, const struct _DWMCaptureWindowInformation *, _QWORD))(**(_QWORD **)(*((_QWORD *)this + 2) + 16LL) + 784LL))(
           *(_QWORD *)(*((_QWORD *)this + 2) + 16LL),
           *(unsigned int *)(*((_QWORD *)this + 2) + 24LL),
           a2,
           a3);
}
