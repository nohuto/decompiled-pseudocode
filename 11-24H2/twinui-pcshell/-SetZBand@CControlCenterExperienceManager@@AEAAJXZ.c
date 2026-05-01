/*
 * XREFs of ?SetZBand@CControlCenterExperienceManager@@AEAAJXZ @ 0x1803767B0
 * Callers:
 *     ?OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z @ 0x180375AA0 (-OnViewCreated@CControlCenterExperienceManager@@MEAAJPEAVCSingleViewShellExperience@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@@Z @ 0x18003ED20 (-WindowFromViewWrapper@ExperienceManagerUtils@@YAPEAUHWND__@@PEAUIViewWrapper@ViewManagerInterop.c)
 *     ?SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z @ 0x1801FED08 (-SetWindowBand@CSingleViewShellExperience@@QEAAJW4ZBID@@@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 */

__int64 __fastcall CControlCenterExperienceManager::SetZBand(CControlCenterExperienceManager *this)
{
  int v2; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v3; // rdx
  unsigned int v4; // edi
  HWND v6; // rax
  const char *v7; // r9
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]

  if ( !*((_QWORD *)this + 18) )
    return 0LL;
  v2 = CSingleViewShellExperience::SetWindowBand((__int64)this + 120);
  v4 = v2;
  if ( v2 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6B4,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v2);
    return v4;
  }
  v6 = (HWND)ExperienceManagerUtils::WindowFromViewWrapper(*((ExperienceManagerUtils **)this + 18), v3);
  if ( v6 && !SetWindowPos(v6, HWND_MESSAGE|0x2LL, 0, 0, 0, 0, 0x13u) )
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x6BA,
             (unsigned int)"pcshell\\twinui\\experiencemanagers\\lib\\controlcenterexperiencemanager.cpp",
             v7);
  else
    return 0LL;
}
