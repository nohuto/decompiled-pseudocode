/*
 * XREFs of PolicyConfigSetDeviceFormat @ 0x180102720
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180003A88 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U_ea_180003A88.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18002DE10 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_18002DE10.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     _tlgKeywordOn @ 0x180055760 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigSetDeviceFormat(__int64 a1, __int128 *a2, const WCHAR *a3, unsigned __int16 *a4)
{
  __int64 pftDueTime; // rbx
  unsigned int v8; // edi
  struct AudioSrvTelemetryProvider *v9; // rax
  unsigned int v10; // eax
  struct AudioSrvTelemetryProvider *v11; // rax
  _DWORD *v12; // rbx
  __int64 v13; // r8
  __int64 v14; // r9
  struct AudioSrvTelemetryProvider *v15; // rax
  _DWORD *v16; // rbx
  __int64 v17; // r8
  __int64 v18; // r9
  unsigned int v19; // ebx
  unsigned __int16 v21[2]; // [rsp+60h] [rbp-71h] BYREF
  int v22; // [rsp+64h] [rbp-6Dh] BYREF
  __int64 v23; // [rsp+68h] [rbp-69h] BYREF
  int v24; // [rsp+70h] [rbp-61h] BYREF
  int v25; // [rsp+74h] [rbp-5Dh] BYREF
  const WCHAR *v26; // [rsp+78h] [rbp-59h] BYREF
  GUID *v27; // [rsp+80h] [rbp-51h] BYREF
  const WCHAR *v28; // [rsp+88h] [rbp-49h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+90h] [rbp-41h] BYREF
  GUID v30; // [rsp+C8h] [rbp-9h] BYREF
  __int128 v31; // [rsp+D8h] [rbp+7h]
  __int128 v32; // [rsp+E8h] [rbp+17h] BYREF

  v31 = *a2;
  v32 = v31;
  EtwEventActivityIdControl(4LL, &v32);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v9 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v9 + 1),
    v8,
    (struct _TP_TIMER *)L"PolicyConfigSetDeviceFormat",
    pftDueTime);
  v23 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v23) >= 0 )
  {
    if ( a4 )
    {
      v10 = *a4;
      v30 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v30.Data1 = v10;
      v11 = AudioSrvTelemetryProvider::Instance();
      v12 = (_DWORD *)*((_QWORD *)v11 + 1);
      if ( *v12 > 4u && tlgKeywordOn(*((_QWORD *)v11 + 1), 32LL) )
      {
        v27 = &v30;
        v24 = *((_DWORD *)a4 + 2);
        v25 = *((_DWORD *)a4 + 1);
        v21[0] = a4[1];
        v28 = L"WFEX";
        v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 40LL))(v23);
        v26 = a3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          (int)v12,
          (int)&unk_1801A26AA,
          v13,
          v14,
          &v26,
          (__int64)&v22,
          &v28,
          (__int64)v21,
          (__int64)&v25,
          (__int64)&v24,
          (__int64 *)&v27);
      }
    }
    else
    {
      v15 = AudioSrvTelemetryProvider::Instance();
      v16 = (_DWORD *)*((_QWORD *)v15 + 1);
      if ( *v16 > 4u && tlgKeywordOn(*((_QWORD *)v15 + 1), 32LL) )
      {
        v22 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 40LL))(v23);
        v26 = a3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          (__int64)v16,
          byte_1801A2721,
          v17,
          v18,
          &v26,
          (__int64)&v22);
      }
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v23);
  v19 = (*(__int64 (__fastcall **)(CPolicyConfig *, const WCHAR *, unsigned __int16 *, _QWORD))(*(_QWORD *)g_PolicyConfig
                                                                                              + 48LL))(
          g_PolicyConfig,
          a3,
          a4,
          0LL);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v32);
  return v19;
}
