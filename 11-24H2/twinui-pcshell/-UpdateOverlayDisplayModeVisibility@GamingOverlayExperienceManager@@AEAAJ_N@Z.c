/*
 * XREFs of ?UpdateOverlayDisplayModeVisibility@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18021917C
 * Callers:
 *     ?Hide@GamingOverlayExperienceManager@@UEAAJXZ @ 0x18023E0B0 (-Hide@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?Show@GamingOverlayExperienceManager@@UEAAJXZ @ 0x18023EBD0 (-Show@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?OnViewDestroyedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x18035678C (-OnViewDestroyedViewEvent@GamingOverlayExperienceManager@@AEAAJPEAUIViewWrapper@ViewManagerInter.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1802191BC (-UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::UpdateOverlayDisplayModeVisibility(
        GamingOverlayExperienceManager *this,
        char a2)
{
  int updated; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 1584) = a2;
  updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeShared(this);
  v3 = updated;
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11A2,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)updated);
  return v3;
}
