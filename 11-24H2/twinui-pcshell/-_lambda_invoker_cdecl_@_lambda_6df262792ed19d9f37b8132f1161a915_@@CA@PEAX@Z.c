/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_6df262792ed19d9f37b8132f1161a915_@@CA@PEAX@Z @ 0x180329430
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?cancel_asynchronously@?$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@CA?AUfire_and_forget@3@UIAsyncAction@Foundation@Windows@3@@Z @ 0x180335DE8 (-cancel_asynchronously@-$await_adapter@UIAsyncAction@Foundation@Windows@winrt@@$00@impl@winrt@@C.c)
 */

__int64 __fastcall _lambda_6df262792ed19d9f37b8132f1161a915_::_lambda_invoker_cdecl_(_QWORD **a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1[1];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v2);
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncAction,1>::cancel_asynchronously((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v2);
}
