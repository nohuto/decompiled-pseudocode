/*
 * XREFs of AudioServerCreateStream @ 0x18008D370
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??0SetActivityIdFromVadServer@@QEAA@PEAX@Z @ 0x180047C8C (--0SetActivityIdFromVadServer@@QEAA@PEAX@Z.c)
 *     ??0?$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z @ 0x180049380 (--0-$CWatchdogTimer@$00@@QEAA@PEBU_tlgProvider_t@@KPEBGPEAUIAudioHealthMonitor@@@Z.c)
 *     ?reset@?$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ @ 0x18005E3AC (-reset@-$com_ptr_t@UIAudioProcess@@Uerr_returncode_policy@wil@@@wil@@QEAAXXZ.c)
 *     ?GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z @ 0x18005F850 (-GetThreadLogonSessionStringSid@@YAJPEAPEAG@Z.c)
 *     ??1?$unique_storage@U?$resource_policy@PEAGP6APEAXPEAX@Z$1?LocalFree@@YAPEAX0@ZU?$integral_constant@_K$0A@@wistd@@PEAGPEAG$0A@$$T@details@wil@@@details@wil@@QEAA@XZ @ 0x18007CC30 (--1-$unique_storage@U-$resource_policy@PEAGP6APEAXPEAX@Z$1-LocalFree@@YAPEAX0@ZU-$integral_const.c)
 *     ?CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_AUDIO_STREAM@@@Z @ 0x18008C450 (-CreateStream@CVADServer@@UEAAJPEAUIAudioProcess@@W4SYSTEM_AUDIO_STREAM_TYPE@@_J2PEBGPEAUSYSTEM_.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ?_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z @ 0x1801043C0 (-_Log_GetLastError@in1diag3@details@wil@@YAXPEAXIPEBD@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerCreateStream(
        _OWORD *a1,
        unsigned int a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        void *a6)
{
  __int64 (__fastcall *v10)(struct IAudioPolicyManager *, _QWORD, __int64 *); // rbx
  int v11; // eax
  unsigned int v12; // ebx
  __int64 v13; // rdx
  __int64 pftDueTime; // rbx
  unsigned int v15; // edi
  struct AudioSrvTelemetryProvider *v16; // rax
  RPC_STATUS v17; // ebx
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  int ThreadLogonSessionStringSid; // eax
  const char *v21; // r9
  const char *v22; // r9
  int Stream; // eax
  unsigned __int16 *v25; // [rsp+40h] [rbp-79h] BYREF
  int v26; // [rsp+48h] [rbp-71h] BYREF
  __int64 v27; // [rsp+50h] [rbp-69h] BYREF
  struct _TP_TIMER *pv[7]; // [rsp+58h] [rbp-61h] BYREF
  _BYTE v29[16]; // [rsp+90h] [rbp-29h] BYREF
  _BYTE v30[16]; // [rsp+A0h] [rbp-19h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+108h] [rbp+4Fh]

  SetActivityIdFromVadServer::SetActivityIdFromVadServer((SetActivityIdFromVadServer *)v29, a1);
  v27 = 0LL;
  v10 = *(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(*(_QWORD *)g_PolicyManager + 32LL);
  wil::com_ptr_t<IAudioProcess,wil::err_returncode_policy>::reset(&v27);
  v11 = v10(g_PolicyManager, 0LL, &v27);
  v12 = v11;
  if ( v11 >= 0 )
  {
    v26 = 0;
    v11 = (*(__int64 (__fastcall **)(__int64, bool, _QWORD, int *))(*(_QWORD *)v27 + 152LL))(v27, a2 == 1, a5, &v26);
    v12 = v11;
    if ( v11 < 0 )
    {
      v13 = 3073LL;
      goto LABEL_5;
    }
    if ( !v26 )
    {
      v12 = -2005139338;
      goto LABEL_22;
    }
    pftDueTime = (__int64)g_AudioHealthMonitor;
    v15 = g_AudioSrvWatchDogTimerInMs;
    v16 = AudioSrvTelemetryProvider::Instance();
    CWatchdogTimer<1>::CWatchdogTimer<1>(
      pv,
      *((struct _TP_TIMER **)v16 + 1),
      v15,
      (struct _TP_TIMER *)L"AudioServerCreateStream",
      pftDueTime);
    v25 = 0LL;
    v17 = RpcImpersonateClient(0LL);
    if ( v17 )
    {
      v12 = v17 | 0x80010000;
      v18 = 3088LL;
      v19 = v12;
    }
    else
    {
      ThreadLogonSessionStringSid = GetThreadLogonSessionStringSid(&v25);
      v12 = ThreadLogonSessionStringSid;
      if ( ThreadLogonSessionStringSid < 0 )
      {
        wil::details::in1diag3::Return_Hr(
          retaddr,
          (void *)0xC18,
          (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          (const char *)(unsigned int)ThreadLogonSessionStringSid);
        if ( !RevertToSelf() )
          wil::details::in1diag3::_Log_GetLastError(
            retaddr,
            (void *)0xC15,
            (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
            v21);
        goto LABEL_11;
      }
      if ( !RevertToSelf() )
        wil::details::in1diag3::_Log_GetLastError(
          retaddr,
          (void *)0xC15,
          (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
          v22);
      Stream = CVADServer::CreateStream((__int64)a1, v27, a2, a3, a4, (__int64)v25, a6);
      v12 = Stream;
      if ( Stream >= 0 )
      {
        wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v25);
        CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
        v12 = 0;
        goto LABEL_22;
      }
      if ( (unsigned int)(Stream + 2005139335) <= 2 || Stream == -2005139370 )
        goto LABEL_11;
      v19 = (unsigned int)Stream;
      v18 = 3105LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)v19);
LABEL_11:
    wil::details::unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>::~unique_storage<wil::details::resource_policy<unsigned short *,void * (*)(void *),&void * LocalFree(void *),wistd::integral_constant<unsigned __int64,0>,unsigned short *,unsigned short *,0,std::nullptr_t>>((void **)&v25);
    CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
    goto LABEL_22;
  }
  v13 = 3064LL;
LABEL_5:
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)v13,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
    (const char *)(unsigned int)v11);
LABEL_22:
  wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v27);
  EtwEventActivityIdControl(4LL, v30);
  return v12;
}
