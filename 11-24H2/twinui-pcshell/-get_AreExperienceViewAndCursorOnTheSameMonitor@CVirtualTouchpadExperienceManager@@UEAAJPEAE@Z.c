/*
 * XREFs of ?get_AreExperienceViewAndCursorOnTheSameMonitor@CVirtualTouchpadExperienceManager@@UEAAJPEAE@Z @ 0x1803A0F80
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CVirtualTouchpadExperienceManager::get_AreExperienceViewAndCursorOnTheSameMonitor(
        CVirtualTouchpadExperienceManager *this,
        bool *a2)
{
  ExperienceManagerUtils *v4; // rcx
  HWND v6; // rax
  const char *v7; // r9
  __int64 v8; // rdx
  HMONITOR v9; // rbx
  HMONITOR v10; // rax
  POINT pt; // [rsp+20h] [rbp-58h]
  POINT v12; // [rsp+28h] [rbp-50h] BYREF
  WINDOWPLACEMENT wndpl; // [rsp+30h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+0h]

  v4 = (ExperienceManagerUtils *)*((_QWORD *)this + 11);
  if ( !v4 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2D1,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
      (const char *)0x8000FFFFLL);
    return 2147549183LL;
  }
  v6 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(
               v4,
               (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)a2);
  memset(&wndpl, 0, sizeof(wndpl));
  if ( !GetWindowPlacement(v6, &wndpl) )
  {
    v8 = 725LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v7);
  }
  v12 = 0LL;
  pt = *(POINT *)&wndpl.rcNormalPosition.left;
  if ( !(*((unsigned int (__fastcall **)(POINT *))this + 102))(&v12) )
  {
    v8 = 729LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v7);
  }
  v9 = MonitorFromPoint(pt, 2u);
  if ( v9 == (HMONITOR)-1LL )
  {
    v8 = 732LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v7);
  }
  v10 = MonitorFromPoint(v12, 2u);
  if ( v10 == (HMONITOR)-1LL )
  {
    v8 = 735LL;
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)v8,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\touchpadcontrollerexperiencemanager.cpp",
             v7);
  }
  *a2 = v10 == v9;
  return 0LL;
}
