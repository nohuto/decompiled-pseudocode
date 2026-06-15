/*
 * XREFs of s_apmGetPersistedDefaultAudioEndpoint @ 0x180071130
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall s_apmGetPersistedDefaultAudioEndpoint(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        unsigned int a4,
        __int64 a5)
{
  struct _FILETIME v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // r10
  unsigned int v12; // ebx
  __int64 v14; // rax
  int v15; // eax
  int v16; // eax
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // [rsp+30h] [rbp-50h] BYREF
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-48h] BYREF
  _QWORD pv[2]; // [rsp+40h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+50h] [rbp-30h]
  const wchar_t *v23; // [rsp+58h] [rbp-28h]
  struct _FILETIME v24; // [rsp+60h] [rbp-20h]
  char v25; // [rsp+68h] [rbp-18h]
  int v26; // [rsp+6Ch] [rbp-14h]
  int v27; // [rsp+70h] [rbp-10h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v8 = g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v10 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v10;
  CurrentThreadId = GetCurrentThreadId();
  v23 = L"s_apmGetPersistedDefaultAudioEndpoint";
  v24 = v8;
  v25 = 0;
  v26 = 0;
  v27 = 0;
  if ( (unsigned int)v9 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v9 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v9 / 3, 0);
    }
  }
  if ( a4 > 2 )
  {
    v12 = -2147024809;
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x90,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
      (const char *)0x80070057LL);
    goto LABEL_6;
  }
  v14 = *(_QWORD *)g_PolicyManager;
  v19 = 0LL;
  v15 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, _QWORD, __int64 *))(v14 + 40))(
          g_PolicyManager,
          a2,
          &v19);
  v12 = v15;
  if ( v15 >= 0 )
  {
    if ( v19 )
    {
      v16 = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, __int64))(*(_QWORD *)v19 + 32LL))(v19, a3, a4, a5);
      v12 = v16;
      if ( v16 >= 0 )
      {
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
        v12 = 0;
        goto LABEL_6;
      }
      v17 = (unsigned int)v16;
      v18 = 153LL;
    }
    else
    {
      v12 = -2147024809;
      v17 = 2147942487LL;
      v18 = 151LL;
    }
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v18,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
      (const char *)v17);
    wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>(&v19);
    goto LABEL_6;
  }
  wil::details::in1diag3::Return_Hr(
    retaddr,
    (void *)0x96,
    (int)"avcore\\audiocore\\server\\audiosrv\\dll\\endpointcontrol.cpp",
    (const char *)(unsigned int)v15);
  if ( v19 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v19 + 16LL))(v19);
LABEL_6:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v12;
}
