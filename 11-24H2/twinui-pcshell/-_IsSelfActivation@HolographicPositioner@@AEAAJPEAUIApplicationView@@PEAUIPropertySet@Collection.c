/*
 * XREFs of ?_IsSelfActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@PEAH@Z @ 0x18006F5C0
 * Callers:
 *     ?ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z @ 0x18006E9E0 (-ShouldHandleActivation@HolographicPositioner@@UEAAHPEAUIApplicationView@@PEAUIUnknown@@@Z.c)
 *     ?_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z @ 0x18040DEDC (-_RaiseRequestNavigateToView@HolographicPositioner@@AEAAJPEAUIApplicationView@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180026624 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003D4C4 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=8
__int64 __fastcall HolographicPositioner::_IsSelfActivation(
        HolographicPositioner *this,
        __int64 (__fastcall ***a2)(struct IApplicationView *, GUID *, __int64 *),
        struct Windows::Foundation::Collections::IPropertySet *a3,
        int *a4)
{
  int v7; // edx
  unsigned int v8; // r8d
  unsigned __int64 v9; // rbx
  unsigned int v10; // eax
  UINT32 v11; // edx
  HRESULT v12; // eax
  int v13; // edx
  __int64 v14; // r8
  int v15; // ebx
  unsigned int v17; // esi
  __int64 v18; // rdi
  __int64 (__fastcall *v19)(__int64, _QWORD, _QWORD); // rbx
  __int64 (__fastcall ***v20)(_QWORD, _QWORD, _QWORD); // rcx
  __int64 (__fastcall ***v21)(_QWORD, _QWORD, _QWORD); // rbx
  __int64 (__fastcall *v22)(_QWORD, GUID *, __int64 *); // rdi
  __int64 *v23; // rax
  __int64 v24; // rbx
  __int64 (__fastcall *v25)(__int64, __int64 *); // rdi
  int v26; // eax
  __int64 (__fastcall *v27)(struct IApplicationView *, GUID *, __int64 *); // rbx
  __int64 *v28; // rax
  __int64 v29; // rbx
  __int64 (__fastcall *v30)(__int64, __int64 *); // rdi
  int v31; // eax
  __int64 (__fastcall ***v32)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-60h] BYREF
  __int64 v33; // [rsp+28h] [rbp-58h] BYREF
  __int64 v34; // [rsp+30h] [rbp-50h] BYREF
  unsigned int v35; // [rsp+38h] [rbp-48h] BYREF
  int v36; // [rsp+3Ch] [rbp-44h] BYREF
  __int64 v37; // [rsp+40h] [rbp-40h] BYREF
  __int64 v38; // [rsp+48h] [rbp-38h] BYREF
  struct Windows::Foundation::Collections::IPropertySet *v39; // [rsp+50h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+58h] [rbp-28h] BYREF
  HSTRING string; // [rsp+70h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  *a4 = 0;
  v39 = a3;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v39);
  v35 = 0;
  string = 0LL;
  v9 = -1LL;
  do
    ++v9;
  while ( aViewsizeprefer_1[v9] );
  if ( v9 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v7, v8);
    __debugbreak();
  }
  v10 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v9, v7, v8);
  v11 = v10 - 1;
  if ( (unsigned int)v9 < v10 )
    v11 = v9;
  v12 = WindowsCreateStringReference(L"ViewSizePreferences.SourceWindow", v11, &hstringHeader, &string);
  if ( v12 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v12, v13, v14);
  }
  else
  {
    v15 = Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v39, (__int64)string, v14, &v35);
    if ( v15 < 0 )
    {
LABEL_8:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
      return (unsigned int)v15;
    }
    v17 = v35;
    v32 = 0LL;
    v18 = *((_QWORD *)this + 29);
    v19 = *(__int64 (__fastcall **)(__int64, _QWORD, _QWORD))(*(_QWORD *)v18 + 48LL);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
    v15 = v19(v18, v17, &v32);
    if ( v15 < 0 )
    {
      v20 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v32;
      if ( v32 )
      {
        v32 = 0LL;
        ((void (__fastcall *)(__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD)))(*v20)[2])(v20);
      }
      goto LABEL_8;
    }
  }
  v34 = 0LL;
  v21 = (__int64 (__fastcall ***)(_QWORD, _QWORD, _QWORD))v32;
  v22 = **v32;
  v23 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v34);
  v15 = v22(v21, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v23);
  if ( v15 < 0 )
  {
LABEL_23:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
    goto LABEL_8;
  }
  v33 = 0LL;
  v24 = v34;
  v25 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v34 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
  v26 = v25(v24, &v33);
  v15 = v26;
  if ( v26 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6DD,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v26);
LABEL_22:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
    goto LABEL_23;
  }
  v38 = 0LL;
  v27 = **a2;
  v28 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>(&v38);
  v15 = v27((struct IApplicationView *)a2, &GUID_d8b456d0_bec6_4f57_bb1d_50559a14384b, v28);
  if ( v15 < 0 )
  {
LABEL_21:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
    goto LABEL_22;
  }
  v37 = 0LL;
  v29 = v38;
  v30 = *(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v38 + 24LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
  v31 = v30(v29, &v37);
  v15 = v31;
  if ( v31 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x6E3,
      (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
      (const char *)(unsigned int)v31);
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
    goto LABEL_21;
  }
  v36 = 0;
  if ( (*(int (__fastcall **)(__int64, __int64, int *))(*(_QWORD *)v37 + 104LL))(v37, v33, &v36) >= 0 && v36 )
    *a4 = 1;
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v37);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v38);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v33);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v34);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v32);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v39);
  return 0LL;
}
