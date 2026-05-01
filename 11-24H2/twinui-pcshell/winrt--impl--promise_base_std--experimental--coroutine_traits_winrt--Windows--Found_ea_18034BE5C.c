/*
 * XREFs of winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::Cancel @ 0x18034BE5C
 * Callers:
 *     winrt::impl::produce_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncInfo_::Cancel @ 0x18034BE30 (winrt--impl--produce_std--experimental--coroutine_traits_winrt--Windows--Foundation_ea_18034BE30.c)
 * Callees:
 *     ??1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ @ 0x18004C5EC (--1ISnapLayoutManagerExtension@PlatformExtensions@Shell@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ??4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z @ 0x180051814 (--4ShellViewCoordinator@Shell@UI@WindowsUdk@winrt@@QEAAAEAU01234@$$QEAU01234@@Z.c)
 *     ReleaseSRWLockExclusive_0 @ 0x1802D2A74 (ReleaseSRWLockExclusive_0.c)
 *     __Platform_AcquireSRWLockExclusive @ 0x1802D2A8C (__Platform_AcquireSRWLockExclusive.c)
 *     ??0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z @ 0x18031C2E8 (--0hresult_error@winrt@@QEAA@Uhresult@1@AEBUslim_source_location@impl@1@@Z.c)
 *     ??$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA?AVexception_ptr@0@Uhresult_canceled@winrt@@@Z @ 0x18032ABEC (--$make_exception_ptr@Uhresult_canceled@winrt@@@std@@YA-AVexception_ptr@0@Uhresult_canceled@winr.c)
 *     ?cancel@cancellable_promise@winrt@@QEAAXXZ @ 0x180335B2C (-cancel@cancellable_promise@winrt@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall winrt::impl::promise_base_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____void_::Cancel(
        __int64 a1)
{
  const void *v2; // rax
  _BYTE v3[16]; // [rsp+20h] [rbp-48h] BYREF
  unsigned int v4; // [rsp+30h] [rbp-38h] BYREF
  __int128 v5; // [rsp+38h] [rbp-30h]
  OLECHAR *v6[4]; // [rsp+48h] [rbp-20h] BYREF
  __int64 v7; // [rsp+70h] [rbp+8h] BYREF

  v7 = 0LL;
  _Platform_AcquireSRWLockExclusive((PSRWLOCK)(a1 + 72));
  if ( !*(_DWORD *)(a1 + 96) )
  {
    *(_DWORD *)(a1 + 96) = 2;
    v4 = 0;
    v5 = 0LL;
    winrt::hresult_error::hresult_error((__int64)v6, winrt::impl::error_canceled, &v4);
    v2 = (const void *)std::make_exception_ptr<winrt::hresult_canceled>((__int64)v3, v6);
    __ExceptionPtrAssign((void *)(a1 + 56), v2);
    __ExceptionPtrDestroy(v3);
    winrt::WindowsUdk::UI::Shell::ShellViewCoordinator::operator=(&v7, (__int64 *)(a1 + 88));
  }
  ReleaseSRWLockExclusive_0((PSRWLOCK)(a1 + 72));
  if ( v7 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v7 + 24LL))(v7);
  winrt::cancellable_promise::cancel((winrt::cancellable_promise *)(a1 + 32));
  winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension::~ISnapLayoutManagerExtension((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v7);
}
