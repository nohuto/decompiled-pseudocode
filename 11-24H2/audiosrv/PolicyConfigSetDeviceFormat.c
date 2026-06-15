/*
 * XREFs of PolicyConfigSetDeviceFormat @ 0x180108440
 * Callers:
 *     <none>
 * Callees:
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@U1@U?$_tlgWrapperByVal@$01@@U2@U2@U?$_tlgWrapperByRef@$0BA@@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@3AEBU?$_tlgWrapperByVal@$01@@44AEBU?$_tlgWrapperByRef@$0BA@@@@Z @ 0x180003D64 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@U1@U-$_tlgWrapperByVal@$01@@U2@U_ea_180003D64.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$Write@U?$_tlgWrapSz@G@@U?$_tlgWrapperByVal@$03@@@?$_tlgWriteTemplate@$$A6AJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2IPEAU_EVENT_DATA_DESCRIPTOR@@@Z$1?_tlgWriteTransfer_EtwEventWriteTransfer@@YAJ0122I3@ZPEBU2@PEBU2@@@SAJPEBU_tlgProvider_t@@PEBXPEBU_GUID@@2AEBU?$_tlgWrapSz@G@@AEBU?$_tlgWrapperByVal@$03@@@Z @ 0x18001E120 (--$Write@U-$_tlgWrapSz@G@@U-$_tlgWrapperByVal@$03@@@-$_tlgWriteTemplate@$$A6AJPEBU__ea_18001E120.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     _tlgKeywordOn @ 0x180048600 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigSetDeviceFormat(__int64 a1, __int128 *a2, const WCHAR *a3, unsigned __int16 *a4)
{
  struct _TP_TIMER **v7; // rax
  struct _TP_TIMER **v8; // r14
  __int64 pftDueTime; // rbx
  unsigned int v10; // edi
  struct AudioSrvTelemetryProvider *v11; // rax
  struct _TP_TIMER **v12; // rax
  struct _TP_TIMER **v13; // r14
  __int64 v14; // rbx
  unsigned int v15; // edi
  struct AudioSrvTelemetryProvider *v16; // rax
  unsigned int v17; // eax
  struct AudioSrvTelemetryProvider *v18; // rax
  _DWORD *v19; // rbx
  __int64 v20; // r8
  __int64 v21; // r9
  struct AudioSrvTelemetryProvider *v22; // rax
  _DWORD *v23; // rbx
  __int64 v24; // r8
  __int64 v25; // r9
  unsigned int v26; // ebx
  unsigned __int16 v28[2]; // [rsp+60h] [rbp-61h] BYREF
  int v29; // [rsp+64h] [rbp-5Dh] BYREF
  __int64 v30; // [rsp+68h] [rbp-59h] BYREF
  int v31; // [rsp+70h] [rbp-51h] BYREF
  int v32; // [rsp+74h] [rbp-4Dh] BYREF
  const WCHAR *v33; // [rsp+78h] [rbp-49h] BYREF
  void *v34; // [rsp+80h] [rbp-41h] BYREF
  void *v35; // [rsp+88h] [rbp-39h] BYREF
  GUID *v36; // [rsp+90h] [rbp-31h] BYREF
  const WCHAR *v37; // [rsp+98h] [rbp-29h] BYREF
  GUID v38; // [rsp+A0h] [rbp-21h] BYREF
  __int128 v39; // [rsp+B0h] [rbp-11h]
  __int128 v40; // [rsp+C0h] [rbp-1h] BYREF

  v39 = *a2;
  v40 = v39;
  EtwEventActivityIdControl(4LL, &v40);
  v35 = 0LL;
  v34 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v7 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v8 = v7;
    if ( v7 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v10 = g_AudioSrvWatchDogTimerInMs;
      v11 = AudioSrvTelemetryProvider::Instance();
      v7 = CWatchdogTimer<1>::CWatchdogTimer<1>(
             v8,
             *((struct _TP_TIMER **)v11 + 1),
             v10,
             (struct _TP_TIMER *)L"PolicyConfigSetDeviceFormat",
             pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v35, v7);
  }
  else
  {
    v12 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v13 = v12;
    if ( v12 )
    {
      v14 = (__int64)g_AudioHealthMonitor;
      v15 = g_AudioSrvWatchDogTimerInMs;
      v16 = AudioSrvTelemetryProvider::Instance();
      v12 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v13,
              *((struct _TP_TIMER **)v16 + 1),
              v15,
              (struct _TP_TIMER *)L"PolicyConfigSetDeviceFormat",
              v14);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v34, v12);
  }
  v30 = 0LL;
  if ( (*(int (__fastcall **)(struct IAudioPolicyManager *, __int64, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL))(
         g_PolicyManager,
         a1,
         &v30) >= 0 )
  {
    if ( a4 )
    {
      v17 = *a4;
      v38 = GUID_00000000_0000_0010_8000_00aa00389b71;
      v38.Data1 = v17;
      v18 = AudioSrvTelemetryProvider::Instance();
      v19 = (_DWORD *)*((_QWORD *)v18 + 1);
      if ( *v19 > 4u && tlgKeywordOn(*((_QWORD *)v18 + 1), 32LL) )
      {
        v36 = &v38;
        v31 = *((_DWORD *)a4 + 2);
        v32 = *((_DWORD *)a4 + 1);
        v28[0] = a4[1];
        v37 = L"WFEX";
        v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 40LL))(v30);
        v33 = a3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>,_tlgWrapSz<unsigned short>,_tlgWrapperByVal<2>,_tlgWrapperByVal<4>,_tlgWrapperByVal<4>,_tlgWrapperByRef<16>>(
          (int)v19,
          (int)&unk_1801AD436,
          v20,
          v21,
          &v33,
          (__int64)&v29,
          &v37,
          (__int64)v28,
          (__int64)&v32,
          (__int64)&v31,
          (__int64 *)&v36);
      }
    }
    else
    {
      v22 = AudioSrvTelemetryProvider::Instance();
      v23 = (_DWORD *)*((_QWORD *)v22 + 1);
      if ( *v23 > 4u && tlgKeywordOn(*((_QWORD *)v22 + 1), 32LL) )
      {
        v29 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v30 + 40LL))(v30);
        v33 = a3;
        _tlgWriteTemplate<long (_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),&long _tlgWriteTransfer_EtwEventWriteTransfer(_tlgProvider_t const *,void const *,_GUID const *,_GUID const *,unsigned int,_EVENT_DATA_DESCRIPTOR *),_GUID const *,_GUID const *>::Write<_tlgWrapSz<unsigned short>,_tlgWrapperByVal<4>>(
          (__int64)v23,
          byte_1801AD4AD,
          v24,
          v25,
          &v33,
          (__int64)&v29);
      }
    }
  }
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v30);
  v26 = (*(__int64 (__fastcall **)(CPolicyConfig *, const WCHAR *, unsigned __int16 *, _QWORD))(*(_QWORD *)g_PolicyConfig
                                                                                              + 48LL))(
          g_PolicyConfig,
          a3,
          a4,
          0LL);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v34);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v35);
  EtwEventActivityIdControl(4LL, &v40);
  return v26;
}
