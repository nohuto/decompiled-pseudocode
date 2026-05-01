/*
 * XREFs of ?OnShowWindowPolicy@CApplicationManager@@UEAAJPEAUHWND__@@IPEAKPEAUtagRECT@@K@Z @ 0x1802E96A0
 * Callers:
 *     <none>
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationInternal@@PEAUHWND__@@PEAPEAUIApplicationView@@@Z @ 0x180014F98 (-_HandleCreation_EnsureApplicationView@CApplicationManager@@AEAAJPEAUIImmersiveApplicationIntern.c)
 *     ??1?$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x18001D0F0 (--1-$com_ptr_t@UIDataObject@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??1CAutoSRWExclusiveLock@@QEAA@XZ @ 0x1800EA680 (--1CAutoSRWExclusiveLock@@QEAA@XZ.c)
 *     ?TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA?AV?$com_ptr_t@UIPropertySet@Collections@Foundation@Windows@@Uerr_returncode_policy@wil@@@wil@@PEAUIWin32ApplicationView@@_N@Z @ 0x180105A6C (-TryGetViewPropertySetFromHintsForWin32@Win32ApplicationViewHelpers@@YA-AV-$com_ptr_t@UIProperty.c)
 *     ?_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z @ 0x18017C764 (-_MonitorFromWindow@CApplicationManager@@AEAAJPEAUHWND__@@PEAPEAUIImmersiveMonitor@@@Z.c)
 *     ?SiteUnk@CWRLObjectWithGITSite@@IEAA?AV?$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ @ 0x180191370 (-SiteUnk@CWRLObjectWithGITSite@@IEAA-AV-$ComPtr@UIUnknown@@@WRL@Microsoft@@XZ.c)
 *     ??$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA?AV?$com_ptr_t@UIWin32ApplicationView@@Uerr_exception_policy@wil@@@0@AEAPEAUIApplicationView@@@Z @ 0x1801C5A1C (--$try_com_query@UIWin32ApplicationView@@AEAPEAUIApplicationView@@@wil@@YA-AV-$com_ptr_t@UIWin32.c)
 *     ?AcquireExclusive@CIAMGlobals@@QEAA?AVCAutoSRWExclusiveLock@@XZ @ 0x1801D13C0 (-AcquireExclusive@CIAMGlobals@@QEAA-AVCAutoSRWExclusiveLock@@XZ.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     ??4?$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_policy@wil@@@wil@@QEAAAEAV01@$$QEAV01@@Z @ 0x1802C0C34 (--4-$com_ptr_t@UISnapSignalData@DataEngine@TaskFlow@Shell@Internal@Windows@@Uerr_exception_polic.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$GetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAH@Z1@Z @ 0x1802E2018 (--$GetValue@H@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QEAA_NXZ @ 0x1802EDB4C (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_SnapLauncherAPI@@@details@wil@@QE.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CApplicationManager::OnShowWindowPolicy(
        CApplicationManager *this,
        HWND a2,
        __int64 a3,
        unsigned int *a4,
        struct tagRECT *a5)
{
  __int64 v8; // rcx
  char v9; // bl
  CApplicationManager *v10; // rcx
  int v11; // eax
  unsigned int v12; // ebx
  struct IImmersiveMonitor *v13; // rbx
  __int64 *ViewPropertySetFromHintsForWin32; // rax
  IUnknown **v15; // rax
  HRESULT v16; // edi
  int v17; // eax
  struct IImmersiveMonitor **v19; // rcx
  PVOID Ptr; // rdi
  void (__fastcall *v21)(PVOID, HWND, struct IApplicationView **); // rbx
  struct Windows::Foundation::Collections::IPropertySet *v22; // rbx
  __int64 *v23; // rax
  __int64 v24; // r8
  IUnknown **v25; // rax
  HRESULT Service; // edi
  unsigned __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // eax
  struct IImmersiveMonitor *v30; // [rsp+50h] [rbp-49h] BYREF
  struct IApplicationView *v31; // [rsp+58h] [rbp-41h] BYREF
  RTL_SRWLOCK *v32; // [rsp+60h] [rbp-39h] BYREF
  void *ppvOut; // [rsp+68h] [rbp-31h] BYREF
  struct IApplicationView *v34; // [rsp+70h] [rbp-29h] BYREF
  unsigned int v35; // [rsp+78h] [rbp-21h] BYREF
  __int64 v36; // [rsp+80h] [rbp-19h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+88h] [rbp-11h] BYREF
  HSTRING v38; // [rsp+A0h] [rbp+7h]
  wil::details::in1diag3 *retaddr; // [rsp+E8h] [rbp+4Fh]

  *a4 = 0;
  *a5 = 0LL;
  if ( (unsigned int)IsShellManagedWindow(a2) )
    return 0LL;
  v35 = 0;
  if ( !(unsigned int)GetWindowBand(a2, &v35) || v35 != 1 )
    return 0LL;
  CIAMGlobals::AcquireExclusive(v8, &v32);
  v30 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  CApplicationManager::_MonitorFromWindow((CApplicationManager *)((char *)this - 368), a2, &v30);
  v9 = (*(__int64 (__fastcall **)(_QWORD, HWND, _QWORD, __int64, struct IImmersiveMonitor *, int, _DWORD, _QWORD))(**((_QWORD **)this + 21) + 24LL))(
         *((_QWORD *)this + 21),
         a2,
         v35,
         1LL,
         v30,
         1,
         0,
         0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  CAutoSRWExclusiveLock::~CAutoSRWExclusiveLock(&v32);
  if ( v9 )
  {
    v31 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
    v11 = CApplicationManager::_HandleCreation_EnsureApplicationView(v10, 0LL, a2, &v31);
    v12 = v11;
    if ( v11 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE2A,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v11);
LABEL_13:
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
      return v12;
    }
    v13 = 0LL;
    v30 = 0LL;
    v34 = v31;
    wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(
      &v32,
      (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v34);
    if ( v32 )
    {
      ViewPropertySetFromHintsForWin32 = Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(
                                           &v34,
                                           (__int64)v32);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
        (__int64 *)&v30,
        ViewPropertySetFromHintsForWin32);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v34);
      v13 = v30;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v32);
    ppvOut = 0LL;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    v15 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)this - 320, &v32);
    v16 = IUnknown_QueryService(
            *v15,
            &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
            &GUID_1179f45a_7e9a_4bf8_b4a3_fc9b01db08c1,
            &ppvOut);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
    if ( v16 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE36,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v16);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
      v12 = v16;
      goto LABEL_13;
    }
    v17 = (*(__int64 (__fastcall **)(void *, struct IApplicationView *, struct IImmersiveMonitor *, _QWORD, unsigned int *, struct tagRECT *))(*(_QWORD *)ppvOut + 32LL))(
            ppvOut,
            v31,
            v13,
            0LL,
            a4,
            a5);
    v12 = v17;
    if ( v17 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xE37,
        (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
        (const char *)(unsigned int)v17);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
      goto LABEL_13;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
    v19 = &v30;
    goto LABEL_28;
  }
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_SnapLauncherAPI>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_SnapLauncherAPI>::GetImpl'::`2'::impl) )
  {
    v31 = 0LL;
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v21 = *(void (__fastcall **)(PVOID, HWND, struct IApplicationView **))(*(_QWORD *)Ptr + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
    v21(Ptr, a2, &v31);
    v22 = 0LL;
    v34 = 0LL;
    v30 = v31;
    wil::try_com_query<IWin32ApplicationView,IApplicationView * &>(
      &v32,
      (void (__fastcall ****)(_QWORD, GUID *, _QWORD *))&v30);
    if ( v32 )
    {
      v23 = Win32ApplicationViewHelpers::TryGetViewPropertySetFromHintsForWin32(&v30, (__int64)v32);
      wil::com_ptr_t<Windows::Internal::Shell::TaskFlow::DataEngine::ISnapSignalData,wil::err_exception_policy>::operator=(
        (__int64 *)&v34,
        v23);
      wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v30);
      v22 = v34;
    }
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v32);
    if ( v22 )
    {
      Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v32,
        v22);
      LODWORD(ppvOut) = 0;
      v38 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SnapWindow.Id", 0xEu, 0xDu);
      if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<int>(
                  (Windows::Internal::ShellHelpers::PropertySetHelper *)&v32,
                  v38,
                  v24,
                  &ppvOut) >= 0 )
      {
        v30 = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
        v25 = (IUnknown **)CWRLObjectWithGITSite::SiteUnk((__int64)this - 320, &v36);
        Service = IUnknown_QueryService(
                    *v25,
                    &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
                    &GUID_1179f45a_7e9a_4bf8_b4a3_fc9b01db08c1,
                    (void **)&v30);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v36);
        if ( Service < 0 )
        {
          v27 = (unsigned int)Service;
          v28 = 3664LL;
LABEL_24:
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)v28,
            (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)v27);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
          wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)&v34);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
          return (unsigned int)Service;
        }
        v29 = (*(__int64 (__fastcall **)(struct IImmersiveMonitor *, struct IApplicationView *, struct Windows::Foundation::Collections::IPropertySet *, unsigned int *, struct tagRECT *))(*(_QWORD *)v30 + 48LL))(
                v30,
                v31,
                v22,
                a4,
                a5);
        Service = v29;
        if ( v29 < 0 )
        {
          v27 = (unsigned int)v29;
          v28 = 3665LL;
          goto LABEL_24;
        }
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    }
    v19 = &v34;
LABEL_28:
    wil::com_ptr_t<IDataObject,wil::err_exception_policy>::~com_ptr_t<IDataObject,wil::err_exception_policy>((__int64 *)v19);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v31);
  }
  return 0LL;
}
