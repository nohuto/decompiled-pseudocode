/*
 * XREFs of winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs___lambda_abf37a923c4e39d61bd96b31f9d5bb1d___::Invoke @ 0x18078D2E0
 * Callers:
 *     <none>
 * Callees:
 *     ?IsActive@?$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIActivationChangedEventArgs@XamlExplorerHost@Shell@Internal@Windows@winrt@@@impl@winrt@@QEBA@XZ @ 0x180072DC0 (-IsActive@-$consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs@UIActiva.c)
 *     ?add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ @ 0x180176DC4 (-add_ref@IUnknown@Foundation@Windows@winrt@@AEBAXXZ.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     Windows::Internal::ComTaskPool::QueueTask__lambda_a8635596ed7ae5e31c94755e25628c9f___ @ 0x18078CDAC (Windows--Internal--ComTaskPool--QueueTask__lambda_a8635596ed7ae5e31c94755e25628c9f___.c)
 *     _lambda_a8635596ed7ae5e31c94755e25628c9f_::__lambda_a8635596ed7ae5e31c94755e25628c9f_ @ 0x18078CE68 (_lambda_a8635596ed7ae5e31c94755e25628c9f_--__lambda_a8635596ed7ae5e31c94755e25628c9f_.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall winrt::impl::delegate_winrt::Windows::Foundation::TypedEventHandler_winrt::Windows::Internal::Shell::XamlExplorerHost::XamlExplorerHostWindow_winrt::Windows::Internal::Shell::XamlExplorerHost::ActivationChangedEventArgs___lambda_abf37a923c4e39d61bd96b31f9d5bb1d___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 a3)
{
  __int64 v5; // rcx
  __int64 v6; // rcx
  __int64 result; // rax
  __int64 v8; // [rsp+20h] [rbp-18h] BYREF
  __int64 v9; // [rsp+28h] [rbp-10h] BYREF
  int v10; // [rsp+40h] [rbp+8h] BYREF
  __int64 v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = a3;
  try
  {
    if ( !winrt::impl::consume_Windows_Internal_Shell_XamlExplorerHost_IActivationChangedEventArgs<winrt::Windows::Internal::Shell::XamlExplorerHost::IActivationChangedEventArgs>::IsActive(&v11) )
    {
      v5 = *(_QWORD *)(a1 + 8);
      v8 = v5;
      if ( v5 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 8LL))(v5);
      v9 = a3;
      winrt::Windows::Foundation::IUnknown::add_ref((winrt::Windows::Foundation::IUnknown *)&v9);
      Windows::Internal::ComTaskPool::QueueTask__lambda_a8635596ed7ae5e31c94755e25628c9f___(v6, &v8);
      lambda_a8635596ed7ae5e31c94755e25628c9f_::__lambda_a8635596ed7ae5e31c94755e25628c9f_((Platform::WeakReference *)&v8);
    }
    result = 0LL;
  }
  catch ( ... )
  {
    return (unsigned int)*winrt::to_hresult(&v10);
  }
  return result;
}
