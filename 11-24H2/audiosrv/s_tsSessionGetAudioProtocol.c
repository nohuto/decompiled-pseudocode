/*
 * XREFs of s_tsSessionGetAudioProtocol @ 0x180080400
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x180042840 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x1800A426C (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$CWatchdogTimer_Old@$00@@QEAA@XZ @ 0x1800AD7E4 (--1-$CWatchdogTimer_Old@$00@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 */

__int64 __fastcall s_tsSessionGetAudioProtocol(__int64 a1, unsigned int a2, __int64 a3, __int64 a4)
{
  void *v8; // rsi
  struct _FILETIME pftDueTime; // rbx
  void *v10; // rbx
  unsigned int AudioProtocol; // edi
  void *v12; // rsi
  struct _FILETIME v13; // rbx

  if ( (unsigned int)IsTSSessionGetAudioProtocolSupported() )
  {
    if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
    {
      v8 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v8 )
      {
        pftDueTime = g_AudioHealthMonitor;
        AudioSrvTelemetryProvider::Instance();
        v10 = (void *)CWatchdogTimer<1>::CWatchdogTimer<1>(v8, pftDueTime);
      }
      else
      {
        v10 = 0LL;
      }
      AudioProtocol = TS_SessionGetAudioProtocol(a1, a2, a3, a4);
      if ( !v10 )
        return AudioProtocol;
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v10);
    }
    else
    {
      v12 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      if ( v12 )
      {
        v13 = g_AudioHealthMonitor;
        AudioSrvTelemetryProvider::Instance();
        v10 = (void *)CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v12, v13);
      }
      else
      {
        v10 = 0LL;
      }
      AudioProtocol = TS_SessionGetAudioProtocol(a1, a2, a3, a4);
      if ( !v10 )
        return AudioProtocol;
      CWatchdogTimer_Old<1>::~CWatchdogTimer_Old<1>(v10);
    }
    operator delete(v10, (const struct std::nothrow_t *)0x38);
    return AudioProtocol;
  }
  return 2147500033LL;
}
