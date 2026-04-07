/*
 * XREFs of ULongLongMult @ 0x1800F466C
 * Callers:
 *     ?UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRTUALDESKTOPVISUAL@@PEBU_REMOTE_PORT_VIEW@@@Z @ 0x180093190 (-UpdateSharedVirtualDesktopVisual@CWindowList@@UEAAJKPEBUMILCMD_DWM_REDIRECTION_UPDATESHAREDVIRT.c)
 *     ?GetCaptureWindowExclusionList@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_BUILDCAPTUREWINDOWVISUALEXCLUSIONLIST@@AEAV?$vector@PEAUHWND__@@V?$allocator@PEAUHWND__@@@std@@@std@@@Z @ 0x1800EFF2C (-GetCaptureWindowExclusionList@CWindowList@@AEAAJPEBUMILCMD_DWM_REDIRECTION_BUILDCAPTUREWINDOWVI.c)
 * Callees:
 *     <none>
 */

HRESULT __stdcall ULongLongMult(ULONGLONG ullMultiplicand, ULONGLONG ullMultiplier, ULONGLONG *pullResult)
{
  HRESULT v3; // r9d

  v3 = 0;
  if ( is_mul_ok(ullMultiplicand, 8uLL) )
  {
    *pullResult = 8 * ullMultiplicand;
  }
  else
  {
    *pullResult = -1LL;
    return -2147024362;
  }
  return v3;
}
