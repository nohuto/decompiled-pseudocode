/*
 * XREFs of ?HandleThreadMessage@CDesktopManager@@CAXI_K_J@Z @ 0x180045D50
 * Callers:
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18008DE70 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?UpdateTabletMode@CDesktopManager@@QEAAJH@Z @ 0x180045ED4 (-UpdateTabletMode@CDesktopManager@@QEAAJH@Z.c)
 *     ?ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z @ 0x180045F00 (-ActivateLivePreview@CDesktopManager@@SAJPEAULivePreviewRequest@@@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?InitializeComObjects@CDesktopManager@@AEAAJXZ @ 0x18008E5C8 (-InitializeComObjects@CDesktopManager@@AEAAJXZ.c)
 *     ?HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x180094250 (-HandleFlickFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 *     ?HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z @ 0x1800B6B10 (-HandleKeystateFeedbackMessage@CContactManager@@QEAAJ_NI@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CDesktopManager::HandleThreadMessage(int a1, HWND a2, unsigned int a3)
{
  HWND LastActivePopup; // rdi
  HWND Ancestor; // rax
  struct _RTL_CRITICAL_SECTION *v5; // [rsp+48h] [rbp+20h] BYREF

  LastActivePopup = a2;
  switch ( a1 )
  {
    case 1027:
      if ( !IsWindowEnabled(a2) )
      {
        Ancestor = GetAncestor(LastActivePopup, 3u);
        LastActivePopup = GetLastActivePopup(Ancestor);
      }
      SwitchToThisWindow(LastActivePopup, 1);
      break;
    case 1029:
      v5 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      CDesktopManager::ActivateLivePreview((struct LivePreviewRequest *)LastActivePopup);
      goto LABEL_8;
    case 1031:
      CContactManager::HandleFlickFeedbackMessage(
        *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
        a2 != 0LL,
        a3);
      return;
    case 1032:
      CContactManager::HandleKeystateFeedbackMessage(
        *((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20),
        a2 != 0LL,
        a3);
      return;
    case 1033:
      v5 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      CDesktopManager::InitializeComObjects(CDesktopManager::s_pDesktopManagerInstance);
      CGuard<CDwmCS>::~CGuard<CDwmCS>(&v5);
      return;
    case 1025:
      v5 = &CDesktopManager::s_csDwmInstance;
      EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
      CDesktopManager::UpdateTabletMode(CDesktopManager::s_pDesktopManagerInstance, (int)LastActivePopup);
LABEL_8:
      LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
      break;
  }
}
