/*
 * XREFs of PolicyConfigGetDeviceFormat @ 0x180012310
 * Callers:
 *     <none>
 * Callees:
 *     ?Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ @ 0x18000F7B0 (-Instance@AudioSrvTelemetryProvider@@KAPEAV1@XZ.c)
 *     ??1?$CWatchdogTimer@$00@@QEAA@XZ @ 0x1800118A0 (--1-$CWatchdogTimer@$00@@QEAA@XZ.c)
 *     ?AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z @ 0x18001AEC8 (-AudSrvTraceLoggingErrorHelper@@YAXPEBDIJ@Z.c)
 *     MIDL_user_allocate @ 0x180042530 (MIDL_user_allocate.c)
 *     memcpy_0 @ 0x1800ABC38 (memcpy_0.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x18016A010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

__int64 __fastcall PolicyConfigGetDeviceFormat(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  struct _FILETIME v5; // rbx
  __int64 v7; // rsi
  __int64 v9; // rcx
  struct _TP_TIMER *ThreadpoolTimer; // rax
  int v11; // ebx
  void *v13; // rax
  struct _FILETIME pftDueTime; // [rsp+30h] [rbp-40h] BYREF
  _QWORD pv[2]; // [rsp+38h] [rbp-38h] BYREF
  DWORD CurrentThreadId; // [rsp+48h] [rbp-28h]
  const wchar_t *v17; // [rsp+50h] [rbp-20h]
  struct _FILETIME v18; // [rsp+58h] [rbp-18h]
  char v19; // [rsp+60h] [rbp-10h]
  int v20; // [rsp+64h] [rbp-Ch]
  int v21; // [rsp+68h] [rbp-8h]
  LPVOID Src; // [rsp+A8h] [rbp+38h] BYREF

  Src = 0LL;
  v5 = g_AudioHealthMonitor;
  v7 = g_AudioSrvWatchDogTimerInMs;
  v9 = *((_QWORD *)AudioSrvTelemetryProvider::Instance() + 1);
  pv[0] = 0LL;
  pv[1] = v9;
  v20 = 0;
  v21 = 0;
  CurrentThreadId = GetCurrentThreadId();
  v17 = L"PolicyConfigGetDeviceFormat";
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
  *a4 = 0LL;
  v11 = (*(__int64 (__fastcall **)(CPolicyConfig *, __int64, _QWORD, LPVOID *))(*(_QWORD *)g_PolicyConfig + 32LL))(
          g_PolicyConfig,
          a2,
          a3,
          &Src);
  if ( v11 >= 0 )
  {
    v13 = MIDL_user_allocate(*((unsigned __int16 *)Src + 8) + 18LL);
    *a4 = v13;
    if ( v13 )
      memcpy_0(v13, Src, *((unsigned __int16 *)Src + 8) + 18LL);
    else
      v11 = -2147024882;
  }
  if ( Src )
  {
    CoTaskMemFree(Src);
    Src = 0LL;
  }
  if ( v11 < 0 )
    AudSrvTraceLoggingErrorHelper("PolicyConfigGetDeviceFormat", 0x8CBu, v11);
  CWatchdogTimer<1>::~CWatchdogTimer<1>((__int64)pv);
  return (unsigned int)v11;
}
