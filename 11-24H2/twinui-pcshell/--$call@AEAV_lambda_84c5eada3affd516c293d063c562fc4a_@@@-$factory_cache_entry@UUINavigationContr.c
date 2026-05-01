/*
 * XREFs of ??$call@AEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@?$factory_cache_entry@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationControllerStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_84c5eada3affd516c293d063c562fc4a_@@@Z @ 0x1801E55FC
 * Callers:
 *     ??$get_activation_factory@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationControllerStatics@2345@@winrt@@YA?A_PXZ @ 0x1802AA908 (--$get_activation_factory@UUINavigationController@Input@Gaming@Windows@winrt@@UIUINavigationCont.c)
 * Callees:
 *     ?unconditional_release_ref@?$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@winrt@@@winrt@@AEAAXXZ @ 0x18004C608 (-unconditional_release_ref@-$com_ptr@UAppBackupListener@implementation@Shell@Internal@Windows@wi.c)
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$?RAEBUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@_lambda_84c5eada3affd516c293d063c562fc4a_@@QEBA?A_PAEBUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@Z @ 0x1802C9908 (--$-RAEBUIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@_lambda_84c5eada3affd516c29.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x1802DB14D (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$get_activation_factory@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@winrt@@YA?AUIUINavigationControllerStatics@Input@Gaming@Windows@0@AEBUhstring@param@0@@Z @ 0x180345640 (--$get_activation_factory@UIUINavigationControllerStatics@Input@Gaming@Windows@winrt@@@winrt@@YA.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics>::call<_lambda_84c5eada3affd516c293d063c562fc4a_ &>(
        __int64 a1,
        __int64 *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  void (__fastcall **v5)(_QWORD *, __int64 *, __int64 *); // rax
  _QWORD *v6; // rcx
  bool v7; // zf
  _DWORD *v9; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v10[4]; // [rsp+30h] [rbp-20h] BYREF
  const wchar_t *v11; // [rsp+40h] [rbp-10h]
  __int64 v12; // [rsp+70h] [rbp+20h] BYREF
  _QWORD *v13; // [rsp+80h] [rbp+30h] BYREF
  __int64 v14; // [rsp+88h] [rbp+38h] BYREF

  v13 = a3;
  v12 = a1;
  v10[0] = 1;
  v11 = L"Windows.Gaming.Input.UINavigationController";
  v10[1] = 43;
  v9 = v10;
  winrt::get_activation_factory<winrt::Windows::Gaming::Input::IUINavigationControllerStatics>(&v13, &v9);
  v4 = v13;
  if ( v13
    && (v5 = (void (__fastcall **)(_QWORD *, __int64 *, __int64 *))*v13,
        v12 = 0LL,
        (*v5)(v13, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v12),
        (v14 = v12) != 0) )
  {
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref(&v14);
    _InterlockedIncrement64(&qword_1808CA5F8);
    v6 = v13;
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::Gaming::Input::UINavigationController,winrt::Windows::Gaming::Input::IUINavigationControllerStatics>,
            (signed __int64)v13,
            0LL) )
    {
      v13 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_1808CA600);
    }
    _lambda_84c5eada3affd516c293d063c562fc4a_::operator()<winrt::Windows::Gaming::Input::IUINavigationControllerStatics const &>(
      v6,
      a2);
    _InterlockedDecrement64(&qword_1808CA5F8);
    v7 = v13 == 0LL;
  }
  else
  {
    *a2 = (__int64)v4;
    Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(a2);
    v7 = v4 == 0LL;
  }
  if ( !v7 )
    winrt::com_ptr<winrt::Windows::Internal::Shell::implementation::AppBackupListener>::unconditional_release_ref((__int64 *)&v13);
  return a2;
}
