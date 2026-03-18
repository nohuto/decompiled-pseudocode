/*
 * XREFs of ?UpdateBatterySaverState@CComposition@@IEAAX_N@Z @ 0x18025C59C
 * Callers:
 *     ?s_PowerNotification@CComposition@@KAKPEAXK0@Z @ 0x180230080 (-s_PowerNotification@CComposition@@KAKPEAXK0@Z.c)
 * Callees:
 *     ?ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z @ 0x1800BF040 (-ScheduleCompositionPass@CComposition@@QEAAXKW4CompositionReason@@@Z.c)
 *     ?IsPowerSaverEnabled@CComposition@@QEBA_NXZ @ 0x18025BEB8 (-IsPowerSaverEnabled@CComposition@@QEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@QEAA_NXZ @ 0x18025C744 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ComposedFlipPerf@@@details@wil@@Q.c)
 */

void __fastcall CComposition::UpdateBatterySaverState(CComposition *this, char a2)
{
  CGlobalComposition *v2; // rbx
  CComposition *v4; // rcx
  char IsPowerSaverEnabled; // al
  char v6; // dl
  bool v7; // zf
  CGlobalComposition *v8; // rcx

  v2 = g_pComposition;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_ComposedFlipPerf>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_ComposedFlipPerf>::GetImpl'::`2'::impl) )
  {
    CComposition::IsPowerSaverEnabled(v2);
    v7 = *((_DWORD *)v2 + 1623) == 0;
    *((_BYTE *)v2 + 6471) = a2;
    if ( v7 )
      return;
    IsPowerSaverEnabled = CComposition::IsPowerSaverEnabled(v4);
    v7 = v6 == IsPowerSaverEnabled;
  }
  else
  {
    v7 = *((_DWORD *)v2 + 1623) == 0;
    *((_BYTE *)v2 + 6471) = a2;
  }
  if ( !v7 )
  {
    v8 = g_pComposition;
    *(_BYTE *)(*((_QWORD *)g_pComposition + 77) + 749LL) = 1;
    CComposition::ScheduleCompositionPass((__int64)v8, 0, 0x40000u);
  }
}
