/*
 * XREFs of AudioSessionGetIconPath @ 0x180070E30
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioSessionGetIconPath(__int64 *a1, __int64 a2)
{
  __int64 v2; // rdi
  struct _FILETIME v4; // rbx
  __int64 v5; // rsi
  __int64 v6; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v8; // eax
  unsigned int v9; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-30h]
  const wchar_t *v13; // [rsp+38h] [rbp-28h]
  struct _FILETIME v14; // [rsp+40h] [rbp-20h]
  char v15; // [rsp+48h] [rbp-18h]
  int v16; // [rsp+4Ch] [rbp-14h]
  int v17; // [rsp+50h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+80h] [rbp+20h] BYREF

  v2 = *a1;
  v4 = g_AudioHealthMonitor;
  v5 = g_AudioSrvWatchDogTimerInMs;
  v6 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v6;
  v16 = 0;
  v17 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v13 = L"AudioSessionGetIconPath";
  v14 = v4;
  v15 = 0;
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
  v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 200LL))(v2, a2);
  v9 = v8;
  if ( v8 < 0 )
    AudSrvTraceLoggingErrorHelper("AudioSessionGetIconPath", 1906, v8);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v9;
}
