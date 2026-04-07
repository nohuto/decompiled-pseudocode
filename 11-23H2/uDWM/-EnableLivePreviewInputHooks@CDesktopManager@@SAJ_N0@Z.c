/*
 * XREFs of ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800B42D4
 * Callers:
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x18001D5E4 (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x180045FF0 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x1800C65F8 (-Activate@CLivePreview@@QEAAJXZ.c)
 * Callees:
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x1800B4004 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x1800C326C (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::EnableLivePreviewInputHooks(char a1, char a2, const unsigned __int16 *a3)
{
  HWND v5; // rcx
  unsigned int v6; // edi
  HWND v7; // rcx

  if ( !a1 )
  {
    CIconicBitmapRegistry::OnLivePreviewDismissed(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                                  + 29));
    v5 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 77);
    if ( v5 )
      RemovePropW(v5, aLivepreviewwin);
  }
  v6 = CDesktopManager::EnableInputHooksHelper(a1, a2, a3, (HWND *)CDesktopManager::s_pDesktopManagerInstance + 77);
  if ( a1 )
  {
    v7 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 77);
    if ( v7 )
      SetPropW(v7, aLivepreviewwin, HANDLE_FLAG_INHERIT);
  }
  return v6;
}
