/*
 * XREFs of asm_GetApplicationSubmixFromId @ 0x1800B18A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x180015ED0 (--2@YAPEAX_K@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??0?$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCharacteristics@@@Z @ 0x18009E07C (--0-$com_ptr_t@VCEndpointCharacteristics@@Uerr_returncode_policy@wil@@@wil@@QEAA@PEAVCEndpointCh.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ??1?$unique_ptr@VCAppSubmixContext@@U?$default_delete@VCAppSubmixContext@@@std@@@std@@QEAA@XZ @ 0x1800AD960 (--1-$unique_ptr@VCAppSubmixContext@@U-$default_delete@VCAppSubmixContext@@@std@@@std@@QEAA@XZ.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=4
__int64 __fastcall asm_GetApplicationSubmixFromId(__int64 a1, __int64 a2, _QWORD *a3)
{
  __int64 *v6; // rax
  struct _TP_TIMER **v7; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v9; // edi
  struct AudioSrvTelemetryProvider *v10; // rax
  __int64 *v11; // rax
  struct _TP_TIMER **v12; // rsi
  __int64 v13; // rbx
  unsigned int v14; // edi
  struct AudioSrvTelemetryProvider *v15; // rax
  __int64 v16; // rax
  int v17; // eax
  unsigned int v18; // ebx
  const char *v19; // r9
  __int64 result; // rax
  __int64 v21; // rdi
  _QWORD *v22; // rax
  _QWORD *v23; // rbx
  void *v24; // [rsp+30h] [rbp-38h] BYREF
  void *v25; // [rsp+38h] [rbp-30h] BYREF
  __int64 *v26; // [rsp+40h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+68h] [rbp+0h]
  __int64 v28; // [rsp+88h] [rbp+20h] BYREF

  v25 = 0LL;
  v24 = 0LL;
  try
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
    {
      v6 = (__int64 *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v7 = (struct _TP_TIMER **)v6;
      v26 = v6;
      if ( v6 )
      {
        pftDueTime = (__int64)g_AudioHealthMonitor;
        v9 = g_AudioSrvWatchDogTimerInMs;
        v10 = AudioSrvTelemetryProvider::Instance();
        v6 = (__int64 *)CWatchdogTimer<1>::CWatchdogTimer<1>(
                          v7,
                          *((struct _TP_TIMER **)v10 + 1),
                          v9,
                          (struct _TP_TIMER *)L"asm_GetApplicationSubmixFromId",
                          pftDueTime);
      }
      std::unique_ptr<CWatchdogTimer<1>>::reset(&v25, v6);
    }
    else
    {
      v11 = (__int64 *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v12 = (struct _TP_TIMER **)v11;
      v26 = v11;
      if ( v11 )
      {
        v13 = (__int64)g_AudioHealthMonitor;
        v14 = g_AudioSrvWatchDogTimerInMs;
        v15 = AudioSrvTelemetryProvider::Instance();
        v11 = (__int64 *)CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
                           v12,
                           *((struct _TP_TIMER **)v15 + 1),
                           v14,
                           (struct _TP_TIMER *)L"asm_GetApplicationSubmixFromId",
                           v13);
      }
      std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v24, v11);
    }
    v28 = 0LL;
    v16 = *(_QWORD *)g_ProcessSubmixManager;
    v28 = 0LL;
    v17 = (*(__int64 (__fastcall **)(struct IProcessSubmixManager *, __int64, __int64, __int64 *))(v16 + 56))(
            g_ProcessSubmixManager,
            a1,
            a2,
            &v28);
    v18 = v17;
    if ( v17 >= 0 )
    {
      v21 = v28;
      v22 = operator new(8uLL);
      v23 = v22;
      if ( v22 )
        wil::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>::com_ptr_t<CEndpointCharacteristics,wil::err_returncode_policy>(
          v22,
          v21);
      else
        v23 = 0LL;
      v26 = 0LL;
      *a3 = v23;
      std::unique_ptr<CAppSubmixContext>::~unique_ptr<CAppSubmixContext>(&v26);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
      std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v24);
      std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v25);
      result = 0LL;
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x12B,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
        (const char *)(unsigned int)v17);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v28);
      std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v24);
      std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v25);
      result = v18;
    }
  }
  catch ( ... )
  {
    LODWORD(v28) = wil::details::in1diag3::Return_CaughtException(
                     retaddr,
                     (void *)0x133,
                     (int)"avcore\\audiocore\\server\\audiosrv\\dll\\applicationsubmix.cpp",
                     v19);
    return (unsigned int)v28;
  }
  return result;
}
