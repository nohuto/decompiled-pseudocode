/*
 * XREFs of AudioVolumeGetMute @ 0x180088A00
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
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioVolumeGetMute(_QWORD *a1, __int64 a2)
{
  void *v4; // rsi
  struct _FILETIME pftDueTime; // rbx
  void *v6; // rbx
  __int64 result; // rax
  unsigned int v8; // edi
  void *v9; // rsi
  struct _FILETIME v10; // rbx

  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v4 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v4 )
    {
      pftDueTime = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v6 = (void *)CWatchdogTimer<1>::CWatchdogTimer<1>(v4, pftDueTime);
    }
    else
    {
      v6 = 0LL;
    }
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 152LL))(*a1, a2);
    v8 = result;
    if ( v6 )
    {
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v6);
LABEL_12:
      operator delete(v6, (const struct std::nothrow_t *)0x38);
      return v8;
    }
  }
  else
  {
    v9 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v9 )
    {
      v10 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v6 = (void *)CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v9, v10);
    }
    else
    {
      v6 = 0LL;
    }
    result = (*(__int64 (__fastcall **)(_QWORD, __int64))(*(_QWORD *)*a1 + 152LL))(*a1, a2);
    v8 = result;
    if ( v6 )
    {
      CWatchdogTimer_Old<1>::~CWatchdogTimer_Old<1>(v6);
      goto LABEL_12;
    }
  }
  return result;
}
