/*
 * XREFs of ?OnProxyWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800F1570
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001BC68 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::OnProxyWindowDying(CWindowList *this, struct CWindowData *a2)
{
  char IsEnabled; // al
  __int64 v4; // r9
  __int64 v5; // rdx

  *(_QWORD *)(*((_QWORD *)a2 + 82) + 648LL) = 0LL;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl);
  v4 = *((_QWORD *)a2 + 5);
  v5 = *(_QWORD *)(*((_QWORD *)a2 + 82) + 40LL);
  if ( IsEnabled )
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 59)
                                                             + 56LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
      v5,
      0LL,
      v4);
  else
    (*(void (__fastcall **)(_QWORD, __int64, _QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance
                                                                + 58)
                                                             + 72LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
      v5,
      0LL,
      v4);
}
