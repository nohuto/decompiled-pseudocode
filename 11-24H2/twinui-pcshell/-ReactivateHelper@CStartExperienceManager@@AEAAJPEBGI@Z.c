/*
 * XREFs of ?ReactivateHelper@CStartExperienceManager@@AEAAJPEBGI@Z @ 0x180122FF8
 * Callers:
 *     ?StartThemeChanged@CStartExperienceManager@@QEAAJW4StartThemeUpdateType@@@Z @ 0x180122F98 (-StartThemeChanged@CStartExperienceManager@@QEAAJW4StartThemeUpdateType@@@Z.c)
 *     ?TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Internal@Windows@@@Z @ 0x180392940 (-TakeKeyboardFocus@CStartExperienceManager@@UEAAJW4FocusNavigateDirection@Experience@Shell@Inter.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?InternalAddRef@?$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ @ 0x180016C0C (-InternalAddRef@-$ComPtr@UIWindowingEnvironmentConfig@@@WRL@Microsoft@@IEBAXXZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003D4C4 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Internal@Windows@@KPEAUHSTRING__@@11PEAUIPropertySet@Collections@Foundation@6@2@Z @ 0x18003E8E4 (-RaiseReactivatedEvent@ExperienceManagerUtils@@YAJPEAUIViewWrapper@ViewManagerInterop@Shell@Inte.c)
 *     ??$ActivateInstance@UIPropertySet@Collections@Foundation@Windows@@@Foundation@Windows@@YAJPEAUHSTRING__@@PEAPEAUIPropertySet@Collections@01@@Z @ 0x180123288 (--$ActivateInstance@UIPropertySet@Collections@Foundation@Windows@@@Foundation@Windows@@YAJPEAUHS.c)
 *     ??$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyValueStatics@Foundation@3@EAAJIPEAPEAUIInspectable@@@ZI@Z @ 0x180123324 (--$SetValue@I@PropertySetHelper@ShellHelpers@Internal@Windows@@AEAAJPEAUHSTRING__@@P8IPropertyVa.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=5
__int64 __fastcall CStartExperienceManager::ReactivateHelper(CStartExperienceManager *this, const unsigned __int16 *a2)
{
  HRESULT v4; // eax
  int v5; // edx
  unsigned int v6; // r8d
  unsigned __int64 v7; // rbx
  int v8; // edx
  unsigned int v9; // r8d
  unsigned __int64 v10; // rdi
  unsigned int v11; // eax
  UINT32 v12; // edx
  HRESULT v13; // eax
  int v14; // edx
  unsigned int v15; // r8d
  int v16; // eax
  int v17; // edx
  unsigned int v18; // r8d
  unsigned int v19; // edi
  HSTRING v20; // rdi
  unsigned int v21; // eax
  UINT32 v22; // edx
  HRESULT v23; // eax
  int v24; // edx
  unsigned int v25; // r8d
  __int64 *v26; // rcx
  HSTRING v27; // rcx
  HSTRING v29; // rcx
  HSTRING v30; // [rsp+40h] [rbp-40h] BYREF
  HSTRING v31; // [rsp+48h] [rbp-38h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+50h] [rbp-30h] BYREF
  HSTRING string; // [rsp+68h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+B8h] [rbp+38h]

  v30 = 0LL;
  string = 0LL;
  v4 = WindowsCreateStringReference(L"Windows.Foundation.Collections.ValueSet", 0x27u, &hstringHeader, &string);
  if ( v4 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v4, v5, v6);
    goto LABEL_26;
  }
  v7 = (unsigned __int64)string;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
  LODWORD(v7) = Windows::Foundation::ActivateInstance<Windows::Foundation::Collections::IPropertySet>(v7, &v30);
  if ( (v7 & 0x80000000) != 0LL )
  {
LABEL_22:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x490,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v7);
    v29 = v30;
    if ( v30 )
    {
      v30 = 0LL;
      (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v29 + 16LL))(v29);
    }
    return (unsigned int)v7;
  }
  v31 = v30;
  Microsoft::WRL::ComPtr<IWindowingEnvironmentConfig>::InternalAddRef((__int64 *)&v31);
  string = 0LL;
  v7 = -1LL;
  v10 = -1LL;
  do
    ++v10;
  while ( aUint32[v10] );
  if ( v10 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v8, v9);
    goto LABEL_22;
  }
  v11 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v10, v8, v9);
  v12 = v11 - 1;
  if ( (unsigned int)v10 < v11 )
    v12 = v10;
  v13 = WindowsCreateStringReference(L"Uint32", v12, &hstringHeader, &string);
  if ( v13 < 0 )
  {
LABEL_26:
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v13, v14, v15);
    __debugbreak();
  }
  v16 = Windows::Internal::ShellHelpers::PropertySetHelper::SetValue<unsigned int>(
          (Windows::Internal::ShellHelpers::PropertySetHelper *)&v31,
          string);
  v19 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x492,
      (int)"pcshell\\twinui\\experiencemanagers\\lib\\startexperiencemanager.cpp",
      (const char *)(unsigned int)v16);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
    return v19;
  }
  else
  {
    v20 = v30;
    string = 0LL;
    do
      ++v7;
    while ( a2[v7] );
    if ( v7 > 0xFFFFFFFF )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v17, v18);
      __debugbreak();
    }
    v21 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v7, v17, v18);
    v22 = v21 - 1;
    if ( (unsigned int)v7 < v21 )
      v22 = v7;
    v23 = WindowsCreateStringReference(a2, v22, &hstringHeader, &string);
    if ( v23 < 0 )
    {
      Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v23, v24, v25);
    }
    else
    {
      LODWORD(v7) = ExperienceManagerUtils::RaiseReactivatedEvent(
                      *((ExperienceManagerUtils **)this + 43),
                      (struct Windows::Internal::Shell::ViewManagerInterop::IViewWrapper *)*((unsigned int *)this + 112),
                      *((HSTRING *)this + 41),
                      *((HSTRING *)this + 42),
                      string,
                      v20);
      v26 = (__int64 *)&v31;
      if ( (v7 & 0x80000000) != 0LL )
      {
        Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v31);
        v27 = v30;
        if ( v30 )
        {
          v30 = 0LL;
          (*(void (__fastcall **)(HSTRING))(*(_QWORD *)v27 + 16LL))(v27);
        }
        return (unsigned int)v7;
      }
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(v26);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v30);
    return 0LL;
  }
}
