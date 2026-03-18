/*
 * XREFs of ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x18024A830
 * Callers:
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wil@@QEAA_NXZ @ 0x18024A5F0 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wi.c)
 * Callees:
 *     ?ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_details_ServiceReportingKind@@I_KE@Z @ 0x1800C8A90 (-ReportUsageToServiceDirect@details@wil@@YAHPEAUwil_details_FeatureReportingCache@@IHHW4wil_deta.c)
 *     ?FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_ReportingKind@@PEBW4wil_VariantReportingKind@@E_K@Z @ 0x1800C8F00 (-FeatureLoggingHook@details@wil@@YAXIPEBUFEATURE_LOGGED_TRAITS@@PEBUFEATURE_ERROR@@HPEBW4wil_Rep.c)
 *     ?GetCachedFeatureEnabledState@?$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@details@wil@@AEAA?ATwil_details_FeatureStateCache@@XZ @ 0x18024A62C (-GetCachedFeatureEnabledState@-$FeatureImpl@U__WilFeatureTraits_Feature_NewDWMFailFastErrors@@@d.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180301010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall wil::details::FeatureImpl<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::ReportUsage(
        __int64 a1,
        unsigned __int8 a2,
        char a3,
        __int64 a4)
{
  __int64 v4; // r8
  unsigned int v6; // edi
  enum wil_ReportingKind *v7; // [rsp+28h] [rbp-50h]
  enum wil_VariantReportingKind *v8; // [rsp+30h] [rbp-48h]
  enum wil_VariantReportingKind *v9; // [rsp+30h] [rbp-48h]
  _QWORD v10[5]; // [rsp+50h] [rbp-28h] BYREF
  unsigned int v11; // [rsp+80h] [rbp+8h] BYREF
  __int16 v12; // [rsp+84h] [rbp+Ch]
  __int64 v13; // [rsp+90h] [rbp+18h] BYREF
  __int64 v14; // [rsp+98h] [rbp+20h]

  v14 = a4;
  LOBYTE(v13) = a3;
  LODWORD(v4) = *(_DWORD *)a1;
  v6 = a2;
  if ( (*(_DWORD *)a1 & 4) == 0 )
  {
    v4 = *wil::details::FeatureImpl<__WilFeatureTraits_Feature_NewDWMFailFastErrors>::GetCachedFeatureEnabledState(
            (wil::details *)a1,
            v10);
    v14 = v4;
  }
  v11 = 0;
  v12 = 2;
  LODWORD(v13) = 3;
  if ( (unsigned int)wil::details::ReportUsageToServiceDirect(
                       (struct wil_details_FeatureReportingCache *)(a1 + 8),
                       0x3483A09u,
                       ((unsigned int)v4 >> 10) & 1,
                       ((unsigned int)v4 >> 11) & 1,
                       4 * (v6 ^ 1) + 2,
                       (__int64)v7,
                       (__int64)v8,
                       2u)
    && g_wil_details_pfnFeatureLoggingHook )
  {
    LOBYTE(v9) = 0;
    if ( (char *)g_wil_details_pfnFeatureLoggingHook == (char *)wil::details::FeatureLoggingHook )
      wil::details::FeatureLoggingHook(
        (wil::details *)0x3483A09,
        (unsigned __int16 *)&v11,
        0LL,
        (const struct FEATURE_ERROR *)v6,
        (int *)&v13,
        0LL,
        v9,
        1LL);
    else
      g_wil_details_pfnFeatureLoggingHook(55065097LL, &v11, 0LL, v6, &v13, 0LL, (_DWORD)v9, 1LL);
  }
}
