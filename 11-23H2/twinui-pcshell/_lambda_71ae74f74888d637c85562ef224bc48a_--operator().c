/*
 * XREFs of _lambda_71ae74f74888d637c85562ef224bc48a_::operator() @ 0x180285B78
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_Windows::Foundation::ITypedEventHandler_impl_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::_)(Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs__)_::DelegateInvokeHelper_Windows::Foundation::ITypedEventHandler_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs_____lambda_71ae74f74888d637c85562ef224bc48a___1_Windows::Internal::Shell::ViewManagerInterop::IClientWindowState___Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs___::Invoke @ 0x1802860F0 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_Windows--Foundation--IType_ea_1802860F0.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ @ 0x180037AEC (-InternalRelease@-$ComPtr@UIDCompositionTarget@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?InternalRelease@?$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ @ 0x180041820 (-InternalRelease@-$ComPtr@UIVirtualDesktopControllerInternal@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$Unmarshal@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@CMarshaledInterface@@QEAAJV?$ComPtrRef@V?$ComPtr@U?$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Windows@@PEAUIClientWindowReadyForPresentationChangedEventArgs@2345@@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18009D7F4 (--$Unmarshal@U-$ITypedEventHandler@PEAUIClientWindowState@ViewManagerInterop@Shell@Internal@Wind.c)
 *     ??1ActivityThreadWatcher@wil@@QEAA@XZ @ 0x1800BAF48 (--1ActivityThreadWatcher@wil@@QEAA@XZ.c)
 *     ??0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@Z @ 0x1800BBDE4 (--0ActivityThreadWatcher@wil@@QEAA@PEAUIFailureCallback@details@1@AEBVStoredCallContextInfo@31@@.c)
 *     ??$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA?AV?$ComPtr@UIInspectable@@@WRL@Microsoft@@AEAVWeakRef@23@@Z @ 0x1800DEB90 (--$AsStrong@UIInspectable@@@ExperienceManagerUtils@@YA-AV-$ComPtr@UIInspectable@@@WRL@Microsoft@.c)
 *     ??$IncomingWindowReadinessEvent@PEAUHWND__@@@WaitForWindowReadyForPresentation@SingleViewExperienceTelemetry@@QEAAX$$QEAPEAUHWND__@@@Z @ 0x1800E9F98 (--$IncomingWindowReadinessEvent@PEAUHWND__@@@WaitForWindowReadyForPresentation@SingleViewExperie.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180131A24 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     _lambda_46d3d49e2bbb772acd3c21ebc08e3e79_::operator() @ 0x180285AE4 (_lambda_46d3d49e2bbb772acd3c21ebc08e3e79_--operator().c)
 *     _guard_xfg_dispatch_icall_nop @ 0x18028E1B0 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z @ 0x1802CF31A (-Log_Hr@in1diag3@details@wil@@YAJPEAXIPEBDJ@Z.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall lambda_71ae74f74888d637c85562ef224bc48a_::operator()(
        Microsoft::WRL::WeakRef *this,
        __int64 a2,
        __int64 a3)
{
  char *v6; // rbx
  _DWORD *v7; // r8
  __int64 v8; // rax
  void **v9; // rax
  void *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  __int64 v14; // rdx
  void *v16; // [rsp+20h] [rbp-69h] BYREF
  struct IInspectable *v17; // [rsp+28h] [rbp-61h] BYREF
  __int128 v18; // [rsp+30h] [rbp-59h]
  __int64 v19; // [rsp+40h] [rbp-49h]
  __int128 v20; // [rsp+48h] [rbp-41h] BYREF
  __int64 v21; // [rsp+58h] [rbp-31h]
  char v22; // [rsp+60h] [rbp-29h]
  _OWORD v23[3]; // [rsp+70h] [rbp-19h] BYREF
  __int64 v24; // [rsp+A0h] [rbp+17h]
  int v25; // [rsp+A8h] [rbp+1Fh]
  __int64 v26; // [rsp+B0h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+5Fh]
  char v28; // [rsp+F0h] [rbp+67h] BYREF
  unsigned int v29; // [rsp+F8h] [rbp+6Fh] BYREF
  void *v30; // [rsp+108h] [rbp+7Fh] BYREF

  v6 = (char *)this + 24;
  v7 = (_DWORD *)*((_QWORD *)this + 9);
  if ( *v7 == 1 )
  {
    wil::ActivityThreadWatcher::ActivityThreadWatcher(
      (wil::ActivityThreadWatcher *)v23,
      (Microsoft::WRL::WeakRef *)((char *)this + 24),
      (const struct wil::details::StoredCallContextInfo *)(v7 + 10));
  }
  else
  {
    memset(v23, 0, sizeof(v23));
    v24 = 0LL;
    v25 = 0;
    v26 = 0LL;
  }
  v30 = 0LL;
  v8 = *((_QWORD *)this + 1);
  *(_QWORD *)&v18 = v6;
  *((_QWORD *)&v18 + 1) = &v30;
  v19 = v8;
  v20 = v18;
  v21 = v8;
  v22 = 1;
  if ( (*(int (__fastcall **)(__int64, unsigned int *))(*(_QWORD *)a2 + 48LL))(a2, &v29) >= 0 )
  {
    v16 = (void *)v29;
    SingleViewExperienceTelemetry::WaitForWindowReadyForPresentation::IncomingWindowReadinessEvent<HWND__ *>(
      (__int64)v6,
      (__int64 *)&v16);
  }
  v9 = (void **)ExperienceManagerUtils::AsStrong<IInspectable>(&v17, this);
  v10 = 0LL;
  if ( &v16 != v9 )
  {
    v10 = *v9;
    *v9 = 0LL;
  }
  v16 = v30;
  v30 = v10;
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v16);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v17);
  if ( !v30 )
    goto LABEL_19;
  v11 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)a3 + 48LL))(a3, &v28);
  v12 = v11;
  if ( v11 >= 0 )
  {
    if ( v28 )
    {
      v16 = 0LL;
      v13 = CMarshaledInterface::Unmarshal<Windows::Foundation::ITypedEventHandler<Windows::Internal::Shell::ViewManagerInterop::IClientWindowState *,Windows::Internal::Shell::ViewManagerInterop::IClientWindowReadyForPresentationChangedEventArgs *>>(
              (Microsoft::WRL::WeakRef *)((char *)this + 16),
              &v16);
      v12 = v13;
      if ( v13 < 0 )
      {
        v14 = 874LL;
LABEL_16:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v14,
          (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
          (const char *)(unsigned int)v13);
        Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
        goto LABEL_20;
      }
      v13 = (*(__int64 (__fastcall **)(void *, __int64, __int64))(*(_QWORD *)v16 + 24LL))(v16, a2, a3);
      v12 = v13;
      if ( v13 < 0 )
      {
        v14 = 875LL;
        goto LABEL_16;
      }
      Microsoft::WRL::ComPtr<IDCompositionTarget>::InternalRelease((__int64 *)&v16);
    }
    else
    {
      wil::details::in1diag3::Log_Hr(
        retaddr,
        (void *)0x36F,
        (unsigned int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
        (const char *)0x80070015LL,
        (int)v16);
    }
LABEL_19:
    v12 = 0;
    goto LABEL_20;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x365,
    (int)"shell\\twinui\\experiencemanagers\\corelib\\singleviewexperience.cpp",
    (const char *)(unsigned int)v11);
LABEL_20:
  v22 = 0;
  lambda_46d3d49e2bbb772acd3c21ebc08e3e79_::operator()((__int64)&v20);
  Microsoft::WRL::ComPtr<IVirtualDesktopControllerInternal>::InternalRelease((__int64 *)&v30);
  wil::ActivityThreadWatcher::~ActivityThreadWatcher((wil::ActivityThreadWatcher *)v23);
  return v12;
}
