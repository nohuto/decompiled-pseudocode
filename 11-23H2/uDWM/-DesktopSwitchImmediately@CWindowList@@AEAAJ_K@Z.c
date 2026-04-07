/*
 * XREFs of ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x18002D458
 * Callers:
 *     ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x180021630 (-OnAnimationComplete@CLoginTransition@@UEAAJI@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x18002E360 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z @ 0x18002D59C (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCVisual@@_K@Z.c)
 *     ?RefreshPresentationModeSettings@CContactManager@@QEAAJXZ @ 0x18002D5C4 (-RefreshPresentationModeSettings@CContactManager@@QEAAJXZ.c)
 *     ?Reset@CContactManager@@QEAAJXZ @ 0x18002D620 (-Reset@CContactManager@@QEAAJXZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z @ 0x18002D6C4 (-BringDesktopToFront@CWindowList@@QEAAJPEAVCVisual@@@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x18002D880 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18002DB6C (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18003CB74 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x18004CDD0 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18004DAFC (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x180065FCC (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DesktopSwitchImmediately(CLoginTransition **this, unsigned __int64 a2)
{
  struct CVisual *RenderTargetRootVisualForDesktop; // rax
  int v5; // eax
  unsigned int v6; // ebx
  CContactManager *v7; // r14
  int refreshed; // esi
  CBaseObject *v9; // rcx
  CLoginTransition *v10; // rcx
  unsigned int v12; // eax
  unsigned int v13; // [rsp+20h] [rbp-28h]
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop((CWindowList *)this, a2);
  v5 = CWindowList::BringDesktopToFront((CWindowList *)this, RenderTargetRootVisualForDesktop);
  v6 = v5;
  if ( v5 < 0 )
  {
    v13 = 7323;
LABEL_17:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, v13, 0LL);
    goto LABEL_11;
  }
  v7 = (CContactManager *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 20);
  refreshed = CContactManager::Reset(v7);
  v6 = refreshed;
  if ( refreshed < 0 )
  {
    v12 = 1982;
LABEL_15:
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v6, v12, 0LL);
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, refreshed, 0x1C9Cu, 0LL);
    goto LABEL_11;
  }
  refreshed = CContactManager::RefreshPresentationModeSettings(v7);
  v6 = refreshed;
  if ( refreshed < 0 )
  {
    v12 = 1983;
    goto LABEL_15;
  }
  v9 = this[70];
  if ( v9 )
    CBaseObject::Release(v9);
  this[70] = CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2);
  if ( CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2) )
    _InterlockedIncrement((volatile signed __int32 *)CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2) + 2);
  v10 = this[69];
  if ( v10 )
    CLoginTransition::StopAnimation(v10);
  CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23));
  v5 = (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                       + 24LL)
                                         + 24LL))(*(_QWORD *)(*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 6)
                                                            + 24LL));
  v6 = v5;
  if ( v5 < 0 )
  {
    v13 = 7338;
    goto LABEL_17;
  }
LABEL_11:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v6;
}
