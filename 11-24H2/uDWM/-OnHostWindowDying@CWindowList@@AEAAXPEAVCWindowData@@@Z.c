/*
 * XREFs of ?OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x1800F14D8
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x18001BC68 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x18001C0D4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@details@wil@@QEAA_NXZ @ 0x1800BB690 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Capture_CaptureManagerBackport@@@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall CWindowList::OnHostWindowDying(CWindowList *this, struct CWindowData *a2)
{
  char IsEnabled; // al
  __int64 v5; // rdx

  *(_QWORD *)(*((_QWORD *)a2 + 81) + 656LL) = 0LL;
  IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Capture_CaptureManagerBackport>::GetImpl'::`2'::impl);
  v5 = *((_QWORD *)a2 + 5);
  if ( IsEnabled )
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 59) + 128LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 59),
      v5);
  else
    (*(void (__fastcall **)(_QWORD, __int64))(**((_QWORD **)CDesktopManager::s_pDesktopManagerInstance + 58) + 144LL))(
      *((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58),
      v5);
  CWindowList::ShowProjectionBorder(this, *((struct CWindowData **)a2 + 81), 0);
  *(_DWORD *)(*((_QWORD *)a2 + 81) + 456LL) = 0;
}
