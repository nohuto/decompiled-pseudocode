/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::_)(IInspectable___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___1_IInspectable___IInspectable___::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___1_IInspectable___IInspectable___ @ 0x1802858A8
 * Callers:
 *     Microsoft::WRL::Callback_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___ @ 0x1802856BC (Microsoft--WRL--Callback_Windows--Foundation--IEventHandler_IInspectable_____lambda_01e36ce14ec0.c)
 * Callees:
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::IEventHandler_impl_IInspectable___::___IInspectable___IInspectable____::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___1_IInspectable___IInspectable___::DelegateInvokeHelper_Windows::Foundation::IEventHandler_IInspectable_____lambda_01e36ce14ec0819db01b791ce79c1b63___1_IInspectable___IInspectable___(
        __int64 a1,
        _QWORD *a2)
{
  *(_QWORD *)a1 = &Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>::`vftable';
  *(_DWORD *)(a1 + 12) = 1;
  *(_QWORD *)a1 = &Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::IEventHandler<IInspectable *>>::`vftable';
  if ( Microsoft::WRL::Details::ModuleBase::module_ )
    (*(void (__fastcall **)(struct Microsoft::WRL::Details::ModuleBase *))(*(_QWORD *)Microsoft::WRL::Details::ModuleBase::module_
                                                                         + 8LL))(Microsoft::WRL::Details::ModuleBase::module_);
  *(_QWORD *)(a1 + 16) = 0LL;
  if ( (_QWORD *)(a1 + 16) != a2 )
  {
    *(_QWORD *)(a1 + 16) = *a2;
    *a2 = 0LL;
  }
  *(_QWORD *)(a1 + 24) = a2[1];
  *(_QWORD *)a1 = off_1807CBD68;
  return a1;
}
