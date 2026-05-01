/*
 * XREFs of ?RuntimeClassInitialize@MeetNowExperienceManager@@QEAAJPEAUIServiceProvider@@@Z @ 0x1803CBA68
 * Callers:
 *     ??$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details@WRL@Microsoft@@YAJPEAPEAUIInspectable@@AEAPEAUIServiceProvider@@@Z @ 0x1803C7424 (--$MakeAndInitialize@VMeetNowExperienceManager@@UIInspectable@@AEAPEAUIServiceProvider@@@Details.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??4?$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z @ 0x180020A48 (--4-$ComPtr@UIDWriteTextFormat@@@WRL@Microsoft@@QEAAAEAV012@PEAUIDWriteTextFormat@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?reset@?$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ @ 0x18004D04C (-reset@-$com_ptr_t@UIUwpWindowWrapperInternal@@Uerr_exception_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z @ 0x18005F010 (-AddTestAumid@CSingleViewShellExperience@@QEAAJPEAUHSTRING__@@@Z.c)
 *     ?RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceProvider@@PEAUHSTRING__@@2@Z @ 0x1800859D8 (-RuntimeClassInitialize@CSingleViewShellExperience@@QEAAJPEAUIWeakReferenceSource@@PEAUIServiceP.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$?0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z @ 0x180122480 (--$-0PEBG@HStringReference@Wrappers@WRL@Microsoft@@QEAA@AEBQEBGUDummy@Details@23@@Z.c)
 *     ?ReportUsage@?$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4ReportingKind@3@_K@Z @ 0x1801EA19C (-ReportUsage@-$FeatureImpl@U__WilFeatureTraits_Feature_MACFlyout@@@details@wil@@QEAAX_NW4Reporti.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall MeetNowExperienceManager::RuntimeClassInitialize(
        MeetNowExperienceManager *this,
        struct IServiceProvider *a2)
{
  HSTRING *v4; // rdi
  HSTRING v5; // rbx
  int v6; // ebx
  unsigned int v7; // r8d
  __int64 v8; // rdx
  HSTRING_HEADER *v10; // rax
  HRESULT (__stdcall *QueryService)(IServiceProvider *, const GUID *const, const IID *const, void **); // rbx
  HRESULT (__stdcall *v12)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  HRESULT (__stdcall *v13)(IServiceProvider *, const GUID *const, const IID *const, void **); // rdi
  __int64 v14; // r9
  struct IServiceProviderVtbl *lpVtbl; // rax
  int v16; // eax
  unsigned __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 (__fastcall **v20)(_QWORD, GUID *, __int64 *); // rax
  __int64 v21; // rcx
  __int64 (__fastcall ***v22)(_QWORD, GUID *, __int64 *); // [rsp+30h] [rbp-19h] BYREF
  __int64 v23; // [rsp+38h] [rbp-11h] BYREF
  HSTRING_HEADER v24; // [rsp+40h] [rbp-9h] BYREF
  HSTRING v25; // [rsp+58h] [rbp+Fh]
  HSTRING_HEADER hstringHeader; // [rsp+60h] [rbp+17h] BYREF
  HSTRING v27; // [rsp+78h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+A8h] [rbp+5Fh]

  v4 = (HSTRING *)((char *)this + 184);
  v27 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &hstringHeader,
    L"Windows.Internal.ShellExperience.MeetNow",
    0x29u,
    0x28u);
  v5 = v27;
  v25 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(
    &v24,
    L"Microsoft.Windows.ShellExperienceHost_cw5n1h2txyewy!App",
    0x38u,
    0x37u);
  v6 = CSingleViewShellExperience::RuntimeClassInitialize(
         v4,
         (struct IWeakReferenceSource *)(((unsigned __int64)this + 8) & ((unsigned __int128)-(__int128)(unsigned __int64)this >> 64)),
         a2,
         v25,
         v5);
  if ( v6 < 0 )
  {
    v8 = 147LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v8,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)(unsigned int)v6);
    return (unsigned int)v6;
  }
  v10 = Microsoft::WRL::Wrappers::HStringReference::HStringReference(&v24, (const WCHAR **)&off_18075D208, v7);
  v6 = CSingleViewShellExperience::AddTestAumid((CSingleViewShellExperience *)v4, (HSTRING)v10[1].Reserved.Reserved1);
  if ( v6 < 0 )
  {
    v8 = 148LL;
    goto LABEL_3;
  }
  Microsoft::WRL::ComPtr<IDWriteTextFormat>::operator=((__int64 *)this + 9, (__int64)this);
  *((_DWORD *)this + 61) = 6;
  QueryService = a2->lpVtbl->QueryService;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)this + 8);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, GUID *, GUID *, char *))QueryService)(
         a2,
         &IID_IImmersiveWindowMessageService,
         &GUID_fc62ce95_8396_401a_b74f_88df0d75e112,
         (char *)this + 64);
  if ( v6 < 0 )
  {
    v8 = 155LL;
    goto LABEL_3;
  }
  v6 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, unsigned __int64, char *))(**((_QWORD **)this + 8) + 24LL))(
         *((_QWORD *)this + 8),
         0LL,
         ((unsigned __int64)this + 32) & -(__int64)(this != 0LL),
         (char *)this + 792);
  if ( v6 < 0 )
  {
    v8 = 156LL;
    goto LABEL_3;
  }
  v12 = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 10);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v12)(
         a2,
         &SID_IImmersiveMonitorService,
         &GUID_4d4c1e64_e410_4faa_bafa_59ca069bfec2,
         (char *)this + 80);
  if ( v6 < 0 )
  {
    v8 = 158LL;
    goto LABEL_3;
  }
  v13 = a2->lpVtbl->QueryService;
  wil::com_ptr_t<IUwpWindowWrapperInternal,wil::err_exception_policy>::reset((__int64 *)this + 11);
  v6 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, char *))v13)(
         a2,
         &SID_InputHostLayout,
         &GUID_3a67c20b_df2d_4437_a761_0c41b441ac25,
         (char *)this + 88);
  if ( v6 < 0 )
  {
    v8 = 159LL;
    goto LABEL_3;
  }
  wil::details::FeatureImpl<__WilFeatureTraits_Feature_MACFlyout>::ReportUsage(
    `wil::Feature<__WilFeatureTraits_Feature_MACFlyout>::GetImpl'::`2'::impl,
    1u,
    3u,
    v14);
  lpVtbl = a2->lpVtbl;
  v22 = 0LL;
  v16 = ((__int64 (__fastcall *)(struct IServiceProvider *, SID *, GUID *, __int64 (__fastcall ****)(_QWORD, GUID *, __int64 *)))lpVtbl->QueryService)(
          a2,
          &SID_MeetAndChatManager,
          &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90,
          &v22);
  v6 = v16;
  if ( v16 < 0 )
  {
    v17 = (unsigned int)v16;
    v18 = 164LL;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\meetnowexperiencemanager.cpp",
      (const char *)v17);
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
    return (unsigned int)v6;
  }
  v19 = *((_QWORD *)this + 100);
  *((_QWORD *)this + 100) = 0LL;
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
  *((_QWORD *)this + 100) = 0LL;
  v20 = *v22;
  v23 = 0LL;
  v6 = (*v20)(v22, &_uuidof__AUIWeakReferenceSource_Details_Platform__, &v23);
  if ( v6 >= 0 )
    v6 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v23 + 24LL))(v23, (char *)this + 800);
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>(&v23);
  if ( v6 < 0 )
  {
    v17 = (unsigned int)v6;
    v18 = 165LL;
    goto LABEL_23;
  }
  wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v22);
  v21 = *((_QWORD *)this + 12);
  *((_QWORD *)this + 12) = 0LL;
  if ( v21 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
  *((_QWORD *)this + 12) = a2;
  ((void (__fastcall *)(struct IServiceProvider *))a2->lpVtbl->AddRef)(a2);
  return 0LL;
}
