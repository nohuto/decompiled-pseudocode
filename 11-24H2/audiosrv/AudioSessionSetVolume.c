/*
 * XREFs of AudioSessionSetVolume @ 0x1800C4F40
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

__int64 __fastcall AudioSessionSetVolume(__int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // r14
  struct _TP_TIMER **v7; // rax
  struct _TP_TIMER **v8; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v10; // edi
  struct AudioSrvTelemetryProvider *v11; // rax
  __int64 v12; // rdx
  struct _TP_TIMER **v13; // rax
  struct _TP_TIMER **v14; // rsi
  __int64 v15; // rbx
  unsigned int v16; // edi
  struct AudioSrvTelemetryProvider *v17; // rax
  int v18; // eax
  unsigned int v19; // ebx
  void *v21[2]; // [rsp+30h] [rbp-38h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  void *v23; // [rsp+70h] [rbp+8h] BYREF

  v21[0] = 0LL;
  v23 = 0LL;
  v6 = *a1;
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
             (struct _TP_TIMER *)L"AudioSessionSetVolume",
             pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(v21, v7);
  }
  else
  {
    v13 = (struct _TP_TIMER **)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v14 = v13;
    if ( v13 )
    {
      v15 = (__int64)g_AudioHealthMonitor;
      v16 = g_AudioSrvWatchDogTimerInMs;
      v17 = AudioSrvTelemetryProvider::Instance();
      v13 = CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
              v14,
              *((struct _TP_TIMER **)v17 + 1),
              v16,
              (struct _TP_TIMER *)L"AudioSessionSetVolume",
              v15);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v23, v13);
  }
  v18 = (*(__int64 (__fastcall **)(__int64, __int64, __int64, __int64))(*(_QWORD *)v6 + 296LL))(v6, v12, a3, a4);
  v19 = v18;
  if ( v18 >= 0 )
    v19 = 0;
  else
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x802,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessioncontrol.cpp",
      (const char *)(unsigned int)v18);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v23);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(v21);
  return v19;
}
