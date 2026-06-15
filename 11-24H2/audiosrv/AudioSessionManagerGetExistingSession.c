/*
 * XREFs of AudioSessionManagerGetExistingSession @ 0x18007A240
 * Callers:
 *     <none>
 * Callees:
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x180008B80 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x1800121D8 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800122A4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@@Z @ 0x180013760 (-FindAudioSession@CAudioSessionManager@@IEAAJAEAVCAudioSessionInstanceId@@PEAPEAVCAudioSession@@.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180014EAC (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z @ 0x18001A234 (-Initialize@CAudioSessionInstanceId@@QEAAJPEBG@Z.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x180023E20 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
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
__int64 __fastcall AudioSessionManagerGetExistingSession(__int64 **a1, const unsigned __int16 *a2, _QWORD *a3)
{
  __int64 *v5; // r15
  void *v6; // rax
  void *v7; // rsi
  struct _FILETIME pftDueTime; // rbx
  void *v9; // rax
  void *v10; // rsi
  struct _FILETIME v11; // rbx
  RPC_STATUS v12; // eax
  unsigned int v13; // ebx
  int v14; // eax
  __int64 v15; // rax
  int AudioSession; // eax
  __int64 (__fastcall ***v17)(_QWORD, _QWORD, _QWORD, struct CAudioSession *, int *); // rcx
  __int64 (__fastcall **v18)(_QWORD, _QWORD, _QWORD, struct CAudioSession *, int *); // rax
  int v19; // eax
  __int64 v20; // rax
  unsigned int Pid; // [rsp+30h] [rbp-69h] BYREF
  int v23[2]; // [rsp+38h] [rbp-61h] BYREF
  struct CAudioSession *v24; // [rsp+40h] [rbp-59h] BYREF
  __int64 v25; // [rsp+48h] [rbp-51h] BYREF
  _QWORD v26[2]; // [rsp+50h] [rbp-49h] BYREF
  _BYTE v27[80]; // [rsp+60h] [rbp-39h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+F8h] [rbp+5Fh]

  v5 = *a1;
  v26[0] = 0LL;
  v25 = 0LL;
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
    std::unique_ptr<CWatchdogTimer<1>>::reset(v26, v6);
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
    std::unique_ptr<CWatchdogTimer_Old<1>>::reset(&v25, v9);
  }
  *a3 = 0LL;
  Pid = 0;
  v12 = I_RpcBindingInqLocalClientPID(0LL, &Pid);
  v13 = v12 != 0 ? v12 | 0x80010000 : 0;
  if ( (v13 & 0x80000000) == 0 )
  {
    CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v27);
    v14 = CAudioSessionInstanceId::Initialize((CAudioSessionInstanceId *)v27, a2);
    v13 = v14;
    if ( v14 >= 0 )
    {
      v15 = *v5;
      v24 = 0LL;
      AudioSession = CAudioSessionManager::FindAudioSession(
                       *(CAudioSessionManager **)(v15 + 96),
                       (struct CAudioSessionInstanceId *)v27,
                       &v24);
      v13 = AudioSession;
      if ( AudioSession >= 0 )
      {
        v17 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, struct CAudioSession *, int *))(*v5 + 96);
        v18 = *v17;
        *(_QWORD *)v23 = 0LL;
        v19 = (*v18)(v17, Pid, 0LL, v24, v23);
        v13 = v19;
        if ( v19 >= 0 )
        {
          v20 = *(_QWORD *)v23;
          *(_QWORD *)v23 = 0LL;
          *a3 = v20;
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v23);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
          CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v27);
          v13 = 0;
          goto LABEL_19;
        }
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x660,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)v19);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)v23);
      }
      else
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0x65C,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
          (const char *)(unsigned int)AudioSession);
      }
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v24);
    }
    else
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x658,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
        (const char *)(unsigned int)v14);
    }
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v27);
  }
  else
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x654,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)v13);
  }
LABEL_19:
  std::unique_ptr<CWatchdogTimer_Old<1>>::~unique_ptr<CWatchdogTimer_Old<1>>(&v25);
  std::unique_ptr<CWatchdogTimer<1>>::~unique_ptr<CWatchdogTimer<1>>(v26);
  return v13;
}
