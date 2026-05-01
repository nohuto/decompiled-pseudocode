/*
 * XREFs of ?evaluate@_tip_CopilotHardwareKeyInvokedTest@@QEAAXXZ @ 0x180637228
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXXZ @ 0x180636F40 (-evaluate@-$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?__fail_if_complete_not_called@?$test_data_base@U_tip_CopilotHardwareKeyInvokedTest_id@@@tip2@@IEBA_NXZ @ 0x1802C9120 (-__fail_if_complete_not_called@-$test_data_base@U_tip_CopilotHardwareKeyInvokedTest_id@@@tip2@@I.c)
 *     ?__fail_if_errors_reported@?$test_data_base@U_tip_EyeControllerAppLaunchTest_id@@@tip2@@IEBA_NXZ @ 0x180491324 (-__fail_if_errors_reported@-$test_data_base@U_tip_EyeControllerAppLaunchTest_id@@@tip2@@IEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAA_NXZ @ 0x180636C10 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID60051841@@@details@wil@@QEAA_NX.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_ID60816100@@@details@wil@@QEAA_NXZ @ 0x180636C88 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_ID60816100@@@details@wil@@QEAA_NX.c)
 */

void __fastcall _tip_CopilotHardwareKeyInvokedTest::evaluate(_tip_CopilotHardwareKeyInvokedTest *this)
{
  __int64 v2; // rcx
  const char *v3; // rdx
  const char *v4; // rax
  __int64 v5; // rdx
  const char *v6; // rax
  __int64 v7; // rcx
  char IsEnabled; // al
  const char *v9; // rdx
  char v10; // cl
  bool v11; // zf
  __int64 v12; // rax
  __int64 v13; // rcx

  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID60051841>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ID60051841>::GetImpl'::`2'::impl) )
  {
    if ( tip2::test_data_base<_tip_CopilotHardwareKeyInvokedTest_id>::__fail_if_complete_not_called((__int64)this)
      || tip2::test_data_base<_tip_EyeControllerAppLaunchTest_id>::__fail_if_errors_reported(v2) )
    {
      return;
    }
    if ( *((_BYTE *)this + 17) == 1 )
    {
LABEL_5:
      v4 = tip2::details::reason_string((tip2::details *)"reason::settingsInvoke", v3);
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) )
        return;
      *(_BYTE *)(v5 + 152) = 1;
      *(_WORD *)(v5 + 154) = 3;
      goto LABEL_7;
    }
    if ( *((_BYTE *)this + 18) == 1 )
      goto LABEL_9;
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_ID60816100>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_ID60816100>::GetImpl'::`2'::impl);
    v10 = *((_BYTE *)this + 21);
    if ( IsEnabled )
    {
      if ( v10 || *((_BYTE *)this + 17) || *((_BYTE *)this + 18) || *((_BYTE *)this + 20) || *((_BYTE *)this + 22) )
        goto LABEL_24;
      v11 = *((_BYTE *)this + 23) == 0;
    }
    else
    {
      if ( v10 || *((_BYTE *)this + 17) )
        goto LABEL_24;
      v11 = *((_BYTE *)this + 18) == 0;
    }
    if ( v11 )
    {
      v4 = tip2::details::reason_string((tip2::details *)"reason::launchOrTogglePackagedAppFailed", v9);
      v5 = *((_QWORD *)this + 1);
      if ( !*(_BYTE *)(v5 + 152) )
      {
        *(_BYTE *)(v5 + 152) = 3;
        *(_WORD *)(v5 + 154) = 4;
LABEL_7:
        *(_QWORD *)(v5 + 160) = v4;
        return;
      }
      return;
    }
LABEL_24:
    v12 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v12 + 152) )
    {
      *(_BYTE *)(v12 + 152) = 1;
      *(_WORD *)(v12 + 154) = 0x8000;
      *(_QWORD *)(v12 + 160) = 0LL;
    }
    return;
  }
  if ( !tip2::test_data_base<_tip_CopilotHardwareKeyInvokedTest_id>::__fail_if_complete_not_called((__int64)this)
    && !tip2::test_data_base<_tip_EyeControllerAppLaunchTest_id>::__fail_if_errors_reported(v13) )
  {
    if ( *((_BYTE *)this + 17) == 1 )
      goto LABEL_5;
    if ( *((_BYTE *)this + 18) != 1 )
    {
      v6 = tip2::details::reason_string((tip2::details *)"reason::hardwareKeyFallback", v3);
      v7 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v7 + 152) )
        return;
      *(_WORD *)(v7 + 154) = 1;
      goto LABEL_32;
    }
LABEL_9:
    v6 = tip2::details::reason_string((tip2::details *)"reason::searchInvoke", v3);
    v7 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v7 + 152) )
      return;
    *(_WORD *)(v7 + 154) = 2;
LABEL_32:
    *(_QWORD *)(v7 + 160) = v6;
    *(_BYTE *)(v7 + 152) = 1;
  }
}
