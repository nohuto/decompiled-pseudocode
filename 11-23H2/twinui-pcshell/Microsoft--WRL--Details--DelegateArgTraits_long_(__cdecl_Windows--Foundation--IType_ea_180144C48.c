/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::IControlCenterExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IControlCenterExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___IInspectable_____lambda_41a63a9143889946bda68e2f9d1ff7d6___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___IInspectable___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___IInspectable_____lambda_41a63a9143889946bda68e2f9d1ff7d6___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___IInspectable___ @ 0x180144C48
 * Callers:
 *     _lambda_2c78e3d2d08e88abfa65ae966e57a982_::operator() @ 0x180144938 (_lambda_2c78e3d2d08e88abfa65ae966e57a982_--operator().c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::IControlCenterExperienceManager____IInspectable___::___Windows::Internal::Shell::Experience::IControlCenterExperienceManager___IInspectable____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___IInspectable_____lambda_41a63a9143889946bda68e2f9d1ff7d6___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___IInspectable___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___IInspectable_____lambda_41a63a9143889946bda68e2f9d1ff7d6___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___IInspectable___(
        __int64 a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::ControlCenterExperienceManager *,IInspectable *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 16) = *a2;
  *(_QWORD *)a1 = off_1807BAA58;
  return a1;
}
