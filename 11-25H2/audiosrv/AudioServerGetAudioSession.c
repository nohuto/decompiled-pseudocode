/*
 * XREFs of AudioServerGetAudioSession @ 0x180011E60
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?AddClientReference@CServerAudioSessionControl@@QEAAJXZ @ 0x18005374C (-AddClientReference@CServerAudioSessionControl@@QEAAJXZ.c)
 *     ?HasTooManyReferences@@YA_NPEAUIUnknown@@@Z @ 0x18005377C (-HasTooManyReferences@@YA_NPEAUIUnknown@@@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     WPP_SF_ @ 0x1800C1670 (WPP_SF_.c)
 *     WPP_SF_d @ 0x1800C180C (WPP_SF_d.c)
 *     WPP_SF_q @ 0x1800C480C (WPP_SF_q.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioServerGetAudioSession(__int64 a1, CServerAudioSessionControl **a2)
{
  GUID v4; // xmm0
  struct _FILETIME v5; // rbx
  CServerAudioSessionControl *v6; // r15
  __int64 v7; // rsi
  __int64 v8; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v10; // ebx
  CServerAudioSessionControl **v11; // rsi
  __int64 v12; // r8
  _QWORD pv[2]; // [rsp+30h] [rbp-39h] BYREF
  DWORD CurrentThreadId; // [rsp+40h] [rbp-29h]
  const wchar_t *v16; // [rsp+48h] [rbp-21h]
  struct _FILETIME v17; // [rsp+50h] [rbp-19h]
  char v18; // [rsp+58h] [rbp-11h]
  int v19; // [rsp+5Ch] [rbp-Dh]
  int v20; // [rsp+60h] [rbp-9h]
  struct _FILETIME pftDueTime[2]; // [rsp+68h] [rbp-1h] BYREF
  GUID v22; // [rsp+78h] [rbp+Fh]
  GUID v23; // [rsp+88h] [rbp+1Fh] BYREF

  if ( a1 )
    v4 = *(GUID *)(a1 + 256);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v4;
  v22 = v4;
  v23 = v4;
  EtwEventActivityIdControl(4LL, &v23);
  v5 = g_AudioHealthMonitor;
  v6 = 0LL;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v8 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v8;
  v19 = 0;
  v20 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v16 = L"AudioServerGetAudioSession";
  v17 = v5;
  v18 = 0;
  if ( (unsigned int)v7 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v7 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v7 / 3, 0);
    }
  }
  v10 = 0;
  if ( !*(_DWORD *)(a1 + 160) )
  {
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 3u )
    {
      WPP_SF_(*((_QWORD *)WPP_GLOBAL_Control + 2), 13LL, &WPP_8bc7b28d8efe3d7b840b96e094d2bf56_Traceguids);
    }
    v10 = -2004287487;
    goto LABEL_31;
  }
  v11 = (CServerAudioSessionControl **)(a1 + 136);
  if ( !*(_QWORD *)(a1 + 136) )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
    if ( !*v11 )
    {
      LOBYTE(v12) = 1;
      v10 = (***(__int64 (__fastcall ****)(_QWORD, _QWORD, __int64, _QWORD, __int64))(a1 + 128))(
              *(_QWORD *)(a1 + 128),
              *(unsigned int *)(a1 + 40),
              v12,
              *(_QWORD *)(a1 + 144),
              a1 + 136);
    }
    if ( a1 != -200 )
      LeaveCriticalSection((LPCRITICAL_SECTION)(a1 + 200));
    if ( v10 )
    {
      if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
        && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
        && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
      {
        WPP_SF_d(
          *((_QWORD *)WPP_GLOBAL_Control + 2),
          15LL,
          &WPP_8bc7b28d8efe3d7b840b96e094d2bf56_Traceguids,
          (unsigned int)v10);
      }
      goto LABEL_17;
    }
    if ( WPP_GLOBAL_Control != (_UNKNOWN *)&WPP_GLOBAL_Control
      && (*((_DWORD *)WPP_GLOBAL_Control + 7) & 0x100) != 0
      && *((_BYTE *)WPP_GLOBAL_Control + 25) >= 4u )
    {
      WPP_SF_q(*((_QWORD *)WPP_GLOBAL_Control + 2), 14LL, &WPP_8bc7b28d8efe3d7b840b96e094d2bf56_Traceguids, *v11);
    }
  }
  if ( HasTooManyReferences((struct IUnknown *)(((unsigned __int64)*v11 + 8) & -(__int64)(*v11 != 0LL))) )
  {
    v10 = -2147024882;
    goto LABEL_35;
  }
  v6 = *v11;
  CServerAudioSessionControl::AddClientReference(*v11);
LABEL_17:
  if ( v10 < 0 )
  {
LABEL_35:
    AudSrvTraceLoggingErrorHelper("CVADServer::get_AudioSession", 0x51Au, v10);
LABEL_31:
    AudSrvTraceLoggingErrorHelper("AudioServerGetAudioSession", 0xB4Cu, v10);
    goto LABEL_20;
  }
  if ( !v10 )
    *a2 = v6;
LABEL_20:
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v23);
  return (unsigned int)v10;
}
