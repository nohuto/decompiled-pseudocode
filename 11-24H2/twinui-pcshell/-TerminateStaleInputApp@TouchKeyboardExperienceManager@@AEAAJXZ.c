/*
 * XREFs of ?TerminateStaleInputApp@TouchKeyboardExperienceManager@@AEAAJXZ @ 0x180253ED4
 * Callers:
 *     ?PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ @ 0x180253160 (-PerformDelayedInitialization@TouchKeyboardExperienceManager@@UEAAJXZ.c)
 * Callees:
 *     ?InternalRelease@?$ComPtr@U?$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Microsoft@@IEAAKXZ @ 0x180013874 (-InternalRelease@-$ComPtr@U-$IVector@PEAUHSTRING__@@@Collections@Foundation@Windows@@@WRL@Micros.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180028BEC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_Param0IsProviderType@@@wil@@QEAA@PEBD_N@Z @ 0x180055520 (--0-$ActivityBase@VTouchKeyboardExperienceTraceLogging@@$0A@$0A@$04$0BAAAAAA@U_TlgReflectorTag_P.c)
 *     ??1?$unique_storage@U?$handle_invalid_resource_policy@P6AHPEAX@Z$1?CloseHandle@@YAH0@Z@details@wil@@@details@wil@@QEAA@XZ @ 0x18005D41C (--1-$unique_storage@U-$handle_invalid_resource_policy@P6AHPEAX@Z$1-CloseHandle@@YAH0@Z@details@w.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1800A5D64 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     ??$_Traits_equal@U?$char_traits@G@std@@@std@@YA_NQEBG_K01@Z @ 0x18010EB48 (--$_Traits_equal@U-$char_traits@G@std@@@std@@YA_NQEBG_K01@Z.c)
 *     ?Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z @ 0x1802916C8 (-Return_GetLastError@in1diag3@details@wil@@YAJPEAXIPEBD@Z.c)
 *     ?StartActivity@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ @ 0x1802AD0DC (-StartActivity@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXXZ.c)
 *     ?IsRunningOnServerSku@KeyboardHosting@@YA_NXZ @ 0x1802B4C08 (-IsRunningOnServerSku@KeyboardHosting@@YA_NXZ.c)
 *     ?Stop@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXI_K@Z @ 0x1802B6784 (-Stop@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAXI_K@Z.c)
 *     ??1TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ @ 0x1802CCCCC (--1TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1802D16A0 (__security_check_cookie.c)
 *     memset_0 @ 0x1802D25CC (memset_0.c)
 *     ??$TextInputHostTerminated@I@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAAX$$QEAI@Z @ 0x180469A88 (--$TextInputHostTerminated@I@TerminateStaleInputApp@TouchKeyboardExperienceTelemetryLogger@@QEAA.c)
 *     TerminateAppByName @ 0x180477648 (TerminateAppByName.c)
 *     _alloca_probe @ 0x1806CA270 (_alloca_probe.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180708010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=3
__int64 __fastcall TouchKeyboardExperienceManager::TerminateStaleInputApp(TouchKeyboardExperienceManager *this)
{
  ULONGLONG TickCount64; // r12
  unsigned int v3; // r14d
  KeyboardHosting *v4; // rcx
  HRESULT LastError; // ebx
  __int64 v6; // rbx
  __int64 (__fastcall *v7)(__int64, SID *, GUID *, __int64 *); // rdi
  int v8; // eax
  const char *v9; // r9
  DWORD *v10; // rdi
  __int64 v11; // rsi
  char *v12; // rbx
  LPWSTR FileNameW; // rax
  __int64 v14; // rdx
  const char *v15; // r9
  ULONGLONG v16; // rax
  DWORD cbNeeded[2]; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  void *v20; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v21[42]; // [rsp+50h] [rbp-B0h] BYREF
  DWORD idProcess[1024]; // [rsp+1A0h] [rbp+A0h] BYREF
  WCHAR ImageFileName[264]; // [rsp+11A0h] [rbp+10A0h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+13E8h] [rbp+12E8h]

  wil::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>::ActivityBase<TouchKeyboardExperienceTraceLogging,0,0,5,16777216,_TlgReflectorTag_Param0IsProviderType>(
    (struct wil::details::IFailureCallback *)v21,
    (__int64)"TerminateStaleInputApp");
  v21[0] = &TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::`vftable';
  TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::StartActivity((TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp *)v21);
  TickCount64 = GetTickCount64();
  v3 = 0;
  if ( !KeyboardHosting::IsRunningOnServerSku(v4) )
  {
    memset_0(idProcess, 0, sizeof(idProcess));
    cbNeeded[0] = 0;
    K32EnumProcesses(idProcess, 0x1000u, cbNeeded);
    if ( !cbNeeded[0] )
    {
      LastError = wil::details::in1diag3::Return_GetLastError(
                    retaddr,
                    (void *)0xF60,
                    (unsigned int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                    v9);
      goto LABEL_23;
    }
    if ( cbNeeded[0] >> 2 )
    {
      v10 = idProcess;
      v11 = cbNeeded[0] >> 2;
      do
      {
        v12 = (char *)OpenProcess(0x401u, 0, *v10);
        v20 = v12;
        if ( (unsigned __int64)(v12 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
        {
          if ( K32GetProcessImageFileNameW(v12, ImageFileName, 0x104u) )
          {
            FileNameW = PathFindFileNameW(ImageFileName);
            v14 = -1LL;
            do
              ++v14;
            while ( FileNameW[v14] );
            if ( std::_Traits_equal<std::char_traits<unsigned short>>(
                   (__int64)FileNameW,
                   v14,
                   L"TextInputHost.exe",
                   17LL) )
            {
              if ( !TerminateProcess(v12, 0) )
                wil::details::in1diag3::_Log_GetLastError(
                  retaddr,
                  (void *)0xF6E,
                  (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
                  v15);
              LODWORD(v19) = *((_DWORD *)this + 251);
              TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::TextInputHostTerminated<unsigned int>(
                v21,
                &v19);
              ++v3;
            }
          }
        }
        wil::details::unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>::~unique_storage<wil::details::handle_invalid_resource_policy<int (*)(void *),&int CloseHandle(void *)>>(&v20);
        ++v10;
        --v11;
      }
      while ( v11 );
    }
    goto LABEL_21;
  }
  *(_QWORD *)cbNeeded = 0LL;
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)cbNeeded);
  LastError = CoCreateInstance(
                &CLSID_ShellServiceHost,
                0LL,
                0x404u,
                &GUID_6d5140c1_7436_11ce_8034_00aa006009fa,
                (LPVOID *)cbNeeded);
  if ( LastError >= 0 )
  {
    v19 = 0LL;
    v6 = *(_QWORD *)cbNeeded;
    v7 = *(__int64 (__fastcall **)(__int64, SID *, GUID *, __int64 *))(**(_QWORD **)cbNeeded + 24LL);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    LastError = v7(v6, &SID_ProcessLifetimeManagerControl, &GUID_69c083b1_7f6f_490d_9d77_c0219a95b25d, &v19);
    if ( LastError < 0 )
    {
LABEL_6:
      Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
      goto LABEL_7;
    }
    v8 = TerminateAppByName(v19, L"MicrosoftWindows.Client.CBS_cw5n1h2txyewy!InputApp");
    LastError = v8;
    if ( v8 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xF59,
        (int)"pcshell\\twinui\\touchkeyboardexperiencemanager\\lib\\touchkeyboardexperiencemanager.cpp",
        (const char *)(unsigned int)v8);
      goto LABEL_6;
    }
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease(&v19);
    Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)cbNeeded);
LABEL_21:
    v16 = GetTickCount64();
    TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::Stop(
      (TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp *)v21,
      v3,
      v16 - TickCount64);
    TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::~TerminateStaleInputApp((TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp *)v21);
    return 0LL;
  }
LABEL_7:
  Microsoft::WRL::ComPtr<Windows::Foundation::Collections::IVector<HSTRING__ *>>::InternalRelease((__int64 *)cbNeeded);
LABEL_23:
  TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp::~TerminateStaleInputApp((TouchKeyboardExperienceTelemetryLogger::TerminateStaleInputApp *)v21);
  return (unsigned int)LastError;
}
