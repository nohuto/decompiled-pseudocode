/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerChangedEventArgs___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs_____::_)(Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs__)_::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerChangedEventArgs____Microsoft::WRL::FtmBase___lambda_b46eae7c97fd0c0221a3f2c2069b78bc___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs___::Invoke @ 0x1800A37E0
 * Callers:
 *     <none>
 * Callees:
 *     ?get@?$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z @ 0x1800153E0 (-get@-$static_lazy@VUDwmTrace@@@details@wil@@QEAAPEAVUDwmTrace@@P6AXXZ@Z.c)
 *     ?GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ @ 0x180057D38 (-GetInstance@CAnalogCompositorManager@@CAPEAV1@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1800A3340 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     ?IsEnabled@UDwmTrace@@SA_NE_K@Z @ 0x1800A394C (-IsEnabled@UDwmTrace@@SA_NE_K@Z.c)
 *     ?OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ @ 0x1800A3B70 (-OnMonitorChangedNotification@CAnalogCompositorManager@@AEAAJXZ.c)
 *     ?UDwmHolographicOnChanged_@UDwmTrace@@QEAAXXZ @ 0x1800A43FC (-UDwmHolographicOnChanged_@UDwmTrace@@QEAAXXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800FA010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::IDisplayManager____Windows::Foundation::Internal::AggregateType_Windows::Devices::Display::Core::DisplayManagerChangedEventArgs___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs_____::___Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs____::DelegateInvokeHelper_Microsoft::WRL::Implements_Microsoft::WRL::RuntimeClassFlags_2__Windows::Foundation::ITypedEventHandler_Windows::Devices::Display::Core::DisplayManager___Windows::Devices::Display::Core::DisplayManagerChangedEventArgs____Microsoft::WRL::FtmBase___lambda_b46eae7c97fd0c0221a3f2c2069b78bc___1_Windows::Devices::Display::Core::IDisplayManager___Windows::Devices::Display::Core::IDisplayManagerChangedEventArgs___::Invoke(
        unsigned __int8 a1,
        unsigned __int64 a2,
        __int64 a3)
{
  __int64 v4; // rdx
  __int64 v5; // rcx
  UDwmTrace *v6; // rcx
  int v7; // eax
  unsigned int v8; // ebx
  CAnalogCompositorManager *Instance; // rax
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]

  if ( UDwmTrace::IsEnabled(a1, a2) )
  {
    wil::details::static_lazy<UDwmTrace>::get(
      v5,
      (void (__cdecl *)())_lambda_87e3050d7bd177bdce03acb9ca29079f_::_lambda_invoker_cdecl_);
    UDwmTrace::UDwmHolographicOnChanged_(v6);
  }
  LOBYTE(v4) = 1;
  v7 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a3 + 56LL))(a3, v4);
  v8 = v7;
  if ( v7 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x107,
      (__int64)"clientcore\\windows\\dwm\\udwm\\analogcompositormanager.cpp",
      (const char *)(unsigned int)v7);
LABEL_6:
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(v8);
    return v8;
  }
  Instance = CAnalogCompositorManager::GetInstance();
  v8 = CAnalogCompositorManager::OnMonitorChangedNotification(Instance);
  if ( (v8 & 0x80000000) != 0 )
    goto LABEL_6;
  return v8;
}
