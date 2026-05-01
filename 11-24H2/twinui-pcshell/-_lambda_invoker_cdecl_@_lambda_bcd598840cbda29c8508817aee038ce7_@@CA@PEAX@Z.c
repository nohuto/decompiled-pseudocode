/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_bcd598840cbda29c8508817aee038ce7_@@CA@PEAX@Z @ 0x1805DE6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperation@U?$IReference@_N@Foundation@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x1805EC7E0 (-cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@U-$IReference@_N@Foundation@Windows@wi.c)
 */

__int64 __fastcall _lambda_bcd598840cbda29c8508817aee038ce7_::_lambda_invoker_cdecl_(_QWORD **a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1[1];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v2);
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<winrt::Windows::Foundation::IReference<bool>>,1>::cancel_asynchronously((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v2);
}
