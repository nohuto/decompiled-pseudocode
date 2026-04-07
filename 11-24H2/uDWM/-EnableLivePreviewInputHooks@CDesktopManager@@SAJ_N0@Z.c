/*
 * XREFs of ?EnableLivePreviewInputHooks@CDesktopManager@@SAJ_N0@Z @ 0x1800478B4
 * Callers:
 *     ?Activate@CLivePreview@@QEAAJXZ @ 0x180045584 (-Activate@CLivePreview@@QEAAJXZ.c)
 *     ?DeActivate@CLivePreview@@QEAAJ_N@Z @ 0x1800476AC (-DeActivate@CLivePreview@@QEAAJ_N@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18008DE70 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z @ 0x180047A34 (-EnableInputHooksHelper@CDesktopManager@@SAJ_N0PEBGPEAPEAUHWND__@@@Z.c)
 *     ?OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ @ 0x180047D1C (-OnLivePreviewDismissed@CIconicBitmapRegistry@@QEAAXXZ.c)
 */

__int64 __fastcall CDesktopManager::EnableLivePreviewInputHooks(bool a1, bool a2, const unsigned __int16 *a3)
{
  HWND v5; // rcx
  unsigned int v6; // edi
  HWND v8; // rcx

  if ( !a1 )
  {
    CIconicBitmapRegistry::OnLivePreviewDismissed(*((CIconicBitmapRegistry **)CDesktopManager::s_pDesktopManagerInstance
                                                  + 28));
    v5 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 143);
    if ( v5 )
      RemovePropW(v5, aLivepreviewwin);
  }
  v6 = CDesktopManager::EnableInputHooksHelper(a1, a2, a3, (HWND *)CDesktopManager::s_pDesktopManagerInstance + 143);
  if ( a1 )
  {
    v8 = (HWND)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 143);
    if ( v8 )
      SetPropW(v8, aLivepreviewwin, HANDLE_FLAG_INHERIT);
  }
  return v6;
}
