/*
 * XREFs of ?UpdateClipRect@MeetNowExperienceManager@@AEAAJXZ @ 0x1803CC794
 * Callers:
 *     ?CalculateFlyoutPosition@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@UtagRECT@@PEAU5@@Z @ 0x1803C8578 (-CalculateFlyoutPosition@MeetNowExperienceManager@@AEAAJUSize@Foundation@Windows@@UtagRECT@@PEAU.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall MeetNowExperienceManager::UpdateClipRect(MeetNowExperienceManager *this)
{
  HMONITOR v2; // rax
  const char *v3; // r9
  int v5; // eax
  int v6; // [rsp+20h] [rbp-50h] BYREF
  RECT rc; // [rsp+28h] [rbp-48h] BYREF
  struct tagMONITORINFO mi; // [rsp+38h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v2 = MonitorFromRect((LPCRECT)((char *)this + 408), 1u);
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  if ( !GetMonitorInfoW(v2, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x188,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
             v3);
  *(RECT *)((char *)this + 392) = mi.rcWork;
  v6 = 0;
  rc = 0LL;
  v5 = (*(__int64 (__fastcall **)(_QWORD, RECT *, int *))(**((_QWORD **)this + 11) + 40LL))(
         *((_QWORD *)this + 11),
         &rc,
         &v6);
  if ( v5 >= 0 )
  {
    if ( !IsRectEmpty(&rc) && *((_DWORD *)this + 101) > rc.top && ((v6 - 1) & 0xFFFFFFFD) == 0 )
      *((_DWORD *)this + 101) = rc.top;
  }
  else
  {
    wil::details::in1diag3::_Log_Hr(
      retaddr,
      (void *)0x18D,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
  }
  return 0LL;
}
