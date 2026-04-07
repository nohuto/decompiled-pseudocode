/*
 * XREFs of ?OnHostWindowDying@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180065C70
 * Callers:
 *     ?ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z @ 0x180049060 (-ImmediateDestroyWindow@CWindowList@@AEAAXPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z @ 0x1800478B4 (-ShowProjectionBorder@CWindowList@@QEAAJPEAVCWindowData@@_N@Z.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM@@@details@wil@@QEAA_NXZ @ 0x180065734 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViol.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 */

void __fastcall CWindowList::OnHostWindowDying(CWindowList *this, struct CWindowData *a2)
{
  bool v4; // zf
  __int64 *v5; // rcx
  __int64 v6; // rax

  *(_QWORD *)(*((_QWORD *)a2 + 81) + 656LL) = 0LL;
  v4 = wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM>::__private_IsEnabled(`wil::Feature<__WilFeatureTraits_Feature_Servicing_WatsonFailureAccessViolationuDWM>::GetImpl'::`2'::impl) == 0;
  v5 = (__int64 *)*((_QWORD *)CDesktopManager::s_pDesktopManagerInstance + 58);
  v6 = *v5;
  if ( v4 )
  {
    (*(void (__fastcall **)(__int64 *, _QWORD, _QWORD, _QWORD))(v6 + 80))(
      v5,
      *((_QWORD *)a2 + 5),
      0LL,
      *(_QWORD *)(*((_QWORD *)a2 + 81) + 40LL));
  }
  else
  {
    (*(void (__fastcall **)(__int64 *, _QWORD))(v6 + 168))(v5, *((_QWORD *)a2 + 5));
    CWindowList::ShowProjectionBorder(this, *((struct CWindowData **)a2 + 81), 0);
    *(_DWORD *)(*((_QWORD *)a2 + 81) + 456LL) = 0;
  }
}
