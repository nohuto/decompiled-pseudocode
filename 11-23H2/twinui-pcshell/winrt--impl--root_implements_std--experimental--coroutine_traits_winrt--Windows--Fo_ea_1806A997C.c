/*
 * XREFs of winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::make_weak_ref @ 0x1806A997C
 * Callers:
 *     winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const_&_::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::query_interface @ 0x1806A9CFC (winrt--impl--root_implements_std--experimental--coroutine_traits_winrt--Windows--Fo_ea_1806A9CFC.c)
 * Callees:
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?unconditional_release_ref@?$com_ptr@U?$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ @ 0x180392600 (-unconditional_release_ref@-$com_ptr@U-$weak_ref@$00$00@impl@winrt@@@winrt@@AEAAXXZ.c)
 */

volatile signed __int32 *__fastcall winrt::impl::root_implements_std::experimental::coroutine_traits_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool_____anonymous_namespace_::PinConsentPromptManager___std::shared_ptr_PinOperationContext__PinConsentPromptContent_const___::promise_type_winrt::Windows::Foundation::IAsyncOperation_winrt::Windows::Foundation::IReference_bool____winrt::Windows::Foundation::IAsyncInfo_::make_weak_ref(
        volatile signed __int64 *a1)
{
  signed __int64 v1; // rbx
  volatile signed __int32 *result; // rax
  volatile signed __int32 *v4; // rdi
  __int64 v5; // rax
  unsigned __int64 v6; // rdi
  bool v7; // zf
  __int64 v8; // rax
  __int64 v9; // rbx
  volatile signed __int32 *v10; // [rsp+20h] [rbp-18h] BYREF

  v1 = *((_QWORD *)a1 + 1);
  if ( v1 >= 0 )
  {
    result = (volatile signed __int32 *)operator new(0x20uLL, (const struct std::nothrow_t *)&std::nothrow);
    v4 = result;
    if ( result )
    {
      v5 = (*(__int64 (__fastcall **)(volatile signed __int64 *))(*a1 + 24))(a1);
      _InterlockedExchangeAdd(&`winrt::get_module_lock'::`2'::s_lock, 1u);
      v10 = v4;
      *((_QWORD *)v4 + 1) = &winrt::impl::weak_source<0,1>::`vftable';
      *(_QWORD *)v4 = &winrt::impl::weak_ref<1,1>::`vftable';
      *((_QWORD *)v4 + 2) = v5;
      *((_DWORD *)v4 + 6) = v1;
      *((_DWORD *)v4 + 7) = 1;
      v6 = ((unsigned __int64)v4 >> 1) | 0x8000000000000000uLL;
      while ( 1 )
      {
        v8 = _InterlockedCompareExchange64(a1 + 1, v6, v1);
        v7 = v1 == v8;
        v1 = v8;
        if ( v7 )
          break;
        if ( v8 < 0 )
        {
          _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v8 + 24), 1u);
          v9 = 2 * v8 + 8;
          winrt::com_ptr<winrt::impl::weak_ref<1,1>>::unconditional_release_ref(&v10);
          return (volatile signed __int32 *)v9;
        }
        _InterlockedExchange(v10 + 6, v8);
      }
      _InterlockedExchangeAdd(v10 + 6, 1u);
      return v10 + 2;
    }
  }
  else
  {
    _InterlockedExchangeAdd((volatile signed __int32 *)(2 * v1 + 24), 1u);
    return (volatile signed __int32 *)(2 * v1 + 8);
  }
  return result;
}
