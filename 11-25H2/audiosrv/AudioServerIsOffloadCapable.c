/*
 * XREFs of AudioServerIsOffloadCapable @ 0x18006E770
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x18001AC8C (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??1?$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@wil@@QEAA@XZ @ 0x18001D964 (--1-$com_ptr_t@UIHolographicDisplay@Holographic@Graphics@Windows@@Uerr_returncode_policy@wil@@@w.c)
 *     ?HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ @ 0x180037234 (-HasHardwareAudioEngine@CEndpointCharacteristics@@QEAAHXZ.c)
 *     ?AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z @ 0x18006E9C0 (-AllowUseofOffloadResources@@YA_NPEAVCEndpointCharacteristics@@PEAUIAudioProcess@@K@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall AudioServerIsOffloadCapable(__int64 a1, __int64 a2, unsigned int a3, _DWORD *a4)
{
  struct _FILETIME v8; // rbx
  __int64 v9; // rsi
  __int64 v10; // r10
  struct _TP_TIMER *ThreadpoolTimer; // r10
  __int64 v12; // rax
  int v13; // eax
  unsigned int v14; // ebx
  int v15; // eax
  CEndpointCharacteristics *v17; // [rsp+30h] [rbp-50h] BYREF
  struct IAudioProcess *v18; // [rsp+38h] [rbp-48h] BYREF
  struct _FILETIME pftDueTime; // [rsp+40h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+48h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+58h] [rbp-28h]
  const wchar_t *v22; // [rsp+60h] [rbp-20h]
  struct _FILETIME v23; // [rsp+68h] [rbp-18h]
  char v24; // [rsp+70h] [rbp-10h]
  int v25; // [rsp+74h] [rbp-Ch]
  int v26; // [rsp+78h] [rbp-8h]
  wil::details::in1diag3 *retaddr; // [rsp+98h] [rbp+18h]

  v8 = g_AudioHealthMonitor;
  v9 = g_AudioSrvWatchDogTimerInMs;
  v10 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v10;
  CurrentThreadId = GetCurrentThreadId();
  v22 = L"AudioServerIsOffloadCapable";
  v23 = v8;
  v24 = 0;
  v25 = 0;
  v26 = 0;
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
  v12 = *(_QWORD *)g_PolicyManager;
  v18 = 0LL;
  v13 = (*(__int64 (__fastcall **)(struct IAudioPolicyManager *, __int64, struct IAudioProcess **))(v12 + 32))(
          g_PolicyManager,
          a1,
          &v18);
  v14 = v13;
  if ( v13 < 0 )
  {
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)0x1160,
      (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
      (const char *)(unsigned int)v13);
    if ( v18 )
      (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v18 + 16LL))(v18);
  }
  else
  {
    v17 = 0LL;
    v15 = (*(__int64 (__fastcall **)(PVOID, __int64, _QWORD, _QWORD, CEndpointCharacteristics **))(*(_QWORD *)g_pEndpointCharacteristicsCache
                                                                                                 + 24LL))(
            g_pEndpointCharacteristicsCache,
            a2,
            0LL,
            0LL,
            &v17);
    v14 = v15;
    if ( v15 < 0 )
    {
      wil::details::in1diag3::Return_Hr(
        retaddr,
        (void *)0x1166,
        (int)"avcore\\audiocore\\server\\audiosrv\\dll\\vadserver.cpp",
        (const char *)(unsigned int)v15);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
      wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
    }
    else
    {
      if ( AllowUseofOffloadResources(v17, v18, a3) )
      {
        *a4 = CEndpointCharacteristics::HasHardwareAudioEngine(v17);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v17);
        wil::com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>::~com_ptr_t<Windows::Graphics::Holographic::IHolographicDisplay,wil::err_returncode_policy>((__int64 *)&v18);
      }
      else
      {
        *a4 = 0;
        if ( v17 )
          (*(void (__fastcall **)(CEndpointCharacteristics *))(*(_QWORD *)v17 + 16LL))(v17);
        if ( v18 )
          (*(void (__fastcall **)(struct IAudioProcess *))(*(_QWORD *)v18 + 16LL))(v18);
      }
      v14 = 0;
    }
  }
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v14;
}
