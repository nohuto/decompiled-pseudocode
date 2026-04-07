/*
 * XREFs of ?SwitchDesktop@CWindowList@@UEAAJK_K@Z @ 0x180092EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?IsLogonDesktop@CDesktopManager@@SA_N_K@Z @ 0x18002F6B4 (-IsLogonDesktop@CDesktopManager@@SA_N_K@Z.c)
 *     ?GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z @ 0x18003340C (-GetRootVisualForDesktop@CWindowList@@QEAAPEAVCRenderDataVisual@@_K@Z.c)
 *     ?IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ @ 0x180034C10 (-IsWindowAnimationEnabled@CDesktopManager@@SA_NXZ.c)
 *     ?CommitDwmChannel@CCompositor@@QEAAJXZ @ 0x18003EF80 (-CommitDwmChannel@CCompositor@@QEAAJXZ.c)
 *     ?StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z @ 0x18003F738 (-StartAnimation@CLoginTransition@@QEAAJHPEAVCVisual@@0_K@Z.c)
 *     ?AbortAllAnimations@CAnimationScheduler@@QEAAXXZ @ 0x1800439F0 (-AbortAllAnimations@CAnimationScheduler@@QEAAXXZ.c)
 *     ?GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z @ 0x180047140 (-GetRenderTargetRootVisualForDesktop@CWindowList@@QEAAPEAVCContainerVisual@@_K@Z.c)
 *     ?GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ @ 0x18004A310 (-GetCurrent@TransitionManager@Transitions@Udwm@winrt@@SAPEAV1234@XZ.c)
 *     ?StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ @ 0x18004BE48 (-StopRotation@TransitionManager@Transitions@Udwm@winrt@@QEAAXXZ.c)
 *     ??1?$CGuard@VCDwmCS@@@@QEAA@XZ @ 0x18004E3B0 (--1-$CGuard@VCDwmCS@@@@QEAA@XZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18006FBCC (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     ?DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z @ 0x1800834A0 (-DesktopSwitchImmediately@CWindowList@@AEAAJ_K@Z.c)
 *     ??0CLoginTransition@@QEAA@XZ @ 0x18008CB04 (--0CLoginTransition@@QEAA@XZ.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z @ 0x18008FB6C (-BringDesktopToFront@CWindowList@@QEAAJPEAVCContainerVisual@@@Z.c)
 *     ?AllocClear@DefaultHeap@@SAPEAX_K@Z @ 0x180094C28 (-AllocClear@DefaultHeap@@SAPEAX_K@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@QEAA_NXZ @ 0x1800B5404 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_DesktopDWMCursor@@@details@wil@@Q.c)
 *     ?ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ @ 0x1800BA5E0 (-ImmediateCancelLivePreview@CDesktopManager@@QEAAJXZ.c)
 *     ??_GCLoginTransition@@QEAAPEAXI@Z @ 0x1800EDC6C (--_GCLoginTransition@@QEAAPEAXI@Z.c)
 *     ?BringDesktopToFront@CWindowList@@QEAAJ_K@Z @ 0x1800EE328 (-BringDesktopToFront@CWindowList@@QEAAJ_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CWindowList::SwitchDesktop(CWindowList *this, int a2, unsigned __int64 a3)
{
  unsigned __int64 v3; // r14
  CWindowList *v5; // rsi
  char v6; // r15
  int v7; // eax
  const struct std::nothrow_t *v8; // rdx
  __int64 v9; // rcx
  int v10; // edi
  winrt::Udwm::Transitions::TransitionManager *Current; // rax
  int v12; // eax
  unsigned int v13; // edx
  struct CContainerVisual *RenderTargetRootVisualForDesktop; // rax
  int v15; // eax
  int v16; // eax
  CLoginTransition *v17; // rdi
  CLoginTransition *v18; // rax
  struct CVisual *RootVisualForDesktop; // rax
  int started; // eax
  CLoginTransition *v21; // rcx
  struct _RTL_CRITICAL_SECTION *v23; // [rsp+38h] [rbp-30h] BYREF

  v3 = a3;
  v5 = this;
  v23 = &CDesktopManager::s_csDwmInstance;
  EnterCriticalSection(&CDesktopManager::s_csDwmInstance);
  v6 = 1;
  v7 = CDesktopManager::SendSwitchModeCommand(v3);
  v10 = v7;
  if ( v7 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v7, 0x1DE1u, 0LL);
    goto LABEL_28;
  }
  try
  {
    Current = winrt::Udwm::Transitions::TransitionManager::GetCurrent(v9, v8);
    winrt::Udwm::Transitions::TransitionManager::StopRotation(Current);
  }
  catch ( ... )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147467259, 0x1DE9u, 0LL);
    v5 = this;
    v3 = a3;
    v10 = -2147467259;
    v6 = 1;
    goto LABEL_28;
  }
  if ( *((_QWORD *)v5 + 69) && (a2 == 55 || a2 == 65) && CDesktopManager::IsWindowAnimationEnabled() )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_DesktopDWMCursor>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_DesktopDWMCursor>::GetImpl'::`2'::impl) )
    {
      v12 = CWindowList::BringDesktopToFront(v5, v3);
      v10 = v12;
      if ( v12 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v12, 0x1DF6u, 0LL);
        goto LABEL_28;
      }
    }
    else
    {
      RenderTargetRootVisualForDesktop = CWindowList::GetRenderTargetRootVisualForDesktop(v5, v3);
      v15 = CWindowList::BringDesktopToFront(v5, RenderTargetRootVisualForDesktop);
      v10 = v15;
      if ( v15 < 0 )
      {
        MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v15, 0x1DFAu, 0LL);
        goto LABEL_28;
      }
    }
    CAnimationScheduler::AbortAllAnimations(*((CAnimationScheduler **)CDesktopManager::s_pDesktopManagerInstance + 23));
    v16 = CCompositor::CommitDwmChannel(*((CCompositor **)CDesktopManager::s_pDesktopManagerInstance + 6));
    v10 = v16;
    if ( v16 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, v16, 0x1DFFu, 0LL);
    }
    else
    {
      v17 = (CLoginTransition *)*((_QWORD *)v5 + 68);
      if ( !v17 )
      {
        v18 = (CLoginTransition *)DefaultHeap::AllocClear(0x58uLL);
        v17 = v18 ? CLoginTransition::CLoginTransition(v18) : 0LL;
        *((_QWORD *)v5 + 68) = v17;
        if ( !v17 )
        {
          v10 = -2147024882;
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, -2147024882, 0x1E04u, 0LL);
          goto LABEL_28;
        }
      }
      RootVisualForDesktop = CWindowList::GetRootVisualForDesktop(v5, v3);
      started = CLoginTransition::StartAnimation(v17, a2, *((struct CVisual **)v5 + 69), RootVisualForDesktop, v3);
      v10 = started;
      if ( started >= 0 )
      {
        v6 = 0;
        goto LABEL_20;
      }
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0LL, started, 0x1E08u, 0LL);
    }
LABEL_28:
    v21 = (CLoginTransition *)*((_QWORD *)v5 + 68);
    if ( v21 )
    {
      CLoginTransition::`scalar deleting destructor'(v21, v13);
      *((_QWORD *)v5 + 68) = 0LL;
    }
    goto LABEL_30;
  }
LABEL_20:
  if ( CDesktopManager::IsLogonDesktop(v3) )
    CDesktopManager::ImmediateCancelLivePreview(CDesktopManager::s_pDesktopManagerInstance);
  if ( v10 < 0 )
    goto LABEL_28;
LABEL_30:
  if ( v6 )
    v10 = CWindowList::DesktopSwitchImmediately((CLoginTransition **)v5, v3);
  CGuard<CDwmCS>::~CGuard<CDwmCS>(&v23);
  return (unsigned int)v10;
}
