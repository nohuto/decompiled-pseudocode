/*
 * XREFs of ?OnHolographicDisplayCalibrationDriverLost@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A3B44
 * Callers:
 *     wistd::__function::__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_::operator() @ 0x1800A3040 (wistd--__function--__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_--operato.c)
 * Callees:
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x1800153E0 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x1800A394C (-IsEnabled@UDwmTrace@@SA_NE_K@Z.c)
 *     ?UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ @ 0x1800A43A8 (-UDwmHolographicDeviceDriverLost_@UDwmTrace@@QEAAXXZ.c)
 */

void __fastcall CAnalogCompositorManager::OnHolographicDisplayCalibrationDriverLost(CAnalogCompositorManager *this)
{
  __int64 v1; // rcx
  UDwmTrace *v2; // rcx

  if ( UDwmTrace::IsEnabled((__int64)this) )
  {
    wil::details::static_lazy<UDwmTrace>::get(
      v1,
      (void (__cdecl *)())_lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_);
    UDwmTrace::UDwmHolographicDeviceDriverLost_(v2);
  }
}
