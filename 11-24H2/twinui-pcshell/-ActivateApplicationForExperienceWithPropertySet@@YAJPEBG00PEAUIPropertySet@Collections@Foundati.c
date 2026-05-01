/*
 * XREFs of ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG00PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x18003D24C
 * Callers:
 *     ?LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z @ 0x180285570 (-LaunchCore@CSingleViewShellExperience@@AEAAJAEBVHString@Wrappers@WRL@Microsoft@@PEBG@Z.c)
 *     ?LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z @ 0x1803A52C0 (-LaunchApplication@RetailDemoExperienceManager@@UEAAJPEAUHSTRING__@@00@Z.c)
 *     _lambda_668917084cb4c0da526c2ffad1d9f84c_::operator() @ 0x1803A8C74 (_lambda_668917084cb4c0da526c2ffad1d9f84c_--operator().c)
 *     _lambda_c5b63f338e787c1dc9ce32ee8c9a5927_::operator() @ 0x18046ECA4 (_lambda_c5b63f338e787c1dc9ce32ee8c9a5927_--operator().c)
 *     _lambda_24ba1d0144fdbdb30bf1c64e70acfff3_::operator() @ 0x18048E7CC (_lambda_24ba1d0144fdbdb30bf1c64e70acfff3_--operator().c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ?ActivateApplicationForExperienceWithPropertySet@@YAJPEBG0PEAUIInspectable@@0PEAUIPropertySet@Collections@Foundation@Windows@@W4ActivateApplicationForExperienceOptions@@PEAK@Z @ 0x180039708 (-ActivateApplicationForExperienceWithPropertySet@@YAJPEBG0PEAUIInspectable@@0PEAUIPropertySet@Co.c)
 *     ??$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@V_lambda_12603dae6e80c2220100b0c8836f21bd_@@@ComTaskPool@Internal@Windows@@CAJW4TaskOptions@12@KPEAPEAUIActivatedEventArgs@Activation@ApplicationModel@2@AEBV_lambda_12603dae6e80c2220100b0c8836f21bd_@@@Z @ 0x18003C914 (--$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@App.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z @ 0x18003D4C4 (-AddOne@HStringReference@Wrappers@WRL@Microsoft@@CAII@Z.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18003D4E8 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?RaiseException@Details@WRL@Microsoft@@YAXJK@Z @ 0x1802B7C4C (-RaiseException@Details@WRL@Microsoft@@YAXJK@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall ActivateApplicationForExperienceWithPropertySet(
        const unsigned __int16 *a1,
        const WCHAR *a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        __int64 a6)
{
  unsigned __int64 v9; // rbx
  int v10; // edx
  unsigned int v11; // r8d
  const WCHAR *v12; // r14
  unsigned __int64 v13; // rsi
  unsigned int v14; // eax
  UINT32 v15; // edx
  HRESULT v16; // eax
  int v17; // edx
  unsigned int v18; // r8d
  unsigned int v19; // eax
  UINT32 v20; // edx
  HRESULT v21; // eax
  int v22; // edx
  unsigned int v23; // r8d
  __int64 v24; // rdx
  int v25; // ecx
  int v26; // eax
  __int64 v27; // rdx
  int v28; // ebx
  __int64 v29; // rcx
  void (*v30)(void); // rax
  __int64 v32; // rcx
  __int64 v33; // [rsp+40h] [rbp-89h] BYREF
  PCWSTR sourceString[3]; // [rsp+48h] [rbp-81h] BYREF
  HSTRING v35; // [rsp+60h] [rbp-69h] BYREF
  HSTRING v36; // [rsp+68h] [rbp-61h] BYREF
  __int64 v37; // [rsp+70h] [rbp-59h]
  __int64 v38; // [rsp+78h] [rbp-51h]
  _QWORD v39[2]; // [rsp+80h] [rbp-49h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+90h] [rbp-39h] BYREF
  HSTRING string; // [rsp+A8h] [rbp-21h] BYREF
  HSTRING_HEADER v42; // [rsp+B0h] [rbp-19h] BYREF
  HSTRING v43; // [rsp+C8h] [rbp-1h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+4Fh]

  v38 = a4;
  v37 = a6;
  sourceString[0] = 0LL;
  v9 = -1LL;
  sourceString[1] = (PCWSTR)-1LL;
  sourceString[2] = (PCWSTR)-1LL;
  v12 = a1;
  if ( (int)ParseAppUserModelId(a1, 0LL, (unsigned __int16 **)sourceString) >= 0 )
    v12 = sourceString[0];
  v33 = 0LL;
  string = 0LL;
  v13 = -1LL;
  do
    ++v13;
  while ( v12[v13] );
  if ( v13 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v10, v11);
    __debugbreak();
  }
  v14 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v13);
  v15 = v14 - 1;
  if ( (unsigned int)v13 < v14 )
    v15 = v13;
  v16 = WindowsCreateStringReference(v12, v15, &hstringHeader, &string);
  if ( v16 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v16, v17, v18);
    __debugbreak();
  }
  v36 = string;
  v43 = 0LL;
  do
    ++v9;
  while ( a2[v9] );
  if ( v9 > 0xFFFFFFFF )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)0x80070216LL, v17, v18);
    __debugbreak();
  }
  v19 = Microsoft::WRL::Wrappers::HStringReference::AddOne(v9);
  v20 = v19 - 1;
  if ( (unsigned int)v9 < v19 )
    v20 = v9;
  v21 = WindowsCreateStringReference(a2, v20, &v42, &v43);
  if ( v21 < 0 )
  {
    Microsoft::WRL::Details::RaiseException((Microsoft::WRL::Details *)(unsigned int)v21, v22, v23);
    goto LABEL_29;
  }
  v35 = v43;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v33);
  v39[0] = &v35;
  v39[1] = &v36;
  v26 = Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread<CLaunchActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgs,_lambda_12603dae6e80c2220100b0c8836f21bd_>(
          v25,
          v24,
          &v33,
          (__int64)v39);
  v28 = v26;
  if ( v26 >= 0 )
  {
    v28 = ActivateApplicationForExperienceWithPropertySet((__int64)a1, v27, v33, a3, v38, a5, v37);
    if ( v28 < 0 )
    {
      v32 = v33;
      if ( !v33 )
        goto LABEL_19;
      v33 = 0LL;
      v30 = *(void (**)(void))(*(_QWORD *)v32 + 16LL);
      goto LABEL_18;
    }
LABEL_29:
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v33);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)sourceString);
    return 0LL;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0xD1,
    (int)"shell\\twinui\\experiencemanagers\\corelib\\experienceactivationhelpers.cpp",
    (const char *)(unsigned int)v26);
  v29 = v33;
  if ( v33 )
  {
    v33 = 0LL;
    v30 = *(void (**)(void))(*(_QWORD *)v29 + 16LL);
LABEL_18:
    v30();
  }
LABEL_19:
  if ( sourceString[0] )
    CoTaskMemFree((LPVOID)sourceString[0]);
  return (unsigned int)v28;
}
