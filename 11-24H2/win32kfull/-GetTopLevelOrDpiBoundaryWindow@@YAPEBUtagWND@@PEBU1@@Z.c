/*
 * XREFs of ?GetTopLevelOrDpiBoundaryWindow@@YAPEBUtagWND@@PEBU1@@Z @ 0x1400453CC
 * Callers:
 *     PhysicalToLogicalInPlaceRgnWorker @ 0x1400435F8 (PhysicalToLogicalInPlaceRgnWorker.c)
 *     ?PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z @ 0x14006E380 (-PhysicalToLogicalDPIPointWithHitTest@@YAHPEAUtagPOINT@@0PEBU_SUBPIXELS@@PEBUtagWND@@@Z.c)
 *     LogicalToPhysicalInPlaceRectWithSubpixel @ 0x14008D6FC (LogicalToPhysicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlaceRectWithSubpixel @ 0x14008D804 (PhysicalToLogicalInPlaceRectWithSubpixel.c)
 *     PhysicalToLogicalInPlacePointWithParent @ 0x1401596DC (PhysicalToLogicalInPlacePointWithParent.c)
 *     LogicalToPhysicalInPlaceRgnWorker @ 0x14019E0E8 (LogicalToPhysicalInPlaceRgnWorker.c)
 *     ?GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z @ 0x1401A8204 (-GetDpiRectWithSubpixel@@YAXPEBUtagRECT@@PEBMPEBUtagWND@@2PEAM333@Z.c)
 * Callees:
 *     ?IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z @ 0x14004544C (-IsChildWindowDpiBoundary@@YA_NPEBUtagWND@@@Z.c)
 *     _GetDesktopWindow @ 0x140046470 (_GetDesktopWindow.c)
 *     _IsTopLevelWindow @ 0x140049A60 (_IsTopLevelWindow.c)
 */

const struct tagWND *__fastcall GetTopLevelOrDpiBoundaryWindow(const struct tagWND *a1, __int64 a2, __int64 a3)
{
  const struct tagWND *v3; // rbx
  __int64 DesktopWindow; // rax
  __int64 v6; // rdx

  v3 = a1;
  if ( *(_DWORD *)(*(_QWORD *)(W32GetSessionState(a1, a2, a3) + 96) + 120LL) )
  {
    while ( v3 )
    {
      if ( *((_QWORD *)v3 + 13) )
      {
        DesktopWindow = GetDesktopWindow(v3);
        if ( v6 == DesktopWindow )
          break;
      }
      if ( IsChildWindowDpiBoundary(v3) )
        break;
      v3 = (const struct tagWND *)*((_QWORD *)v3 + 13);
    }
  }
  else
  {
    while ( v3 && !(unsigned int)IsTopLevelWindow(v3) )
      v3 = (const struct tagWND *)*((_QWORD *)v3 + 13);
  }
  return v3;
}
