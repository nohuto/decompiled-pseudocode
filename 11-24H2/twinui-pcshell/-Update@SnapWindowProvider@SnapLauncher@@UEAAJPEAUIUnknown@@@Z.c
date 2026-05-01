/*
 * XREFs of ?Update@SnapWindowProvider@SnapLauncher@@UEAAJPEAUIUnknown@@@Z @ 0x1805C1F40
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?unconditional_release_ref@?$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ @ 0x180047190 (-unconditional_release_ref@-$com_ptr@UISnapComponent@@@winrt@@AEAAXXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1?$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180294914 (--1-$com_ptr_t@UIApplicationActivationManager@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJHPEAPEAUIInspectable@@@ZH@Z @ 0x18038C020 (--$SetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ??$Site@UIServiceProvider@@@SnapWindowProvider@SnapLauncher@@AEAA?AU?$com_ptr@UIServiceProvider@@@winrt@@XZ @ 0x1805C19D8 (--$Site@UIServiceProvider@@@SnapWindowProvider@SnapLauncher@@AEAA-AU-$com_ptr@UIServiceProvider@.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall SnapLauncher::SnapWindowProvider::Update(
        SnapLauncher::SnapWindowProvider *this,
        struct IUnknown *a2)
{
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 (__fastcall ***v8)(_QWORD, GUID *, __int64 *); // r8
  __int64 v9; // rax
  __int64 v11; // [rsp+30h] [rbp-40h] BYREF
  __int64 v12; // [rsp+38h] [rbp-38h] BYREF
  __int64 *v13; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v15; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  v11 = 0LL;
  QueryInterface = a2->lpVtbl->QueryInterface;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  v5 = ((__int64 (__fastcall *)(struct IUnknown *, GUID *, __int64 *))QueryInterface)(
         a2,
         &GUID_8a43ed9f_f4e6_4421_acf9_1dab2986820c,
         &v11);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 47LL;
LABEL_5:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v7,
      (int)"pcshell\\twinui\\snapcomponent\\lib\\snaplauncher.cpp",
      (const char *)(unsigned int)v5);
    goto LABEL_12;
  }
  v15 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SnapWindow.Id", 0xEu, 0xDu);
  v5 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<int>(
         (Windows::Internal::ShellHelpers::PropertySetHelper *)&v11,
         v15,
         v8);
  v6 = v5;
  if ( v5 < 0 )
  {
    v7 = 48LL;
    goto LABEL_5;
  }
  SnapLauncher::SnapWindowProvider::Site<IServiceProvider>(
    (SnapLauncher::SnapWindowProvider *)((char *)this - 16),
    (void **)&v13);
  if ( v13 )
  {
    v9 = *v13;
    v12 = 0LL;
    if ( (*(int (__fastcall **)(__int64 *, __int64 *, GUID *, __int64 *))(v9 + 24))(
           v13,
           &qword_1807B7900,
           &GUID_e1380b20_f578_40aa_bb7d_a22bd11b0836,
           &v12) >= 0 )
      (*(void (__fastcall **)(__int64, struct IUnknown *))(*(_QWORD *)v12 + 24LL))(v12, a2);
    wil::com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>::~com_ptr_t<IApplicationActivationManager,wil::err_returncode_policy>(&v12);
    if ( v13 )
      winrt::com_ptr<ISnapComponent>::unconditional_release_ref((__int64 *)&v13);
  }
  v6 = 0;
LABEL_12:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v11);
  return v6;
}
