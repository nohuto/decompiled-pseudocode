/*
 * XREFs of _lambda_a5b8d4cd5e95e3c20f6ae71426157a21_::operator() @ 0x1802F63F8
 * Callers:
 *     Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_0d876678aa78b7ed37cbe1753df898cc___1_long_::Invoke @ 0x1802F8530 (Microsoft--WRL--Details--DelegateArgTraits_long_(__cdecl_IAsyncCallback--_)(long)_-_ea_1802F8530.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$ActivateInstance@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Foundation@Windows@@YAJPEAUHSTRING__@@V?$ComPtrRef@V?$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x180122FC0 (--$ActivateInstance@V-$ComPtr@UIPropertySet@Collections@Foundation@Windows@@@WRL@Microsoft@@@Fou.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180123324 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropertySet@Collections@Foundation@Windows@@PEAUIAsyncCallback@@PEAUIPresentationRequestedArgs@@@Z @ 0x1801C3D88 (-_ShowViewAsyncWorker@CAppViewManager@@AEAAJPEAUHWND__@@0AEBUShowViewAsyncOptions@1@PEAUIPropert.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIApplicationViewChangeListener@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x1801F32B0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$01@WRL@Microsoft@@$00$0A@$0A@UIAp_ea_1801F32B0.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long_(__cdecl_IAsyncCallback::_)(long)_::DelegateInvokeHelper_IAsyncCallback__lambda_e2360ed1712dd7b190dfa8ff8188f443___1_long___lambda_e2360ed1712dd7b190dfa8ff8188f443___ @ 0x1802F5158 (Microsoft--WRL--Details--Make_Microsoft--WRL--Details--DelegateArgTraits_long_(__cd_ea_1802F5158.c)
 *     ?MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Internal@Windows@@@Z @ 0x1802F8AEC (-MoveTryPositionPropertiesToPropertySet@@YAJPEAUHWND__@@AEAVPropertySetHelper@ShellHelpers@Inter.c)
 *     ?Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z @ 0x1802F9170 (-Remove@PropertySetHelper@ShellHelpers@Internal@Windows@@QEAAJPEBG@Z.c)
 *     ?WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHWND__@@@Z @ 0x1802FB3D0 (-WindowFromViewWrapper@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@PEAPEAUHW.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall lambda_a5b8d4cd5e95e3c20f6ae71426157a21_::operator()(__int64 **a1)
{
  __int64 *v2; // rsi
  __int64 v3; // rdi
  __int64 (__fastcall *v4)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rdx
  __int64 v8; // rdi
  __int64 (__fastcall *v9)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **); // rbx
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rdi
  __int64 (__fastcall *v13)(__int64, GUID *, __int64 *); // rbx
  int v14; // eax
  __int64 v15; // rbx
  __int64 (__fastcall *v16)(__int64, struct Windows::Foundation::Collections::IPropertySet **); // rdi
  int v17; // eax
  __int64 v18; // rdx
  struct Windows::Foundation::Collections::IPropertySet *v19; // rdx
  __int64 v20; // r8
  int v21; // eax
  const unsigned __int16 *v22; // rdx
  __int64 *v23; // rax
  volatile int *v24; // rdx
  struct IAsyncCallback *v25; // rbx
  __int64 v26; // rcx
  __int64 v27; // r9
  __int64 v28; // rdx
  int v29; // eax
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v31; // [rsp+48h] [rbp-49h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v32; // [rsp+50h] [rbp-41h] BYREF
  __int64 v33; // [rsp+58h] [rbp-39h] BYREF
  __int64 v34; // [rsp+60h] [rbp-31h] BYREF
  struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *v35; // [rsp+68h] [rbp-29h] BYREF
  __int64 (__fastcall ***v36)(_QWORD, GUID *, __int64 *); // [rsp+70h] [rbp-21h] BYREF
  HWND v37; // [rsp+78h] [rbp-19h] BYREF
  __int64 v38; // [rsp+80h] [rbp-11h] BYREF
  __int64 v39; // [rsp+88h] [rbp-9h] BYREF
  __int64 v40; // [rsp+90h] [rbp-1h] BYREF
  __int64 v41; // [rsp+98h] [rbp+7h] BYREF
  HWND v42; // [rsp+A0h] [rbp+Fh] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+A8h] [rbp+17h] BYREF
  HSTRING v44; // [rsp+C0h] [rbp+2Fh]
  wil::details::in1diag3 *retaddr; // [rsp+F0h] [rbp+5Fh]

  v35 = 0LL;
  v37 = 0LL;
  v2 = *a1;
  v3 = **a1;
  v4 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)v3 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
  v5 = v4(v3, &v35);
  v6 = v5;
  if ( v5 >= 0 )
  {
    v5 = WindowFromViewWrapper(v35, &v37);
    v6 = v5;
    if ( v5 < 0 )
    {
      v7 = 508LL;
      goto LABEL_5;
    }
    v31 = 0LL;
    v42 = 0LL;
    v8 = *v2;
    v9 = *(__int64 (__fastcall **)(__int64, struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper **))(*(_QWORD *)*v2 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    v10 = v9(v8, &v31);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 512LL;
LABEL_8:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v11,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v10);
LABEL_9:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
      goto LABEL_40;
    }
    v10 = WindowFromViewWrapper(v31, &v42);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 513LL;
      goto LABEL_8;
    }
    v39 = 0LL;
    v40 = 0LL;
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 64LL))(*v2, &v39);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 516LL;
      goto LABEL_8;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)*v2 + 72LL))(*v2, (char *)&v39 + 4);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 517LL;
      goto LABEL_8;
    }
    v10 = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)*v2 + 80LL))(*v2, &v40);
    v6 = v10;
    if ( v10 < 0 )
    {
      v11 = 518LL;
      goto LABEL_8;
    }
    v33 = 0LL;
    v12 = *v2;
    v13 = **(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))*v2;
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
    v14 = v13(v12, &GUID_96c11dea_68de_44ef_a7f7_3aa869663d57, &v33);
    v6 = v14;
    if ( v14 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x209,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v14);
LABEL_20:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
      goto LABEL_9;
    }
    v32 = 0LL;
    v15 = v33;
    v16 = *(__int64 (__fastcall **)(__int64, struct Windows::Foundation::Collections::IPropertySet **))(*(_QWORD *)v33 + 56LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
    v17 = v16(v15, &v32);
    v6 = v17;
    if ( v17 < 0 )
    {
      v18 = 524LL;
LABEL_23:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v18,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v17);
LABEL_24:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
      goto LABEL_20;
    }
    v19 = v32;
    if ( !v32 )
    {
      v44 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(
        &hstringHeader,
        L"Windows.Foundation.Collections.ValueSet",
        0x28u,
        0x27u);
      v17 = Windows::Foundation::ActivateInstance<Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IPropertySet>>(
              (__int64)v44,
              (__int64 *)&v32);
      v6 = v17;
      if ( v17 < 0 )
      {
        v18 = 527LL;
        goto LABEL_23;
      }
      v19 = v32;
    }
    Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
      (Windows::Internal::ShellHelpers::PropertySetHelper *)&v34,
      v19);
    v44 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"ClientRequestedNavigationType",
      0x1Eu,
      0x1Du);
    v21 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
            (Windows::Internal::ShellHelpers::PropertySetHelper *)&v34,
            v44,
            v20,
            0);
    v6 = v21;
    if ( v21 >= 0 )
    {
      MoveTryPositionPropertiesToPropertySet(v37, (struct Windows::Internal::ShellHelpers::PropertySetHelper *)&v34);
      Windows::Internal::ShellHelpers::PropertySetHelper::Remove(
        (Windows::Internal::ShellHelpers::PropertySetHelper *)&v34,
        v22);
      v36 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*v2;
      Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v36);
      v23 = Microsoft::WRL::Details::Make_Microsoft::WRL::Details::DelegateArgTraits_long____cdecl_IAsyncCallback::___long__::DelegateInvokeHelper_IAsyncCallback__lambda_e2360ed1712dd7b190dfa8ff8188f443___1_long___lambda_e2360ed1712dd7b190dfa8ff8188f443___(
              &v41,
              &v36);
      v25 = (struct IAsyncCallback *)*v23;
      v38 = *v23;
      *v23 = 0LL;
      v26 = v41;
      if ( v41 )
      {
        v41 = 0LL;
        Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<2>,1,0,0,IApplicationViewChangeListener>::Release(
          v26,
          v24);
      }
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v36);
      if ( v25 )
      {
        v29 = CAppViewManager::_ShowViewAsyncWorker(
                (CAppViewManager *)*a1[1],
                v37,
                v42,
                (const struct CAppViewManager::ShowViewAsyncOptions *)&v39,
                v32,
                v25,
                (struct IPresentationRequestedArgs *)*a1[2]);
        v6 = v29;
        if ( v29 >= 0 )
        {
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v32);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v33);
          Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
          v6 = 0;
          goto LABEL_40;
        }
        v27 = (unsigned int)v29;
        v28 = 553LL;
      }
      else
      {
        v6 = -2147024882;
        v27 = 2147942414LL;
        v28 = 551LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v28,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)v27);
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v38);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x215,
        (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
        (const char *)(unsigned int)v21);
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v34);
    goto LABEL_24;
  }
  v7 = 507LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v7,
    (int)"pcshell\\twinui\\appmanager\\lib\\appviewmanager.cpp",
    (const char *)(unsigned int)v5);
LABEL_40:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v35);
  return v6;
}
