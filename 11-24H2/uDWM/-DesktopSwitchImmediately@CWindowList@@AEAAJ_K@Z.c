/*
 * XREFs of ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x1800834A0
 * Callers:
 *     ?OnAnimationComplete@CLoginTransition@@UEAAJI@Z @ 0x1800833E0 (-OnAnimationComplete@CLoginTransition@@UEAAJI@Z.c)
 *     ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180092EB0 (-SwitchDesktop@CWindowList@@UEAAJK_K@Z.c)
 * Callees:
 *     ?NotifyDesktopSwitch@CContactManager@@QEAAJ_K@Z @ 0x18000D740 (-NotifyDesktopSwitch@CContactManager@@QEAAJ_K@Z.c)
 *     ?AddRef@CMILRefCountBase@@UEAAKXZ @ 0x1800263E0 (-AddRef@CMILRefCountBase@@UEAAKXZ.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180026560 (-Release@CBaseObject@@QEAAKXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x18003EF80 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?StopAnimation@CLoginTransition@@QEAAJXZ @ 0x18003FDB8 (-StopAnimation@CLoginTransition@@QEAAJXZ.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x1800439F0 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180047140 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z @ 0x18008FB6C (-BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x1800B5404 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJ_K@Z @ 0x1800EE328 (-BringDesktopToFront@CWindowList@@QEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::DesktopSwitchImmediately(CLoginTransition **this, unsigned __int64 a2)
{
  int v4; // eax
  unsigned int v5; // ebx
  struct CContainerVisual *RenderTargetRootVisualForDesktop; // rax
  int v7; // eax
  int v8; // eax
  CBaseObject *v9; // rcx
  CMILRefCountBase *RootVisualForDesktop; // rax
  CLoginTransition *v11; // rcx
  int v12; // eax
  struct _RTL_CRITICAL_SECTION *v14; // [rsp+50h] [rbp+18h] BYREF

  v14 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
  {
    v4 = CWindowList::BringDesktopToFront((CWindowList *)this, a2);
    v5 = v4;
    if ( v4 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v4, 0x1DB8u, 0LL);
      goto LABEL_16;
    }
  }
  else
  {
    RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop((CWindowList *)this, a2);
    v7 = CWindowList::BringDesktopToFront((CWindowList *)this, RenderTargetRootVisualForDesktop);
    v5 = v7;
    if ( v7 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1DBCu, 0LL);
      goto LABEL_16;
    }
  }
  v8 = CContactManager::NotifyDesktopSwitch(*((CContactManager **)CDesktopManager::s_pDesktopManagerInstance + 20));
  v5 = v8;
  if ( v8 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v8, 0x1DBFu, 0LL);
  }
  else
  {
    v9 = this[69];
    if ( v9 )
      CBaseObject::Release(v9);
    this[69] = CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2);
    if ( CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2) )
    {
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop((CWindowList *)this, a2);
      CMILRefCountBase::AddRef(RootVisualForDesktop);
    }
    v11 = this[68];
    if ( v11 )
      CLoginTransition::StopAnimation(v11);
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23));
    v12 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    v5 = v12;
    if ( v12 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x1DCDu, 0LL);
  }
LABEL_16:
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v14);
  return v5;
}
