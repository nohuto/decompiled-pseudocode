/*
 * XREFs of ?_CreateFrameManager@CApplicationFrameService@@AEAAJW4CallContext@1@@Z @ 0x18022FC48
 * Callers:
 *     _lambda_4374eff018dc91e582b31b47abd97ab1_::operator() @ 0x18022FB58 (_lambda_4374eff018dc91e582b31b47abd97ab1_--operator().c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ??4?$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x180017AE8 (--4-$ComPtr@UIApplicationView@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z.c)
 *     ?GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z @ 0x1800A3BC8 (-GetFakeFailure@CCriticalFailureHandler@@QEBAXPEAJ@Z.c)
 *     ??1?$CAutoHandle@PEAX@@QEAA@XZ @ 0x1801B59F8 (--1-$CAutoHandle@PEAX@@QEAA@XZ.c)
 *     ?IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z @ 0x1801BC75C (-IUnknown_GetServerProcessHandle@@YAJPEAUIUnknown@@KPEAPEAX@Z.c)
 *     CCrashDetector::TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818___ @ 0x1801E77B8 (CCrashDetector--TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818.c)
 *     ?StopMonitoring@CCrashDetector@@QEAAXXZ @ 0x180236478 (-StopMonitoring@CCrashDetector@@QEAAXXZ.c)
 *     ?Stop@?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAAXJ@Z @ 0x180296034 (-Stop@-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsPro.c)
 *     ?StartActivity@AppFrameHostStartup@CAppManagerTelemetry@@QEAAXXZ @ 0x1802976FC (-StartActivity@AppFrameHostStartup@CAppManagerTelemetry@@QEAAXXZ.c)
 *     ??0?$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x18029779C (--0-$ActivityBase@VCAppManagerLogging@@$00$0EAAAAAAAAAAA@$04$0A@U_TlgReflectorTag_P_ea_18029779C.c)
 *     ?Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ @ 0x1802CAD00 (-Log_IfFailedMsg@in1diag3@details@wil@@YAJPEAXIPEBDJ1ZZ.c)
 *     ??1AppFrameHostStartup@CAppManagerTelemetry@@QEAA@XZ @ 0x1802CCA0C (--1AppFrameHostStartup@CAppManagerTelemetry@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     ?HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z @ 0x180679D28 (-HandleFailure@CCriticalFailureHandler@@QEBAXPEAJPEBGIPEA_K2@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall CApplicationFrameService::_CreateFrameManager(__int64 a1, int a2)
{
  int Instance; // ebx
  CCriticalFailureHandler *v5; // rcx
  CCriticalFailureHandler *v6; // rcx
  CCriticalFailureHandler *v7; // rcx
  char *v8; // rdx
  CCriticalFailureHandler *v9; // rcx
  unsigned __int64 *ppv; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *ppva; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *ppvb; // [rsp+20h] [rbp-E0h]
  unsigned __int64 *ppvc; // [rsp+20h] [rbp-E0h]
  const char *v15; // [rsp+28h] [rbp-D8h]
  unsigned __int64 *v16; // [rsp+28h] [rbp-D8h]
  unsigned __int64 *v17; // [rsp+28h] [rbp-D8h]
  unsigned __int64 *v18; // [rsp+28h] [rbp-D8h]
  unsigned __int64 *v19; // [rsp+28h] [rbp-D8h]
  int v20[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v21; // [rsp+38h] [rbp-C8h] BYREF
  struct IUnknown *v22; // [rsp+40h] [rbp-C0h] BYREF
  void *v23; // [rsp+48h] [rbp-B8h] BYREF
  _QWORD v24[42]; // [rsp+50h] [rbp-B0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+1D8h] [rbp+D8h]

  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>((struct wil::details::IFailureCallback *)v24);
  v24[0] = &CAppManagerTelemetry::AppFrameHostStartup::`vftable';
  CAppManagerTelemetry::AppFrameHostStartup::StartActivity((CAppManagerTelemetry::AppFrameHostStartup *)v24);
  CCrashDetector::StopMonitoring((CCrashDetector *)(a1 + 200));
  v21 = 0;
  v22 = 0LL;
  v23 = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  Instance = CoCreateInstance(
               &GUID_b9b05098_3e30_483f_87f7_027ca78da287,
               0LL,
               0x404u,
               &GUID_a914f499_4633_4b26_a93e_707eb5bdc0b6,
               (LPVOID *)&v22);
  v20[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    (void *)0x4EC,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (int)"Failed to connect to the application frame host server",
    v15);
  if ( !a2 )
  {
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v5, v20);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v20[0];
    }
    if ( Instance >= 0 )
      goto LABEL_9;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v5,
        v20,
        L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        0x4EDu,
        ppv,
        v16);
      Instance = v20[0];
    }
  }
  if ( Instance < 0 )
    goto LABEL_34;
LABEL_9:
  Instance = ((__int64 (__fastcall *)(struct IUnknown *, __int64, int *))v22->lpVtbl[2].AddRef)(
               v22,
               (a1 + 48) & -(__int64)(a1 != 0),
               &v21);
  v20[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    (void *)0x4F4,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (int)"Failed to register for application frame events",
    (const char *)v16);
  if ( !a2 )
  {
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v6, v20);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v20[0];
    }
    if ( Instance >= 0 )
      goto LABEL_17;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v6,
        v20,
        L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        0x4F5u,
        ppva,
        v17);
      Instance = v20[0];
    }
  }
  if ( Instance < 0 )
    goto LABEL_34;
LABEL_17:
  Instance = IUnknown_GetServerProcessHandle(v22, 0x100000u, &v23);
  v20[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    (void *)0x4FB,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (int)"Failed to open a handle on the application frame host server for waiting purposes",
    (const char *)v17);
  if ( a2 )
    goto LABEL_24;
  if ( !CRVPrivate::cfhImmersiveShellStartup )
  {
    CCriticalFailureHandler::GetFakeFailure(v7, v20);
    CRVPrivate::cfhImmersiveShellStartup = 1;
    Instance = v20[0];
  }
  if ( Instance < 0 )
  {
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v7,
        v20,
        L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        0x4FCu,
        ppvb,
        v18);
      Instance = v20[0];
    }
LABEL_24:
    if ( Instance < 0 )
      goto LABEL_34;
  }
  *(_QWORD *)v20 = a1;
  v8 = (char *)v23;
  v23 = 0LL;
  Instance = CCrashDetector::TakeOwnershipOfHandleAndStartMonitoring__lambda_27283753ed325f6243441eb816a28818___(
               (char *)(a1 + 200),
               v8,
               v20);
  v20[0] = Instance;
  wil::details::in1diag3::Log_IfFailedMsg(
    retaddr,
    (void *)0x507,
    (unsigned int)"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
    (const char *)(unsigned int)Instance,
    (int)"Failed to monitor the frame process for crash recovery purposes",
    (const char *)v18);
  if ( !a2 )
  {
    if ( !CRVPrivate::cfhImmersiveShellStartup )
    {
      CCriticalFailureHandler::GetFakeFailure(v9, v20);
      CRVPrivate::cfhImmersiveShellStartup = 1;
      Instance = v20[0];
    }
    if ( Instance >= 0 )
      goto LABEL_33;
    if ( Instance != -2147024882 && Instance != -2144862209 )
    {
      CCriticalFailureHandler::HandleFailure(
        v9,
        v20,
        L"pcshell\\twinui\\appmanager\\lib\\appframeservice.cpp",
        0x508u,
        ppvc,
        v19);
      Instance = v20[0];
    }
  }
  if ( Instance >= 0 )
  {
LABEL_33:
    AcquireSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    Microsoft::WRL::ComPtr<IApplicationView>::operator=((__int64 *)(a1 + 176), &v22);
    *(_DWORD *)(a1 + 192) = v21;
    ReleaseSRWLockExclusive(CApplicationManagerUtility::g_pIAMGlobals);
    goto LABEL_36;
  }
LABEL_34:
  if ( v21 )
    ((void (__fastcall *)(struct IUnknown *))v22->lpVtbl[2].Release)(v22);
LABEL_36:
  wil::ActivityBase<CAppManagerLogging,1,70368744177664,5,0,_TlgReflectorTag_Param0IsProviderType>::Stop(
    v24,
    (unsigned int)Instance);
  CAutoHandle<void *>::~CAutoHandle<void *>(&v23);
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)&v22);
  CAppManagerTelemetry::AppFrameHostStartup::~AppFrameHostStartup((CAppManagerTelemetry::AppFrameHostStartup *)v24);
  return (unsigned int)Instance;
}
