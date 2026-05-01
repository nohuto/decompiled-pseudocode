/*
 * XREFs of ??R_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@QEBA@AEBUIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@Z @ 0x1801D782C
 * Callers:
 *     ??$call@AEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@?$factory_cache_entry@UAppExtension@AppExtensions@ApplicationModel@WindowsUdk@winrt@@UIAppExtensionStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@Z @ 0x1803A8790 (--$call@AEAV_lambda_6efd2761bda3320a8aa70aa0ac08757d_@@@-$factory_cache_entry@UAppExtension@AppE.c)
 * Callees:
 *     ?FindAll@?$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtensionStatics@AppExtensions@ApplicationModel@WindowsUdk@winrt@@@impl@winrt@@QEBA@AEBUhstring@param@3@AEBW4AppExtensionOptions@AppExtensions@ApplicationModel@WindowsUdk@3@@Z @ 0x1801D78D4 (-FindAll@-$consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics@UIAppExtension.c)
 */

__int64 __fastcall _lambda_6efd2761bda3320a8aa70aa0ac08757d_::operator()(_QWORD *a1, __int64 a2, __int64 a3)
{
  winrt::impl::consume_WindowsUdk_ApplicationModel_AppExtensions_IAppExtensionStatics<winrt::WindowsUdk::ApplicationModel::AppExtensions::IAppExtensionStatics>::FindAll(
    a3,
    a2,
    *a1,
    a1[1]);
  return a2;
}
