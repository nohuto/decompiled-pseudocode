/*
 * XREFs of ?AudioServerInitialize_Internal@@YAJPEAXPEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@PEAPEAX@Z @ 0x18000E2AC
 * Callers:
 *     AudioServerInitialize @ 0x180074360 (AudioServerInitialize.c)
 *     asm_AudioServerInitializeStream @ 0x1800B2AD0 (asm_AudioServerInitializeStream.c)
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18000CB20 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D6A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Detail.c)
 *     ?IsProcessAllowed@@YAHKPEBG@Z @ 0x18000DD7C (-IsProcessAllowed@@YAHKPEBG@Z.c)
 *     ?CheckADGStatus@CAudioDGProcess@@QEAAJXZ @ 0x18000E0BC (-CheckADGStatus@CAudioDGProcess@@QEAAJXZ.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ??1?$unique_any_t@V?$unique_storage@U?$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1?LeaveCriticalSection@@YAX0@ZU?$integral_constant@_K$00@wistd@@PEAU1@PEAU1@$0A@$$T@details@wil@@@details@wil@@@wil@@QEAA@XZ @ 0x18001EBF0 (--1-$unique_any_t@V-$unique_storage@U-$resource_policy@PEAU_RTL_CRITICAL_SECTION@@P6AXPEAU1@@Z$1.c)
 *     ??0CVADServer@@QEAA@XZ @ 0x18002BD04 (--0CVADServer@@QEAA@XZ.c)
 *     ?RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVEFORMATEX@@PEBU_GUID@@PEAUVadServerSettings@@PEAPEAGPEAUIProcessSubmixProxy@@@Z @ 0x18002BE70 (-RuntimeClassInitialize@CVADServer@@QEAAJPEAUIAudioProcess@@PEBGW4_AUDCLNT_SHAREMODE@@KPEBUtWAVE.c)
 *     ?SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z @ 0x18002C450 (-SafeUnknownIncrementReference@Details@WRL@Microsoft@@YAKAECJ@Z.c)
 *     ?CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ @ 0x180056F88 (-CancelADGTerminationTimer@CAudioDGProcess@@QEAAXXZ.c)
 *     ?InstantiateADG@CAudioDGProcess@@QEAAJXZ @ 0x180057010 (-InstantiateADG@CAudioDGProcess@@QEAAJXZ.c)
 *     ??1?$com_ptr_t@VCVADServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x1800A6234 (--1-$com_ptr_t@VCVADServer@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x1800A7FC8 (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=11
__int64 __fastcall AudioServerInitialize_Internal(
        void *a1,
        const unsigned __int16 *a2,
        enum _AUDCLNT_SHAREMODE a3,
        unsigned int a4,
        struct tWAVEFORMATEX *a5,
        const struct _GUID *a6,
        struct VadServerSettings *a7,
        unsigned __int16 **a8,
        struct IProcessSubmixProxy *a9,
        void **a10)
{
  struct _FILETIME v12; // rbx
  __int64 v13; // rdi
  __int64 v14; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  LPCRITICAL_SECTION v16; // rbx
  CAudioDGProcess *v17; // rcx
  int v18; // eax
  unsigned int v19; // ebx
  __int64 v20; // rax
  int v21; // eax
  int v22; // edi
  DWORD v23; // eax
  struct IAudioProcess *v24; // rdi
  CVADServer *v25; // rax
  volatile signed __int64 *v26; // rbx
  volatile int *v27; // rdx
  signed __int64 v28; // rax
  LPCRITICAL_SECTION v30; // rbx
  bool v31; // zf
  signed __int64 v32; // rtt
  LPCRITICAL_SECTION v33; // rbx
  LPCRITICAL_SECTION v34; // rdi
  LPCRITICAL_SECTION v35; // rbx
  int v36; // ebx
  unsigned int v37; // [rsp+20h] [rbp-D9h]
  struct IAudioProcess *v38; // [rsp+50h] [rbp-A9h] BYREF
  char v39; // [rsp+59h] [rbp-A0h]
  struct _FILETIME pftDueTime; // [rsp+60h] [rbp-99h] BYREF
  unsigned int v41; // [rsp+68h] [rbp-91h]
  _AUDCLNT_SHAREMODE v42; // [rsp+6Ch] [rbp-8Dh]
  LPCRITICAL_SECTION v43; // [rsp+70h] [rbp-89h] BYREF
  void *v44; // [rsp+78h] [rbp-81h]
  unsigned __int16 **v45; // [rsp+80h] [rbp-79h]
  struct tWAVEFORMATEX *Src; // [rsp+88h] [rbp-71h]
  _QWORD pv[2]; // [rsp+90h] [rbp-69h] BYREF
  DWORD CurrentThreadId; // [rsp+A0h] [rbp-59h]
  const wchar_t *v49; // [rsp+A8h] [rbp-51h]
  struct _FILETIME v50; // [rsp+B0h] [rbp-49h]
  char v51; // [rsp+B8h] [rbp-41h]
  __int64 v52; // [rsp+BCh] [rbp-3Dh]
  LPCRITICAL_SECTION v53; // [rsp+C8h] [rbp-31h]
  __int64 v54; // [rsp+D0h] [rbp-29h]
  __int128 v55; // [rsp+D8h] [rbp-21h]
  __int128 v56; // [rsp+E8h] [rbp-11h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+138h] [rbp+3Fh]

  v41 = a4;
  v42 = a3;
  Src = a5;
  v45 = a8;
  v55 = *(_OWORD *)a7;
  v56 = v55;
  EtwEventActivityIdControl(4LL, &v56);
  v12 = g_AudioHealthMonitor;
  v13 = g_AudioSrvWatchDogTimerInMs;
  v14 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v14;
  CurrentThreadId = GetCurrentThreadId();
  v49 = L"AudioServerInitialize_Internal";
  v50 = v12;
  v51 = 0;
  v52 = 0LL;
  if ( (unsigned int)v13 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v13 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v13 / 3, 0);
    }
  }
  *a10 = 0LL;
  v16 = g_ADGProcess;
  EnterCriticalSection(g_ADGProcess);
  v53 = v16;
  if ( ++LODWORD(v16[1].DebugInfo) == 1 )
  {
    CAudioDGProcess::CancelADGTerminationTimer((CAudioDGProcess *)v16);
    CAudioDGProcess::InstantiateADG((CAudioDGProcess *)v16);
  }
  LeaveCriticalSection(v16);
  v39 = 1;
  v18 = CAudioDGProcess::CheckADGStatus(v17);
  v19 = v18;
  if ( v18 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAF7,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v18,
      v37);
    v34 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    pftDueTime = (struct _FILETIME)v34;
    v31 = LODWORD(v34[1].DebugInfo)-- == 1;
    if ( v31 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v34);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&pftDueTime);
    goto LABEL_21;
  }
  v38 = 0LL;
  v20 = *(_QWORD *)g_PolicyManager;
  v38 = 0LL;
  v21 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, void *, struct IAudioProcess **))(v20 + 32))(
          g_PolicyManager,
          a1,
          &v38);
  v22 = v21;
  if ( v21 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAFB,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v21,
      v37);
    if ( v38 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v38 + 16LL))(v38);
    v33 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    v31 = LODWORD(v33[1].DebugInfo)-- == 1;
    if ( v31 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v33);
    goto LABEL_33;
  }
  v23 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v38 + 40LL))(v38);
  if ( !(unsigned int)IsProcessAllowed(v23, a2) )
  {
    v22 = -2147024891;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xAFD,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)0x80070005LL,
      v37);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
    v35 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    pftDueTime = (struct _FILETIME)v35;
    v31 = LODWORD(v35[1].DebugInfo)-- == 1;
    if ( v31 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v35);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&pftDueTime);
    goto LABEL_34;
  }
  if ( a9 )
  {
    v36 = (*(__int64 (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v38 + 48LL))(v38);
    if ( (*(unsigned int (__fastcall **)(struct IProcessSubmixProxy *))(*(_QWORD *)a9 + 200LL))(a9) != v36 )
    {
      v22 = -2147024891;
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0xAFF,
        (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)0x80070005LL,
        v37);
      if ( v38 )
        (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v38 + 16LL))(v38);
      v33 = g_ADGProcess;
      EnterCriticalSection(g_ADGProcess);
      v31 = LODWORD(v33[1].DebugInfo)-- == 1;
      if ( v31 )
        CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v33);
LABEL_33:
      LeaveCriticalSection(v33);
LABEL_34:
      v19 = v22;
      goto LABEL_21;
    }
  }
  v24 = v38;
  v43 = 0LL;
  v25 = (CVADServer *)operator new(0x238uLL, (const struct std::nothrow_t *)&std::nothrow);
  v44 = v25;
  if ( !v25 )
  {
    v22 = -2147024882;
LABEL_23:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0xB03,
      (unsigned int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v22,
      v37);
    wil::com_ptr_t<CVADServer,wil::err_returncode_policy>::~com_ptr_t<CVADServer,wil::err_returncode_policy>(&v43);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v38);
    v30 = g_ADGProcess;
    EnterCriticalSection(g_ADGProcess);
    v43 = v30;
    v31 = LODWORD(v30[1].DebugInfo)-- == 1;
    if ( v31 )
      CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v30);
    wil::unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>::~unique_any_t<wil::details::unique_storage<wil::details::resource_policy<_RTL_CRITICAL_SECTION *,void (*)(_RTL_CRITICAL_SECTION *),&void LeaveCriticalSection(_RTL_CRITICAL_SECTION *),wistd::integral_constant<unsigned __int64,1>,_RTL_CRITICAL_SECTION *,_RTL_CRITICAL_SECTION *,0,std::nullptr_t>>>(&v43);
    goto LABEL_34;
  }
  v26 = (volatile signed __int64 *)CVADServer::CVADServer(v25);
  v44 = (void *)v26;
  v54 = 0LL;
  v22 = CVADServer::RuntimeClassInitialize((CVADServer *)v26, v24, a2, v42, v41, Src, a6, a7, v45, a9);
  if ( v22 < 0 )
  {
    if ( v26 )
      Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::Release(v26);
    goto LABEL_23;
  }
  if ( v26 )
  {
    v28 = *((_QWORD *)v26 + 4);
    while ( v28 >= 0 )
    {
      if ( (_DWORD)v28 != 0x7FFFFFFF )
      {
        v32 = v28;
        v28 = _InterlockedCompareExchange64(v26 + 4, v28 + 1, v28);
        if ( v32 != v28 )
          continue;
      }
      goto LABEL_16;
    }
    Microsoft::WRL::Details::SafeUnknownIncrementReference((Microsoft::WRL::Details *)(2 * v28 + 16), v27);
  }
LABEL_16:
  if ( v26 )
    Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::Release(v26);
  *a10 = (void *)v26;
  v39 = 0;
  if ( v38 )
    (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v38 + 16LL))(v38);
  v19 = 0;
LABEL_21:
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v56);
  return v19;
}
