/*
 * XREFs of AudioServerGetBufferSizeLimits @ 0x18010FD60
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??$copy_to@VCAudioSession@@@?$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJPEAPEAVCAudioSession@@@Z @ 0x18003AFEC (--$copy_to@VCAudioSession@@@-$com_ptr_t@VCAudioSession@@Uerr_returncode_policy@wil@@@wil@@QEBAJP.c)
 *     ?GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z @ 0x180062390 (-GetEndpointCharacteristics@@YAJPEBGHPEAPEAVCEndpointCharacteristics@@@Z.c)
 *     ?CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z @ 0x180066578 (-CreateKSFormatFromWFXFormat@@YAJPEBUtWAVEFORMATEX@@PEAPEAUKSDATAFORMAT_WAVEFORMATEX@@@Z.c)
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

__int64 __fastcall AudioServerGetBufferSizeLimits(
        __int64 a1,
        const unsigned __int16 *a2,
        const struct tWAVEFORMATEX *a3,
        int a4,
        __int64 *a5,
        __int64 *a6)
{
  struct _TP_TIMER **v9; // rax
  struct _TP_TIMER **v10; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v12; // edi
  struct AudioSrvTelemetryProvider *v13; // rax
  struct _TP_TIMER **v14; // rax
  struct _TP_TIMER **v15; // rsi
  __int64 v16; // rbx
  unsigned int v17; // edi
  struct AudioSrvTelemetryProvider *v18; // rax
  int EndpointCharacteristics; // ebx
  int KSFormatFromWFXFormat; // eax
  void *v21; // rdi
  struct CEndpointCharacteristics *v23; // [rsp+30h] [rbp-40h] BYREF
  __int64 v24; // [rsp+38h] [rbp-38h] BYREF
  __int64 v25; // [rsp+40h] [rbp-30h] BYREF
  __int64 v26; // [rsp+48h] [rbp-28h] BYREF
  LPVOID pv; // [rsp+50h] [rbp-20h] BYREF
  void *v28; // [rsp+58h] [rbp-18h] BYREF
  void *v29[2]; // [rsp+60h] [rbp-10h] BYREF

  v26 = 0LL;
  v25 = 0LL;
  v24 = 0LL;
  pv = 0LL;
  v23 = 0LL;
  v29[0] = 0LL;
  v28 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v9 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v12 = g_AudioSrvWatchDogTimerInMs;
      v13 = AudioSrvTelemetryProvider::Instance();
      v9 = CWatchdogTimer<1>::CWatchdogTimer<1>(
             v10,
             *((struct _TP_TIMER **)v13 + 1),
             v12,
             (struct _TP_TIMER *)L"AudioServerGetBufferSizeLimits",
             pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(v29, v9);
  }
  else
  {
    v14 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    if ( v14 )
    {
      v16 = (__int64)g_AudioHealthMonitor;
      v17 = g_AudioSrvWatchDogTimerInMs;
      v18 = AudioSrvTelemetryProvider::Instance();
      v14 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v15,
              *((struct _TP_TIMER **)v18 + 1),
              v17,
              (struct _TP_TIMER *)L"AudioServerGetBufferSizeLimits",
              v16);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v28, v14);
  }
  EndpointCharacteristics = GetEndpointCharacteristics(a2, 0, &v23);
  if ( EndpointCharacteristics < 0 )
    goto LABEL_18;
  wil::com_ptr_t<CAudioSession,wil::err_returncode_policy>::copy_to<CAudioSession>((__int64 *)v23 + 5, &v26);
  EndpointCharacteristics = (*(__int64 (__fastcall **)(__int64, GUID *, __int64))(*(_QWORD *)v26 + 24LL))(
                              v26,
                              &GUID_2b0711de_dab7_4610_a16f_d3383749b220,
                              1LL);
  if ( EndpointCharacteristics < 0 )
    goto LABEL_18;
  EndpointCharacteristics = (*(__int64 (__fastcall **)(__int64, __int64 *))(*(_QWORD *)v25 + 64LL))(v25, &v24);
  if ( EndpointCharacteristics < 0 )
    goto LABEL_18;
  KSFormatFromWFXFormat = CreateKSFormatFromWFXFormat(a3, (struct KSDATAFORMAT_WAVEFORMATEX **)&pv);
  v21 = pv;
  EndpointCharacteristics = KSFormatFromWFXFormat;
  if ( KSFormatFromWFXFormat >= 0 )
  {
    EndpointCharacteristics = (*(__int64 (__fastcall **)(__int64, LPVOID, __int64 *, __int64 *))(*(_QWORD *)v24 + 80LL))(
                                v24,
                                pv,
                                a5,
                                a6);
    if ( EndpointCharacteristics >= 0 )
    {
      if ( a4 )
      {
        *a5 /= 2LL;
        *a6 /= 2LL;
      }
    }
  }
  if ( v21 )
    CoTaskMemFree(v21);
  if ( EndpointCharacteristics < 0 )
LABEL_18:
    AudSrvTraceLoggingErrorHelper("AudioServerGetBufferSizeLimits", 4516, EndpointCharacteristics);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v28);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(v29);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v23);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v24);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v25);
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v26);
  return (unsigned int)EndpointCharacteristics;
}
