/*
 * XREFs of ?OnWindowClientContentRectChange@CAnimationScheduler@@QEAAJPEBVCWindowData@@PEBUtagRECT@@1PEA_N@Z @ 0x180053478
 * Callers:
 *     ?MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x18008FE50 (-MoveSize@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 * Callees:
 *     ?_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z @ 0x180053554 (-_ShouldTrack@CAnimationScheduler@@AEAA_NPEBVCWindowData@@PEAVCStoryboard@@_N@Z.c)
 *     ?OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@PEBUtagRECT@@2@Z @ 0x1800D086C (-OnWindowClientContentRectChange@CWindowPropertyTracker@@QEAAJPEBVCStoryboard@@PEBVCWindowData@@.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAnimationScheduler::OnWindowClientContentRectChange(
        CAnimationScheduler *this,
        const struct CWindowData *a2,
        const struct tagRECT *a3,
        const struct tagRECT *a4,
        bool *a5)
{
  CAnimationScheduler *v9; // rcx
  unsigned int v10; // esi
  __int64 i; // rbx
  const struct CStoryboard *v13; // rbp

  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v10 = 0;
  *a5 = 0;
  for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
  {
    v13 = *(const struct CStoryboard **)(*((_QWORD *)this + 2) + 8 * i);
    if ( CAnimationScheduler::_ShouldTrack(v9, a2, v13, 0) )
    {
      v10 = CWindowPropertyTracker::OnWindowClientContentRectChange(
              (CAnimationScheduler *)((char *)this + 48),
              v13,
              a2,
              a3,
              a4);
      *a5 |= (v10 & 0x80000000) == 0;
    }
  }
  LeaveCriticalSection(&CDesktopManager::s_csDwmInstance);
  return v10;
}
