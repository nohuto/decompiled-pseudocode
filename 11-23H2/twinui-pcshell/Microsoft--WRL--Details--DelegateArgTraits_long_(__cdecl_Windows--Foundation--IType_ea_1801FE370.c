/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::UI::WindowId_::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::UI::WindowId___lambda_d8817a5bf489acbf44c898e094114795___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::UI::WindowId___lambda_d8817a5bf489acbf44c898e094114795___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId_ @ 0x1801FE370
 * Callers:
 *     Microsoft::WRL::Callback_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::UI::WindowId___lambda_d8817a5bf489acbf44c898e094114795___ @ 0x1801FB4B0 (Microsoft--WRL--Callback_Windows--Foundation--ITypedEventHandler_Windows--Internal-_ea_1801FB4B0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____Windows::UI::WindowId_::___Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId__::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::UI::WindowId___lambda_d8817a5bf489acbf44c898e094114795___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::UI::WindowId___lambda_d8817a5bf489acbf44c898e094114795___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___Windows::UI::WindowId_(
        __int64 a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::CortanaExperienceManager *,Windows::UI::WindowId>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 16) = *a2;
  *(_QWORD *)a1 = off_1807C6208;
  return a1;
}
