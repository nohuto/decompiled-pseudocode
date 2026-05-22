/*
 * XREFs of ??$call@AEAV_lambda_83cc9fc9ac8bc00941158b6f437a3d67_@@@?$factory_cache_entry@UWindowManagementPreview@Preview@WindowManagement@UI@Windows@winrt@@UIWindowManagementPreviewStatics2@23456@@impl@winrt@@QEAA?A_PAEAV_lambda_83cc9fc9ac8bc00941158b6f437a3d67_@@@Z @ 0x1800FC498
 * Callers:
 *     ?GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z @ 0x1800FD1D8 (-GetProxyWindow@ViewHierarchyWithWindowManager@@QEAAII@Z.c)
 * Callees:
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x18002706C (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002724C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??0hstring@param@winrt@@QEAA@AEBV?$basic_string_view@GU?$char_traits@G@std@@@std@@@Z @ 0x18007F564 (--0hstring@param@winrt@@QEAA@AEBV-$basic_string_view@GU-$char_traits@G@std@@@std@@@Z.c)
 *     WINRT_IMPL_InterlockedPushEntrySList @ 0x18009F315 (WINRT_IMPL_InterlockedPushEntrySList.c)
 *     ??$?RAEBUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@_lambda_83cc9fc9ac8bc00941158b6f437a3d67_@@QEBA?A_PAEBUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@Z @ 0x1800FC2A8 (--$-RAEBUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@_lambda_83.c)
 *     ??$get_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@winrt@@@winrt@@YA?AUIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@0@AEBUhstring@param@0@@Z @ 0x1800FC71C (--$get_activation_factory@UIWindowManagementPreviewStatics2@Preview@WindowManagement@UI@Windows@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

_QWORD *__fastcall winrt::impl::factory_cache_entry<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>::call<_lambda_83cc9fc9ac8bc00941158b6f437a3d67_ &>(
        __int64 a1,
        _QWORD *a2,
        _QWORD *a3)
{
  _QWORD *v4; // rbx
  void (__fastcall **v5)(_QWORD *, __int64 *, __int64 *); // rax
  _QWORD *v6; // rcx
  __int64 v8[2]; // [rsp+28h] [rbp-38h] BYREF
  _BYTE v9[40]; // [rsp+38h] [rbp-28h] BYREF
  __int64 v10; // [rsp+80h] [rbp+20h] BYREF
  _QWORD *v11; // [rsp+90h] [rbp+30h] BYREF
  __int64 v12; // [rsp+98h] [rbp+38h] BYREF

  v11 = a3;
  v10 = a1;
  v8[1] = 59LL;
  v8[0] = (__int64)L"Windows.UI.WindowManagement.Preview.WindowManagementPreview";
  winrt::param::hstring::hstring((__int64)v9, v8);
  winrt::get_activation_factory<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>(
    &v11,
    v9);
  v4 = v11;
  if ( v11
    && (v5 = (void (__fastcall **)(_QWORD *, __int64 *, __int64 *))*v11,
        v10 = 0LL,
        (*v5)(v11, &winrt::impl::guid_v<winrt::impl::IAgileObject>, &v10),
        (v12 = v10) != 0) )
  {
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v12);
    _InterlockedIncrement64(&qword_180250C08);
    v6 = v11;
    if ( !_InterlockedCompareExchange64(
            &winrt::impl::factory_cache_entry_v<winrt::Windows::UI::WindowManagement::Preview::WindowManagementPreview,winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2>,
            (signed __int64)v11,
            0LL) )
    {
      v11 = 0LL;
      WINRT_IMPL_InterlockedPushEntrySList(&`winrt::impl::get_factory_cache'::`2'::cache, &stru_180250C10);
    }
    _lambda_83cc9fc9ac8bc00941158b6f437a3d67_::operator()<winrt::Windows::UI::WindowManagement::Preview::IWindowManagementPreviewStatics2 const &>(
      (__int64)v6,
      a2);
    _InterlockedDecrement64(&qword_180250C08);
  }
  else
  {
    *a2 = v4;
    if ( v4 )
      (*(void (__fastcall **)(_QWORD *))(*v4 + 8LL))(v4);
  }
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v11);
  return a2;
}
