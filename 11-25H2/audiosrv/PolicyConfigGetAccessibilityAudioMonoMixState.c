/*
 * XREFs of PolicyConfigGetAccessibilityAudioMonoMixState @ 0x180072750
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigGetAccessibilityAudioMonoMixState(__int64 a1, __int64 a2)
{
  struct _FILETIME v2; // rbx
  __int64 v4; // rdi
  __int64 v5; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v7; // ebx
  _QWORD pv[2]; // [rsp+20h] [rbp-40h] BYREF
  DWORD CurrentThreadId; // [rsp+30h] [rbp-30h]
  const wchar_t *v11; // [rsp+38h] [rbp-28h]
  struct _FILETIME v12; // [rsp+40h] [rbp-20h]
  char v13; // [rsp+48h] [rbp-18h]
  int v14; // [rsp+4Ch] [rbp-14h]
  int v15; // [rsp+50h] [rbp-10h]
  struct _FILETIME pftDueTime; // [rsp+80h] [rbp+20h] BYREF

  v2 = g_AudioHealthMonitor;
  v4 = g_AudioSrvWatchDogTimerInMs;
  v5 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v5;
  v14 = 0;
  v15 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v11 = L"PolicyConfigGetAccessibilityAudioMonoMixState";
  v12 = v2;
  v13 = 0;
  if ( (unsigned int)v4 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v4 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v4 / 3, 0);
    }
  }
  v7 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64))(*(_QWORD *)g_PolicyConfig + 176LL))(g_PolicyConfig, a2);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v7;
}
