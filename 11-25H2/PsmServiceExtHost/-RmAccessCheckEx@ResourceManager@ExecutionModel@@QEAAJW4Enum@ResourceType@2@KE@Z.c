/*
 * XREFs of ?RmAccessCheckEx@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18005C508
 * Callers:
 *     RmgrSrv_RmAccessCheckOnCaller @ 0x180077C10 (RmgrSrv_RmAccessCheckOnCaller.c)
 *     ?CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z @ 0x18008DDB0 (-CheckAccess@ExternalResourceSet@ExecutionModel@@UEAAJKPEBU_ResourceInfo@2@@Z.c)
 * Callees:
 *     CempLockTrackerClearForThread @ 0x18001B7B0 (CempLockTrackerClearForThread.c)
 *     ?HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z @ 0x18001D360 (-HampUtilStartLockTracking@@YAXPEAU_CEM_LOCK_TRACKER@@@Z.c)
 *     ?RmpReleaseGlobalLock@@YAXXZ @ 0x18001F2A0 (-RmpReleaseGlobalLock@@YAXXZ.c)
 *     ?RmpAcquireGlobalLock@@YAXXZ @ 0x180029F10 (-RmpAcquireGlobalLock@@YAXXZ.c)
 *     ?RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z @ 0x18005C898 (-RmAccessCheckWithLockHeld@ResourceManager@ExecutionModel@@QEAAJW4Enum@ResourceType@2@KE@Z.c)
 *     memset_0 @ 0x1800A781A (memset_0.c)
 *     __security_check_cookie @ 0x1800A7850 (__security_check_cookie.c)
 */

__int64 __fastcall ExecutionModel::ResourceManager::RmAccessCheckEx(__int64 a1, unsigned int a2, unsigned int a3)
{
  __int64 v6; // r9
  _BYTE v8[144]; // [rsp+20h] [rbp-B8h] BYREF

  memset_0(v8, 0, 0x88uLL);
  HampUtilStartLockTracking((struct _CEM_LOCK_TRACKER *)v8);
  RmpAcquireGlobalLock();
  LOBYTE(v6) = 1;
  LODWORD(a1) = ExecutionModel::ResourceManager::RmAccessCheckWithLockHeld(a1, a2, a3, v6);
  RmpReleaseGlobalLock();
  CempLockTrackerClearForThread(HampLockTrackerId);
  return (unsigned int)a1;
}
