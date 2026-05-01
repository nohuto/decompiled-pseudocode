/*
 * XREFs of _lambda_2c78e3d2d08e88abfa65ae966e57a982_::operator() @ 0x180144938
 * Callers:
 *     ?OnShellReady@CToastCenterExperienceManager@@AEAAJXZ @ 0x1800E562C (-OnShellReady@CToastCenterExperienceManager@@AEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18009D65C (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@?$ComPtr@UIToastCenterExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x180144188 (--$As@UIBaseExperienceManager@Experience@Shell@Internal@Windows@@@-$ComPtr@UIToastCenterExperien.c)
 *     ??0?$RuntimeClass@U?$RuntimeClassFlags@$01@WRL@Microsoft@@U?$ITypedEventHandler@PEAUIBaseExperienceManager@Experience@Shell@Internal@Windows@@PEAUIVisibilityChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@QEAA@XZ @ 0x180144BF0 (--0-$RuntimeClass@U-$RuntimeClassFlags@$01@WRL@Microsoft@@U-$ITypedEventHandler@PEAUIBaseExperie.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::IControlCenterExperienceManager____IInspectable___::_)(Windows::Internal::Shell::Experience::IControlCenterExperienceManager___IInspectable__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___IInspectable_____lambda_41a63a9143889946bda68e2f9d1ff7d6___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___IInspectable___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___IInspectable_____lambda_41a63a9143889946bda68e2f9d1ff7d6___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___IInspectable___ @ 0x180144C48 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180144C48.c)
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::IControlCenterExperienceManager____Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs_____::_)(Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_b66b1f45d3c83dcb8ce197914a9d1fcc___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_b66b1f45d3c83dcb8ce197914a9d1fcc___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___ @ 0x180144CC0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_180144CC0.c)
 *     __security_check_cookie @ 0x1801C6750 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1801C6900 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_2c78e3d2d08e88abfa65ae966e57a982_::operator()(__int64 **a1)
{
  __int64 v2; // rdi
  __int64 (__fastcall *v3)(__int64, __int64, __int64 *); // rbx
  __int64 *v4; // rsi
  int v5; // ebx
  __int64 v6; // r14
  _QWORD *v7; // r12
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, GUID *, __int64); // rbx
  _QWORD *v10; // rax
  _QWORD *v11; // rbx
  int v12; // eax
  unsigned int v13; // r15d
  void *v14; // rax
  __int64 v15; // rsi
  int v16; // eax
  void *v17; // rax
  __int64 v18; // rdi
  int v19; // eax
  __int64 v21; // rdx
  __int64 v22; // rdx
  __int64 v23; // [rsp+20h] [rbp-50h] BYREF
  __int64 v24[3]; // [rsp+28h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+58h] [rbp-18h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+28h]

  v2 = **a1;
  v3 = *(__int64 (__fastcall **)(__int64, __int64, __int64 *))(*(_QWORD *)v2 + 48LL);
  v4 = a1[1];
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v4);
  v26 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.ControlCenter",
    0x2Fu,
    0x2Eu);
  v5 = v3(v2, v26, v4);
  if ( v5 < 0 )
  {
    v21 = 653LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v21,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
      (const char *)(unsigned int)v5);
    return (unsigned int)v5;
  }
  v6 = (__int64)a1[2];
  v7 = (_QWORD *)(v6 + 728);
  v8 = *v4;
  v9 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64))*v4;
  Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)(v6 + 728));
  v5 = v9(v8, &GUID_d669a58e_6b18_4d1d_9004_a8862adb0a20, v6 + 728);
  if ( v5 < 0 )
  {
    v21 = 655LL;
    goto LABEL_23;
  }
  v10 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
  v11 = v10;
  if ( v10 )
  {
    Microsoft::WRL::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>>::RuntimeClass<Microsoft::WRL::RuntimeClassFlags<2>,Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::Experience::IBaseExperienceManager *,Windows::Internal::Shell::Experience::IVisibilityChangedEventArgs *>>(v10);
    v11[2] = v6;
    *v11 = off_1807BA9B8;
  }
  else
  {
    v11 = 0LL;
  }
  v24[1] = (__int64)v11;
  v24[0] = 0LL;
  v12 = Microsoft::WRL::ComPtr<Windows::Internal::Shell::Experience::IToastCenterExperienceManager>::As<Windows::Internal::Shell::Experience::IBaseExperienceManager>(
          (__int64 (__fastcall ****)(_QWORD, GUID *, __int64 *))(v6 + 728),
          v24);
  v13 = v12;
  if ( v12 < 0 )
  {
    v22 = 668LL;
  }
  else
  {
    v12 = (*(__int64 (__fastcall **)(__int64, _QWORD *, __int64))(*(_QWORD *)v24[0] + 64LL))(v24[0], v11, v6 + 752);
    v13 = v12;
    if ( v12 >= 0 )
    {
      v23 = v6;
      v14 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v14 )
        v15 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::IControlCenterExperienceManager____Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs_____::___Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_b66b1f45d3c83dcb8ce197914a9d1fcc___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::ViewPositionChangedEventArgs_____lambda_b66b1f45d3c83dcb8ce197914a9d1fcc___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___Windows::Internal::Shell::Experience::IViewPositionChangedEventArgs___(
                v14,
                &v23);
      else
        v15 = 0LL;
      v24[2] = v15;
      v16 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v7 + 72LL))(*v7, v15, v6 + 760);
      v13 = v16;
      if ( v16 < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x2A7,
          (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
          (const char *)(unsigned int)v16);
      }
      else
      {
        v23 = v6;
        v17 = operator new(0x18uLL, (const struct std::nothrow_t *)&std::nothrow);
        if ( v17 )
          v18 = Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Foundation::Internal::AggregateType_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___Windows::Internal::Shell::Experience::IControlCenterExperienceManager____IInspectable___::___Windows::Internal::Shell::Experience::IControlCenterExperienceManager___IInspectable____::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___IInspectable_____lambda_41a63a9143889946bda68e2f9d1ff7d6___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___IInspectable___::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::Experience::ControlCenterExperienceManager___IInspectable_____lambda_41a63a9143889946bda68e2f9d1ff7d6___1_Windows::Internal::Shell::Experience::IControlCenterExperienceManager___IInspectable___(
                  v17,
                  &v23);
        else
          v18 = 0LL;
        v23 = v18;
        v19 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*v7 + 88LL))(*v7, v18, v6 + 768);
        v13 = v19;
        if ( v19 < 0 )
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x2B1,
            (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
            (const char *)(unsigned int)v19);
        else
          v13 = 0;
        if ( v18 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
      goto LABEL_18;
    }
    v22 = 669LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v22,
    (int)"pcshell\\twinui\\experiencemanagers\\lib\\toastcenterexperiencemanager.cpp",
    (const char *)(unsigned int)v12);
LABEL_18:
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease(v24);
  if ( v11 )
    (*(void (__fastcall **)(_QWORD *))(*v11 + 16LL))(v11);
  return v13;
}
