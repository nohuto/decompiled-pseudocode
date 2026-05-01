/*
 * XREFs of _lambda_784ca26717ac27efef440615a0eafc39_::operator() @ 0x1803D72C4
 * Callers:
 *     ?BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@@@Z @ 0x1803D7A60 (-BuildAdditionalArgsString@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@HPEAPEAUHSTRING__@.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z @ 0x1803D9C64 (-GetStuckPlace@CortanaDesktopExperienceView@@AEAAJPEAUHMONITOR__@@PEAW4EDGEUI_TRAYSTUCKPLACE@@@Z.c)
 */

__int64 __fastcall lambda_784ca26717ac27efef440615a0eafc39_::operator()(__int64 a1)
{
  HMONITOR *v1; // rdx
  int StuckPlace; // eax
  unsigned int v4; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *(HMONITOR **)(a1 + 8);
  v7 = 0;
  StuckPlace = CortanaDesktopExperienceView::GetStuckPlace(
                 *(CortanaDesktopExperienceView **)a1,
                 *v1,
                 (enum EDGEUI_TRAYSTUCKPLACE *)&v7);
  v4 = StuckPlace;
  if ( StuckPlace >= 0 )
  {
    if ( v7 == 3 )
      **(_BYTE **)(a1 + 16) = 1;
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x710,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\cortanadesktopexperienceview.cpp",
      (const char *)(unsigned int)StuckPlace);
    return v4;
  }
}
