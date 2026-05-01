/*
 * XREFs of _lambda_6825ce5d1ace0209a4941c0102e86eff_::__lambda_6825ce5d1ace0209a4941c0102e86eff_ @ 0x180134DD8
 * Callers:
 *     CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___::_CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___ @ 0x180134B7C (CIconLoadingNotificationCallback__lambda_6825ce5d1ace0209a4941c0102e86eff___--_CIconLoadingNotif.c)
 *     ?LoadIconW@CIconLoaderInternal@@UEAAJPEAUIApplicationView@@AEBUtagSIZE@@1IPEAUISwitchItem@@@Z @ 0x1804A1800 (-LoadIconW@CIconLoaderInternal@@UEAAJPEAUIApplicationView@@AEBUtagSIZE@@1IPEAUISwitchItem@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ @ 0x18004A9BC (-InternalRelease@-$ComPtr@UIWICBitmapEncoder@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_6825ce5d1ace0209a4941c0102e86eff_::__lambda_6825ce5d1ace0209a4941c0102e86eff_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IWICBitmapEncoder>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(a1);
}
