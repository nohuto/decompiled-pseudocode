/*
 * XREFs of ?_lambda_invoker_cdecl_@_lambda_4cff5cac03f7c41104750b1d0579036a_@@CA@PEAX@Z @ 0x1803293D0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalAddRef@?$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ @ 0x18004C654 (-InternalAddRef@-$ComPtr@UIAppLayoutOperationItem@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?cancel_asynchronously@?$await_adapter@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@winrt@@$00@impl@winrt@@CA?AUfire_and_forget@3@U?$IAsyncOperation@W4GamingPostureSystemDialogResult@Posture@GamingExperiences@Internal@Windows@winrt@@@Foundation@Windows@3@@Z @ 0x180335D94 (-cancel_asynchronously@-$await_adapter@U-$IAsyncOperation@W4GamingPostureSystemDialogResult@Post.c)
 */

__int64 __fastcall _lambda_4cff5cac03f7c41104750b1d0579036a_::_lambda_invoker_cdecl_(_QWORD **a1)
{
  __int64 v2; // [rsp+30h] [rbp+8h] BYREF

  v2 = *a1[1];
  Microsoft::WRL::ComPtr<IAppLayoutOperationItem>::InternalAddRef(&v2);
  return winrt::impl::await_adapter<winrt::Windows::Foundation::IAsyncOperation<enum winrt::Windows::Internal::GamingExperiences::Posture::GamingPostureSystemDialogResult>,1>::cancel_asynchronously((winrt::Windows::Internal::Shell::PlatformExtensions::ISnapLayoutManagerExtension *)&v2);
}
