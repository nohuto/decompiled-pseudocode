/*
 * XREFs of ?SetViewValueSet@ViewSizePreferenceHelpers@@YAJPEAUIUnknown@@PEAUIPropertySet@Collections@Foundation@Windows@@@Z @ 0x1801B1C58
 * Callers:
 *     ?ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z @ 0x1804E9760 (-ActivateApp@CDelayedTileActivation@@UEAAJPEAUIImmersiveMonitor@@PEAUISplashScreen@@@Z.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?GetSourceViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Collections@Foundation@Windows@@PEAW4APPLICATION_VIEW_SIZE_PREFERENCE@@PEAPEAUHWND__@@@Z @ 0x1801B1E34 (-GetSourceViewSizePreferenceFromPropertySet@ViewSizePreferenceHelpers@@YAJPEAUIPropertySet@Colle.c)
 *     ?GetWindowingPolicy@ViewSizePreferenceHelpers@@YA?AW4AppModelPolicy_PolicyValue@@PEAUHWND__@@@Z @ 0x1802C6E50 (-GetWindowingPolicy@ViewSizePreferenceHelpers@@YA-AW4AppModelPolicy_PolicyValue@@PEAUHWND__@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=6
__int64 __fastcall ViewSizePreferenceHelpers::SetViewValueSet(
        __int64 (__fastcall ***this)(ViewSizePreferenceHelpers *, GUID *, __int64 *),
        struct IUnknown *a2,
        struct Windows::Foundation::Collections::IPropertySet *a3)
{
  int v5; // eax
  unsigned int v6; // ebx
  __int64 v7; // rbx
  __int64 (__fastcall *v8)(__int64, struct IUnknown *, __int64 *); // rdi
  int v9; // eax
  HWND *v10; // r9
  unsigned int v11; // edi
  __int64 (__fastcall *v12)(ViewSizePreferenceHelpers *, GUID *, __int64 *); // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // [rsp+30h] [rbp-20h] BYREF
  __int64 v20; // [rsp+38h] [rbp-18h] BYREF
  __int64 v21; // [rsp+40h] [rbp-10h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+78h] [rbp+28h]
  int v23; // [rsp+90h] [rbp+40h] BYREF
  __int64 v24; // [rsp+98h] [rbp+48h] BYREF

  v20 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
  v5 = RoCreatePropertySetSerializer(&v20);
  v6 = v5;
  if ( v5 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x136,
      (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v5);
LABEL_13:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v20);
    return v6;
  }
  v24 = 0LL;
  v7 = v20;
  v8 = *(__int64 (__fastcall **)(__int64, struct IUnknown *, __int64 *))(*(_QWORD *)v20 + 48LL);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
  v9 = v8(v7, a2, &v24);
  v6 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x138,
      (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v9);
LABEL_12:
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v24);
    goto LABEL_13;
  }
  v23 = 0;
  v21 = 0LL;
  ViewSizePreferenceHelpers::GetSourceViewSizePreferenceFromPropertySet(
    (ViewSizePreferenceHelpers *)a2,
    (struct Windows::Foundation::Collections::IPropertySet *)&v23,
    (enum APPLICATION_VIEW_SIZE_PREFERENCE *)&v21,
    v10);
  v11 = v21;
  if ( (unsigned int)ViewSizePreferenceHelpers::GetWindowingPolicy(v21) != 196609 )
    v11 = 0;
  v19 = 0LL;
  v12 = **this;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
  v13 = v12((ViewSizePreferenceHelpers *)this, &GUID_54e4c428_d1d4_47d4_ade6_46c829114a7d, &v19);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 324LL;
LABEL_11:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v14,
      (int)"onecoreuap\\internal\\shell\\inc\\ViewSizePreference.h",
      (const char *)(unsigned int)v13);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    goto LABEL_12;
  }
  v13 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, __int64))(*(_QWORD *)v19 + 136LL))(
          v19,
          v11,
          0LL,
          0LL,
          v24);
  v6 = v13;
  if ( v13 < 0 )
  {
    v14 = 329LL;
    goto LABEL_11;
  }
  v16 = v19;
  if ( v19 )
  {
    v19 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v16 + 16LL))(v16);
  }
  v17 = v24;
  if ( v24 )
  {
    v24 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v17 + 16LL))(v17);
  }
  v18 = v20;
  if ( v20 )
  {
    v20 = 0LL;
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v18 + 16LL))(v18);
  }
  return 0LL;
}
