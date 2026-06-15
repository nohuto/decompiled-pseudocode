/*
 * XREFs of s_pbmReportHostedAppStateChange @ 0x180012990
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 */

__int64 __fastcall s_pbmReportHostedAppStateChange(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, __int64 a5)
{
  struct _FILETIME v5; // rbx
  __int64 v7; // rdi
  __int64 v11; // r10
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v13; // ebx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+38h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+48h] [rbp-28h]
  const wchar_t *v18; // [rsp+50h] [rbp-20h]
  struct _FILETIME v19; // [rsp+58h] [rbp-18h]
  char v20; // [rsp+60h] [rbp-10h]
  int v21; // [rsp+64h] [rbp-Ch]
  int v22; // [rsp+68h] [rbp-8h]

  v5 = g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v11 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v11;
  v21 = 0;
  v22 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v18 = L"s_pbmReportHostedAppStateChange";
  v19 = v5;
  v20 = 0;
  if ( (unsigned int)v7 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v7 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v7 / 3, 0);
    }
  }
  if ( (unsigned int)IsPbmReportHostedAppStateChangeSupported() )
    v13 = PbmReportHostedAppStateChange(a1, a2, a3, a4, a5);
  else
    v13 = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v13;
}
