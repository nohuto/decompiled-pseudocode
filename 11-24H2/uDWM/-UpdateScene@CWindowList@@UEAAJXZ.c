/*
 * XREFs of ?UpdateScene@CWindowList@@UEAAJXZ @ 0x18001FF10
 * Callers:
 *     ?_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z @ 0x180045BB0 (-_ScheduleStoryboardsForAnimationClock@CAnimationScheduler@@AEAAJU_GUID@@@Z.c)
 *     ?DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z @ 0x18008DE70 (-DwmEventThreadProc@CDesktopManager@@CAKPEAX@Z.c)
 * Callees:
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x180020030 (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ?ForceUpdateScene@CWindowList@@QEAAJXZ @ 0x180020070 (-ForceUpdateScene@CWindowList@@QEAAJXZ.c)
 *     ?AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ @ 0x180020554 (-AcquireAnimationEngine@CDesktopManager@@SAPEAVCAnimationEngine@@XZ.c)
 *     ?Release@CAnimationEngine@@UEAAKXZ @ 0x1800205B0 (-Release@CAnimationEngine@@UEAAKXZ.c)
 *     ?IsIdle@CAnimationEngine@@QEAA_NXZ @ 0x180027060 (-IsIdle@CAnimationEngine@@QEAA_NXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::UpdateScene(CWindowList *this)
{
  CDesktopManager *v2; // rdi
  int updated; // eax
  unsigned int v4; // ebx
  CAnimationEngine *v6; // rax
  CAnimationEngine *v7; // rdi
  int v8; // [rsp+20h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( !*((_BYTE *)CDesktopManager::s_pDesktopManagerInstance + 25) )
    return 0LL;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = CDesktopManager::s_pDesktopManagerInstance;
  if ( GetCurrentThreadId() != *((_DWORD *)v2 + 282)
    && (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                          + 23)) > 0 )
  {
    v6 = CDesktopManager::AcquireAnimationEngine();
    v7 = v6;
    if ( v6 )
    {
      if ( CAnimationEngine::IsIdle(v6) )
      {
        CAnimationEngine::Release(v7);
        goto LABEL_5;
      }
      CAnimationEngine::Release(v7);
    }
  }
  updated = CWindowList::ForceUpdateScene(this);
  v4 = updated;
  if ( updated >= 0 )
  {
LABEL_5:
    LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x1BBA,
    (unsigned int)"clientcore\\windows\\dwm\\udwm\\windowlist.cpp",
    (const char *)(unsigned int)updated,
    v8);
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v4;
}
