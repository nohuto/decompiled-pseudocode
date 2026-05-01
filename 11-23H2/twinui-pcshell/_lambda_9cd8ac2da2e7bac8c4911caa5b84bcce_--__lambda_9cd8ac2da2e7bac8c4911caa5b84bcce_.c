/*
 * XREFs of _lambda_9cd8ac2da2e7bac8c4911caa5b84bcce_::__lambda_9cd8ac2da2e7bac8c4911caa5b84bcce_ @ 0x1803AC2F0
 * Callers:
 *     _CAppViewManager::_WindowProvidedWorker_::_1_::dtor$5 @ 0x1803BA4BC (_CAppViewManager--_WindowProvidedWorker_--_1_--dtor$5.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_9cd8ac2da2e7bac8c4911caa5b84bcce_::__lambda_9cd8ac2da2e7bac8c4911caa5b84bcce_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 4);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
