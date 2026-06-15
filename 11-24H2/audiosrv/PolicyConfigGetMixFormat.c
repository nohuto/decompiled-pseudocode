/*
 * XREFs of PolicyConfigGetMixFormat @ 0x180107B80
 * Callers:
 *     <none>
 * Callees:
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x1800150E8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@PEAPEAUtWAVEFORMATEX@@@Z @ 0x18002DFA0 (-GetMixFormat@EffectPack@@QEAAJW4__MIDL___MIDL_itf_audioengineendpoint_0000_0000_0001@@U_GUID@@P.c)
 *     ??1EndpointCharacteristicsDescriptor@@QEAA@XZ @ 0x180032DC0 (--1EndpointCharacteristicsDescriptor@@QEAA@XZ.c)
 *     MIDL_user_allocate @ 0x18003F650 (MIDL_user_allocate.c)
 *     ?GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z @ 0x180059D68 (-GetEndpointCharacteristicsDescriptor@@YAJPEBGHPEAUEndpointCharacteristicsDescriptor@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     memcpy_0 @ 0x1800A7F28 (memcpy_0.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 */

__int64 __fastcall PolicyConfigGetMixFormat(__int64 a1, const unsigned __int16 *a2, _QWORD *a3)
{
  struct _TP_TIMER **v5; // rax
  struct _TP_TIMER **v6; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v8; // edi
  struct AudioSrvTelemetryProvider *v9; // rax
  struct _TP_TIMER **v10; // rax
  struct _TP_TIMER **v11; // rsi
  __int64 v12; // rbx
  unsigned int v13; // edi
  struct AudioSrvTelemetryProvider *v14; // rax
  int EndpointCharacteristicsDescriptor; // ebx
  int MixFormat; // eax
  unsigned __int16 *v17; // rdi
  void *v18; // rax
  void *v20[2]; // [rsp+30h] [rbp-40h] BYREF
  struct _GUID v21; // [rsp+40h] [rbp-30h] BYREF
  EffectPack *v22[2]; // [rsp+50h] [rbp-20h] BYREF
  __int64 v23; // [rsp+60h] [rbp-10h]
  void *Src; // [rsp+B0h] [rbp+40h] BYREF
  void *v25; // [rsp+B8h] [rbp+48h] BYREF

  Src = 0LL;
  v23 = 0LL;
  v20[0] = 0LL;
  v25 = 0LL;
  *(_OWORD *)v22 = 0LL;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v5 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v6 = v5;
    if ( v5 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v8 = g_AudioSrvWatchDogTimerInMs;
      v9 = AudioSrvTelemetryProvider::Instance();
      v5 = CWatchdogTimer<1>::CWatchdogTimer<1>(
             v6,
             *((struct _TP_TIMER **)v9 + 1),
             v8,
             (struct _TP_TIMER *)L"PolicyConfigGetMixFormat",
             pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(v20, v5);
  }
  else
  {
    v10 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v11 = v10;
    if ( v10 )
    {
      v12 = (__int64)g_AudioHealthMonitor;
      v13 = g_AudioSrvWatchDogTimerInMs;
      v14 = AudioSrvTelemetryProvider::Instance();
      v10 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v11,
              *((struct _TP_TIMER **)v14 + 1),
              v13,
              (struct _TP_TIMER *)L"PolicyConfigGetMixFormat",
              v12);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v25, v10);
  }
  *a3 = 0LL;
  EndpointCharacteristicsDescriptor = GetEndpointCharacteristicsDescriptor(
                                        a2,
                                        0,
                                        (struct EndpointCharacteristicsDescriptor *)v22);
  if ( EndpointCharacteristicsDescriptor < 0 )
    goto LABEL_16;
  v21 = GUID_00000000_0000_0000_0000_000000000000;
  MixFormat = EffectPack::GetMixFormat(v22[1], eHostProcessConnector, &v21, (struct tWAVEFORMATEX **)&Src);
  v17 = (unsigned __int16 *)Src;
  EndpointCharacteristicsDescriptor = MixFormat;
  if ( MixFormat >= 0 )
  {
    v18 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a3 = v18;
    if ( v18 )
      memcpy_0(v18, v17, v17[8] + 18LL);
    else
      EndpointCharacteristicsDescriptor = -2147024882;
  }
  if ( v17 )
    CoTaskMemFree(v17);
  if ( EndpointCharacteristicsDescriptor < 0 )
LABEL_16:
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetMixFormat", 2238, EndpointCharacteristicsDescriptor);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v25);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(v20);
  EndpointCharacteristicsDescriptor::~EndpointCharacteristicsDescriptor((EndpointCharacteristicsDescriptor *)v22);
  return (unsigned int)EndpointCharacteristicsDescriptor;
}
