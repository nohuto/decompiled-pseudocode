/*
 * XREFs of ?_HandleViewNavigationRequested@CApplicationManager@@AEAAXPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIPropertySet@Collections@Foundation@6@PEAUIViewEventArgsForNavigationRequest@3456@@Z @ 0x180088CE0
 * Callers:
 *     ?_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAUIViewEventArgs@3456@@Z @ 0x180014150 (-_HandleViewEvent@CApplicationManager@@AEAAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@W.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18002D354 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmersiveAppFinderByTaskWindow@@PEAPEAUIImmersiveApplicationInternal@@PEA_K@Z @ 0x180089108 (--$_FindFirstApplication@VCImmersiveAppFinderByTaskWindow@@@CApplicationManager@@AEAAJAEBVCImmer.c)
 *     ?ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801DFA9C (-ConditionallyNotifyUAOfLaunch@AppActivationPropertySetHelpers@@YAJPEBGPEAUIPropertySet@Collecti.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=16
void __fastcall CApplicationManager::_HandleViewNavigationRequested(
        CApplicationManager *this,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3,
        struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *a4)
{
  void (__fastcall ***v8)(_QWORD, _QWORD, _QWORD); // rbx
  void (__fastcall *v9)(_QWORD, GUID *, __int64 **); // rdi
  PVOID Ptr; // rdi
  int (__fastcall *v11)(PVOID, __int64 *, __int64 *); // rbx
  void (__fastcall *v12)(char *, GUID *, __int64 *); // rbx
  __int64 *v13; // rax
  HRESULT v14; // ebx
  IUnknown *v15; // rcx
  void (__fastcall *v16)(char *, GUID *, __int64 *); // rbx
  __int64 *v17; // rax
  HRESULT Service; // ebx
  IUnknown *v19; // rcx
  __int64 v20; // rdx
  unsigned int v21; // eax
  int v22; // eax
  __int64 v23; // rax
  struct Windows::Foundation::Collections::IPropertySet *v24; // r8
  IUnknown *v25; // rcx
  void *v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  void (__fastcall ***v29)(_QWORD, _QWORD, _QWORD); // rcx
  int v30; // eax
  int v31; // eax
  IUnknown *punk; // [rsp+30h] [rbp-39h] BYREF
  __int64 v33; // [rsp+38h] [rbp-31h] BYREF
  __int64 *v34; // [rsp+40h] [rbp-29h] BYREF
  void (__fastcall ***v35)(_QWORD, GUID *, __int64 **); // [rsp+48h] [rbp-21h] BYREF
  void *ppvOut; // [rsp+50h] [rbp-19h] BYREF
  LPVOID pv; // [rsp+58h] [rbp-11h] BYREF
  __int64 v38; // [rsp+60h] [rbp-9h] BYREF
  __int64 v39; // [rsp+68h] [rbp-1h]
  IUnknown *v40; // [rsp+70h] [rbp+7h] BYREF
  __int64 v41; // [rsp+78h] [rbp+Fh] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v42; // [rsp+80h] [rbp+17h] BYREF
  char v43; // [rsp+88h] [rbp+1Fh]
  int v44; // [rsp+90h] [rbp+27h]
  wil::details::in1diag3 *retaddr; // [rsp+C8h] [rbp+5Fh]
  int v46; // [rsp+D8h] [rbp+6Fh] BYREF

  v46 = 0;
  AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  v35 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
  pv = 0LL;
  v38 = (__int64)a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef(&v38);
  LOBYTE(v39) = 0;
  v41 = 0LL;
  v42 = a2;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v42);
  v43 = 0;
  v44 = 0;
  LODWORD(a2) = CApplicationManager::_FindFirstApplication<CImmersiveAppFinderByTaskWindow>(this, &v41, &v35, 0LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v42);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
  ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
  if ( (int)a2 >= 0 )
  {
    v34 = 0LL;
    v8 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v35;
    v9 = **v35;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v34);
    v9(v8, &GUID_8b14e88b_5663_4caf_b196_c31479262831, &v34);
    v33 = 0LL;
    Ptr = CApplicationManagerUtility::g_pIAMGlobals[14].Ptr;
    v11 = *(int (__fastcall **)(PVOID, __int64 *, __int64 *))(*(_QWORD *)Ptr + 56LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
    if ( v11(Ptr, v34, &v33) >= 0 )
    {
      ppvOut = 0LL;
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&ppvOut);
      punk = 0LL;
      v46 = 2;
      v12 = *(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this + 6) + 32LL);
      v13 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&punk);
      v12((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, v13);
      v14 = IUnknown_QueryService(
              punk,
              &GUID_ff62716a_0bd0_4105_a6ec_83b09d864267,
              &GUID_1179f45a_7e9a_4bf8_b4a3_fc9b01db08c1,
              &ppvOut);
      v15 = punk;
      if ( punk )
      {
        punk = 0LL;
        ((void (__fastcall *)(IUnknown *))v15->lpVtbl->Release)(v15);
      }
      if ( v14 >= 0
        && (*(int (__fastcall **)(void *, __int64, struct Windows::Foundation::Collections::IPropertySet *))(*(_QWORD *)ppvOut + 40LL))(
             ppvOut,
             v33,
             a3) >= 0 )
      {
        punk = 0LL;
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&punk);
        v40 = 0LL;
        v46 = 9;
        v16 = *(void (__fastcall **)(char *, GUID *, __int64 *))(*((_QWORD *)this + 6) + 32LL);
        v17 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&v40);
        v16((char *)this + 48, &GUID_00000000_0000_0000_c000_000000000046, v17);
        Service = IUnknown_QueryService(
                    v40,
                    &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                    &GUID_872c4837_95b9_4aed_8dd6_7d971253eaaa,
                    (void **)&punk);
        v19 = v40;
        if ( v40 )
        {
          v40 = 0LL;
          ((void (__fastcall *)(IUnknown *))v19->lpVtbl->Release)(v19);
        }
        if ( Service >= 0 )
        {
          v46 = 0;
          if ( ((int (__fastcall *)(IUnknown *, __int64, struct Windows::Foundation::Collections::IPropertySet *, int *))punk->lpVtbl[3].AddRef)(
                 punk,
                 v33,
                 a3,
                 &v46) >= 0 )
          {
            if ( v46 )
            {
              LOBYTE(v20) = 1;
              v31 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *, __int64))(*(_QWORD *)a4 + 72LL))(
                      a4,
                      v20);
              if ( v31 < 0 )
                wil::details::in1diag3::_Log_Hr(
                  retaddr,
                  (void *)0x17F3,
                  (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
                  (const char *)(unsigned int)v31);
            }
          }
        }
        v21 = ((__int64 (__fastcall *)(void (__fastcall ***)(_QWORD, GUID *, __int64 **)))(*v35)[80])(v35);
        v22 = (*(__int64 (__fastcall **)(struct Windows::Internal::Shell::ViewManagerInterop::IViewEventArgsForNavigationRequest *, _QWORD))(*(_QWORD *)a4 + 56LL))(
                a4,
                v21);
        if ( v22 < 0 )
          wil::details::in1diag3::_Log_Hr(
            retaddr,
            (void *)0x17F9,
            (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
            (const char *)(unsigned int)v22);
        pv = 0LL;
        v38 = 0LL;
        v39 = 0LL;
        v23 = *v34;
        v38 = -1LL;
        v39 = -1LL;
        if ( (*(int (__fastcall **)(__int64 *, LPVOID *))(v23 + 32))(v34, &pv) >= 0 )
        {
          v30 = AppActivationPropertySetHelpers::ConditionallyNotifyUAOfLaunch(
                  (LPCWSTR)pv,
                  (const unsigned __int16 *)a3,
                  v24);
          if ( v30 < 0 )
            wil::details::in1diag3::_Log_Hr(
              retaddr,
              (void *)0x1803,
              (int)"pcshell\\twinui\\appmanager\\lib\\appmanager.cpp",
              (const char *)(unsigned int)v30);
        }
        if ( pv )
        {
          CoTaskMemFree(pv);
          pv = 0LL;
        }
        v38 = 0LL;
        v39 = 0LL;
        v25 = punk;
        if ( punk )
        {
          punk = 0LL;
          ((void (__fastcall *)(IUnknown *))v25->lpVtbl->Release)(v25);
        }
      }
      v26 = ppvOut;
      if ( ppvOut )
      {
        ppvOut = 0LL;
        (*(void (__fastcall **)(void *))(*(_QWORD *)v26 + 16LL))(v26);
      }
    }
    v27 = v33;
    if ( v33 )
    {
      v33 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v27 + 16LL))(v27);
    }
    v28 = (__int64)v34;
    if ( v34 )
    {
      v34 = 0LL;
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 16LL))(v28);
    }
  }
  v29 = (void (__fastcall ***)(_QWORD, _QWORD, _QWORD))v35;
  if ( v35 )
  {
    v35 = 0LL;
    ((void (__fastcall *)(void (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v29)[2])(v29);
  }
}
