/*
 * XREFs of winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4___::Invoke @ 0x1805998B0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     _lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4_::operator()_winrt::Windows::Foundation::IInspectable_const_&_ @ 0x180596758 (_lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4_--operator()_winrt--Windows--Foundation--IInspectable_c.c)
 */

__int64 __fastcall winrt::impl::delegate_winrt::Windows::UI::Xaml::Input::PointerEventHandler__lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4___::Invoke(
        __int64 a1,
        __int64 a2,
        __int64 *a3)
{
  __int64 *v3; // rbx
  __int64 v4; // rdx
  __int64 *v6; // [rsp+30h] [rbp+8h] BYREF

  v3 = (__int64 *)(a1 + 16);
  v6 = a3;
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef((__int64 *)&v6);
  lambda_4df4384ae3b5e6c8a8d8d2650a0df1a4_::operator()_winrt::Windows::Foundation::IInspectable_const___(v3, v4, &v6);
  return 0LL;
}
