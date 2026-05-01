/*
 * XREFs of ?UpdateOverlayDisplayModeFullscreen@GamingOverlayExperienceManager@@AEAAJ_N@Z @ 0x18035CFBC
 * Callers:
 *     ?ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ @ 0x180359500 (-ResetWindowRect@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ @ 0x1803596B0 (-ResetWindowRegion@GamingOverlayExperienceManager@@UEAAJXZ.c)
 *     ?SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z @ 0x18035A410 (-SetCombinedWindowRegion@GamingOverlayExperienceManager@@UEAAJIPEAURect@Foundation@Windows@@@Z.c)
 *     ?SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z @ 0x18035A980 (-SetWindowRect@GamingOverlayExperienceManager@@UEAAJHHHH@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ @ 0x1802191BC (-UpdateOverlayDisplayModeShared@GamingOverlayExperienceManager@@AEAAJXZ.c)
 */

__int64 __fastcall GamingOverlayExperienceManager::UpdateOverlayDisplayModeFullscreen(
        GamingOverlayExperienceManager *this,
        char a2)
{
  int updated; // eax
  unsigned int v3; // ebx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  *((_BYTE *)this + 1585) = a2;
  updated = GamingOverlayExperienceManager::UpdateOverlayDisplayModeShared((winrt::Windows::Internal::GamingOverlay::implementation::GameBarWindowControlImpl **)this);
  v3 = updated;
  if ( updated < 0 )
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x11AB,
      (int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
      (const char *)(unsigned int)updated);
  return v3;
}
