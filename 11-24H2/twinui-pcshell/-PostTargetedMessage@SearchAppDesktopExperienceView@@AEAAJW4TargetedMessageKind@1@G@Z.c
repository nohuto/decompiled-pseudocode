/*
 * XREFs of ?PostTargetedMessage@SearchAppDesktopExperienceView@@AEAAJW4TargetedMessageKind@1@G@Z @ 0x1803D2534
 * Callers:
 *     ?ShellModeChanged@SearchAppDesktopExperienceView@@EEAAJ_N@Z @ 0x1803D2F30 (-ShellModeChanged@SearchAppDesktopExperienceView@@EEAAJ_N@Z.c)
 *     ?ShellReadyChanged@SearchAppDesktopExperienceView@@EEAAJXZ @ 0x1803D2F60 (-ShellReadyChanged@SearchAppDesktopExperienceView@@EEAAJXZ.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z @ 0x1801B0838 (-PostToUIThread@ExperienceManagerUtils@@YAJPEAUIUnknown@@PEAXI_J@Z.c)
 */

__int64 __fastcall SearchAppDesktopExperienceView::PostTargetedMessage(
        __int64 a1,
        unsigned __int16 a2,
        unsigned __int16 a3)
{
  int v3; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  v3 = ExperienceManagerUtils::PostToUIThread(
         *(__int64 (__fastcall ****)(ExperienceManagerUtils *, GUID *, LPVOID *))(a1 + 96),
         (struct IUnknown *)a1,
         (void *)0x401,
         a2 | (unsigned __int64)(a3 << 16));
  v4 = v3;
  if ( v3 < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x404,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\searchappdesktopexperienceview.cpp",
      (const char *)(unsigned int)v3);
  return v4;
}
