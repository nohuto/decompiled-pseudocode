/*
 * XREFs of AudioVolumeSetMasterVolumeLevel @ 0x180074460
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     __security_check_cookie @ 0x1800A7AB0 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall AudioVolumeSetMasterVolumeLevel(_QWORD *a1, __int128 *a2, __int64 a3, __int64 a4, __int64 a5)
{
  struct _FILETIME v7; // rbx
  __int64 v8; // rdi
  __int64 v9; // rcx
  __int64 v10; // rdx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  unsigned int v12; // ebx
  struct _FILETIME pftDueTime; // [rsp+38h] [rbp-51h] BYREF
  _QWORD pv[2]; // [rsp+40h] [rbp-49h] BYREF
  DWORD CurrentThreadId; // [rsp+50h] [rbp-39h]
  const wchar_t *v17; // [rsp+58h] [rbp-31h]
  struct _FILETIME v18; // [rsp+60h] [rbp-29h]
  char v19; // [rsp+68h] [rbp-21h]
  int v20; // [rsp+6Ch] [rbp-1Dh]
  int v21; // [rsp+70h] [rbp-19h]
  __int128 v22; // [rsp+78h] [rbp-11h]
  __int128 v23; // [rsp+88h] [rbp-1h] BYREF

  v22 = *a2;
  v23 = v22;
  EtwEventActivityIdControl(4LL, &v23);
  v7 = g_AudioHealthMonitor;
  v8 = g_AudioSrvWatchDogTimerInMs;
  v9 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v9;
  v20 = 0;
  v21 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v17 = L"AudioVolumeSetMasterVolumeLevel";
  v18 = v7;
  v19 = 0;
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
  v12 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(*(_QWORD *)*a1 + 56LL))(*a1, v10, a4, a5);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  EtwEventActivityIdControl(4LL, &v23);
  return v12;
}
