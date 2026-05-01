/*
 * XREFs of _lambda_33b4202f4967ef1cd2a31cded00016d1_::__lambda_33b4202f4967ef1cd2a31cded00016d1_ @ 0x18055E600
 * Callers:
 *     Windows::Internal::ComTaskPool::CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__&_::_scalar_deleting_destructor_ @ 0x18055E8C0 (Windows--Internal--ComTaskPool--CTaskWrapper__lambda_33b4202f4967ef1cd2a31cded00016d1__-_--_scal.c)
 *     ?RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEAUIApplicationViewIconLoaderNotifications@@@Z @ 0x18055E9E0 (-RuntimeClassInitialize@CWinRTAppIconLoader@@QEAAJPEAUIWinRTApplicationView@@AEBUtagSIZE@@11IPEA.c)
 * Callees:
 *     ??1?$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1800AC91C (--1-$com_ptr_t@UIImmersiveComponentCreator@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?InternalRelease@?$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ @ 0x180142264 (-InternalRelease@-$ComPtr@VCreationThreadDispatcher@@@WRL@Microsoft@@IEAAKXZ.c)
 */

__int64 __fastcall lambda_33b4202f4967ef1cd2a31cded00016d1_::__lambda_33b4202f4967ef1cd2a31cded00016d1_(__int64 *a1)
{
  wil::com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>::~com_ptr_t<IImmersiveComponentCreator,wil::err_exception_policy>(a1 + 6);
  Microsoft::WRL::ComPtr<CreationThreadDispatcher>::InternalRelease(a1 + 5);
  return Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(a1);
}
