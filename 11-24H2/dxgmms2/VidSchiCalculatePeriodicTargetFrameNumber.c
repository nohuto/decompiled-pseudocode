/*
 * XREFs of VidSchiCalculatePeriodicTargetFrameNumber @ 0x1400030B0
 * Callers:
 *     VidSchiProcessPeriodicNotificationCookie @ 0x1400031E4 (VidSchiProcessPeriodicNotificationCookie.c)
 *     ?VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z @ 0x140050610 (-VidSchPeriodicMonitoredFenceTimerCallback@@YAXPEAU_EX_TIMER@@PEAX@Z.c)
 * Callees:
 *     ?VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z @ 0x14000304C (-VidSchiGetCurrentVSyncPeriod100ns@@YA_KPEAU_VIDSCH_GLOBAL@@I_N@Z.c)
 */

__int64 __fastcall VidSchiCalculatePeriodicTargetFrameNumber(
        __int64 a1,
        unsigned __int64 a2,
        __int64 a3,
        _DWORD *a4,
        struct _VIDSCH_GLOBAL *a5,
        __int64 a6)
{
  __int64 v7; // rbx
  LARGE_INTEGER v11; // r9
  unsigned __int64 v12; // rsi
  unsigned __int64 v13; // rbp
  unsigned __int64 CurrentVSyncPeriod100ns; // rax
  unsigned __int64 v15; // rcx
  union _LARGE_INTEGER v17; // [rsp+50h] [rbp+8h] BYREF

  v7 = 0LL;
  v17.QuadPart = 0LL;
  v11 = KeQueryPerformanceCounter(&v17);
  if ( is_mul_ok(v11.QuadPart, 0x989680uLL) )
    v12 = (unsigned __int64)v11.QuadPart * (unsigned __int128)0x989680uLL / (unsigned __int64)v17.QuadPart;
  else
    v12 = 10000000 * (v11.QuadPart / (unsigned __int64)v17.QuadPart)
        + 10000000 * (v11.QuadPart % (unsigned __int64)v17.QuadPart) / v17.QuadPart;
  if ( is_mul_ok(a2, 0x989680uLL) )
    v13 = a2 * (unsigned __int128)0x989680uLL / (unsigned __int64)v17.QuadPart;
  else
    v13 = 10000000 * (a2 / v17.QuadPart) + 10000000 * (a2 % v17.QuadPart) / v17.QuadPart;
  CurrentVSyncPeriod100ns = VidSchiGetCurrentVSyncPeriod100ns(a5, *(_DWORD *)(a6 + 24));
  v15 = v13 + (CurrentVSyncPeriod100ns >> 1) - *(_QWORD *)(a1 + 16);
  if ( v12 <= v15 )
  {
    *a4 = -1;
  }
  else if ( v12 > v15 + CurrentVSyncPeriod100ns )
  {
    *a4 = 1;
    v7 = 2LL;
  }
  else
  {
    *a4 = 0;
    v7 = 1LL;
  }
  return v7 + a3;
}
