/*
 * XREFs of ?evaluate@_tip_CallDashboardExtensionTIP@@QEAAXXZ @ 0x180283890
 * Callers:
 *     ?evaluate@?$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXXZ @ 0x1805DBD40 (-evaluate@-$merged_data@U_tip_CallDashboardExtensionTIP@@U1@@details@tip2@@EEAAXXZ.c)
 * Callees:
 *     ?reason_string@details@tip2@@YAPEBDPEBD@Z @ 0x1802943F4 (-reason_string@details@tip2@@YAPEBDPEBD@Z.c)
 *     IsTransientErrors @ 0x1805D4D2C (IsTransientErrors.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_58379993@@@details@wil@@QEAA_NXZ @ 0x1805DB36C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_58379993@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_59874629@@@details@wil@@QEAA_NXZ @ 0x1805DB3E8 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_59874629@@@details@wil@@QEAA_NXZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_600963485@@@details@wil@@QEAA_NXZ @ 0x1805DB428 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_600963485@@@details@wil@@QEAA_NXZ.c)
 */

void __fastcall _tip_CallDashboardExtensionTIP::evaluate(_tip_CallDashboardExtensionTIP *this, const char *a2)
{
  const char *v3; // rax
  __int64 v4; // rdx
  __int64 v5; // rax
  const char *v6; // rdx
  const char *v7; // rdx
  char IsEnabled; // al
  char v9; // cl

  if ( *((_BYTE *)this + 17) && *((_BYTE *)this + 16) )
  {
    v3 = tip2::details::reason_string((tip2::details *)"reason::extension_creation_failed", a2);
    v4 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_BYTE *)(v4 + 152) = 3;
      *(_WORD *)(v4 + 154) = 1;
LABEL_5:
      *(_QWORD *)(v4 + 160) = v3;
      return;
    }
    return;
  }
  v5 = *((_QWORD *)this + 1);
  if ( (*(_DWORD *)(v5 + 56) & 0x200) == 0 )
  {
    if ( *(_BYTE *)(v5 + 152) )
      return;
    *(_BYTE *)(v5 + 152) = 3;
    *(_WORD *)(v5 + 154) = 16385;
LABEL_23:
    *(_QWORD *)(v5 + 160) = 0LL;
    return;
  }
  if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_600963485>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_600963485>::GetImpl'::`2'::impl) )
  {
    IsEnabled = wil::details::FeatureImpl<__WilFeatureTraits_Feature_58379993>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_58379993>::GetImpl'::`2'::impl);
    v9 = *((_BYTE *)this + 18);
    if ( IsEnabled )
    {
      if ( !v9 )
        goto LABEL_12;
    }
    else if ( !v9 )
    {
      goto LABEL_26;
    }
    if ( !(unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_59874629>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_59874629>::GetImpl'::`2'::impl)
      || *((_DWORD *)this + 5) != -2147418110 )
    {
LABEL_21:
      v5 = *((_QWORD *)this + 1);
      if ( *(_BYTE *)(v5 + 152) )
        return;
      *(_BYTE *)(v5 + 152) = 1;
      *(_WORD *)(v5 + 154) = 0x8000;
      goto LABEL_23;
    }
LABEL_26:
    v3 = tip2::details::reason_string((tip2::details *)"reason::call_failed", v6);
    v4 = *((_QWORD *)this + 1);
    if ( !*(_BYTE *)(v4 + 152) )
    {
      *(_BYTE *)(v4 + 152) = 2;
      *(_WORD *)(v4 + 154) = 2;
      goto LABEL_5;
    }
    return;
  }
  if ( *((_BYTE *)this + 18) || (unsigned __int8)IsTransientErrors(*((unsigned int *)this + 5)) )
  {
    if ( (unsigned __int8)IsTransientErrors(*((unsigned int *)this + 5)) )
    {
      v3 = tip2::details::reason_string((tip2::details *)"reason::transient_call_failure", v7);
      v4 = *((_QWORD *)this + 1);
      if ( !*(_BYTE *)(v4 + 152) )
      {
        *(_BYTE *)(v4 + 152) = 2;
        *(_WORD *)(v4 + 154) = 3;
        goto LABEL_5;
      }
      return;
    }
    goto LABEL_21;
  }
LABEL_12:
  v3 = tip2::details::reason_string((tip2::details *)"reason::call_failed", v6);
  v4 = *((_QWORD *)this + 1);
  if ( !*(_BYTE *)(v4 + 152) )
  {
    *(_BYTE *)(v4 + 152) = 3;
    *(_WORD *)(v4 + 154) = 2;
    goto LABEL_5;
  }
}
