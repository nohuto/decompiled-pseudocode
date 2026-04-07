/*
 * XREFs of ?OnWindowStyleUpdated@CWindowData@@QEAAJXZ @ 0x1800076E0
 * Callers:
 *     ?Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z @ 0x18000728C (-Initialize@CWindowSnapshot@@IEAAJPEAVCTopLevelWindow@@@Z.c)
 *     ?ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x180083AC0 (-ActivationChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z @ 0x1800929E0 (-StyleChange@CWindowList@@UEAAJPEAUIDwmWindow@@@Z.c)
 *     ?SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z @ 0x180093B00 (-SetThemeAttributesAttribute@CWindowList@@AEAAJPEAUHWND__@@K@Z.c)
 * Callees:
 *     ?OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z @ 0x1800085D4 (-OnWindowStyleUpdated@CWindowIconic@@QEAAJ_N@Z.c)
 *     ?OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ @ 0x18001D8B0 (-OnWindowStyleUpdated@CTopLevelWindow@@QEAAJXZ.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800270B4 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CWindowData::OnWindowStyleUpdated(CWindowData *this)
{
  CTopLevelWindow *v2; // rcx
  int v3; // edi
  __int64 result; // rax
  CWindowIconic *v5; // rcx
  unsigned int v6; // ebx

  v2 = (CTopLevelWindow *)*((_QWORD *)this + 55);
  if ( v2 )
  {
    v3 = CTopLevelWindow::OnWindowStyleUpdated(v2);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x31Eu, 0LL);
      return (unsigned int)v3;
    }
  }
  v5 = (CWindowIconic *)*((_QWORD *)this + 61);
  if ( v5 )
  {
    v3 = CWindowIconic::OnWindowStyleUpdated(v5, 1);
    if ( v3 < 0 )
    {
      MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, v3, 0x323u, 0LL);
      return (unsigned int)v3;
    }
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl) )
  {
    result = (*(__int64 (__fastcall **)(_QWORD, CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 59)
                                                              + 208LL))(
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
               this);
    v6 = result;
    if ( (int)result >= 0 )
      return result;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x328u, 0LL);
  }
  else
  {
    result = (*(__int64 (__fastcall **)(_QWORD, CWindowData *))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                 + 58)
                                                              + 216LL))(
               *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
               this);
    v6 = result;
    if ( (int)result >= 0 )
      return result;
    MilInstrumentationCheckHR_MaybeFailFast(0x14u, 0LL, 0, result, 0x32Cu, 0LL);
  }
  return v6;
}
