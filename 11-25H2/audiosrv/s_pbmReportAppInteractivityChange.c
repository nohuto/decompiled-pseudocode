/*
 * XREFs of s_pbmReportAppInteractivityChange @ 0x180071A80
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 */

__int64 __fastcall s_pbmReportAppInteractivityChange(__int64 a1, __int64 a2, __int64 a3, unsigned int a4)
{
  struct _FILETIME v4; // rbx
  __int64 v6; // rdi
  __int64 v10; // r10
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v12; // ebx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+28h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-28h]
  const wchar_t *v17; // [rsp+40h] [rbp-20h]
  struct _FILETIME v18; // [rsp+48h] [rbp-18h]
  char v19; // [rsp+50h] [rbp-10h]
  int v20; // [rsp+54h] [rbp-Ch]
  int v21; // [rsp+58h] [rbp-8h]

  v4 = g_AudioHealthMonitor;
  v6 = g_AudioSrvWatchDogTimerInMs;
  v10 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v10;
  v20 = 0;
  v21 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v17 = L"s_pbmReportAppInteractivityChange";
  v18 = v4;
  v19 = 0;
  if ( (unsigned int)v6 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v6 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v6 / 3, 0);
    }
  }
  if ( (unsigned int)IsPbmReportAppInteractivityChangeSupported() )
    v12 = PbmReportAppInteractivityChange(a1, a2, a3, a4);
  else
    v12 = 0;
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v12;
}
