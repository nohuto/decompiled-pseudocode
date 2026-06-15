/*
 * XREFs of AudioSessionDestroy @ 0x180077D20
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
 *     WPP_SF_D @ 0x1800C03A4 (WPP_SF_D.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionDestroy(volatile signed __int32 **a1)
{
  void *v1; // rbx
  void *v2; // rdi
  volatile signed __int32 *v3; // r14
  void *v5; // rbp
  struct _FILETIME pftDueTime; // rbx
  void *v7; // rbp
  struct _FILETIME v8; // rdi
  unsigned __int32 v9; // esi

  v1 = 0LL;
  v2 = 0LL;
  v3 = *a1;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v5 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v5 )
    {
      pftDueTime = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v1 = (void *)CWatchdogTimer<1>::CWatchdogTimer<1>(v5, pftDueTime);
    }
  }
  else
  {
    v7 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    if ( v7 )
    {
      v8 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v2 = (void *)CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v7, v8);
    }
  }
  v9 = _InterlockedDecrement(v3 + 6);
  if ( !v9 )
    (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 104LL))(v3);
  (*(void (__fastcall **)(volatile signed __int32 *))(*(_QWORD *)v3 + 16LL))(v3);
  if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
    && (*((_BYTE *)WPP_GLOBAL_Control + 28) & 0x40) != 0
    && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
  {
    WPP_SF_D(*((_QWORD *)WPP_GLOBAL_Control + 2), 40LL, &WPP_ab1375f163c73c4b99e57586ff560771_Traceguids, v9);
  }
  *a1 = 0LL;
  if ( v2 )
  {
    CWatchdogTimer_Old<1>::~CWatchdogTimer_Old<1>(v2);
    operator delete(v2, (const struct std::nothrow_t *)0x38);
  }
  if ( v1 )
  {
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)v1);
    operator delete(v1, (const struct std::nothrow_t *)0x38);
  }
  return 0LL;
}
