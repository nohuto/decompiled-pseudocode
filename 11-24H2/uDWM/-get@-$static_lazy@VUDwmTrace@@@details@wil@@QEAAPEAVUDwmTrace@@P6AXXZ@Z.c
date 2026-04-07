/*
 * XREFs of ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x1800153E0
 * Callers:
 *     ?Provider@UDwmTrace@@SAPEBU_tlgProvider_t@@XZ @ 0x1800153C0 (-Provider@UDwmTrace@@SAPEBU_tlgProvider_t@@XZ.c)
 *     _lambda_5d2a0d57000e9a8e56f274d64107aadc_::operator() @ 0x1800A2E38 (_lambda_5d2a0d57000e9a8e56f274d64107aadc_--operator().c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerChangedEventArgs___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerChangedEventArgs____Microsoft::WRL::FtmBase___lambda_b46eae7c97fd0c0221a3f2c2069b78bc___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs___::Invoke @ 0x1800A37E0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800A37E0.c)
 *     ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x1800A394C (-IsEnabled@UDwmTrace@@SA_NE_K@Z.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A3A3C (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?OnHolographicDisplayCalibrationDriverLost@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A3B44 (-OnHolographicDisplayCalibrationDriverLost@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ @ 0x1800A3B70 (-OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ.c)
 * Callees:
 *     ??1Completer@?$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ @ 0x180076304 (--1Completer@-$static_lazy@VFeatureLogging@details@wil@@@details@wil@@QEAA@XZ.c)
 *     atexit @ 0x18009B974 (atexit.c)
 */

__int64 *__fastcall wil::details::static_lazy<UDwmTrace>::get(__int64 a1, void (__cdecl *a2)())
{
  union _RTL_RUN_ONCE *v4; // [rsp+20h] [rbp-18h] BYREF
  int v5; // [rsp+28h] [rbp-10h]
  WINBOOL v6; // [rsp+40h] [rbp+8h] BYREF
  int v7; // [rsp+44h] [rbp+Ch]
  __int64 *v8; // [rsp+50h] [rbp+18h] BYREF

  v7 = HIDWORD(a1);
  v8 = 0LL;
  v6 = 0;
  if ( InitOnceBeginInitialize(&`UDwmTrace::Instance'::`2'::wrapper, 0, &v6, (LPVOID *)&v8) && v6 )
  {
    qword_180126700 = 0LL;
    dword_18012670C = 0;
    v8 = &qword_1801266F8;
    qword_1801266F8 = (__int64)&WindowFrameLogging::`vftable';
    v4 = &`UDwmTrace::Instance'::`2'::wrapper;
    byte_180126708 = 0;
    qword_180126710 = (__int64)&`UDwmTrace::StaticHandle::StaticHandle'::`2'::__hInner;
    atexit(a2);
    v5 = 0;
    wil::details::static_lazy<wil::details::FeatureLogging>::Completer::~Completer(&v4);
  }
  return v8;
}
