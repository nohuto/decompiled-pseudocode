/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x1C004D320
 * Callers:
 *     TransformPointBetweenCoordinateSpaces @ 0x1C000C420 (TransformPointBetweenCoordinateSpaces.c)
 *     PhysicalToLogicalDPIPoint @ 0x1C000C4C0 (PhysicalToLogicalDPIPoint.c)
 *     xxxEnumDisplayMonitors @ 0x1C00595A0 (xxxEnumDisplayMonitors.c)
 *     LogicalCursorPosFromDpiAwarenessContext @ 0x1C0059D20 (LogicalCursorPosFromDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIRect @ 0x1C0059F20 (LogicalToPhysicalDPIRect.c)
 *     GetMonitorRect @ 0x1C005BE7C (GetMonitorRect.c)
 *     GetCurrentThreadCompositedDpi @ 0x1C005C500 (GetCurrentThreadCompositedDpi.c)
 *     ?GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z @ 0x1C005D98C (-GreGetDeviceCapsInternal@@YAHAEAVPDEVOBJ@@H@Z.c)
 *     NtUserGetDpiForMonitor @ 0x1C005DE70 (NtUserGetDpiForMonitor.c)
 *     NtUserLockCursor @ 0x1C005E230 (NtUserLockCursor.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1C0060D08 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x1C0062C80 (TransformRectBetweenCoordinateSpaces.c)
 *     PhysicalToLogicalDPIRect @ 0x1C009AB80 (PhysicalToLogicalDPIRect.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x1C00B04C0 (NtUserGetProcessDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIPoint @ 0x1C00B34E0 (LogicalToPhysicalDPIPoint.c)
 *     UserIsCurrentThreadGdiScaled @ 0x1C00CBFC0 (UserIsCurrentThreadGdiScaled.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x1C00E6192 (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 *     NtUserClipCursor @ 0x1C01431D0 (NtUserClipCursor.c)
 *     NtUserGetClipCursor @ 0x1C01444D0 (NtUserGetClipCursor.c)
 *     GreGetDpiDepDefaultGuiFont @ 0x1C015F510 (GreGetDpiDepDefaultGuiFont.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEAAKXZ @ 0x1C015F764 (-ulLogPixelsX@PDEVOBJ@@QEAAKXZ.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEAAKXZ @ 0x1C015F7A8 (-ulLogPixelsY@PDEVOBJ@@QEAAKXZ.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1C004D3B0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 */

__int64 W32GetCurrentThreadDpiAwarenessContext()
{
  _QWORD *ThreadWin32Thread; // rax
  __int64 v1; // rcx
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 CurrentProcessWin32Process; // rax

  ThreadWin32Thread = (_QWORD *)PsGetThreadWin32Thread(KeGetCurrentThread());
  if ( !ThreadWin32Thread )
    return 18LL;
  v2 = *ThreadWin32Thread;
  if ( !*ThreadWin32Thread )
    return 18LL;
  if ( *(_QWORD *)(v2 + 360) )
    CaptureAndValidateUserModeDpiAwarenessContext(*ThreadWin32Thread);
  result = *(unsigned int *)(v2 + 340);
  if ( !(_DWORD)result )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process(v1);
    if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
      return *(unsigned int *)(CurrentProcessWin32Process + 280);
    return 18LL;
  }
  return result;
}
