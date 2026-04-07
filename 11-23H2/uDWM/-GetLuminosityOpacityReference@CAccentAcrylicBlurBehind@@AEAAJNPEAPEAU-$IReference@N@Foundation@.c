/*
 * XREFs of ?GetLuminosityOpacityReference@CAccentAcrylicBlurBehind@@AEAAJNPEAPEAU?$IReference@N@Foundation@Windows@@@Z @ 0x1800A02B0
 * Callers:
 *     ?EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z @ 0x18009EC18 (-EnsureAcrylicBrushForAccent@CAccentAcrylicBlurBehind@@AEAAJKPEBN@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180008D08 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z @ 0x18001FCEC (-CreateReference@HStringReference@Wrappers@WRL@Microsoft@@AEAAXPEBGII@Z.c)
 *     __security_check_cookie @ 0x18005C640 (__security_check_cookie.c)
 *     _guard_xfg_dispatch_icall_nop @ 0x180066260 (_guard_xfg_dispatch_icall_nop.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18009D254 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??$As@U?$IReference@N@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@U?$IReference@N@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009E4C4 (--$As@U-$IReference@N@Foundation@Windows@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV-$ComPt.c)
 *     ??$As@UIPropertyValueStatics@Foundation@Windows@@@?$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV?$ComPtrRef@V?$ComPtr@UIPropertyValueStatics@Foundation@Windows@@@WRL@Microsoft@@@Details@12@@Z @ 0x18009E6EC (--$As@UIPropertyValueStatics@Foundation@Windows@@@-$ComPtr@UIInspectable@@@WRL@Microsoft@@QEBAJV.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CAccentAcrylicBlurBehind::GetLuminosityOpacityReference(__int64 a1, __int64 a2, __int64 *a3)
{
  unsigned int v4; // ebx
  int ActivationFactory; // eax
  int v6; // eax
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, __int64, _QWORD); // rdi
  __int64 v9; // rdx
  int v10; // eax
  int v11; // eax
  __int64 v12; // rax
  __int64 (__fastcall ***v14)(_QWORD, GUID *, __int64 *); // [rsp+20h] [rbp-60h] BYREF
  __int64 v15; // [rsp+28h] [rbp-58h] BYREF
  __int64 v16; // [rsp+30h] [rbp-50h] BYREF
  __int64 (__fastcall ***v17)(_QWORD, GUID *, __int64 *); // [rsp+38h] [rbp-48h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+40h] [rbp-40h] BYREF
  __int64 v19; // [rsp+58h] [rbp-28h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  if ( a3 )
  {
    *a3 = 0LL;
    v17 = 0LL;
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    v19 = 0LL;
    Microsoft::WRL::Wrappers::HStringReference::CreateReference(
      &hstringHeader,
      L"Windows.Foundation.PropertyValue",
      0x21u,
      0x20u);
    ActivationFactory = RoGetActivationFactory(v19, &GUID_af86e2e0_b12d_4c6a_9c5a_d7aa65101e90, &v17);
    v4 = ActivationFactory;
    if ( ActivationFactory >= 0 )
    {
      v15 = 0LL;
      v6 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IPropertyValueStatics>(&v17, &v15);
      v4 = v6;
      if ( v6 >= 0 )
      {
        v14 = 0LL;
        v7 = v15;
        v8 = *(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v15 + 120LL);
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
        v10 = v8(v7, v9, &v14);
        v4 = v10;
        if ( v10 >= 0 )
        {
          v16 = 0LL;
          v11 = Microsoft::WRL::ComPtr<IInspectable>::As<Windows::Foundation::IReference<double>>(&v14, &v16);
          v4 = v11;
          if ( v11 >= 0 )
          {
            v12 = v16;
            v16 = 0LL;
            *a3 = v12;
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
            Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
            v4 = 0;
            goto LABEL_14;
          }
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x518,
            (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
            (const char *)(unsigned int)v11);
          Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v16);
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x515,
            (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
            (const char *)(unsigned int)v10);
        }
        Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v14);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x512,
          (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
          (const char *)(unsigned int)v6);
      }
      Microsoft::WRL::ComPtr<IUnknown>::InternalRelease(&v15);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x50F,
        (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
        (const char *)(unsigned int)ActivationFactory);
    }
LABEL_14:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&v17);
    return v4;
  }
  v4 = -2147024809;
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x509,
    (__int64)"clientcore\\windows\\dwm\\udwm\\accent.cpp",
    (const char *)0x80070057LL);
  return v4;
}
