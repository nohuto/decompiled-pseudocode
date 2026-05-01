/*
 * XREFs of ??$?RAEBUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@_lambda_84c5eada3affd516c293d063c562fc4a_@@QEBA?A_PAEBUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@Z @ 0x1802C9908
 * Callers:
 *     ??$call@AEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@?$factory_cache_entry@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationControllerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@Z @ 0x1801E55FC (--$call@AEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@-$factory_cache_entry@UUINavigationContr.c)
 *     ??$get_activation_factory@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationControllerStatics@2345@@winrt@@YA?A_PXZ @ 0x1802AA908 (--$get_activation_factory@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationCont.c)
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 */

__int64 *__fastcall _lambda_84c5eada3affd516c293d063c562fc4a_::operator()<winrt::Windows::Gaming::Input::IUINavigationControllerStatics const &>(
        __int64 a1,
        __int64 *a2)
{
  *a2 = winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics>;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
  return a2;
}
