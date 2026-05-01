/*
 * XREFs of ?Provider@ThemeCoordinatorProvider@@SAPEBU_tlgProvider_t@@XZ @ 0x180605E9C
 * Callers:
 *     ??$CacheHit@_N@GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAAX$$QEA_N@Z @ 0x180603C3C (--$CacheHit@_N@GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAAX$$QEA_N@Z.c)
 *     ??$IsDefaultAeroEnabled@_N@GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAAX$$QEA_N@Z @ 0x180603D8C (--$IsDefaultAeroEnabled@_N@GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAAX$$QEA_N@Z.c)
 *     ??1?$_TlgActivityBase@V?$ActivityData@VThemeCoordinatorProvider@@U_TlgReflectorTag_Param0IsProviderType@@@?$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@$0EAAAAAAAAAAA@$04@@IEAA@XZ @ 0x18060497C (--1-$_TlgActivityBase@V-$ActivityData@VThemeCoordinatorProvider@@U_TlgReflectorTag_Param0IsProvi.c)
 *     ?CreateNew@GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAAXXZ @ 0x1806050BC (-CreateNew@GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAAXXZ.c)
 *     ?NotifyFailure@?$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@UEAA_NAEBUFailureInfo@2@@Z @ 0x180605B40 (-NotifyFailure@-$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRef.c)
 *     ?StartActivity@GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAAXI@Z @ 0x1806064A0 (-StartActivity@GetBackgroundHostForType@ThemeCoordinatorProvider@@QEAAXI@Z.c)
 *     ?StopActivity@GetBackgroundHostForType@ThemeCoordinatorProvider@@MEAAXXZ @ 0x180606550 (-StopActivity@GetBackgroundHostForType@ThemeCoordinatorProvider@@MEAAXXZ.c)
 *     ?zInternalStart@?$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXXZ @ 0x1806071C8 (-zInternalStart@-$ActivityBase@VThemeCoordinatorProvider@@$00$0EAAAAAAAAAAA@$04$0BAAAAAA@U_TlgRe.c)
 * Callees:
 *     ?get@?$static_lazy@VThemeCoordinatorProvider@@@details@wil@@QEAAPEAVThemeCoordinatorProvider@@P6AXXZ@Z @ 0x180606B7C (-get@-$static_lazy@VThemeCoordinatorProvider@@@details@wil@@QEAAPEAVThemeCoordinatorProvider@@P6.c)
 */

const struct _tlgProvider_t *__fastcall ThemeCoordinatorProvider::Provider(__int64 a1)
{
  return *(const struct _tlgProvider_t **)(wil::details::static_lazy<ThemeCoordinatorProvider>::get(
                                             a1,
                                             _lambda_946955806da6a0bbd6f0186036e9319d_::_lambda_invoker_cdecl_)
                                         + 8);
}
