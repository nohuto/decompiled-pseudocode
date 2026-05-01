/*
 * XREFs of _lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_::__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_ @ 0x1803AC318
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9___1_long_::_scalar_deleting_destructor_ @ 0x1803AD520 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1803AD520.c)
 *     ?ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z @ 0x1803ADAF0 (-ConsolidateView@CAppViewManager@@UEAAJPEAUIImmersiveApplication@@0@Z.c)
 *     _CAppViewManager::ConsolidateView_::_1_::dtor$4 @ 0x1803ADD02 (_CAppViewManager--ConsolidateView_--_1_--dtor$4.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_::__lambda_ea33e44b6ee596ea3f6a9c8b2dcda2b9_(__int64 *a1)
{
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 2);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(a1 + 1);
  return Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease(a1);
}
