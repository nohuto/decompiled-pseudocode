/*
 * XREFs of ?StopTrackingAllWindows@CWindowPropertyTracker@@QEAAXXZ @ 0x180043B1C
 * Callers:
 *     ?_CleanupTransition@CAnimationScheduler@@AEAAXXZ @ 0x180043A6C (-_CleanupTransition@CAnimationScheduler@@AEAAXXZ.c)
 *     ??1CAnimationScheduler@@QEAA@XZ @ 0x1800A8188 (--1CAnimationScheduler@@QEAA@XZ.c)
 *     ??1CWindowPropertyTracker@@QEAA@XZ @ 0x1800A8200 (--1CWindowPropertyTracker@@QEAA@XZ.c)
 * Callees:
 *     ?_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z @ 0x180044444 (-_StopTrackingWindowByIndex@CWindowPropertyTracker@@AEAAXH@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CWindowPropertyTracker::StopTrackingAllWindows(CWindowPropertyTracker *this)
{
  int v2; // eax

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  while ( 1 )
  {
    v2 = *((_DWORD *)this + 6);
    if ( !v2 )
      break;
    CWindowPropertyTracker::_StopTrackingWindowByIndex(this, v2 - 1);
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
}
