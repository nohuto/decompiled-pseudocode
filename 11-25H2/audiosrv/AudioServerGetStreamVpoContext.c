/*
 * XREFs of AudioServerGetStreamVpoContext @ 0x18010A340
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z @ 0x1800132E0 (-GetEndpointStore@CEndpointStoreCache@@QEAAJPEBGPEAPEAVCEndpointStore@@@Z.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??2@YAPEAX_K@Z @ 0x18001C1A0 (--2@YAPEAX_K@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18002153C (--1-$com_ptr_t@VCEndpointStore@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180047C8C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?reset@?$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005B488 (-reset@-$com_ptr_t@UIMMDevice@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??$?4U?$default_delete@VCVpoContextProxy@@@std@@$0A@@?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAAAEAV01@$$QEAV01@@Z @ 0x1801051DC (--$-4U-$default_delete@VCVpoContextProxy@@@std@@$0A@@-$unique_ptr@VCVpoContextProxy@@U-$default_.c)
 *     ??$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA?AV?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@0@$$QEA$$T$$QEAPEAUISaDeviceProxy@@$$QEAPEAUIVpoContext@@@Z @ 0x1801054E0 (--$make_unique@VCVpoContextProxy@@$$TPEAUISaDeviceProxy@@PEAUIVpoContext@@$0A@@std@@YA-AV-$uniqu.c)
 *     ??0CVpoContextProxy@@QEAA@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z @ 0x180105624 (--0CVpoContextProxy@@QEAA@PEAUISubmixProxy@@PEAUISaDeviceProxy@@PEAUIVpoContext@@@Z.c)
 *     ??1?$unique_ptr@VCVpoContextProxy@@U?$default_delete@VCVpoContextProxy@@@std@@@std@@QEAA@XZ @ 0x180105704 (--1-$unique_ptr@VCVpoContextProxy@@U-$default_delete@VCVpoContextProxy@@@std@@@std@@QEAA@XZ.c)
 *     ?GetStreamGroup@CVADServer@@UEAAJPEAPEAUIStreamGroupProxy@@@Z @ 0x180106A90 (-GetStreamGroup@CVADServer@@UEAAJPEAPEAUIStreamGroupProxy@@@Z.c)
 *     ?GetSubmix@CVADServer@@UEAAJPEAPEAUISubmixProxy@@@Z @ 0x180106B00 (-GetSubmix@CVADServer@@UEAAJPEAPEAUISubmixProxy@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11 #try_helpers=1
__int64 __fastcall AudioServerGetStreamVpoContext(struct _RTL_CRITICAL_SECTION *this, __int64 a2, __int64 *a3)
{
  __int64 pftDueTime; // rbx
  unsigned int v7; // edi
  struct AudioSrvTelemetryProvider *v8; // rax
  int Submix; // eax
  unsigned int v10; // ebx
  int StreamGroup; // eax
  unsigned int v13; // ebx
  struct IStreamGroupProxy *v14; // rbx
  __int64 (__fastcall *v15)(struct IStreamGroupProxy *, struct ISaDeviceProxy **); // rdi
  int v16; // eax
  unsigned int v17; // ebx
  __int64 v18; // rax
  int v19; // eax
  unsigned int v20; // ebx
  struct IVpoContext *v21; // rbx
  struct ISaDeviceProxy *v22; // rdi
  struct ISubmixProxy *v23; // rsi
  CVpoContextProxy *v24; // rax
  struct CEndpointStore *v25; // rax
  __int64 v26; // rbx
  const unsigned __int16 *v27; // rax
  CEndpointStoreCache *v28; // rcx
  int EndpointStore; // eax
  unsigned int v30; // ebx
  __int64 v31; // rdi
  __int64 (__fastcall *v32)(__int64, struct ISaDeviceProxy **); // rbx
  int v33; // eax
  unsigned int v34; // ebx
  __int64 (__fastcall *v35)(struct ISaDeviceProxy *, struct IVpoContext **); // rdi
  int v36; // eax
  unsigned int v37; // ebx
  __int64 *v38; // rax
  int v39; // eax
  unsigned int v40; // edi
  struct IVpoContext *v41; // [rsp+30h] [rbp-E8h] BYREF
  struct ISubmixProxy *v42; // [rsp+38h] [rbp-E0h] BYREF
  struct IStreamGroupProxy *v43; // [rsp+40h] [rbp-D8h] BYREF
  __int64 v44; // [rsp+48h] [rbp-D0h] BYREF
  struct ISaDeviceProxy *v45; // [rsp+50h] [rbp-C8h] BYREF
  struct CEndpointStore *v46; // [rsp+58h] [rbp-C0h] BYREF
  struct ISaDeviceProxy *v47; // [rsp+60h] [rbp-B8h] BYREF
  struct IVpoContext *v48; // [rsp+68h] [rbp-B0h] BYREF
  struct ISaDeviceProxy *v49; // [rsp+70h] [rbp-A8h] BYREF
  struct ISubmixProxy *v50; // [rsp+78h] [rbp-A0h] BYREF
  CVpoContextProxy *v51; // [rsp+80h] [rbp-98h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+88h] [rbp-90h] BYREF
  __int64 v53; // [rsp+C0h] [rbp-58h] BYREF
  _BYTE v54[16]; // [rsp+D0h] [rbp-48h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+0h]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)&v53, this);
  pftDueTime = (__int64)g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v8 = AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(
    pv,
    *((struct _TP_TIMER **)v8 + 1),
    v7,
    (struct _TP_TIMER *)L"AudioServerGetStreamVpoContext",
    pftDueTime);
  v42 = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v42);
  Submix = CVADServer::GetSubmix(this, &v42);
  v10 = Submix;
  if ( Submix < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB7C,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)Submix);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    EtwEventActivityIdControl(4LL, v54);
    return v10;
  }
  v43 = 0LL;
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v43);
  StreamGroup = CVADServer::GetStreamGroup(this, &v43);
  v13 = StreamGroup;
  if ( StreamGroup < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB81,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)StreamGroup);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    EtwEventActivityIdControl(4LL, v54);
    return v13;
  }
  v45 = 0LL;
  v14 = v43;
  v15 = *(__int64 (__fastcall **)(struct IStreamGroupProxy *, struct ISaDeviceProxy **))(*(_QWORD *)v43 + 224LL);
  wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v45);
  v16 = v15(v14, &v45);
  v17 = v16;
  if ( v16 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB86,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v16);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    EtwEventActivityIdControl(4LL, v54);
    return v17;
  }
  v41 = 0LL;
  v44 = 0LL;
  if ( v45 )
  {
    v18 = *(_QWORD *)v42;
    v41 = 0LL;
    v19 = (*(__int64 (__fastcall **)(struct ISubmixProxy *, struct IVpoContext **))(v18 + 56))(v42, &v41);
    v20 = v19;
    if ( v19 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB8D,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v19);
      std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(&v44);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v54);
      return v20;
    }
    v21 = v41;
    v22 = v45;
    v23 = v42;
    v24 = (CVpoContextProxy *)operator new(0x18uLL);
    if ( v24 )
      v25 = CVpoContextProxy::CVpoContextProxy(v24, v23, v22, v21);
    else
      v25 = 0LL;
    v46 = v25;
    std::unique_ptr<CVpoContextProxy>::operator=<std::default_delete<CVpoContextProxy>,0>(&v44, (__int64 *)&v46);
    std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(&v46);
    v26 = v44;
    if ( !v44 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB90,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x8007000ELL);
      std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(&v44);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v54);
      return 2147942414LL;
    }
  }
  else
  {
    v46 = 0LL;
    v27 = (const unsigned __int16 *)(*(__int64 (__fastcall **)(struct IStreamGroupProxy *))(*(_QWORD *)v43 + 152LL))(v43);
    EndpointStore = CEndpointStoreCache::GetEndpointStore(v28, v27, &v46);
    v30 = EndpointStore;
    if ( EndpointStore < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB97,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)EndpointStore);
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v46);
      std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(&v44);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v54);
      return v30;
    }
    v47 = 0LL;
    v31 = *((_QWORD *)v46 + 13);
    v32 = *(__int64 (__fastcall **)(__int64, struct ISaDeviceProxy **))(*(_QWORD *)v31 + 136LL);
    wil::com_ptr_t<IMMDevice,wil::err_returncode_policy>::reset((__int64 *)&v47);
    v33 = v32(v31, &v47);
    v34 = v33;
    if ( v33 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB9A,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v33);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v47);
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v46);
      std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(&v44);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v54);
      return v34;
    }
    v35 = *(__int64 (__fastcall **)(struct ISaDeviceProxy *, struct IVpoContext **))(*(_QWORD *)v47 + 112LL);
    v41 = 0LL;
    v36 = v35(v47, &v41);
    v37 = v36;
    if ( v36 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB9C,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v36);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v47);
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v46);
      std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(&v44);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v54);
      return v37;
    }
    v48 = v41;
    v49 = v47;
    v50 = 0LL;
    v38 = (__int64 *)std::make_unique<CVpoContextProxy,std::nullptr_t,ISaDeviceProxy *,IVpoContext *,0>(
                       &v51,
                       &v50,
                       &v49,
                       &v48);
    std::unique_ptr<CVpoContextProxy>::operator=<std::default_delete<CVpoContextProxy>,0>(&v44, v38);
    std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(&v51);
    v26 = v44;
    if ( !v44 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xB9F,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x8007000ELL);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v47);
      wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v46);
      std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(&v44);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
      CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
      EtwEventActivityIdControl(4LL, v54);
      return 2147942414LL;
    }
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v47);
    wil::com_ptr_t<CEndpointStore,wil::err_returncode_policy>::~com_ptr_t<CEndpointStore,wil::err_returncode_policy>((volatile signed __int32 **)&v46);
  }
  v39 = (*(__int64 (__fastcall **)(struct IVpoContext *, __int64))(*(_QWORD *)v41 + 32LL))(v41, a2);
  v40 = v39;
  if ( v39 >= 0 )
  {
    v44 = 0LL;
    *a3 = v26;
    std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(&v44);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    EtwEventActivityIdControl(4LL, v54);
    return 0LL;
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xBA3,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v39);
    std::unique_ptr<CVpoContextProxy>::~unique_ptr<CVpoContextProxy>(&v44);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v41);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v45);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v43);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v42);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    EtwEventActivityIdControl(4LL, v54);
    return v40;
  }
}
