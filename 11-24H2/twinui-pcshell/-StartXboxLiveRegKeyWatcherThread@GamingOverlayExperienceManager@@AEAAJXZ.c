/*
 * XREFs of ?StartXboxLiveRegKeyWatcherThread@GamingOverlayExperienceManager@@AEAAJXZ @ 0x18035B768
 * Callers:
 *     ?add_XboxLiveKeyChanged@GamingOverlayExperienceManager@@UEAAJPEAU?$ITypedEventHandler@PEAUIGamingOverlayExperienceManager@GamingOverlay@Internal@Windows@@PEAUIInspectable@@@Foundation@Windows@@PEAUEventRegistrationToken@@@Z @ 0x180360230 (-add_XboxLiveKeyChanged@GamingOverlayExperienceManager@@UEAAJPEAU-$ITypedEventHandler@PEAUIGamin.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall GamingOverlayExperienceManager::StartXboxLiveRegKeyWatcherThread(HANDLE *this)
{
  const char *v1; // r9
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]

  if ( SHCreateThreadWithHandle(
         GamingOverlayExperienceManager::StaticXboxLiveRegKeyWatcherThread,
         this,
         0x1000u,
         0LL,
         this + 110) )
  {
    return 0LL;
  }
  else
  {
    return wil::details::in1diag3::Return_GetLastError(
             retaddr,
             (void *)0x417,
             (unsigned int)"pcshell\\twinui\\gamingoverlayexperiencemanager\\lib\\GamingOverlayExperienceManager.cpp",
             v1);
  }
}
