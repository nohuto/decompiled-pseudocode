/*
 * XREFs of PolicyConfigSetPropertyValue @ 0x1800745F0
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigSetPropertyValue(__int64 a1, __int64 a2, unsigned int a3, __int64 a4, __int64 a5)
{
  struct _FILETIME v5; // rbx
  __int64 v7; // rdi
  __int64 v10; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v12; // ebx
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+38h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+48h] [rbp-28h]
  const wchar_t *v17; // [rsp+50h] [rbp-20h]
  struct _FILETIME v18; // [rsp+58h] [rbp-18h]
  char v19; // [rsp+60h] [rbp-10h]
  int v20; // [rsp+64h] [rbp-Ch]
  int v21; // [rsp+68h] [rbp-8h]

  v5 = g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v10 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v10;
  v20 = 0;
  v21 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v17 = L"PolicyConfigSetPropertyValue";
  v18 = v5;
  v19 = 0;
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
  v12 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, __int64, __int64))(*(_QWORD *)g_PolicyConfig + 96LL))(
          g_PolicyConfig,
          a2,
          a3,
          a4,
          a5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return v12;
}
