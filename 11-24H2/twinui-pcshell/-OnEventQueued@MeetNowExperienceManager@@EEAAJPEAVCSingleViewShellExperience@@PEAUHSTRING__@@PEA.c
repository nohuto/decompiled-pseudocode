/*
 * XREFs of ?OnEventQueued@MeetNowExperienceManager@@EEAAJPEAVCSingleViewShellExperience@@PEAUHSTRING__@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1803C9DB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z @ 0x180165044 (-CompareStringOrdinal@Details@Wrappers@WRL@Microsoft@@YAHPEAUHSTRING__@@0@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z @ 0x1803CC168 (-ShowFlyout@MeetNowExperienceManager@@AEAAJAEBURect@Foundation@Windows@@_K_N@Z.c)
 */

__int64 __fastcall MeetNowExperienceManager::OnEventQueued(
        MeetNowExperienceManager *this,
        struct CSingleViewShellExperience *a2,
        Microsoft::WRL::Wrappers::Details *a3,
        struct Windows::Foundation::Collections::IPropertySet *a4)
{
  HSTRING_HEADER *v6; // rax
  HSTRING v7; // r8
  HMONITOR v8; // rax
  unsigned __int64 v9; // r8
  const char *v10; // r9
  LONG right; // ecx
  LONG bottom; // edx
  int v14; // eax
  unsigned int v15; // ebx
  struct tagMONITORINFO mi; // [rsp+20h] [rbp-50h] BYREF
  HSTRING_HEADER v17; // [rsp+48h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+8h]

  v6 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(
         &v17,
         (const WCHAR **)&MeetNowExperienceEvents::ShowExperienceFromUri,
         (unsigned int)a3);
  if ( (unsigned int)Microsoft::WRL::Wrappers::Details::CompareStringOrdinal(a3, (HSTRING)v6[1].Reserved.Reserved1, v7) )
    return 0LL;
  mi.cbSize = 40;
  memset(&mi.rcMonitor, 0, 36);
  v8 = MonitorFromWindow(0LL, 1u);
  if ( !GetMonitorInfoW(v8, &mi) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x164,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
             v10);
  right = mi.rcWork.right;
  bottom = mi.rcWork.bottom;
  if ( mi.rcWork.top <= mi.rcMonitor.top )
  {
    if ( mi.rcWork.left > mi.rcMonitor.left )
      right = mi.rcWork.left;
  }
  else
  {
    bottom = mi.rcWork.top;
  }
  *(_DWORD *)&v17.Reserved.Reserved2[12] = 0;
  *(float *)&v17.Reserved.Reserved1 = (float)right;
  *(_QWORD *)&v17.Reserved.Reserved2[4] = COERCE_UNSIGNED_INT((float)bottom);
  v14 = MeetNowExperienceManager::ShowFlyout((char *)this - 56, (const struct Windows::Foundation::Rect *)&v17, v9, 1);
  v15 = v14;
  if ( v14 >= 0 )
    return 0LL;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x17C,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
    (const char *)(unsigned int)v14);
  return v15;
}
