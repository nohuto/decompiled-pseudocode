/*
 * XREFs of ?_ActivateApplicationForLaunchHelperWithWindowFactory@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUHMONITOR__@@PEAUICoreWindowFactory@Core@UI@Windows@@PEAK@Z @ 0x1800569DC
 * Callers:
 *     ?ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTIVATEOPTIONSINTERNAL@@PEAUISplashScreen@@PEAUHMONITOR__@@PEAK@Z @ 0x18067F9F0 (-ActivateApplicationForLaunchWithManager@@YAJPEAUIApplicationActivationManagerPriv@@PEBG11W4ACTI.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?InternalRelease@?$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ @ 0x180029F90 (-InternalRelease@-$ComPtr@UIUnknown@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?_Free@?$NativeString@V?$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ @ 0x18002AEA8 (-_Free@-$NativeString@V-$CoTaskMemPolicy@G@Internal@Windows@@@Internal@Windows@@AEAAXXZ.c)
 *     ??$IID_PPV_ARGS_Helper@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@@YAPEAPEAXV?$ComPtrRef@V?$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@@@Details@WRL@Microsoft@@@Z @ 0x18003068C (--$IID_PPV_ARGS_Helper@V-$ComPtr@UIHolographicViewTransitionNotificationService@@@WRL@Microsoft@.c)
 *     ??$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@ApplicationModel@Windows@@V_lambda_12603dae6e80c2220100b0c8836f21bd_@@@ComTaskPool@Internal@Windows@@CAJW4TaskOptions@12@KPEAPEAUIActivatedEventArgs@Activation@ApplicationModel@2@AEBV_lambda_12603dae6e80c2220100b0c8836f21bd_@@@Z @ 0x18003C914 (--$_MakeAndInitializeOnSTAThread@VCLaunchActivatedEventArgs@@UIActivatedEventArgs@Activation@App.c)
 *     ?InternalRelease@?$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ @ 0x18003D498 (-InternalRelease@-$ComPtr@UIDCompositionSurface@@@WRL@Microsoft@@IEAAKXZ.c)
 *     ?ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z @ 0x18003D4E8 (-ParseAppUserModelId@@YAJPEBGPEAPEAG1@Z.c)
 *     ?_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z @ 0x180056964 (-_ConstructorHelper@StringReference@Internal@Windows@@AEAAXPEBG@Z.c)
 *     ??$?0$0P@@StringReference@Internal@Windows@@QEAA@AEAY0P@$$CBG@Z @ 0x180056D4C (--$-0$0P@@StringReference@Internal@Windows@@QEAA@AEAY0P@$$CBG@Z.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ??$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@PEAUIUnknown@@@Details@WRL@Microsoft@@YAJPEAPEAVCLaunchToMonitor@@AEAPEAUHMONITOR__@@$$QEAPEAUIUnknown@@@Z @ 0x18067F684 (--$MakeAndInitialize@VCLaunchToMonitor@@V1@AEAPEAUHMONITOR__@@PEAUIUnknown@@@Details@WRL@Microso.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall _ActivateApplicationForLaunchHelperWithWindowFactory(
        IUnknown *a1,
        unsigned __int16 *a2,
        const WCHAR *a3,
        char *a4,
        int a5,
        __int64 a6,
        __int64 a7,
        _DWORD *a8)
{
  _DWORD *v9; // r13
  unsigned __int64 v11; // rbx
  const WCHAR *v12; // r12
  unsigned __int64 v13; // rdi
  __int64 v14; // rdx
  int v15; // ecx
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rcx
  void (*v19)(void); // rax
  __int64 *v21; // rax
  HRESULT Site; // eax
  const unsigned __int16 *v23; // rdx
  __int64 v24; // rdi
  HRESULT (__stdcall *QueryInterface)(IUnknown *, const IID *const, void **); // rsi
  __int64 v26; // rbx
  __int64 v27; // rcx
  HRESULT v28; // eax
  __int64 v29; // rdx
  __int64 v30; // [rsp+40h] [rbp-A9h] BYREF
  IUnknown *v31; // [rsp+48h] [rbp-A1h] BYREF
  IUnknown *punkSite; // [rsp+50h] [rbp-99h] BYREF
  void *v33; // [rsp+58h] [rbp-91h] BYREF
  PCWSTR sourceString[3]; // [rsp+60h] [rbp-89h] BYREF
  unsigned __int16 *v35; // [rsp+78h] [rbp-71h]
  __int64 v36; // [rsp+80h] [rbp-69h]
  _QWORD v37[3]; // [rsp+88h] [rbp-61h] BYREF
  HSTRING v38; // [rsp+A0h] [rbp-49h] BYREF
  HSTRING_HEADER v39; // [rsp+A8h] [rbp-41h] BYREF
  HSTRING string; // [rsp+C0h] [rbp-29h] BYREF
  HSTRING_HEADER hstringHeader; // [rsp+C8h] [rbp-21h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+3Fh]

  v9 = a8;
  v35 = a2;
  v36 = a7;
  v11 = -1LL;
  sourceString[0] = 0LL;
  *a8 = 0;
  sourceString[1] = (PCWSTR)-1LL;
  v12 = (const WCHAR *)a4;
  sourceString[2] = (PCWSTR)-1LL;
  v30 = 0LL;
  v13 = -1LL;
  if ( (int)ParseAppUserModelId(a4, 0LL, (unsigned __int16 **)sourceString) >= 0 )
    v12 = sourceString[0];
  do
    ++v13;
  while ( v12[v13] );
  if ( v13 > 0xFFFFFFFF )
  {
    LODWORD(v13) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(v12, v13, &hstringHeader, &string);
  v33 = string;
  if ( !a3 )
    a3 = &pvData;
  do
    ++v11;
  while ( a3[v11] );
  if ( v11 > 0xFFFFFFFF )
  {
    LODWORD(v11) = -1;
    RaiseException(0xC000000D, 1u, 0, 0LL);
  }
  WindowsCreateStringReference(a3, v11, &v39, &v38);
  v31 = (IUnknown *)v38;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v30);
  v37[0] = &v31;
  v37[1] = &v33;
  v16 = Windows::Internal::ComTaskPool::_MakeAndInitializeOnSTAThread<CLaunchActivatedEventArgs,Windows::ApplicationModel::Activation::IActivatedEventArgs,_lambda_12603dae6e80c2220100b0c8836f21bd_>(
          v15,
          v14,
          &v30,
          (__int64)v37);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x22,
      (int)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
      (const char *)(unsigned int)v16);
    v18 = v30;
    if ( !v30 )
      goto LABEL_15;
    v30 = 0LL;
    v19 = *(void (**)(void))(*(_QWORD *)v18 + 16LL);
    goto LABEL_14;
  }
  punkSite = 0LL;
  v21 = IID_PPV_ARGS_Helper<Microsoft::WRL::ComPtr<IHolographicViewTransitionNotificationService>>((__int64 *)&punkSite);
  Site = IUnknown_GetSite(a1, &GUID_00000000_0000_0000_c000_000000000046, (void **)v21);
  v17 = Site;
  if ( Site < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x2B,
      (int)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
      (const char *)(unsigned int)Site);
LABEL_28:
    Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punkSite);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease(&v30);
    Windows::Internal::NativeString<Windows::Internal::CoTaskMemPolicy<unsigned short>>::_Free((__int64)sourceString);
    return v17;
  }
  if ( !a6 )
    goto LABEL_20;
  v33 = punkSite;
  v31 = 0LL;
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v31);
  v28 = Microsoft::WRL::Details::MakeAndInitialize<CLaunchToMonitor,CLaunchToMonitor,HMONITOR__ * &,IUnknown *>(
          &v31,
          &a6,
          &v33);
  v17 = v28;
  if ( v28 < 0 )
  {
    v29 = 54LL;
LABEL_27:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v29,
      (int)"onecoreuap\\shell\\twinui\\activationhelper\\activationhelpers.cpp",
      (const char *)(unsigned int)v28);
    Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v31);
    IUnknown_SetSite(a1, punkSite);
    goto LABEL_28;
  }
  v28 = IUnknown_SetSite(a1, v31);
  v17 = v28;
  if ( v28 < 0 )
  {
    v29 = 55LL;
    goto LABEL_27;
  }
  Microsoft::WRL::ComPtr<IDCompositionSurface>::InternalRelease((__int64 *)&v31);
LABEL_20:
  v24 = v30;
  QueryInterface = a1->lpVtbl[1].QueryInterface;
  v26 = *(_QWORD *)Windows::Internal::StringReference::StringReference(&string, (const unsigned __int16 (*)[15])v23);
  Windows::Internal::StringReference::_ConstructorHelper((Windows::Internal::StringReference *)&v38, v35);
  v17 = ((__int64 (__fastcall *)(IUnknown *, HSTRING, __int64, __int64, __int64, int, _DWORD *))QueryInterface)(
          a1,
          v38,
          v36,
          v26,
          v24,
          a5,
          v9);
  IUnknown_SetSite(a1, punkSite);
  Microsoft::WRL::ComPtr<IUnknown>::InternalRelease((__int64 *)&punkSite);
  v27 = v30;
  if ( v30 )
  {
    v30 = 0LL;
    v19 = *(void (**)(void))(*(_QWORD *)v27 + 16LL);
LABEL_14:
    v19();
  }
LABEL_15:
  if ( sourceString[0] )
    CoTaskMemFree((LPVOID)sourceString[0]);
  return v17;
}
