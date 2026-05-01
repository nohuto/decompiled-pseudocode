/*
 * XREFs of ?evaluate@_tip_EyeControllerAppLaunchTest@@QEAAXXZ @ 0x180491484
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@EEAAXXZ @ 0x180491470 (-evaluate@-$merged_data@U_tip_EyeControllerAppLaunchTest@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     ?__fail_if_errors_reported@?$test_data_base@U_tip_EyeControllerAppLaunchTest_id@@@tip2@@IEBA_NXZ @ 0x180491324 (-__fail_if_errors_reported@-$test_data_base@U_tip_EyeControllerAppLaunchTest_id@@@tip2@@IEBA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@wil@@QEAA_NXZ @ 0x180491378 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_EyeControllerApp_2602@@@details@w.c)
 */

void __fastcall _tip_EyeControllerAppLaunchTest::evaluate(_tip_EyeControllerAppLaunchTest *this, const char *a2)
{
  __int64 v2; // r9
  const char *v4; // rax
  __int64 v5; // r9
  const char *v6; // rdx
  __int64 v7; // rax
  const char *v8; // rax
  __int64 v9; // rdx
  const char *v10; // rax
  __int64 v11; // rcx
  const char *v12; // rax
  __int64 v13; // rcx

  v2 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v2 + 56) & 0x200) == 0 )
  {
    if ( !*(_BYTE *)(v2 + 152) )
    {
      *(_BYTE *)(v2 + 152) = 3;
      *(_WORD *)(v2 + 154) = 16385;
      *(_QWORD *)(v2 + 160) = 0LL;
    }
    return;
  }
  if ( *((_BYTE *)this + 25) )
  {
    v4 = tip2::details::reason_string((tip2::details *)"reason::no_test_running_on_view_creation", a2);
    if ( !*(_BYTE *)(v5 + 152) )
    {
      *(_BYTE *)(v5 + 152) = 3;
      *(_WORD *)(v5 + 154) = 5;
      *(_QWORD *)(v5 + 160) = v4;
    }
    return;
  }
  if ( !wil::details::FeatureImpl<__WilFeatureTraits_Feature_EyeControllerApp_2602>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_EyeControllerApp_2602>::GetImpl'::`2'::impl) )
  {
    if ( !*((_BYTE *)this + 16) )
    {
      v8 = tip2::details::reason_string((tip2::details *)"reason::not_initialized", v6);
      v9 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v9 + 152) )
        return;
      *(_BYTE *)(v9 + 152) = 1;
      *(_WORD *)(v9 + 154) = 6;
LABEL_14:
      *(_QWORD *)(v9 + 160) = v8;
      return;
    }
    if ( tip2::test_data_base<_tip_EyeControllerAppLaunchTest_id>::__fail_if_errors_reported((__int64)this) )
      return;
    if ( *((_BYTE *)this + 17) )
    {
LABEL_12:
      v8 = tip2::details::reason_string((tip2::details *)"reason::failed_before_activation", v6);
      v9 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v9 + 152) )
        return;
      *(_BYTE *)(v9 + 152) = 3;
      *(_WORD *)(v9 + 154) = 1;
      goto LABEL_14;
    }
    if ( *((int *)this + 5) < 0 )
      goto LABEL_16;
    if ( !*((_BYTE *)this + 24) )
      goto LABEL_20;
    if ( !*((_BYTE *)this + 18) )
      goto LABEL_23;
LABEL_35:
    v7 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v7 + 152) )
      return;
    *(_BYTE *)(v7 + 152) = 1;
    *(_WORD *)(v7 + 154) = 0x8000;
    goto LABEL_37;
  }
  if ( !*((_BYTE *)this + 16) )
  {
    v7 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v7 + 152) )
      return;
    *(_BYTE *)(v7 + 152) = 5;
    *(_WORD *)(v7 + 154) = 0;
LABEL_37:
    *(_QWORD *)(v7 + 160) = 0LL;
    return;
  }
  if ( *((_BYTE *)this + 17) )
    goto LABEL_12;
  if ( *((int *)this + 5) < 0 )
  {
LABEL_16:
    v10 = tip2::details::reason_string((tip2::details *)"reason::activation_failed", v6);
    v11 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v11 + 152) )
      return;
    *(_BYTE *)(v11 + 152) = 3;
    *(_WORD *)(v11 + 154) = 2;
    goto LABEL_18;
  }
  if ( !*((_BYTE *)this + 24) )
  {
LABEL_20:
    v10 = tip2::details::reason_string((tip2::details *)"reason::view_not_created", v6);
    v11 = *((_QWORD *)this + 1);
    if ( *(_BYTE *)(v11 + 152) )
      return;
    *(_BYTE *)(v11 + 152) = 3;
    *(_WORD *)(v11 + 154) = 4;
LABEL_18:
    *(_QWORD *)(v11 + 160) = v10;
    return;
  }
  if ( *((_BYTE *)this + 18) )
  {
    if ( tip2::test_data_base<_tip_EyeControllerAppLaunchTest_id>::__fail_if_errors_reported((__int64)this) )
      return;
    goto LABEL_35;
  }
LABEL_23:
  v12 = tip2::details::reason_string((tip2::details *)"reason::activation_not_called", v6);
  v13 = *((_QWORD *)this + 1);
  if ( !*(_BYTE *)(v13 + 152) )
  {
    *(_BYTE *)(v13 + 152) = 3;
    *(_WORD *)(v13 + 154) = 3;
    *(_QWORD *)(v13 + 160) = v12;
  }
}
