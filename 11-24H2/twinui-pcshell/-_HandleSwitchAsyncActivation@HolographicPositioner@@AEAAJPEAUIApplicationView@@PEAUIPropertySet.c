/*
 * XREFs of ?_HandleSwitchAsyncActivation@HolographicPositioner@@AEAAJPEAUIApplicationView@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x18040D4F8
 * Callers:
 *     ?ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER_TYPE@@PEAUIUnknown@@@Z @ 0x180408900 (-ControlGainedForActivation@HolographicPositioner@@UEAAJPEAUIApplicationView@@W4SHELL_POSITIONER.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValue@Foundation@3@EAAJPEAI@Z1@Z @ 0x180026624 (--$GetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x1800A24F4 (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180123324 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z @ 0x18016ECF8 (-_GetApplicationViewUniqueId@HolographicPositioner@@CAJPEAUIApplicationView@@PEAI@Z.c)
 *     ??0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation@3@@Z @ 0x1801D2B00 (--0PropertySetHelper@ShellHelpers@Internal@Windows@@QEAA@PEAUIPropertySet@Collections@Foundation.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall HolographicPositioner::_HandleSwitchAsyncActivation(
        HolographicPositioner *this,
        struct IApplicationView *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  __int64 v4; // r8
  unsigned int v5; // esi
  __int64 v6; // rdi
  __int64 (__fastcall *v7)(__int64, _QWORD, struct IApplicationView **); // rbx
  int ApplicationViewUniqueId; // eax
  unsigned int v9; // ebx
  __int64 v10; // rdx
  unsigned int v11; // ebx
  __int64 v12; // r8
  __int64 *v13; // rcx
  __int64 v14; // r8
  unsigned int v15; // esi
  __int64 v16; // rdi
  __int64 (__fastcall *v17)(__int64, _QWORD, struct IApplicationView **); // rbx
  int v18; // eax
  __int64 v19; // rdx
  unsigned int v20; // ebx
  __int64 v21; // r8
  struct IApplicationView *v23; // [rsp+20h] [rbp-50h] BYREF
  unsigned int v24; // [rsp+28h] [rbp-48h] BYREF
  unsigned int v25; // [rsp+2Ch] [rbp-44h] BYREF
  unsigned int v26; // [rsp+30h] [rbp-40h] BYREF
  unsigned int v27; // [rsp+34h] [rbp-3Ch] BYREF
  struct IApplicationView *v28; // [rsp+38h] [rbp-38h] BYREF
  __int64 v29; // [rsp+40h] [rbp-30h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+48h] [rbp-28h] BYREF
  HSTRING v31; // [rsp+60h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+88h] [rbp+18h]

  Windows::Internal::ShellHelpers::PropertySetHelper::PropertySetHelper(
    (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
    a3);
  v24 = 0;
  v31 = 0LL;
  Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
  if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v29, (__int64)v31, v4, &v24) < 0 )
    goto LABEL_10;
  v5 = v24;
  v28 = 0LL;
  v6 = *((_QWORD *)this + 29);
  v7 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v6 + 48LL);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
  ApplicationViewUniqueId = v7(v6, v5, &v28);
  v9 = ApplicationViewUniqueId;
  if ( ApplicationViewUniqueId >= 0 )
  {
    v25 = 0;
    ApplicationViewUniqueId = HolographicPositioner::_GetApplicationViewUniqueId(v28, &v25);
    v9 = ApplicationViewUniqueId;
    if ( ApplicationViewUniqueId < 0 )
    {
      v10 = 1878LL;
      goto LABEL_8;
    }
    v11 = v25;
    v31 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdTo", 0x11u, 0x10u);
    ApplicationViewUniqueId = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
                                (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
                                v31,
                                v12,
                                v11);
    v9 = ApplicationViewUniqueId;
    if ( ApplicationViewUniqueId < 0 )
    {
      v10 = 1880LL;
      goto LABEL_8;
    }
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v28);
LABEL_10:
    v26 = 0;
    v31 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdFrom", 0x13u, 0x12u);
    if ( (int)Windows::Internal::ShellHelpers::PropertySetHelper::GetValue<unsigned int>(&v29, (__int64)v31, v14, &v26) >= 0 )
    {
      v15 = v26;
      v23 = 0LL;
      v16 = *((_QWORD *)this + 29);
      v17 = *(__int64 (__fastcall **)(__int64, _QWORD, struct IApplicationView **))(*(_QWORD *)v16 + 48LL);
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
      v18 = v17(v16, v15, &v23);
      v9 = v18;
      if ( v18 < 0 )
      {
        v19 = 1889LL;
LABEL_13:
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)v19,
          (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
          (const char *)(unsigned int)v18);
        v13 = (__int64 *)&v23;
        goto LABEL_14;
      }
      v27 = 0;
      v18 = HolographicPositioner::_GetApplicationViewUniqueId(v23, &v27);
      v9 = v18;
      if ( v18 < 0 )
      {
        v19 = 1892LL;
        goto LABEL_13;
      }
      v20 = v27;
      v31 = 0LL;
      Microsoft::WRL::Wrappers::HStringReference::CreateReference(&hstringHeader, L"SwitchAsync_IdFrom", 0x13u, 0x12u);
      v18 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
              (Windows::Internal::ShellHelpers::PropertySetHelper *)&v29,
              v31,
              v21,
              v20);
      v9 = v18;
      if ( v18 < 0 )
      {
        v19 = 1894LL;
        goto LABEL_13;
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v23);
    }
    v9 = 0;
    goto LABEL_21;
  }
  v10 = 1875LL;
LABEL_8:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v10,
    (int)"pcshell\\twinui\\holographicpositioner\\lib\\holographicpositioner.cpp",
    (const char *)(unsigned int)ApplicationViewUniqueId);
  v13 = (__int64 *)&v28;
LABEL_14:
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(v13);
LABEL_21:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v29);
  return v9;
}
