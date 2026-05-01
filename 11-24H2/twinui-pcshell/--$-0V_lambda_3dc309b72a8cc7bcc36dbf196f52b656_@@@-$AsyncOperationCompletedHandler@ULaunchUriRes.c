/*
 * XREFs of ??$?0V_lambda_3dc309b72a8cc7bcc36dbf196f52b656_@@@?$AsyncOperationCompletedHandler@ULaunchUriResult@System@Windows@winrt@@@Foundation@Windows@winrt@@QEAA@V_lambda_3dc309b72a8cc7bcc36dbf196f52b656_@@@Z @ 0x18061C62C
 * Callers:
 *     ?InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV?$tip_test@V?$merged_data@U_tip_CopilotHardwareKeyInvokedTest@@U1@@details@tip2@@@tip2@@@Z @ 0x180625E74 (-InvokeCopilotOrCustomOption@CopilotHotkeyManager@@QEAA_NW4IMMERSIVE_HOT_KEY_ID@@AEAV-$tip_test@.c)
 * Callees:
 *     ??1?$unique_storage@U?$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1?DestroyWindow@@YAH0@ZU?$integral_constant@_K$0A@@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x1800C6F08 (--1-$unique_storage@U-$resource_policy@PEAUHWND__@@P6AHPEAU1@@Z$1-DestroyWindow@@YAH0@ZU-$integr.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??2@YAPEAX_K@Z @ 0x1802D2108 (--2@YAPEAX_K@Z.c)
 */

// Hidden C++ exception states: #wind=1
_QWORD *__fastcall winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>(
        _QWORD *a1,
        __int64 a2)
{
  char *v5; // [rsp+28h] [rbp-20h]

  v5 = (char *)operator new(0x40uLL);
  *((_DWORD *)v5 + 2) = 1;
  *((_DWORD *)v5 + 4) = *(_DWORD *)a2;
  *((_QWORD *)v5 + 3) = *(_QWORD *)(a2 + 8);
  *((_DWORD *)v5 + 8) = *(_DWORD *)(a2 + 16);
  *(_OWORD *)(v5 + 36) = *(_OWORD *)(a2 + 20);
  *((_QWORD *)v5 + 7) = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a2 + 40) = 0LL;
  _InterlockedIncrement(&`winrt::get_module_lock'::`2'::s_lock);
  *(_QWORD *)v5 = &winrt::impl::delegate<winrt::Windows::Foundation::AsyncOperationCompletedHandler<winrt::Windows::System::LaunchUriResult>,_lambda_6b9403a3ca1a595497445348084892d2_>::`vftable';
  *a1 = v5;
  wil::details::unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<HWND__ *,int (*)(HWND__ *),&int DestroyWindow(HWND__ *),wistd::integral_constant<unsigned __int64,0>,HWND__ *,HWND__ *,0,std::nullptr_t>>((HWND *)(a2 + 40));
  return a1;
}
