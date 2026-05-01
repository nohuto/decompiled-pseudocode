/*
 * XREFs of ?AllowAutoAppRestartOnCrash@XamlLauncher@@AEBA_NXZ @ 0x1801C6A04
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::StartExperienceManager___Windows::Internal::Shell::Experience::IStartExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::StartExperienceManager___IInspectable_____lambda_1706adbb0a4fde50e42de4cc9cbee443___1_Windows::Internal::Shell::Experience::IStartExperienceManager___IInspectable___::Invoke @ 0x1801C63B0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1801C63B0.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::CortanaExperienceManager___Windows::Internal::Shell::Experience::ICortanaExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::CortanaExperienceManager___IInspectable_____lambda_c8c6bcdae749e4fc3a1182ab2efb8727___1_Windows::Internal::Shell::Experience::ICortanaExperienceManager___IInspectable___::Invoke @ 0x1802ABB50 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802ABB50.c)
 * Callees:
 *     <none>
 */

char __fastcall XamlLauncher::AllowAutoAppRestartOnCrash(XamlLauncher *this)
{
  char v1; // bl
  XamlLauncher *v3; // [rsp+50h] [rbp+8h] BYREF
  DWORD v4; // [rsp+58h] [rbp+10h] BYREF
  DWORD v5; // [rsp+60h] [rbp+18h] BYREF

  v3 = this;
  v5 = 4;
  v4 = 0;
  v1 = 1;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\ImmersiveShell\\Launcher",
          L"AllowAutoAppRestartOnCrash",
          0x10000012u,
          &v4,
          &v3,
          &v5) )
  {
    if ( v4 == 4 )
    {
      if ( (unsigned int)v3 <= 1 )
        return (_DWORD)v3 == 1;
    }
    else if ( v5 == 4 && (unsigned __int16)((_WORD)v3 - 48) <= 1u )
    {
      return (_WORD)v3 == 49;
    }
  }
  return v1;
}
