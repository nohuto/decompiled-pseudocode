/*
 * XREFs of ??1?$ComPtr@VPresentationRequestedArgs@@@WRL@Microsoft@@QEAA@XZ @ 0x1802E309C
 * Callers:
 *     _CApplicationManager::_HandleWindowingEnvironmentSettingsRequest_::_1_::dtor$21 @ 0x1806D9CE0 (_CApplicationManager--_HandleWindowingEnvironmentSettingsRequest_--_1_--dtor$21.c)
 *     _wil::MakeOrThrow_PresentationRequestedArgs_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings___IApplicationView____::_1_::dtor$0 @ 0x1806DF124 (_wil--MakeOrThrow_PresentationRequestedArgs_Windows--Internal--Shell--ViewManagerInterop--IWindo.c)
 *     _wil::MakeOrThrow_PresentationRequestedArgs_Windows::Internal::Shell::ViewManagerInterop::IWindowingEnvironmentSettings___IApplicationView___unsigned_int_&__::_1_::dtor$0 @ 0x1806DF151 (_wil--MakeOrThrow_PresentationRequestedArgs_Windows--Internal--Shell--ViewManagerIn_ea_1806DF151.c)
 * Callees:
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICustomShellExperienceRepository@CustomShell@Shell@Internal@Windows@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1802EA2E0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$00@WRL@Microsoft@@$00$00$0A@VFtmBase@23@UICust.c)
 */

__int64 __fastcall Microsoft::WRL::ComPtr<PresentationRequestedArgs>::~ComPtr<PresentationRequestedArgs>(__int64 *a1)
{
  __int64 result; // rax

  result = *a1;
  if ( *a1 )
  {
    *a1 = 0LL;
    return Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<1>,1,1,0,Microsoft::WRL::FtmBase,Windows::Internal::Shell::CustomShell::ICustomShellExperienceRepository>::Release(result);
  }
  return result;
}
