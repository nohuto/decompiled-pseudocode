/*
 * XREFs of AudioSessionManagerGetSessionForStreamSwitch @ 0x18007A4B0
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x18000F840 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x1800121D8 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800122A4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x180012380 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18004FBEC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x18006B274 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x1800A2094 (-SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z.c)
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

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerGetSessionForStreamSwitch(__int64 *a1, char *a2, _QWORD *a3)
{
  void *v6; // rax
  void *v7; // rsi
  struct _FILETIME pftDueTime; // rbx
  void *v9; // rax
  void *v10; // rsi
  struct _FILETIME v11; // rbx
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **); // rbx
  int v14; // eax
  unsigned int v15; // ebx
  __int64 v16; // rdx
  const unsigned __int16 *v17; // rax
  int v18; // eax
  union _RTL_RUN_ONCE *v19; // rbx
  unsigned int v20; // eax
  int v21; // eax
  __int64 v22; // rdx
  CAudioSession *v23; // rbx
  int v24; // eax
  int v25; // edi
  __int64 (__fastcall ***v26)(_QWORD, _QWORD, _QWORD, CAudioSession *, __int64 *); // rsi
  __int64 (__fastcall *v27)(_QWORD, _QWORD, _QWORD, CAudioSession *, __int64 *); // rdi
  unsigned int v28; // eax
  bool v30; // [rsp+40h] [rbp-79h] BYREF
  CAudioSession *v31; // [rsp+48h] [rbp-71h] BYREF
  struct IAudioProcess *v32; // [rsp+50h] [rbp-69h] BYREF
  unsigned int v33; // [rsp+58h] [rbp-61h] BYREF
  unsigned int v34; // [rsp+5Ch] [rbp-5Dh] BYREF
  __int64 v35; // [rsp+60h] [rbp-59h] BYREF
  __int64 v36; // [rsp+68h] [rbp-51h] BYREF
  _QWORD v37[2]; // [rsp+70h] [rbp-49h] BYREF
  _BYTE v38[80]; // [rsp+80h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+118h] [rbp+5Fh]

  v37[0] = 0LL;
  v36 = 0LL;
  if ( (unsigned __int8)wil::details::FeatureImpl<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::__private_IsEnabled(&`wil::Feature<__WilFeatureTraits_Feature_Servicing_EnableLKDForAudio>::GetImpl'::`2'::impl) )
  {
    v6 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v7 = v6;
    if ( v6 )
    {
      pftDueTime = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v6 = (void *)CWatchdogTimer<1>::CWatchdogTimer<1>(v7, pftDueTime);
    }
    std::unique_ptr<CWatchdogTimer<1>>::reset(v37, v6);
  }
  else
  {
    v9 = operator new(0x38uLL, (const struct std::nothrow_t *)&std::nothrow);
    v10 = v9;
    if ( v9 )
    {
      v11 = g_AudioHealthMonitor;
      AudioSrvTelemetryProvider::Instance();
      v9 = (void *)CWatchdogTimer_Old<1>::CWatchdogTimer_Old<1>(v10, v11);
    }
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v36, v9);
  }
  *a3 = 0LL;
  v12 = *a1;
  v32 = 0LL;
  v13 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(*(_QWORD *)g_PolicyManager
                                                                                                + 32LL);
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset((__int64 *)&v32);
  v14 = v13(g_PolicyManager, 0LL, &v32);
  v15 = v14;
  if ( v14 >= 0 )
  {
    CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v38);
    v34 = 0;
    v33 = 0;
    v30 = 0;
    v17 = (const unsigned __int16 *)std::wstring::c_str(*(_QWORD *)v12 + 16LL, v16);
    v18 = CAudioSession::ParseStreamSwitchId(v17, a2, (struct CAudioSessionInstanceId *)v38, &v34, &v33, &v30);
    v15 = v18;
    if ( v18 >= 0 )
    {
      v19 = *(union _RTL_RUN_ONCE **)(*(_QWORD *)v12 + 96LL);
      v31 = 0LL;
      v20 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v32 + 40LL))(v32);
      v21 = CAudioSessionManager::CreateAudioSession(
              v19,
              v32,
              (struct CAudioSessionInstanceId *)v38,
              v34,
              v33,
              v20,
              &v31);
      v15 = v21;
      if ( v21 >= 0 )
      {
        v23 = v31;
        if ( !(*(unsigned int (__fastcall **)(char *))(*((_QWORD *)v31 + 1) + 56LL))((char *)v31 + 8) )
        {
          v24 = CAudioSession::SetDuckingOptOutPreference(v23, v30);
          v25 = v24;
          if ( v24 < 0 )
          {
            wil::details::in1diag3::Return_Hr(
              retaddr,
              (void *)0x68C,
              (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
              (const char *)(unsigned int)v24);
            wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
            CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v38);
            v15 = v25;
            goto LABEL_22;
          }
        }
        v35 = 0LL;
        v26 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, CAudioSession *, __int64 *))(*(_QWORD *)v12 + 96LL);
        v27 = **v26;
        v28 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v32 + 40LL))(v32);
        v21 = v27(v26, v28, 0LL, v23, &v35);
        v15 = v21;
        if ( v21 >= 0 )
        {
          *a3 = v35;
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
          CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v38);
          v15 = 0;
          goto LABEL_22;
        }
        v22 = 1683LL;
      }
      else
      {
        v22 = 1668LL;
      }
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)v22,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v21);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v31);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x67E,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v18);
    }
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v38);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x673,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v14);
  }
LABEL_22:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v32);
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v36);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(v37);
  return v15;
}
