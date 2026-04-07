/*
 * XREFs of ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18001512C
 * Callers:
 *     ?OnAnimationComplete@CStoryboard@@UEAAJI@Z @ 0x180007830 (-OnAnimationComplete@CStoryboard@@UEAAJI@Z.c)
 *     ?Destroy@CStoryboard@@UEAAXXZ @ 0x180014600 (-Destroy@CStoryboard@@UEAAXXZ.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180014624 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x1800D9C00 (-Destroy@CAppArrangementDelayed@@EEAAXXZ.c)
 *     ?Destroy@CSlideOut@@UEAAXXZ @ 0x1800D9C40 (-Destroy@CSlideOut@@UEAAXXZ.c)
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x1800D9C80 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 *     ?ScheduleStopAnimation@CStoryboard@@QEAAJXZ @ 0x1800DBEC4 (-ScheduleStopAnimation@CStoryboard@@QEAAJXZ.c)
 * Callees:
 *     ?_LogStoryboardEvent@CStoryboard@@IEAAXXZ @ 0x180007AD4 (-_LogStoryboardEvent@CStoryboard@@IEAAXXZ.c)
 *     ?ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z @ 0x18000A338 (-ShouldSnapshot@CAnimationScheduler@@QEAA_NW4DWMTRANSITION_TARGET@@PEBVCStoryboard@@@Z.c)
 *     ?StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z @ 0x18000ACC0 (-StopTrackingStoryboard@CWindowPropertyTracker@@QEAAXPEBVCStoryboard@@@Z.c)
 *     ?RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z @ 0x1800139EC (-RemoveTargetsForStoryboard@CTransitionVisualController@@QEAAJPEAVCStoryboard@@_NK@Z.c)
 *     ?Release@CStoryboard@@QEAAKXZ @ 0x180014624 (-Release@CStoryboard@@QEAAKXZ.c)
 *     ?SetupZOrder@CTransitionVisualController@@QEAAJXZ @ 0x180014E94 (-SetupZOrder@CTransitionVisualController@@QEAAJXZ.c)
 *     ?FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z @ 0x1800152B0 (-FindWindowDataByHwnd@CWindowList@@QEAAPEAVCWindowData@@PEAUHWND__@@@Z.c)
 *     ?DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z @ 0x180015328 (-DiscardStoredSnapshot@CTransitionVisualController@@QEAAJPEAUHWND__@@@Z.c)
 *     ?RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z @ 0x1800153C0 (-RemoveAnimationComponent@CTransitionVisualController@@QEAAJPEAVCAnimationComponent@@@Z.c)
 *     ?GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ @ 0x18001E410 (-GetActiveStoryboardCount@CAnimationScheduler@@QEAAHXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall CStoryboard::_Cleanup(CStoryboard *this)
{
  int v2; // eax
  char v3; // bp
  __int64 v4; // rdx
  CStoryboard *v5; // rcx
  __int64 i; // rdi
  int v7; // edx
  struct CWindowData *WindowDataByHwnd; // rax
  CBaseObject *v9; // rcx
  __int64 v10; // r10
  int *v11; // rcx
  struct _RTL_CRITICAL_SECTION *v12; // [rsp+30h] [rbp+8h] BYREF

  v12 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v2 = *((_DWORD *)this + 6);
  if ( v2 != 4 )
  {
    if ( (unsigned int)(v2 - 2) > 1 )
    {
      v3 = 1;
      CTransitionVisualController::RemoveTargetsForStoryboard(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
        this,
        1,
        0);
    }
    else
    {
      v3 = 0;
    }
    *((_DWORD *)this + 6) = 4;
    CWindowPropertyTracker::StopTrackingStoryboard(
      (CWindowPropertyTracker *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23) + 48LL),
      this);
    CStoryboard::_LogStoryboardEvent(this, v4);
    *((_DWORD *)this + 7) = -1;
    v5 = (CStoryboard *)*((_QWORD *)this + 11);
    if ( v5 )
    {
      CStoryboard::Release(v5);
      *((_QWORD *)this + 11) = 0LL;
    }
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 30); i = (unsigned int)(i + 1) )
    {
      v7 = *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 24LL);
      if ( (v7 & 0x20000000) != 0
        && !CAnimationScheduler::ShouldSnapshot(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 23), v7, this) )
      {
        CTransitionVisualController::DiscardStoredSnapshot(
          *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
          *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 16LL));
      }
      WindowDataByHwnd = CWindowList::FindWindowDataByHwnd(
                           *((CWindowList **)CDesktopManager::s_pDesktopManagerInstance + 54),
                           *(HWND *)(*(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) + 16LL));
      if ( WindowDataByHwnd )
      {
        v11 = (int *)((char *)WindowDataByHwnd + 680);
        if ( (v3 || (*v11 & 0xFFF) == 0xFFF) && (*v11 & 0x40000000) == 0 )
          *v11 = *v11 & 0x2000000 | 0xFFF;
      }
      CTransitionVisualController::RemoveAnimationComponent(
        *((CTransitionVisualController **)CDesktopManager::s_pDesktopManagerInstance + 24),
        *(struct CAnimationComponent **)(*((_QWORD *)this + 12) + 8 * i));
      v9 = *(CBaseObject **)(*((_QWORD *)this + 12) + 8 * i);
      if ( v9 )
      {
        CBaseObject::Release(v9);
        *(_QWORD *)(*((_QWORD *)this + 12) + 8 * i) = 0LL;
      }
    }
    if ( (int)CAnimationScheduler::GetActiveStoryboardCount(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance
                                                            + 23)) > 0 )
      CTransitionVisualController::SetupZOrder(*(CTransitionVisualController **)(v10 + 192));
  }
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v12);
}
