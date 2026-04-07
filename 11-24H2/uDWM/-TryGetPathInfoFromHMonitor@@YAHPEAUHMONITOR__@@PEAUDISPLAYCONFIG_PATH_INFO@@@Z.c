/*
 * XREFs of ?TryGetPathInfoFromHMonitor@@YAHPEAUHMONITOR__@@PEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x180074CF4
 * Callers:
 *     ?IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z @ 0x180074C3C (-IsHDRDisplay@@YAHPEAUHMONITOR__@@@Z.c)
 * Callees:
 *     ?GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z @ 0x180074DA4 (-GetPathInfo@@YAJPEBG_NPEAUDISPLAYCONFIG_PATH_INFO@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 *     memset_0 @ 0x18009C4E0 (memset_0.c)
 */

__int64 __fastcall TryGetPathInfoFromHMonitor(HMONITOR hMonitor, struct DISPLAYCONFIG_PATH_INFO *a2)
{
  BOOL MonitorInfoW; // eax
  bool v5; // dl
  unsigned int v6; // ebx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-88h] BYREF
  unsigned __int16 v9[36]; // [rsp+48h] [rbp-60h] BYREF

  memset(&mi, 0, sizeof(mi));
  memset_0(v9, 0, 0x40uLL);
  mi.cbSize = 104;
  MonitorInfoW = GetMonitorInfoW(hMonitor, &mi);
  v6 = 0;
  if ( MonitorInfoW )
    return (int)GetPathInfo(v9, v5, a2) >= 0;
  return v6;
}
