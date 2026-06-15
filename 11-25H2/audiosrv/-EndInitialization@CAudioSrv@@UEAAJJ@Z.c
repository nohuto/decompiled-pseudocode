/*
 * XREFs of ?EndInitialization@CAudioSrv@@UEAAJJ@Z @ 0x1800CCE10
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?_Decref@_Ref_count_base@std@@QEAAXXZ @ 0x180017580 (-_Decref@_Ref_count_base@std@@QEAAXXZ.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     ?_Decwref@_Ref_count_base@std@@QEAAXXZ @ 0x18005A400 (-_Decwref@_Ref_count_base@std@@QEAAXXZ.c)
 *     ??$Write@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x180075D20 (--$Write@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PE_ea_180075D20.c)
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x1800B279C (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?StartRpcServer@@YAJPEAG0PEAX1@Z @ 0x1800CE7A8 (-StartRpcServer@@YAJPEAG0PEAX1@Z.c)
 *     McTemplateU0zq_EtwEventWriteTransfer @ 0x1800CFEC4 (McTemplateU0zq_EtwEventWriteTransfer.c)
 *     ?GetInstance@CStreamConnectionManagerImpl@@SA?AV?$shared_ptr@VCStreamConnectionManager@@@std@@XZ @ 0x180110F80 (-GetInstance@CStreamConnectionManagerImpl@@SA-AV-$shared_ptr@VCStreamConnectionManager@@@std@@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall CAudioSrv::EndInitialization(CAudioSrv *this, signed int a2)
{
  signed int LastError; // ebx
  __int64 v4; // rax
  unsigned __int16 *v5; // rcx
  unsigned __int16 *v6; // rcx
  unsigned __int16 *v7; // rcx
  unsigned __int16 *v8; // rcx
  std::_Ref_count_base *v9; // rcx
  __int64 v10; // rax
  std::_Ref_count_base *v11; // rdx
  __int64 v12; // r8
  std::_Ref_count_base *v13; // rcx
  std::_Ref_count_base *v14; // rax
  int v15; // eax
  int v16; // eax
  _DWORD *v17; // rcx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v22; // [rsp+40h] [rbp-10h] BYREF
  std::_Ref_count_base *v23; // [rsp+48h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+18h]
  signed int pvData; // [rsp+78h] [rbp+28h] BYREF
  DWORD pcbData; // [rsp+80h] [rbp+30h] BYREF
  PSECURITY_DESCRIPTOR SecurityDescriptor; // [rsp+88h] [rbp+38h] BYREF

  SecurityDescriptor = 0LL;
  LastError = a2;
  if ( !a2 )
  {
    if ( *((_QWORD *)this + 25)
      || (v4 = (*(__int64 (__fastcall **)(struct CAudioThreadPool *, _QWORD, CAudioSrv *))(*(_QWORD *)ThreadPool + 56LL))(
                 ThreadPool,
                 CAudioSrv::OnDeviceWorkItem,
                 this),
          (*((_QWORD *)this + 25) = v4) != 0LL)
      || (LastError = GetLastError()) == 0 )
    {
      LastError = ((__int64 (__fastcall *)(struct IMMDeviceEnumerator *, unsigned __int64))g_DeviceEnumerator->lpVtbl->RegisterEndpointNotificationCallback)(
                    g_DeviceEnumerator,
                    ((unsigned __int64)this + 72) & -(__int64)(this != 0LL));
      if ( LastError < 0 )
        goto LABEL_29;
      *((_DWORD *)this + 27) = 1;
    }
    if ( !ConvertStringSecurityDescriptorToSecurityDescriptorW(
            L"D:(A;;GRGWGX;;;WD)(A;;GRGWGX;;;RC)(A;;GA;;;BA)(A;;GA;;;OW)(A;;GR;;;AC)(A;;GR;;;S-1-15-3-1024-1692970155-4054"
             "893335-185714091-3362601943-3526593181-1159816984-2199008581-497492991)",
            1u,
            &SecurityDescriptor,
            0LL) )
      LastError = GetLastError();
    if ( !LastError )
    {
      LastError = StartRpcServer(v5, L"Audiosrv", &unk_180178630, SecurityDescriptor);
      *((_DWORD *)this + 14) = LastError == 0;
      if ( !LastError )
      {
        LastError = StartRpcServer(v6, L"PlaybackManagerRpc", &unk_18017F0F0, 0LL);
        *((_DWORD *)this + 15) = LastError == 0;
        if ( !LastError )
        {
          LastError = StartRpcServer(v7, L"AudioSrvDiagnosticsRpc", &unk_18017F3D0, 0LL);
          *((_DWORD *)this + 16) = LastError == 0;
          if ( !LastError )
          {
            LastError = StartRpcServer(v8, L"SpatialSoundDataManagerRpc", &unk_18017F680, SecurityDescriptor);
            *((_DWORD *)this + 17) = LastError == 0;
            if ( !LastError )
            {
              pvData = 0;
              pcbData = 4;
              if ( RegGetValueW(
                     HKEY_LOCAL_MACHINE,
                     L"Software\\Microsoft\\Windows\\CurrentVersion\\Audio",
                     L"EnableCaptureMonitor",
                     0x18u,
                     0LL,
                     &pvData,
                     &pcbData)
                || pvData )
              {
                CStreamConnectionManagerImpl::GetInstance(&v22);
                v9 = qword_1801D0A10;
                v10 = v22;
                v11 = v23;
                g_streamMonitorManager = v22;
                qword_1801D0A10 = v23;
                if ( v9 )
                {
                  std::_Ref_count_base::_Decref(v9);
                  v11 = qword_1801D0A10;
                  v10 = g_streamMonitorManager;
                }
                if ( v10 )
                {
                  v12 = 0LL;
                  v13 = 0LL;
                  if ( v11 )
                  {
                    v12 = v10;
                    v13 = v11;
                    _InterlockedIncrement((volatile signed __int32 *)v11 + 3);
                  }
                  v14 = (std::_Ref_count_base *)*((_QWORD *)&g_weakStreamMonitorManager + 1);
                  *(_QWORD *)&g_weakStreamMonitorManager = v12;
                  *((_QWORD *)&g_weakStreamMonitorManager + 1) = v13;
                  if ( v14 )
                    std::_Ref_count_base::_Decwref(v14);
                }
                else if ( (Microsoft_Windows_AudioEnableBits & 4) != 0 )
                {
                  McTemplateU0zq_EtwEventWriteTransfer(v9, v11, L"ListenTo", 0LL);
                }
              }
            }
          }
        }
      }
    }
    v15 = (*(__int64 (__fastcall **)(struct IMulticastSessionManager *))(*(_QWORD *)g_MulticastSessionManager + 24LL))(g_MulticastSessionManager);
    if ( v15 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        877LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
        (const char *)(unsigned int)v15);
    v16 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *))(*(_QWORD *)g_PolicyManager + 416LL))(g_PolicyManager);
    if ( v16 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        880LL,
        (__int64)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosrv.cpp",
        (const char *)(unsigned int)v16);
LABEL_29:
    if ( !LastError )
      goto LABEL_33;
  }
  v17 = (_DWORD *)*((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  if ( *v17 > 2u && tlgKeywordOn((__int64)v17, 0x400000000080LL) )
  {
    pvData = LastError;
    _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapperByVal<4>>(
      v18,
      byte_1801A0572,
      v19,
      v20,
      (__int64)&pvData);
  }
LABEL_33:
  if ( SecurityDescriptor )
    LocalFree(SecurityDescriptor);
  return (unsigned int)LastError;
}
