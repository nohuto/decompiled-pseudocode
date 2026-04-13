/*
 * XREFs of ??1?$unique_storage@U?$resource_policy@PEA_WP6AXPEA_W@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18002A410
 * Callers:
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEA_WP6AXPEA_W@Z$1?SysFreeString@@YAX0@ZU?$integral_constant@_K$0A@@wistd@@PEA_WPEA_W$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18002A3A8 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEA_WP6AXPEA_W@Z$1-SysFreeString@@YAX0@ZU.c)
 *     ??R_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@QEBAJAEAV?$CBasicResult@W4SVUpgradeEligibilityState@ContentManagement@@$0A@@Internal@Windows@@@Z @ 0x18002BDDC (--R_lambda_800e508e6e8d5695e8e6024fa20f4fcf_@@QEBAJAEAV-$CBasicResult@W4SVUpgradeEligibilityStat.c)
 *     ?GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z @ 0x1800A4A44 (-GetTileIdforNavigationUrl@EdgeTileUtils@@YAJPEB_WPEAPEA_W@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall wil::details::unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<wchar_t *,void (*)(wchar_t *),&void SysFreeString(wchar_t *),wistd::integral_constant<unsigned __int64,0>,wchar_t *,wchar_t *,0,std::nullptr_t>>(
        OLECHAR **a1)
{
  OLECHAR *v1; // rcx

  v1 = *a1;
  if ( v1 )
    SysFreeString(v1);
}
