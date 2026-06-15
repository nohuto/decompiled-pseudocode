/*
 * XREFs of ?Initialize@CAudioSrv@@UEAAJJ@Z @ 0x1800CD480
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapperByVal@$03@@U1@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@3@Z @ 0x180001A08 (--$Write@U-$_tlgWrapperByVal@$03@@U1@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUI.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memset_0 @ 0x1800A8BC4 (memset_0.c)
 *     WPP_SF_ @ 0x1800C1670 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     ??$?4U?$default_delete@VCPowerReferenceManager@@@std@@$0A@@?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1800CB408 (--$-4U-$default_delete@VCPowerReferenceManager@@@std@@$0A@@-$unique_ptr@VCPowerReferenceManager@.c)
 *     ??0?$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ @ 0x1800CBD48 (--0-$CAtlExeModuleT@VCAudioServiceModule@@@ATL@@QEAA@XZ.c)
 *     ??0CPowerReferenceManager@@QEAA@XZ @ 0x1800CBEA4 (--0CPowerReferenceManager@@QEAA@XZ.c)
 *     ??1?$unique_ptr@VCPowerReferenceManager@@U?$default_delete@VCPowerReferenceManager@@@std@@@std@@QEAA@XZ @ 0x1800CC230 (--1-$unique_ptr@VCPowerReferenceManager@@U-$default_delete@VCPowerReferenceManager@@@std@@@std@@.c)
 *     ?VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ @ 0x1800CF034 (-VAD_AudiosrvServiceStart@CAudioSrv@@AEAAJXZ.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x1800CFEC4 (McTemplateU0zq_EtwEventWriteTransfer.c)
 *     ?MME_ServiceStart@@YAJXZ @ 0x1800FBAB4 (-MME_ServiceStart@@YAJXZ.c)
 *     ?KsNotifications_ServiceStart@@YAJXZ @ 0x180117194 (-KsNotifications_ServiceStart@@YAJXZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=2
__int64 __fastcall CAudioSrv::Initialize(CAudioSrv *this, int a2)
{
  _BYTE *v4; // rax
  _BYTE *v5; // rbx
  struct _RTL_CRITICAL_SECTION *v6; // rax
  struct _RTL_CRITICAL_SECTION *v7; // rbx
  CPowerReferenceManager *v8; // rax
  __int64 v9; // rcx
  CPowerReferenceManager *v10; // rbx
  CPowerReferenceManager *v11; // rax
  HRESULT v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // ebx
  struct AudioSrvTelemetryProvider *v18; // rax
  _DWORD *v19; // rdi
  __int64 v20; // r8
  __int64 v21; // r9
  int pvData; // [rsp+40h] [rbp-69h] BYREF
  LPVOID ppv; // [rsp+48h] [rbp-61h] BYREF
  DWORD pcbData; // [rsp+50h] [rbp-59h] BYREF
  unsigned int v26; // [rsp+54h] [rbp-55h] BYREF
  _SECURITY_ATTRIBUTES EventAttributes; // [rsp+58h] [rbp-51h] BYREF
  _SYSTEM_POWER_CAPABILITIES spc; // [rsp+70h] [rbp-39h] BYREF

  memset_0(&spc, 0, sizeof(spc));
  pvData = 0;
  pcbData = 4;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"PerformStrictConnectorMatchOnMatchFormat",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    g_PerformStrictConnectorMatchOnMatchFormat = pvData;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"DisableSpatialOnLowLatency",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    g_DisableSpatialOnLowLatency = pvData;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"UseSoftwareLoopbackOnMatchFormat",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    g_UseSoftwareLoopbackOnMatchFormat = pvData;
  if ( !RegGetValueW(
          HKEY_LOCAL_MACHINE,
          L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
          L"TimeoutRevertAudioPumpFormatAndPeriodInMs",
          0x18u,
          0LL,
          &pvData,
          &pcbData) )
    g_TimeoutRevertAudioPumpFormatAndPeriodInMs = pvData;
  if ( !a2 )
  {
    v4 = operator new(0x68uLL, (const struct std::nothrow_t *)&std::nothrow);
    v5 = v4;
    ppv = v4;
    if ( v4 )
    {
      ATL::CAtlExeModuleT<CAudioServiceModule>::CAtlExeModuleT<CAudioServiceModule>((__int64)v4);
      *(_QWORD *)v5 = &CAudioServiceModule::`vftable';
      v5[96] = 0;
    }
    else
    {
      v5 = 0LL;
    }
    *((_QWORD *)this + 11) = v5;
    if ( !v5 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_10c4b876f18f3e23b6722a19e2f08d05_Traceguids);
      }
      a2 = -2147024882;
    }
  }
  GetPwrCapabilities(&spc);
  if ( !a2 )
  {
    v6 = (struct _RTL_CRITICAL_SECTION *)operator new(0xA0uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    ppv = v6;
    if ( v6 )
    {
      InitializeCriticalSectionEx(v6, 0, 0);
      LODWORD(v7[1].DebugInfo) = 0;
      InitializeCriticalSectionEx((struct _RTL_CRITICAL_SECTION *)((char *)v7 + 48), 0, 0);
      *(_QWORD *)&v7[2].LockCount = 0LL;
      LODWORD(v7[2].OwningThread) = 0;
      BYTE4(v7[2].OwningThread) = 0;
      LODWORD(v7[2].LockSemaphore) = 0;
      v7[2].SpinCount = 0LL;
      v7[3].DebugInfo = 0LL;
      *(_QWORD *)&v7[3].LockCount = 0LL;
      v7[3].OwningThread = 0LL;
      v7[3].SpinCount = ((unsigned __int64)this + 80) & -(__int64)(this != 0LL);
      g_ADGProcess = v7;
      v8 = (CPowerReferenceManager *)operator new(0x1E8uLL);
      v10 = v8;
      ppv = v8;
      if ( v8 )
      {
        memset_0(v8, 0, 0x1E8uLL);
        v11 = CPowerReferenceManager::CPowerReferenceManager(v10);
      }
      else
      {
        v11 = 0LL;
      }
      ppv = v11;
      std::unique_ptr<CPowerReferenceManager>::operator=<std::default_delete<CPowerReferenceManager>,0>(
        v9,
        (__int64 *)&ppv);
      std::unique_ptr<CPowerReferenceManager>::~unique_ptr<CPowerReferenceManager>(&ppv);
    }
    else
    {
      g_ADGProcess = 0LL;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 15LL, &WPP_10c4b876f18f3e23b6722a19e2f08d05_Traceguids);
      }
    }
  }
  ppv = 0LL;
  v12 = CoCreateInstance(&CLSID_GlobalOptions, 0LL, 1u, &GUID_0000015b_0000_0000_c000_000000000046, &ppv);
  v13 = v12;
  if ( v12 < 0 )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_d(
        *((_QWORD *)WPP_GLOBAL_Control + 2),
        0x10u,
        (__int64)&WPP_10c4b876f18f3e23b6722a19e2f08d05_Traceguids,
        v12);
    }
  }
  else
  {
    v13 = (*(__int64 (__fastcall **)(LPVOID, __int64, __int64))(*(_QWORD *)ppv + 24LL))(ppv, 5LL, 1LL);
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&ppv);
  if ( !v13 )
  {
    v13 = CAudioSrv::VAD_AudiosrvServiceStart(this);
    if ( !v13 )
    {
      v14 = MME_ServiceStart();
      v17 = v14;
      if ( v14 < 0 && (Microsoft_Windows_AudioEnableBits & 4) != 0 )
        McTemplateU0zq_EtwEventWriteTransfer(v16, v15, L"MME", (unsigned int)v14);
      *(_QWORD *)&EventAttributes.nLength = 24LL;
      EventAttributes.lpSecurityDescriptor = 0LL;
      *(_QWORD *)&EventAttributes.bInheritHandle = 0LL;
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 17LL, &WPP_10c4b876f18f3e23b6722a19e2f08d05_Traceguids);
      }
      if ( ConvertStringSecurityDescriptorToSecurityDescriptorW(
             L"D:(A;;0x00100003;;;S-1-5-80-2676549577-1911656217-2625096541-4178041876-1366760775)(A;;0x00100000;;;SY)",
             1u,
             &EventAttributes.lpSecurityDescriptor,
             0LL) )
      {
        if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
          && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 4) != 0
          && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
        {
          WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 18LL, &WPP_10c4b876f18f3e23b6722a19e2f08d05_Traceguids);
        }
        g_hCanAcceptMMCClientEvent = CreateEventExW(
                                       &EventAttributes,
                                       L"Global\\AudioSrv_CanAcceptMMCClient",
                                       1u,
                                       0x100002u);
        LocalFree(EventAttributes.lpSecurityDescriptor);
      }
      if ( v17 < 0 )
        AudSrvTraceLoggingErrorHelper("CAudioSrv::Initialize", 629, v17);
      if ( (char *)MyAtmosCheckCallback::m_pCallback != (char *)CPolicyConfig::UpdateRenderingEndpointsSpatialSettingsAsync )
      {
        EnterCriticalSection(&CSpatialAudioTech::s_atmosLock);
        MyAtmosCheckCallback::m_pCallback = (void (*)(void))CPolicyConfig::UpdateRenderingEndpointsSpatialSettingsAsync;
        LeaveCriticalSection(&CSpatialAudioTech::s_atmosLock);
      }
      v13 = KsNotifications_ServiceStart();
    }
  }
  v18 = AudioSrvTelemetryProvider::Instance();
  v19 = (_DWORD *)*((_QWORD *)v18 + 1);
  if ( *v19 > 4u && tlgKeywordOn(*((_QWORD *)v18 + 1), 128LL) )
  {
    v26 = v13;
    LODWORD(ppv) = GetCurrentProcessId();
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>,_tlgWrapperByVal<4>>(
      (int)v19,
      (int)&unk_1801A0591,
      v20,
      v21,
      (__int64)&ppv,
      (__int64)&v26);
  }
  g_StreamVolumeChangeAsTelemetryCounter = 10;
  return v13;
}
