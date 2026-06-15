/*
 * XREFs of ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18001F740
 * Callers:
 *     ??0CAPOWrapperClient@@QEAA@XZ @ 0x18001F36C (--0CAPOWrapperClient@@QEAA@XZ.c)
 *     ?s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z @ 0x180020040 (-s_adPublishApoTelemetry@@YAJPEBGU_GUID@@@Z.c)
 *     ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18006449C (-AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@.c)
 *     s_adGetDeviceGraphWnfStateName @ 0x1800AB7E0 (s_adGetDeviceGraphWnfStateName.c)
 *     AudioServerGetAudioStreamHandle @ 0x18010FA20 (AudioServerGetAudioStreamHandle.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z @ 0x18001FC34 (-LaunchAndWaitForADGStartup@CAudioDGProcess@@AEAAJ_N@Z.c)
 *     ?PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ @ 0x18001FD90 (-PrepareForADGStartup@CAudioDGProcess@@AEAAJXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall CAudioDGProcess::InstantiateADG(CAudioDGProcess *this)
{
  struct _RTL_CRITICAL_SECTION *v2; // r15
  bool v3; // si
  int v4; // eax
  int v5; // r14d
  __int64 v6; // rcx
  int v7; // eax
  struct CAudioThreadPool *v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  int v13; // eax
  int v14; // [rsp+28h] [rbp-39h]
  unsigned __int16 **pvData; // [rsp+30h] [rbp-31h]
  bool v16; // [rsp+48h] [rbp-19h] BYREF
  DWORD pcbData; // [rsp+4Ch] [rbp-15h] BYREF
  int v18; // [rsp+50h] [rbp-11h] BYREF
  struct _RTL_CRITICAL_SECTION *v19; // [rsp+58h] [rbp-9h] BYREF
  _DWORD v20[2]; // [rsp+60h] [rbp-1h] BYREF
  __int64 v21; // [rsp+68h] [rbp+7h]
  unsigned __int16 *v22; // [rsp+70h] [rbp+Fh] BYREF
  int v23; // [rsp+78h] [rbp+17h]
  int v24; // [rsp+7Ch] [rbp+1Bh]
  void *v25; // [rsp+80h] [rbp+1Fh]
  int v26; // [rsp+88h] [rbp+27h]
  int v27; // [rsp+8Ch] [rbp+2Bh]
  bool *v28; // [rsp+90h] [rbp+2Fh]
  int v29; // [rsp+98h] [rbp+37h]
  int v30; // [rsp+9Ch] [rbp+3Bh]
  wil::details::in1diag3 *retaddr; // [rsp+C0h] [rbp+5Fh]

  v2 = (struct _RTL_CRITICAL_SECTION *)((char *)this + 48);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  v19 = v2;
  if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    *((_BYTE *)this + 100) = 0;
    v3 = 0;
    v18 = 0;
    pcbData = 4;
    if ( !RegGetValueW(
            HKEY_LOCAL_MACHINE,
            L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
            L"EnableProtectedAudioDG",
            0x18u,
            0LL,
            &v18,
            &pcbData) )
      v3 = v18 != 0;
    v4 = CAudioDGProcess::PrepareForADGStartup(this);
    v5 = v4;
    if ( v4 < 0 )
    {
      v11 = (unsigned int)v4;
      v12 = 341LL;
LABEL_25:
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v12,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\adgprocess.cpp",
        (const char *)v11);
      wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v19);
      return (unsigned int)v5;
    }
    v6 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
    if ( *(_DWORD *)v6 > 4u && *(char *)(v6 + 16) < 0 && (*(_QWORD *)(v6 + 24) & 0x80LL) == *(_QWORD *)(v6 + 24) )
    {
      v16 = v3;
      v28 = &v16;
      v29 = 1;
      v30 = 0;
      v20[0] = 184549376;
      v20[1] = 4;
      v21 = 128LL;
      v22 = *(unsigned __int16 **)(v6 + 8);
      v23 = *v22;
      v24 = 2;
      v25 = &unk_1801A86B3;
      v26 = 36;
      v27 = 1;
      pcbData = (unsigned int)&TraceLoggingMetadataEnd - (unsigned int)&TraceLoggingMetadata;
      pvData = &v22;
      v14 = 3;
      EtwEventWriteTransfer(*(_QWORD *)(v6 + 32), v20, 0LL, 0LL);
    }
    v7 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, v3);
    v5 = v7;
    if ( v3 && v7 < 0 )
    {
      if ( v7 == -2147024319 )
      {
        OutputDebugStringW(L"********************************************************************************\n");
        OutputDebugStringW(L"********************************************************************************\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"    WARNING WARNING WARNING WARNING WARNING WARNING\n");
        OutputDebugStringW(L"    WARNING WARNING WARNING WARNING WARNING WARNING\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"Launch of AudioDG.EXE as a protected process failed with STATUS_INVALID_IMAGE_HASH\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"This usually means that there is a problem with PEAUTH, because an unexpected \n");
        OutputDebugStringW(L" DLL was added to the audiodg.exe process\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L" To find the offending binary, please do the following:\n");
        OutputDebugStringW(L" \t1. Start Event Viewer (type eventvwr from command line\n");
        OutputDebugStringW(L" \t2. Navigate to Applications and Services Log/Microsoft/Windows/CodeIntegrity/Operational node\n");
        OutputDebugStringW(L" \t3. Check the error level events with ID 3002; you'll see the offending binary path.\n");
        OutputDebugStringW(L" The event text should read as: Code Integrity is unable to verify the image integrity of the file ...\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"To get the build to boot, audiodg is being restarted outside of the protected \n");
        OutputDebugStringW(L" environment, audio will continue to function, but playback of protected \n");
        OutputDebugStringW(L" content will be disabled \n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L" For more information, please see:\n");
        OutputDebugStringW(L"    http://dmd/wmpg/mf/cp/PMP/Lists/Protected%20Environment%20FAQ/Flat.aspx\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"\n");
        OutputDebugStringW(L"********************************************************************************\n");
        OutputDebugStringW(L"********************************************************************************\n");
      }
      v13 = CAudioDGProcess::PrepareForADGStartup(this);
      v5 = v13;
      if ( v13 < 0 )
      {
        v11 = (unsigned int)v13;
        v12 = 404LL;
        goto LABEL_25;
      }
      v5 = CAudioDGProcess::LaunchAndWaitForADGStartup(this, !v3);
    }
    if ( v5 < 0 )
    {
      v11 = (unsigned int)v5;
      v12 = 407LL;
      goto LABEL_25;
    }
    if ( (unsigned __int64)(*((_QWORD *)this + 11) - 1LL) <= 0xFFFFFFFFFFFFFFFDuLL )
    {
      v9 = ThreadPool;
      v10 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, void (*)(struct _TP_CALLBACK_INSTANCE *, void *, struct _TP_WAIT *, int), CAudioDGProcess *))(*(_QWORD *)ThreadPool + 80LL))(
              ThreadPool,
              CAudioDGProcess::OnADGProcessTerminatedHandler,
              this);
      *((_QWORD *)this + 16) = v10;
      if ( v10 )
        (*(void (__fastcall **)(struct CAudioThreadPool *, __int64, _QWORD, _QWORD, int, unsigned __int16 **))(*(_QWORD *)v9 + 88LL))(
          v9,
          v10,
          *((_QWORD *)this + 11),
          0LL,
          v14,
          pvData);
    }
  }
  if ( v2 )
    LeaveCriticalSection(v2);
  return 0LL;
}
