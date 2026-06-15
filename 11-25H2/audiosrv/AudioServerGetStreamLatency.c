/*
 * XREFs of AudioServerGetStreamLatency @ 0x1800647B0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     ?GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z @ 0x180064960 (-GetStreamLatency@CVADServer@@UEAAJ_KPEA_J@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioServerGetStreamLatency(CVADServer *this, unsigned __int64 a2, __int64 *a3)
{
  GUID v6; // xmm0
  struct _FILETIME v7; // rbx
  __int64 v8; // rsi
  __int64 v9; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int StreamLatency; // eax
  unsigned int v12; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-39h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-29h]
  const wchar_t *v16; // [rsp+38h] [rbp-21h]
  struct _FILETIME v17; // [rsp+40h] [rbp-19h]
  char v18; // [rsp+48h] [rbp-11h]
  int v19; // [rsp+4Ch] [rbp-Dh]
  int v20; // [rsp+50h] [rbp-9h]
  struct _FILETIME pftDueTime[2]; // [rsp+58h] [rbp-1h] BYREF
  GUID v22; // [rsp+68h] [rbp+Fh]
  GUID v23; // [rsp+78h] [rbp+1Fh] BYREF

  if ( this )
    v6 = (GUID)*((_OWORD *)this + 16);
  else
    v6 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v6;
  v22 = v6;
  v23 = v6;
  EtwEventActivityIdControl(4LL, &v23);
  v7 = g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v9 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v9;
  v19 = 0;
  v20 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v16 = L"AudioServerGetStreamLatency";
  v17 = v7;
  v18 = 0;
  if ( (unsigned int)v8 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v8 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v8 / 3, 0);
    }
  }
  StreamLatency = CVADServer::GetStreamLatency(this, a2, a3);
  v12 = StreamLatency;
  if ( StreamLatency < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerGetStreamLatency", 3595, StreamLatency);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v23);
  return v12;
}
