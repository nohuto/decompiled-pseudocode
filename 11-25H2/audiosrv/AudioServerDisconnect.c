/*
 * XREFs of AudioServerDisconnect @ 0x18000D750
 * Callers:
 *     <none>
 * Callees:
 *     ?StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ @ 0x18000CB20 (-StartADGTerminationTimer@CAudioDGProcess@@AEAAJXZ.c)
 *     ?Release@?$RuntimeClassImpl@U?$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Details@WRL@Microsoft@@UEAAKXZ @ 0x18000D6A0 (-Release@-$RuntimeClassImpl@U-$RuntimeClassFlags@$02@WRL@Microsoft@@$00$00$0A@UIUnknown@@@Detail.c)
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioServerDisconnect(volatile signed __int64 **a1)
{
  GUID v2; // xmm0
  struct _FILETIME v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  LPCRITICAL_SECTION v7; // rbx
  _QWORD pv[2]; // [rsp+28h] [rbp-19h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-9h]
  const wchar_t *v12; // [rsp+40h] [rbp-1h]
  struct _FILETIME v13; // [rsp+48h] [rbp+7h]
  char v14; // [rsp+50h] [rbp+Fh]
  int v15; // [rsp+54h] [rbp+13h]
  int v16; // [rsp+58h] [rbp+17h]
  _FILETIME pftDueTime[2]; // [rsp+60h] [rbp+1Fh] BYREF
  GUID v18; // [rsp+70h] [rbp+2Fh]
  GUID v19; // [rsp+80h] [rbp+3Fh] BYREF

  if ( *a1 )
    v2 = (GUID)*((_OWORD *)*a1 + 16);
  else
    v2 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v2;
  v18 = v2;
  v19 = v2;
  EtwEventActivityIdControl(4LL, &v19);
  v3 = g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v5 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v5;
  v15 = 0;
  v16 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v12 = L"AudioServerDisconnect";
  v13 = v3;
  v14 = 0;
  if ( (unsigned int)v4 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (_FILETIME)(-10000 * v4 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v4 / 3, 0);
    }
  }
  Microsoft::WRL::Details::RuntimeClassImpl<Microsoft::WRL::RuntimeClassFlags<3>,1,1,0,IUnknown>::Release(*a1);
  v7 = g_ADGProcess;
  *a1 = 0LL;
  EnterCriticalSection(v7);
  if ( LODWORD(v7[1].DebugInfo)-- == 1 )
    CAudioDGProcess::StartADGTerminationTimer((CAudioDGProcess *)v7);
  LeaveCriticalSection(v7);
  CWatchdogTimer<1>::~CWatchdogTimer<1>(pv);
  EtwEventActivityIdControl(4LL, &v19);
  return 0LL;
}
