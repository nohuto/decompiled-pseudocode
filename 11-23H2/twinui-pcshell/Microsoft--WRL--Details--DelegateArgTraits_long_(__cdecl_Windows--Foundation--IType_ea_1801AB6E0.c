/*
 * XREFs of Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_c7655bcd4a5932dfcce51b3c5828b6a0___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke @ 0x1801AB6E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z @ 0x180057B70 (-OnSearchAppVisibilityChanged@XamlLauncher@@UEAAX_N@Z.c)
 *     ?EnsureStackSnapshot@?$DelegateTraits@$0?0@WRL@Microsoft@@SAXJ@Z @ 0x1801A0934 (-EnsureStackSnapshot@-$DelegateTraits@$0-0@WRL@Microsoft@@SAXJ@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

__int64 __fastcall Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::___Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_c7655bcd4a5932dfcce51b3c5828b6a0___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke(
        __int64 a1)
{
  __int64 v2; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx

  v2 = *(_QWORD *)(*(_QWORD *)(a1 + 16) + 392LL);
  v3 = 0;
  if ( v2 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v2 + 136LL))(v2) )
    {
      LOBYTE(v4) = 1;
      XamlLauncher::OnSearchAppVisibilityChanged((XamlLauncher *)(*(_QWORD *)(a1 + 16) + 72LL), v4);
    }
  }
  else
  {
    v3 = -2147023728;
    Microsoft::WRL::DelegateTraits<-1>::EnsureStackSnapshot(0x80070490);
  }
  return v3;
}
