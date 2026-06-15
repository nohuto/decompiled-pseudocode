/*
 * XREFs of AudioSessionManagerGetSessionForStreamSwitch @ 0x180048C00
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?c_str@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBAPEBGXZ @ 0x180014F20 (-c_str@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEBAPEBGXZ.c)
 *     ??0CAudioSessionInstanceId@@QEAA@XZ @ 0x180018118 (--0CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ??1CAudioSessionInstanceId@@QEAA@XZ @ 0x1800181E4 (--1CAudioSessionInstanceId@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ?CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@KKKPEAPEAVCAudioSession@@@Z @ 0x18001AF40 (-CreateAudioSession@CAudioSessionManager@@QEAAJPEAUIAudioProcess@@AEAVCAudioSessionInstanceId@@K.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z @ 0x180049468 (-ParseStreamSwitchId@CAudioSession@@SAJPEBG0AEAVCAudioSessionInstanceId@@PEAK2PEA_N@Z.c)
 *     ?SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z @ 0x1800A5C84 (-SetDuckingOptOutPreference@CAudioSession@@QEAAJ_N@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioSessionManagerGetSessionForStreamSwitch(__int64 *a1, const unsigned __int16 *a2, _QWORD *a3)
{
  struct _FILETIME pftDueTime; // rbx
  __int64 v7; // rsi
  __int64 v8; // rax
  int v9; // eax
  unsigned int v10; // ebx
  const unsigned __int16 *v11; // rax
  int v12; // eax
  CAudioSessionManager *v13; // rbx
  unsigned int v14; // eax
  int v15; // eax
  __int64 v16; // rdx
  CAudioSession *v17; // rbx
  int v18; // eax
  int v19; // edi
  __int64 (__fastcall ***v20)(_QWORD, _QWORD, _QWORD, CAudioSession *, __int64 *); // rsi
  __int64 (__fastcall *v21)(_QWORD, _QWORD, _QWORD, CAudioSession *, __int64 *); // rdi
  unsigned int v22; // eax
  bool v24; // [rsp+40h] [rbp-89h] BYREF
  CAudioSession *v25; // [rsp+48h] [rbp-81h] BYREF
  struct IAudioProcess *v26; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v27; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v28; // [rsp+5Ch] [rbp-6Dh] BYREF
  __int64 v29; // [rsp+60h] [rbp-69h] BYREF
  _BYTE pv[56]; // [rsp+68h] [rbp-61h] BYREF
  _BYTE v31[80]; // [rsp+A0h] [rbp-29h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+128h] [rbp+5Fh]

  pftDueTime = g_AudioHealthMonitor;
  AudioSrvTelemetryProvider::Instance();
  CWatchdogTimer<1>::CWatchdogTimer<1>(pv, pftDueTime);
  *a3 = 0LL;
  v7 = *a1;
  v8 = *(_QWORD *)g_PolicyManager;
  v26 = 0LL;
  v9 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, struct IAudioProcess **))(v8 + 32))(
         g_PolicyManager,
         0LL,
         &v26);
  v10 = v9;
  if ( v9 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x666,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v9);
    goto LABEL_16;
  }
  CAudioSessionInstanceId::CAudioSessionInstanceId((CAudioSessionInstanceId *)v31);
  v28 = 0;
  v27 = 0;
  v24 = 0;
  v11 = (const unsigned __int16 *)std::wstring::c_str(*(_QWORD *)v7 + 16LL);
  v12 = CAudioSession::ParseStreamSwitchId(v11, a2, (struct CAudioSessionInstanceId *)v31, &v28, &v27, &v24);
  v10 = v12;
  if ( v12 >= 0 )
  {
    v13 = *(CAudioSessionManager **)(*(_QWORD *)v7 + 96LL);
    v25 = 0LL;
    v14 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v26 + 40LL))(v26);
    v15 = CAudioSessionManager::CreateAudioSession(v13, v26, (struct CAudioSessionInstanceId *)v31, v28, v27, v14, &v25);
    v10 = v15;
    if ( v15 >= 0 )
    {
      v17 = v25;
      if ( !(*(unsigned int (__fastcall **)(char *))(*((_QWORD *)v25 + 1) + 56LL))((char *)v25 + 8) )
      {
        v18 = CAudioSession::SetDuckingOptOutPreference(v17, v24);
        v19 = v18;
        if ( v18 < 0 )
        {
          wil::details::in1diag3::Return_Hr(
            retaddr,
            (void *)0x67F,
            (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
            (const char *)(unsigned int)v18);
          wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
          CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v31);
          v10 = v19;
          goto LABEL_16;
        }
      }
      v29 = 0LL;
      v20 = *(__int64 (__fastcall ****)(_QWORD, _QWORD, _QWORD, CAudioSession *, __int64 *))(*(_QWORD *)v7 + 96LL);
      v21 = **v20;
      v22 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v26 + 40LL))(v26);
      v15 = v21(v20, v22, 0LL, v17, &v29);
      v10 = v15;
      if ( v15 >= 0 )
      {
        *a3 = v29;
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
        CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v31);
        v10 = 0;
        goto LABEL_16;
      }
      v16 = 1670LL;
    }
    else
    {
      v16 = 1655LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v16,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
      (const char *)(unsigned int)v15);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v25);
    CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v31);
LABEL_16:
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v26);
    goto LABEL_17;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x671,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\audiosessionmanager.cpp",
    (const char *)(unsigned int)v12);
  CAudioSessionInstanceId::~CAudioSessionInstanceId((CAudioSessionInstanceId *)v31);
  if ( v26 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v26 + 16LL))(v26);
LABEL_17:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v10;
}
