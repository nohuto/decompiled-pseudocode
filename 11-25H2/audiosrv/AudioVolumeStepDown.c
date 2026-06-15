/*
 * XREFs of AudioVolumeStepDown @ 0x18006C080
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioVolumeStepDown(_QWORD *a1, __int128 *a2, __int64 a3, __int64 a4)
{
  struct _FILETIME v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v11; // ebx
  struct _FILETIME pftDueTime; // [rsp+20h] [rbp-39h] BYREF
  _QWORD pv[2]; // [rsp+28h] [rbp-31h] BYREF
  DWORD CurrentThreadId; // [rsp+38h] [rbp-21h]
  const wchar_t *v16; // [rsp+40h] [rbp-19h]
  struct _FILETIME v17; // [rsp+48h] [rbp-11h]
  char v18; // [rsp+50h] [rbp-9h]
  int v19; // [rsp+54h] [rbp-5h]
  int v20; // [rsp+58h] [rbp-1h]
  __int128 v21; // [rsp+60h] [rbp+7h]
  __int128 v22; // [rsp+70h] [rbp+17h] BYREF

  v21 = *a2;
  v22 = v21;
  EtwEventActivityIdControl(4LL, &v22);
  v7 = g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v9 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v9;
  v19 = 0;
  v20 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v16 = L"AudioVolumeStepDown";
  v17 = v7;
  v18 = 0;
  if ( (unsigned int)v8 >= 0x3E8 )
  {
    ThreadpoolTimer = CreateThreadpoolTimer(CWatchdogTimer<1>::TimerCallback, pv, 0LL);
    pv[0] = ThreadpoolTimer;
    if ( ThreadpoolTimer )
    {
      pftDueTime = (struct _FILETIME)(-10000 * v8 / 3);
      SetThreadpoolTimer(ThreadpoolTimer, &pftDueTime, (unsigned int)v8 / 3, 0);
    }
  }
  v11 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64))(*(_QWORD *)*a1 + 136LL))(*a1, a3, a4);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v22);
  return v11;
}
