/*
 * XREFs of Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::_)(Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus)_::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_bd3c35641f5306c8094e2486c081427f___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus___lambda_bd3c35641f5306c8094e2486c081427f___ @ 0x1804E309C
 * Callers:
 *     ?RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU?$IAsyncOperation@W4AppRequestHandledResult@ViewManagerInterop@Shell@Internal@Windows@@@Foundation@Windows@@@Z @ 0x1804EB7B0 (-RequestCloseAsync@WindowWrapperBase@@UEAAJPEAPEAU-$IAsyncOperation@W4AppRequestHandledResult@Vi.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18004F730 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_18004F730.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$IAsyncOperationCompletedHandler@_N@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x1804E59D8 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$IAsyncOperationComplet_ea_1804E59D8.c)
 */

__int64 *__fastcall Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IAsyncOperationCompletedHandler_impl_Windows::Foundation::Internal::AggregateType_bool_unsigned_char___::___Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus__::DelegateInvokeHelper_Windows::Foundation::IAsyncOperationCompletedHandler_bool___lambda_bd3c35641f5306c8094e2486c081427f___1_Windows::Foundation::IAsyncOperation_bool____enum_ABI::Windows::Foundation::AsyncStatus___lambda_bd3c35641f5306c8094e2486c081427f___(
        __int64 *a1,
        __int64 a2)
{
  _QWORD *v4; // rax
  _QWORD *v5; // rdi
  volatile int *v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rcx

  *a1 = 0LL;
  v4 = operator new(0x28uLL, (const struct std::nothrow_t *)&std::nothrow);
  v5 = v4;
  if ( v4 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IAsyncOperationCompletedHandler<bool>>(v4);
    v6 = *(volatile int **)a2;
    v5[2] = *(_QWORD *)a2;
    v7 = *(_QWORD *)(a2 + 8);
    *(_QWORD *)(a2 + 8) = 0LL;
    v5[3] = v7;
    v8 = *(_QWORD *)(a2 + 16);
    *(_QWORD *)(a2 + 16) = 0LL;
    v5[4] = v8;
    *v5 = off_1807DFB30;
    if ( *a1 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
        *a1,
        v6);
    *a1 = (__int64)v5;
  }
  return a1;
}
