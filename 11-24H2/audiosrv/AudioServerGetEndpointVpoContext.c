/*
 * XREFs of AudioServerGetEndpointVpoContext @ 0x180110A90
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x18000DC00 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180029ADC (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004CC08 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A42B8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z @ 0x1800AD550 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@_N@Z.c)
 *     ??0?$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x1800AD630 (--0-$CWatchdogTimer_Old@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD900 (--1-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@QEAA.c)
 *     ??1?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAA@XZ @ 0x1800AD920 (--1-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std@@@s.c)
 *     ?__private_IsEnabled@?$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@details@wil@@QEAA_NXZ @ 0x1800B0A94 (-__private_IsEnabled@-$FeatureImpl@U__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio@@@det.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer@$00@@U?$default_delete@V?$CWatchdogTimer@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer@$00@@@Z @ 0x1800B0B28 (-reset@-$unique_ptr@V-$CWatchdogTimer@$00@@U-$default_delete@V-$CWatchdogTimer@$00@@@std@@@std@@.c)
 *     ?reset@?$unique_ptr@V?$CWatchdogTimer_Old@$00@@U?$default_delete@V?$CWatchdogTimer_Old@$00@@@std@@@std@@QEAAXPEAV?$CWatchdogTimer_Old@$00@@@Z @ 0x1800B0B4C (-reset@-$unique_ptr@V-$CWatchdogTimer_Old@$00@@U-$default_delete@V-$CWatchdogTimer_Old@$00@@@std.c)
 *     ??$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEA$$T$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x18010B630 (--$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA-AV-$uniqu.c)
 *     ??1?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAA@XZ @ 0x18010B854 (--1-$unique_ptr@VCVpoContextProxy@@U-$default_delete@VCVpoContextProxy@@@std@@@std@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x180174010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=7
__int64 __fastcall AudioServerGetEndpointVpoContext(
        __int64 a1,
        const unsigned __int16 *a2,
        __int64 a3,
        CVpoContextProxy **a4)
{
  struct ISubmixProxy *v7; // rax
  struct _TP_TIMER **v8; // rsi
  __int64 pftDueTime; // rbx
  unsigned int v10; // edi
  struct AudioSrvTelemetryProvider *v11; // rax
  CEndpointStoreCache *v12; // rcx
  struct ISubmixProxy *v13; // rax
  struct _TP_TIMER **v14; // rsi
  __int64 v15; // rbx
  unsigned int v16; // edi
  struct AudioSrvTelemetryProvider *v17; // rax
  int EndpointStore; // eax
  unsigned int v19; // ebx
  const char *v20; // r9
  __int64 result; // rax
  __int64 v22; // rdi
  __int64 (__fastcall *v23)(__int64, struct ISaDeviceProxy **); // rbx
  int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rax
  int v27; // eax
  unsigned int v28; // ebx
  CVpoContextProxy *v29; // rdi
  int v30; // eax
  unsigned int v31; // ebx
  struct ISaDeviceProxy *v32; // [rsp+30h] [rbp-68h] BYREF
  struct IVpoContext *v33; // [rsp+38h] [rbp-60h] BYREF
  struct CEndpointStore *v34; // [rsp+40h] [rbp-58h] BYREF
  void *v35; // [rsp+48h] [rbp-50h] BYREF
  void *v36; // [rsp+50h] [rbp-48h] BYREF
  CVpoContextProxy *v37; // [rsp+58h] [rbp-40h] BYREF
  struct ISubmixProxy *v38; // [rsp+60h] [rbp-38h] BYREF
  struct IVpoContext *v39; // [rsp+68h] [rbp-30h] BYREF
  struct ISaDeviceProxy *v40; // [rsp+70h] [rbp-28h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+0h]

  v36 = 0LL;
  v35 = 0LL;
  try
  {
    if ( wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled((wil::details *)&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
    {
      v7 = (struct ISubmixProxy *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v8 = (struct _TP_TIMER **)v7;
      v38 = v7;
      if ( v7 )
      {
        pftDueTime = (__int64)g_AudioHealthMonitor;
        v10 = g_AudioSrvWatchDogTimerInMs;
        v11 = AudioSrvTelemetryProvider::Instance();
        v7 = (struct ISubmixProxy *)CWatchdogTimer<1>::CWatchdogTimer<1>(
                                      v8,
                                      *((struct _TP_TIMER **)v11 + 1),
                                      v10,
                                      (struct _TP_TIMER *)L"AudioServerGetEndpointVpoContext",
                                      pftDueTime);
      }
      std::unique_ptr<CWatchdogTimer<1>>::reset(&v36, v7);
    }
    else
    {
      v13 = (struct ISubmixProxy *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
      v14 = (struct _TP_TIMER **)v13;
      v38 = v13;
      if ( v13 )
      {
        v15 = (__int64)g_AudioHealthMonitor;
        v16 = g_AudioSrvWatchDogTimerInMs;
        v17 = AudioSrvTelemetryProvider::Instance();
        v13 = (struct ISubmixProxy *)CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(
                                       v14,
                                       *((struct _TP_TIMER **)v17 + 1),
                                       v16,
                                       (struct _TP_TIMER *)L"AudioServerGetEndpointVpoContext",
                                       v15);
      }
      std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v35, v13);
    }
    v34 = 0LL;
    EndpointStore = CEndpointStoreCache::GetEndpointStore(v12, a2, &v34);
    v19 = EndpointStore;
    if ( EndpointStore >= 0 )
    {
      v32 = 0LL;
      v22 = *((_QWORD *)v34 + 13);
      v23 = *(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v22 + 136LL);
      wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v32);
      v24 = v23(v22, &v32);
      v25 = v24;
      if ( v24 >= 0 )
      {
        v33 = 0LL;
        v26 = *(_QWORD *)v32;
        v33 = 0LL;
        v27 = (*(__int64 (__fastcall **)(struct ISaDeviceProxy *, struct IVpoContext **))(v26 + 112))(v32, &v33);
        v28 = v27;
        if ( v27 >= 0 )
        {
          v39 = v33;
          v40 = v32;
          v38 = 0LL;
          std::make_unique<CVpoContextProxy,std::nullptr_t,ISaDeviceProxy *,IVpoContext *,0>(&v37, &v38, &v40, &v39);
          v29 = v37;
          if ( v37 )
          {
            v30 = (*(__int64 (__fastcall **)(struct IVpoContext *, __int64))(*(_QWORD *)v33 + 32LL))(v33, a3);
            v31 = v30;
            if ( v30 >= 0 )
            {
              v37 = 0LL;
              *a4 = v29;
              std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(&v37);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
              wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v34);
              std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v35);
              std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v36);
              result = 0LL;
            }
            else
            {
              wil::details::in1diag3::Return_Hr(
                retaddr,
                (void *)0xB3E,
                (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                (const char *)(unsigned int)v30);
              std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(&v37);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
              wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
              wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v34);
              std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v35);
              std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v36);
              result = v31;
            }
          }
          else
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0xB3B,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
              (const char *)0x8007000ELL);
            std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(&v37);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
            wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v34);
            std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v35);
            std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v36);
            result = 2147942414LL;
          }
        }
        else
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0xB38,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            (const char *)(unsigned int)v27);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v33);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
          wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v34);
          std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v35);
          std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v36);
          result = v28;
        }
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xB35,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)v24);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
        wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v34);
        std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v35);
        std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v36);
        result = v25;
      }
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB32,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)EndpointStore);
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v34);
      std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v35);
      std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v36);
      result = v19;
    }
  }
  catch ( ... )
  {
    return (unsigned int)wil::details::in1diag3::Return_CaughtException(
                           retaddr,
                           (void *)0xB43,
                           (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
                           v20);
  }
  return result;
}
