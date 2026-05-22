/*
 * XREFs of ?PopulateDeviceInfo@DockableDeviceCollection@@AEAAJPEAVHIDDevice@@PEAUDockableDeviceInfo@@@Z @ 0x1800DEB54
 * Callers:
 *     ?OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z @ 0x1800DE7F0 (-OnDeviceAttach@DockableDeviceCollection@@MEAAJKPEAPEAUDeviceInfo@@@Z.c)
 * Callees:
 *     ??1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ @ 0x18002706C (--1IWindow@WindowManagement@ApplicationModel@Internal@Windows@winrt@@QEAA@XZ.c)
 *     ?unconditional_release_ref@?$com_ptr@Utype@?$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winrt@@@winrt@@AEAAXXZ @ 0x18002724C (-unconditional_release_ref@-$com_ptr@Utype@-$abi@UIUnknown@Foundation@Windows@winrt@@X@impl@winr.c)
 *     ??1?$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18006913C (--1-$com_ptr_t@UIMPCInputProviderBase@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18008F754 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     memset_0 @ 0x18009D598 (memset_0.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z @ 0x1800D331C (-GetHIDCapabilities@HIDDevice@@QEAAJPEAPEAU_HIDP_CAPS@@@Z.c)
 *     ?_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800D4318 (-_Log_NtStatus@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$call@AEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@?$factory_cache_entry@UThreadPool@Threading@System@Windows@winrt@@UIThreadPoolStatics@2345@@impl@winrt@@QEAA?A_PAEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@Z @ 0x1800DDF48 (--$call@AEAV_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@@-$factory_cache_entry@UThreadPool@Thread.c)
 *     winrt::impl::make_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___ @ 0x1800DE0C4 (winrt--impl--make_delegate_winrt--Windows--System--Threading--WorkItemHandler__lambda_d47f631da3.c)
 *     ??R_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@QEBA@AEBUIThreadPoolStatics@Threading@System@Windows@winrt@@@Z @ 0x1800DE230 (--R_lambda_4e2f6834dae5c2d9676db4968b0ab11c_@@QEBA@AEBUIThreadPoolStatics@Threading@System@Windo.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1801DB010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall DockableDeviceCollection::PopulateDeviceInfo(
        DockableDeviceCollection *this,
        struct HIDDevice *a2,
        struct DockableDeviceInfo *a3)
{
  __int64 v6; // r15
  int v7; // eax
  int v8; // eax
  struct _HIDP_PREPARSED_DATA *PreparsedData; // r14
  int HIDCapabilities; // ebx
  __int64 v11; // rdx
  int FeatureReportByteLength; // ebx
  int v14; // esi
  void (__fastcall ***v15)(_QWORD, __int64 *, __int64 *); // rcx
  USHORT ValueCapsLength; // [rsp+40h] [rbp-C0h] BYREF
  struct _HIDP_CAPS *v17; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v18; // [rsp+50h] [rbp-B0h] BYREF
  DockableDeviceCollection **v19; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v21; // [rsp+68h] [rbp-98h] BYREF
  __int128 v22; // [rsp+78h] [rbp-88h]
  __int64 v23; // [rsp+88h] [rbp-78h]
  DockableDeviceCollection *v24; // [rsp+90h] [rbp-70h] BYREF
  int v25; // [rsp+98h] [rbp-68h]
  int v26; // [rsp+9Ch] [rbp-64h]
  struct _HIDP_VALUE_CAPS v27; // [rsp+A0h] [rbp-60h]
  __int64 v28; // [rsp+E8h] [rbp-18h]
  __int64 *v29; // [rsp+F0h] [rbp-10h]
  struct _HIDP_VALUE_CAPS ValueCaps; // [rsp+100h] [rbp+0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+188h] [rbp+88h]

  v21 = 0LL;
  v22 = 0LL;
  v23 = 0LL;
  LODWORD(v21) = 4;
  v6 = *((_QWORD *)a2 + 2);
  v7 = RIMGetDeviceProperties(*((_QWORD *)this + 10), v6, &v21);
  if ( v7 >= 0 )
  {
    if ( DWORD2(v21) <= 0x104 )
    {
      *((_DWORD *)a3 + 18) = DWORD2(v21);
      *(_QWORD *)&v22 = (char *)a3 + 76;
      v8 = RIMGetDeviceProperties(*((_QWORD *)this + 10), v6, &v21);
      if ( v8 < 0 )
        wil::details::in1diag3::_Log_Hr(
          retaddr,
          (void *)0xAE,
          (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
          (const char *)(unsigned int)v8);
    }
  }
  else
  {
    wil::details::in1diag3::_Log_NtStatus(
      retaddr,
      (void *)0xA4,
      (int)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)v7);
  }
  PreparsedData = (struct _HIDP_PREPARSED_DATA *)*((_QWORD *)a2 + 6);
  v17 = 0LL;
  HIDCapabilities = HIDDevice::GetHIDCapabilities((PHIDP_PREPARSED_DATA *)a2, &v17);
  if ( HIDCapabilities < 0 )
  {
    v11 = 184LL;
LABEL_8:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v11,
      (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\rawinputproviders\\rim\\lib\\dockabledevicecollection.cpp",
      (const char *)(unsigned int)HIDCapabilities);
    return (unsigned int)HIDCapabilities;
  }
  memset_0(&ValueCaps, 0, sizeof(ValueCaps));
  ValueCapsLength = 1;
  HIDCapabilities = HidP_GetSpecificValueCaps(HidP_Feature, 1u, 0, 0xD0u, &ValueCaps, &ValueCapsLength, PreparsedData);
  if ( HIDCapabilities < 0 )
  {
    v11 = 196LL;
    goto LABEL_8;
  }
  FeatureReportByteLength = v17->FeatureReportByteLength;
  v14 = *(_DWORD *)a3;
  if ( this )
    (*(void (__fastcall **)(DockableDeviceCollection *))(*(_QWORD *)this + 8LL))(this);
  v20 = 0LL;
  v24 = this;
  v25 = v14;
  v26 = FeatureReportByteLength;
  v27 = ValueCaps;
  v28 = v6;
  v19 = &v24;
  winrt::impl::make_delegate_winrt::Windows::System::Threading::WorkItemHandler__lambda_d47f631da3751d72c8a8e135519addbc___(
    &v18,
    (__int64 *)&v24);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>((__int64 *)&v24);
  v19 = (DockableDeviceCollection **)&v18;
  v29 = &qword_1802517F8;
  _InterlockedIncrement64(&qword_1802517F8);
  if ( winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPool,winrt::Windows::System::Threading::IThreadPoolStatics> )
  {
    _lambda_4e2f6834dae5c2d9676db4968b0ab11c_::operator()(
      &v19,
      (__int64)&v17,
      (__int64)&winrt::impl::factory_cache_entry_v<winrt::Windows::System::Threading::ThreadPool,winrt::Windows::System::Threading::IThreadPoolStatics>);
    _InterlockedDecrement64(&qword_1802517F8);
  }
  else
  {
    _InterlockedDecrement64(&qword_1802517F8);
    winrt::impl::factory_cache_entry<winrt::Windows::System::Threading::ThreadPool,winrt::Windows::System::Threading::IThreadPoolStatics>::call<_lambda_4e2f6834dae5c2d9676db4968b0ab11c_ &>(
      v15,
      (__int64)&v17,
      (__int64)&v19);
  }
  winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow::~IWindow((winrt::Windows::Internal::ApplicationModel::WindowManagement::IWindow *)&v17);
  if ( v18 )
    winrt::com_ptr<winrt::impl::abi<winrt::Windows::Foundation::IUnknown,void>::type>::unconditional_release_ref(&v18);
  wil::com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>::~com_ptr_t<IMPCInputProviderBase,wil::err_exception_policy>(&v20);
  return 0LL;
}
