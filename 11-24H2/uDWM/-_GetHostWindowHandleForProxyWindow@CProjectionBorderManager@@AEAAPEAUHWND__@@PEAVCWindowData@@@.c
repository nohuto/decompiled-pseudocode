/*
 * XREFs of ?_GetHostWindowHandleForProxyWindow@CProjectionBorderManager@@AEAAPEAUHWND__@@PEAVCWindowData@@@Z @ 0x1800B3FF0
 * Callers:
 *     ?OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800650D0 (-OnWindowSizeUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180067420 (-OnWindowMonitorChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowTransformUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180074640 (-OnWindowTransformUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180084680 (-OnWindowMinimized@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180084730 (-OnWindowVisibilityUpdated@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowRestored@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x180094AA0 (-OnWindowRestored@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowMinimized@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF2A0 (-OnWindowMinimized@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowMonitorChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF350 (-OnWindowMonitorChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowRestored@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF640 (-OnWindowRestored@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF6F0 (-OnWindowSizeUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowStyleChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF880 (-OnWindowStyleChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowTransformUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF910 (-OnWindowTransformUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF970 (-OnWindowVisibilityUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800B4D6C (-_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 *     ?OnWindowStyleChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800CC230 (-OnWindowStyleChanged@CProjectionBorderManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z @ 0x1800CFB14 (-_UpdateCaptureControllerDefaultSDRBoost@CProjectionBorderManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     <none>
 */

HWND __fastcall CProjectionBorderManager::_GetHostWindowHandleForProxyWindow(
        CProjectionBorderManager *this,
        struct CWindowData *a2)
{
  __int64 v2; // rcx
  HWND result; // rax

  v2 = *((_QWORD *)a2 + 82);
  result = (HWND)*((_QWORD *)a2 + 5);
  if ( v2 )
    return *(HWND *)(v2 + 40);
  return result;
}
