/*
 * XREFs of AudioSessionSetChannelVolume @ 0x1800C4CB0
 * Callers:
 *     <none>
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
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

__int64 __fastcall AudioSessionSetChannelVolume(__int64 *a1, unsigned int a2, __int64 a3, __int64 a4, __int64 a5)
{
  __int64 v7; // r14
  struct _TP_TIMER **v8; // rax
  struct _TP_TIMER **v9; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v11; // edi
  struct AudioSrvTelemetryProvider *v12; // rax
  __int64 v13; // r8
  struct _TP_TIMER **v14; // rax
  struct _TP_TIMER **v15; // rsi
  __int64 v16; // rbx
  unsigned int v17; // edi
  struct AudioSrvTelemetryProvider *v18; // rax
  int v19; // eax
  unsigned int v20; // ebx
  void *v22[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v24; // [rsp+70h] [rbp+8h] BYREF

  v22[0] = 0LL;
  v24 = 0LL;
  v7 = *a1;
  if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v8 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v9 = v8;
    if ( v8 )
    {
      pftDueTime = (__int64)g_AudioHealthMonitor;
      v11 = g_AudioSrvWatchDogTimerInMs;
      v12 = AudioSrvTelemetryProvider::Instance();
      v8 = CWatchdogTimer<1>::CWatchdogTimer<1>(
             v9,
             *((struct _TP_TIMER **)v12 + 1),
             v11,
             (struct _TP_TIMER *)L"AudioSessionSetChannelVolume",
             pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(v22, v8);
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
              (struct _TP_TIMER *)L"AudioSessionSetChannelVolume",
              v16);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v24, v14);
  }
  v19 = (*(__int64 (__fastcall **)(__int64, _QWORD, __int64, __int64, __int64))(*(_QWORD *)v7 + 328LL))(
          v7,
          a2,
          v13,
          a4,
          a5);
  v20 = v19;
  if ( v19 >= 0 )
    v20 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x88A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp",
      (const char *)(unsigned int)v19);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v24);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(v22);
  return v20;
}
