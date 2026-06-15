/*
 * XREFs of AudioSessionIsSystemSoundsSession @ 0x18006C920
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionIsSystemSoundsSession(__int64 *a1)
{
  __int64 v1; // rdi
  struct _FILETIME v2; // rbx
  __int64 v3; // rsi
  __int64 v4; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v6; // eax
  unsigned int v7; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-30h]
  const wchar_t *v11; // [rsp+38h] [rbp-28h]
  struct _FILETIME v12; // [rsp+40h] [rbp-20h]
  char v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+4Ch] [rbp-14h]
  int v15; // [rsp+50h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+70h] [rbp+10h] BYREF

  v1 = *a1;
  v2 = g_AudioHealthMonitor;
  v3 = g_AudioSrvWatchDogTimerInMs;
  v4 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v4;
  v14 = 0;
  v15 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v11 = L"AudioSessionIsSystemSoundsSession";
  v12 = v2;
  v13 = 0;
  if ( (unsigned int)v3 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v3 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v3 / 3, 0);
    }
  }
  v6 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v1 + 168LL))(v1);
  v7 = v6;
  if ( v6 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionIsSystemSoundsSession", 1758, v6);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v7;
}
