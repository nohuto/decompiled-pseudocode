/*
 * XREFs of ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18006449C
 * Callers:
 *     AudioServerInitialize @ 0x180064440 (AudioServerInitialize.c)
 *     asm_AudioServerInitializeStream @ 0x1800B0F50 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??$MakeAndInitialize@VCVADServer@@V1@PEAUIAudioProcess@@AEAPEBGAEAW4_AUDCLNT_SHAREMODE@@AEAKAEAPEBUtWAVEFORMATEX@@AEAPEBU_GUID@@AEAPEAUVadServerSettings@@AEAPEAPEAGAEAPEAUIProcessSubmixProxy@@@Details@WRL@Microsoft@@YAJPEAPEAVCVADServer@@$$QEAPEAUIAudioProcess@@AEAPEBGAEAW4_AUDCLNT_SHAREMODE@@AEAKAEAPEBUtWAVEFORMATEX@@AEAPEBU_GUID@@AEAPEAUVadServerSettings@@AEAPEAPEAGAEAPEAUIProcessSubmixProxy@@@Z @ 0x18000CC84 (--$MakeAndInitialize@VCVADServer@@V1@PEAUIAudioProcess@@AEAPEBGAEAW4_AUDCLNT_SHAREMODE@@AEAKAEAP.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x18001F6B8 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x18001F740 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x180020710 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x180021D9C (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x18004F204 (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004FBEC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x180058528 (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ??1?$com_ptr_t@VCVADServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A2670 (--1-$com_ptr_t@VCVADServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A3DA0 (__security_check_cookie.c)
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

// Hidden C++ exception states: #wind=8
__int64 __fastcall AudioServerInitialize_Internal(
        void *a1,
        const unsigned __int16 *a2,
        enum _AUDCLNT_SHAREMODE a3,
        int a4,
        const struct tWAVEFORMATEX *a5,
        const struct _GUID *a6,
        struct VadServerSettings *a7,
        unsigned __int16 **a8,
        struct IProcessSubmixProxy *a9,
        void **a10)
{
  struct IProcessSubmixProxy *v12; // r14
  void **v13; // r15
  struct IAudioProcess *v14; // rax
  struct IAudioProcess *v15; // rsi
  struct _FILETIME pftDueTime; // rbx
  struct IAudioProcess *v17; // rax
  struct IAudioProcess *v18; // rsi
  struct _FILETIME v19; // rbx
  LPCRITICAL_SECTION v20; // rbx
  CAudioDGProcess *v21; // rcx
  int v22; // eax
  unsigned int v23; // ebx
  LPCRITICAL_SECTION v24; // rdi
  bool v25; // zf
  __int64 (__fastcall *v26)(struct IAudioPolicyManager *, void *, struct IAudioProcess **); // rbx
  int v27; // eax
  unsigned int v28; // edi
  LPCRITICAL_SECTION v29; // rbx
  DWORD v30; // eax
  LPCRITICAL_SECTION v31; // rdi
  int v32; // ebx
  LPCRITICAL_SECTION v33; // rdi
  int v34; // eax
  LPCRITICAL_SECTION v35; // rbx
  struct _RTL_CRITICAL_SECTION *v36; // rax
  struct _RTL_CRITICAL_SECTION *v38; // [rsp+50h] [rbp-81h] BYREF
  struct IAudioProcess *v39; // [rsp+58h] [rbp-79h] BYREF
  struct IAudioProcess *v40; // [rsp+60h] [rbp-71h] BYREF
  char v41; // [rsp+69h] [rbp-68h]
  __int64 v42; // [rsp+70h] [rbp-61h] BYREF
  __int64 v43; // [rsp+78h] [rbp-59h] BYREF
  struct IProcessSubmixProxy *v44; // [rsp+80h] [rbp-51h] BYREF
  unsigned __int16 **v45; // [rsp+88h] [rbp-49h] BYREF
  struct VadServerSettings *v46; // [rsp+90h] [rbp-41h] BYREF
  const struct tWAVEFORMATEX *v47; // [rsp+98h] [rbp-39h] BYREF
  const unsigned __int16 *v48; // [rsp+A0h] [rbp-31h] BYREF
  __int128 v49; // [rsp+A8h] [rbp-29h]
  __int128 v50; // [rsp+B8h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+47h]
  enum _AUDCLNT_SHAREMODE v52; // [rsp+130h] [rbp+5Fh] BYREF
  int v53; // [rsp+138h] [rbp+67h] BYREF

  v53 = a4;
  v52 = a3;
  v48 = a2;
  v47 = a5;
  v46 = a7;
  v45 = a8;
  v12 = a9;
  v44 = a9;
  v13 = a10;
  v49 = *(_OWORD *)a7;
  v50 = *(_OWORD *)a7;
  EtwEventActivityIdControl(4LL, &v50);
  v43 = 0LL;
  v42 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v14 = (struct IAudioProcess *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v15 = v14;
    v40 = v14;
    if ( v14 )
    {
      pftDueTime = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v14 = (struct IAudioProcess *)CWatchdogTimer<1>::CWatchdogTimer<1>(v15, pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(&v43, v14);
  }
  else
  {
    v17 = (struct IAudioProcess *)operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v18 = v17;
    v40 = v17;
    if ( v17 )
    {
      v19 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v17 = (struct IAudioProcess *)CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v18, v19);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v42, v17);
  }
  *v13 = 0LL;
  v20 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v38 = v20;
  if ( ++LODWORD(v20[1].DebugInfo) == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer(v20);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v20);
  }
  wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v38);
  v41 = 1;
  v22 = CAudioDGProcess::CheckADGStatus(v21);
  v23 = v22;
  if ( v22 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA5E,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v22);
    v24 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    v38 = v24;
    v25 = LODWORD(v24[1].DebugInfo)-- == 1;
    if ( v25 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v24);
LABEL_27:
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v38);
    goto LABEL_33;
  }
  v39 = 0LL;
  v26 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                + 32LL);
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset((__int64 *)&v39);
  v27 = v26(g_PolicyManager, a1, &v39);
  v28 = v27;
  if ( v27 >= 0 )
  {
    v30 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v39 + 40LL))(v39);
    if ( !(unsigned int)IsProcessAllowed(v30, a2) )
    {
      v23 = -2147024891;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xA64,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x80070005LL);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
      v31 = g_ADGProcess;
      EnterCriticalSection(g_ADGProcess);
      v38 = v31;
      v25 = LODWORD(v31[1].DebugInfo)-- == 1;
      if ( v25 )
        CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v31);
      goto LABEL_27;
    }
    if ( v12 )
    {
      v32 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v39 + 48LL))(v39);
      if ( (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)v12 + 200LL))(v12) != v32 )
      {
        v23 = -2147024891;
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xA66,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)0x80070005LL);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
        v33 = g_ADGProcess;
        EnterCriticalSection(g_ADGProcess);
        v38 = v33;
        v25 = LODWORD(v33[1].DebugInfo)-- == 1;
        if ( v25 )
          CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v33);
        goto LABEL_27;
      }
    }
    v40 = v39;
    v38 = 0LL;
    v34 = Microsoft::WRL::Details::MakeAndInitialize<CVADServer,CVADServer,IAudioProcess *,unsigned short const * &,enum _AUDCLNT_SHAREMODE &,unsigned long &,tWAVEFORMATEX const * &,_GUID const * &,VadServerSettings * &,unsigned short * * &,IProcessSubmixProxy * &>(
            (volatile signed __int64 **)&v38,
            &v40,
            &v48,
            &v52,
            (unsigned int *)&v53,
            &v47,
            &a6,
            &v46,
            &v45,
            &v44);
    v28 = v34;
    if ( v34 >= 0 )
    {
      v36 = v38;
      v38 = 0LL;
      *v13 = v36;
      wil::com_ptr_t<CVADServer,wil::err_returncode_policy>::~com_ptr_t<CVADServer,wil::err_returncode_policy>(&v38);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
      v23 = 0;
      goto LABEL_33;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA6A,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v34);
    wil::com_ptr_t<CVADServer,wil::err_returncode_policy>::~com_ptr_t<CVADServer,wil::err_returncode_policy>(&v38);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
    v35 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    v40 = (struct IAudioProcess *)v35;
    v25 = LODWORD(v35[1].DebugInfo)-- == 1;
    if ( v25 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v35);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>((struct _RTL_CRITICAL_SECTION **)&v40);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xA62,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v27);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v39);
    v29 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    v38 = v29;
    v25 = LODWORD(v29[1].DebugInfo)-- == 1;
    if ( v25 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v29);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v38);
  }
  v23 = v28;
LABEL_33:
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v42);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(&v43);
  EtwEventActivityIdControl(4LL, &v50);
  return v23;
}
