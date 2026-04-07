/*
 * XREFs of ?_AdjustSourceOffsetsForOffscreenContent@CAppArrangementDelayed@@AEAAXPEAVCWindowData@@@Z @ 0x1800D3DC8
 * Callers:
 *     ?_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D5B40 (-_WindowEnumCallback@CAppArrangementDelayed@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboar.c)
 * Callees:
 *     ?GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z @ 0x1800531A4 (-GetWindowEndSize@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagSIZE@@@Z.c)
 *     ?GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z @ 0x1800531EC (-GetWindowEndPosition@CWindowPropertyTracker@@QEAAJPEAUHWND__@@PEAUtagPOINT@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

void __fastcall CAppArrangementDelayed::_AdjustSourceOffsetsForOffscreenContent(
        CAppArrangementDelayed *this,
        struct CWindowData *a2)
{
  struct tagRECT v2; // xmm0
  HWND v4; // rdx
  CWindowPropertyTracker *v5; // rcx
  int v6; // edi
  int v7; // esi
  int SystemMetrics; // esi
  int v9; // edi
  HMONITOR v10; // rax
  struct tagPOINT v11; // [rsp+20h] [rbp-50h] BYREF
  struct tagSIZE v12; // [rsp+28h] [rbp-48h] BYREF
  struct tagRECT rc; // [rsp+30h] [rbp-40h] BYREF
  struct tagMONITORINFO mi; // [rsp+40h] [rbp-30h] BYREF

  v2 = (struct tagRECT)*((_OWORD *)a2 + 3);
  v12 = 0LL;
  v4 = (HWND)*((_QWORD *)a2 + 5);
  v11 = 0LL;
  v5 = (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL);
  rc = v2;
  if ( (int)CWindowPropertyTracker::GetWindowEndPosition(v5, v4, &v11) >= 0 )
    OffsetRect(&rc, v11.x - rc.left, v11.y - rc.top);
  if ( (int)CWindowPropertyTracker::GetWindowEndSize(
              (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
              *((HWND *)a2 + 5),
              &v12) >= 0 )
  {
    rc.right = rc.left + v12.cx;
    rc.bottom = rc.top + v12.cy;
  }
  if ( (*((_DWORD *)a2 + 186) & 0x800000) != 0 )
  {
    v6 = *((_DWORD *)a2 + 199) - rc.left;
    v7 = *((_DWORD *)a2 + 200) - rc.top;
  }
  else
  {
    SystemMetrics = GetSystemMetrics(92);
    v7 = GetSystemMetrics(33) + SystemMetrics;
    v9 = GetSystemMetrics(92);
    v6 = GetSystemMetrics(32) + v9;
    v10 = MonitorFromRect(&rc, 2u);
    mi.cbSize = 40;
    memset(&mi.rcMonitor, 0, 36);
    if ( GetMonitorInfoW(v10, &mi) )
    {
      if ( mi.rcMonitor.top >= rc.top )
        v7 = mi.rcMonitor.top - rc.top;
      if ( mi.rcMonitor.left >= rc.left )
        v6 = mi.rcMonitor.left - rc.left;
    }
  }
  if ( (*((_DWORD *)a2 + 186) & 0x1000000) != 0 )
    OffsetRect((LPRECT)((char *)a2 + 748), v6 - *((_DWORD *)a2 + 187), v7 - *((_DWORD *)a2 + 188));
  if ( (*((_DWORD *)a2 + 186) & 0x800000) != 0 )
    OffsetRect((LPRECT)((char *)a2 + 780), v6 - *((_DWORD *)a2 + 195), v7 - *((_DWORD *)a2 + 196));
}
