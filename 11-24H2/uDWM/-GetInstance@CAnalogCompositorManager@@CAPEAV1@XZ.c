/*
 * XREFs of ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180057D38
 * Callers:
 *     ?SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z @ 0x180055EC4 (-SetBackStop@CDesktopManager@@SAXPEAVCAccent@@@Z.c)
 *     ?ModeChange@CAnalogCompositorManager@@SAJXZ @ 0x180055EFC (-ModeChange@CAnalogCompositorManager@@SAJXZ.c)
 *     ?EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ @ 0x180056D54 (-EnumerateOutputs@CDWMDisplaySet@@AEAAJXZ.c)
 *     ?SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z @ 0x18006FBCC (-SendSwitchModeCommand@CDesktopManager@@SAJ_K@Z.c)
 *     wistd::__function::__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_::operator() @ 0x1800A3020 (wistd--__function--__func__lambda_1fe009015b5481886de644cd00cd9360__void___cdecl(void)_--operato.c)
 *     wistd::__function::__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_::operator() @ 0x1800A3040 (wistd--__function--__func__lambda_68ab246ca29dbf1f5c5163cf5c63f8ba__void___cdecl(void)_--operato.c)
 *     ?InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A345C (-InitializeDisplayManager@CAnalogCompositorManager@@AEAAXXZ.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerChangedEventArgs___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerChangedEventArgs____Microsoft::WRL::FtmBase___lambda_b46eae7c97fd0c0221a3f2c2069b78bc___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs___::Invoke @ 0x1800A37E0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1800A37E0.c)
 *     ?OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ @ 0x1800A3A3C (-OnHolographicDisplayCalibrationDriverDetected@CAnalogCompositorManager@@AEAAXXZ.c)
 *     ?SetExclusiveView@CAnalogCompositorManager@@SAJI@Z @ 0x1800A41B4 (-SetExclusiveView@CAnalogCompositorManager@@SAJI@Z.c)
 * Callees:
 *     ??0CAnalogCompositorManager@@AEAA@XZ @ 0x180085384 (--0CAnalogCompositorManager@@AEAA@XZ.c)
 *     atexit @ 0x18009B974 (atexit.c)
 *     _Init_thread_footer @ 0x18009BBF8 (_Init_thread_footer.c)
 *     _Init_thread_header @ 0x18009BC60 (_Init_thread_header.c)
 */

// Hidden C++ exception states: #wind=1
struct CAnalogCompositorManager *CAnalogCompositorManager::GetInstance(void)
{
  CAnalogCompositorManager *v1; // rcx

  if ( dword_180129C88 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->ThreadLocalStoragePointer + (unsigned int)tls_index)
                                   + 4LL) )
  {
    Init_thread_header(&dword_180129C88);
    if ( dword_180129C88 == -1 )
    {
      CAnalogCompositorManager::CAnalogCompositorManager(v1);
      atexit(CAnalogCompositorManager::GetInstance_::_2_::_dynamic_atexit_destructor_for__singletonAnalogCompositorManager__);
      Init_thread_footer(&dword_180129C88);
    }
  }
  return (struct CAnalogCompositorManager *)&qword_180129C90;
}
