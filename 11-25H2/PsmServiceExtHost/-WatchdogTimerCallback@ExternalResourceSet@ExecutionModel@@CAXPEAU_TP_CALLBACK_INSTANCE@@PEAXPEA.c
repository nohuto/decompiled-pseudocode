/*
 * XREFs of ?WatchdogTimerCallback@ExternalResourceSet@ExecutionModel@@CAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18008E2B0
 * Callers:
 *     <none>
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ @ 0x18008E0A4 (-RunWatchdog@ExternalResourceSet@ExecutionModel@@AEAAXXZ.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 *     _guard_dispatch_icall$thunk$10345483385596137414 @ 0x1800A8010 (_guard_dispatch_icall$thunk$10345483385596137414.c)
 */

void __fastcall ExecutionModel::ExternalResourceSet::WatchdogTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        ExecutionModel::ExternalResourceSet *a2,
        struct _TP_TIMER *a3)
{
  __int64 v4; // rax
  _BYTE v5[144]; // [rsp+20h] [rbp-A8h] BYREF

  memset_0(v5, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v5);
  RmpAcquireGlobalLock();
  ExecutionModel::ExternalResourceSet::RunWatchdog(a2);
  v4 = *(_QWORD *)a2;
  *((_DWORD *)a2 + 338) &= ~8u;
  (*(void (__fastcall **)(ExecutionModel::ExternalResourceSet *))(v4 + 16))(a2);
  RmpReleaseGlobalLock();
  CempLockTrackerClearForThread(HampLockTrackerId);
}
