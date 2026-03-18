/*
 * XREFs of W32GetCurrentThreadDpiAwarenessContext @ 0x140045170
 * Callers:
 *     NtUserGetDpiForMonitor @ 0x140010FF0 (NtUserGetDpiForMonitor.c)
 *     ?vMakeIso@DC@@QEAAXXZ @ 0x1400114EC (-vMakeIso@DC@@QEAAXXZ.c)
 *     xxxEnumDisplayMonitors @ 0x140042F90 (xxxEnumDisplayMonitors.c)
 *     GetCurrentThreadCompositedDpi @ 0x140045288 (GetCurrentThreadCompositedDpi.c)
 *     GetMonitorRect @ 0x140045308 (GetMonitorRect.c)
 *     PhysicalToLogicalDPIRect @ 0x1400453C0 (PhysicalToLogicalDPIRect.c)
 *     LogicalToPhysicalDPIPoint @ 0x1400456B0 (LogicalToPhysicalDPIPoint.c)
 *     TransformPointBetweenCoordinateSpaces @ 0x140046200 (TransformPointBetweenCoordinateSpaces.c)
 *     NtUserGetProcessDpiAwarenessContext @ 0x140046390 (NtUserGetProcessDpiAwarenessContext.c)
 *     LogicalToPhysicalDPIRect @ 0x140046540 (LogicalToPhysicalDPIRect.c)
 *     NtUserGetClipCursor @ 0x140046AE0 (NtUserGetClipCursor.c)
 *     TransformRectBetweenCoordinateSpaces @ 0x140047880 (TransformRectBetweenCoordinateSpaces.c)
 *     ?zzzUpdateUserScreen@@YAJXZ @ 0x1400A2D78 (-zzzUpdateUserScreen@@YAJXZ.c)
 *     NtUserClipCursor @ 0x1401087D0 (NtUserClipCursor.c)
 *     NtUserLockCursor @ 0x14011DEB0 (NtUserLockCursor.c)
 *     ?ulLogPixelsY@PDEVOBJ@@QEBAKXZ @ 0x140129460 (-ulLogPixelsY@PDEVOBJ@@QEBAKXZ.c)
 *     ?ulLogPixelsX@PDEVOBJ@@QEBAKXZ @ 0x140129DC8 (-ulLogPixelsX@PDEVOBJ@@QEBAKXZ.c)
 *     ?bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z @ 0x140140CFC (-bDynamicMatchEnoughForModeChange@@YAHPEAUHDEV__@@0@Z.c)
 *     UserIsCurrentThreadGdiScaled @ 0x140173D70 (UserIsCurrentThreadGdiScaled.c)
 *     ?GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z @ 0x14018CABC (-GetMouseCoord@CMouseProcessor@@AEAAXPEBVMouseInputDataEx@1@PEAUtagPOINT@@PEAU_SUBPIXELS@@@Z.c)
 * Callees:
 *     CaptureAndValidateUserModeDpiAwarenessContext @ 0x1400451F0 (CaptureAndValidateUserModeDpiAwarenessContext.c)
 *     W32GetCurrentThreadNonPaged @ 0x1401A2438 (W32GetCurrentThreadNonPaged.c)
 */

__int64 __fastcall W32GetCurrentThreadDpiAwarenessContext(__int64 a1)
{
  _QWORD *CurrentThreadNonPaged; // rax
  __int64 v2; // rbx
  __int64 result; // rax
  __int64 CurrentProcessWin32Process; // rax

  CurrentThreadNonPaged = (_QWORD *)W32GetCurrentThreadNonPaged(a1);
  if ( !CurrentThreadNonPaged )
    return 18LL;
  v2 = *CurrentThreadNonPaged;
  if ( !*CurrentThreadNonPaged )
    return 18LL;
  if ( *(_QWORD *)(v2 + 408) )
    CaptureAndValidateUserModeDpiAwarenessContext(*CurrentThreadNonPaged);
  result = *(unsigned int *)(v2 + 400);
  if ( !(_DWORD)result )
  {
    CurrentProcessWin32Process = PsGetCurrentProcessWin32Process();
    if ( CurrentProcessWin32Process && *(_QWORD *)CurrentProcessWin32Process )
      return *(unsigned int *)(CurrentProcessWin32Process + 268);
    return 18LL;
  }
  return result;
}
