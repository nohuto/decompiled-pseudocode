/*
 * XREFs of AudioServerDestroyStream @ 0x1800124C0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?DestroyStream@CVADServer@@UEAAJ_K@Z @ 0x180012670 (-DestroyStream@CVADServer@@UEAAJ_K@Z.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 */

__int64 __fastcall AudioServerDestroyStream(CVADServer *this, unsigned __int64 a2)
{
  GUID v4; // xmm0
  struct _FILETIME v5; // rbx
  __int64 v6; // r14
  __int64 v7; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v9; // eax
  unsigned int v10; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-29h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-19h]
  const wchar_t *v14; // [rsp+38h] [rbp-11h]
  struct _FILETIME v15; // [rsp+40h] [rbp-9h]
  char v16; // [rsp+48h] [rbp-1h]
  int v17; // [rsp+4Ch] [rbp+3h]
  int v18; // [rsp+50h] [rbp+7h]
  struct _FILETIME pftDueTime[2]; // [rsp+58h] [rbp+Fh] BYREF
  GUID v20; // [rsp+68h] [rbp+1Fh]
  GUID v21; // [rsp+78h] [rbp+2Fh] BYREF

  if ( this )
    v4 = (GUID)*((_OWORD *)this + 16);
  else
    v4 = GUID_00000000_0000_0000_0000_000000000000;
  *(GUID *)&pftDueTime[0].dwLowDateTime = v4;
  v20 = v4;
  v21 = v4;
  EtwEventActivityIdControl(4LL, &v21);
  v5 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v7 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v7;
  v17 = 0;
  v18 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v14 = L"AudioServerDestroyStream";
  v15 = v5;
  v16 = 0;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime[0] = (struct _FILETIME)(-10000 * v6 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, pftDueTime, (unsigned int)v6 / 3, 0);
    }
  }
  v9 = CVADServer::DestroyStream(this, a2);
  v10 = v9;
  if ( v9 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioServerDestroyStream", 0xCCBu, v9);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v21);
  return v10;
}
