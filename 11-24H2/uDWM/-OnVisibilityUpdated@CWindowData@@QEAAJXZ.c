/*
 * XREFs of ?OnVisibilityUpdated@CWindowData@@QEAAJXZ @ 0x18001BB58
 * Callers:
 *     ?ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001A304 (-ImmediateDestroySprite@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 *     ?ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001B770 (-ShowHide@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 * Callees:
 *     ?NotifyRepresentationChanged@CWindowData@@QEAAJXZ @ 0x18001E67C (-NotifyRepresentationChanged@CWindowData@@QEAAJXZ.c)
 *     ?CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ @ 0x18001E780 (-CheckOwnedWindowEligibility@CWindowData@@QEAAXXZ.c)
 *     ?OnWindowVisibilityUpdated@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z @ 0x18001FEC4 (-OnWindowVisibilityUpdated@CTransitionVisualController@@QEAAXPEAVCWindowData@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowData::OnVisibilityUpdated(CWindowData *this)
{
  int v2; // eax
  unsigned int v3; // ebx
  CWindowData *v4; // rcx
  int v5; // eax
  CTransitionVisualController *v6; // rcx
  int v7; // eax
  int v8; // eax

  CWindowData::CheckOwnedWindowEligibility(this);
  v2 = CWindowData::NotifyRepresentationChanged(this);
  v3 = v2;
  if ( v2 < 0 )
  {
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v2, 0x2FFu, 0LL);
  }
  else
  {
    v4 = (CWindowData *)*((_QWORD *)this + 75);
    if ( v4 && (v5 = CWindowData::NotifyRepresentationChanged(v4), v3 = v5, v5 < 0) )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v5, 0x302u, 0LL);
    }
    else
    {
      v6 = (CTransitionVisualController *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 24);
      if ( v6 )
        CTransitionVisualController::OnWindowVisibilityUpdated(v6, this);
      if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl) )
      {
        v7 = (*(__int64 (__fastcall **)(_QWORD, CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 59)
                                                              + 200LL))(
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
               this);
        v3 = v7;
        if ( v7 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v7, 0x30Du, 0LL);
      }
      else
      {
        v8 = (*(__int64 (__fastcall **)(_QWORD, CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 58)
                                                              + 208LL))(
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
               this);
        v3 = v8;
        if ( v8 < 0 )
          MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v8, 0x311u, 0LL);
      }
    }
  }
  return v3;
}
