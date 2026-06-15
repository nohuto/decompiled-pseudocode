/*
 * XREFs of s_tsUnregisterAudioProtocolNotification @ 0x180076160
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 */

__int64 __fastcall s_tsUnregisterAudioProtocolNotification(__int64 a1, __int64 a2)
{
  struct _FILETIME v4; // rbx
  __int64 v5; // rdi
  __int64 v6; // rdx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v8; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-30h]
  const wchar_t *v12; // [rsp+38h] [rbp-28h]
  struct _FILETIME v13; // [rsp+40h] [rbp-20h]
  char v14; // [rsp+48h] [rbp-18h]
  int v15; // [rsp+4Ch] [rbp-14h]
  int v16; // [rsp+50h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+90h] [rbp+30h] BYREF

  if ( !(unsigned int)IsTSUnregisterAudioProtocolNotificationSupported() )
    return 2147500033LL;
  v4 = g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v6 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v6;
  v15 = 0;
  v16 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v12 = L"s_tsUnregisterAudioProtocolNotification";
  v13 = v4;
  v14 = 0;
  if ( (unsigned int)v5 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v5 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v5 / 3, 0);
    }
  }
  v8 = TS_UnregisterAudioProtocolNotification(a1, a2);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v8;
}
