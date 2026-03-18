/*
 * XREFs of ?AcquireLockExclusive@CPushLock@@QEAAJXZ @ 0x140094688
 * Callers:
 *     ?zzzRefreshSizes@CCursorSizes@@QEAAXXZ @ 0x14007AA08 (-zzzRefreshSizes@CCursorSizes@@QEAAXXZ.c)
 *     ?zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z @ 0x140094048 (-zzzUpdateGlobalCursorSize@CCursorSizes@@QEAAXPEBUtagPOINT@@_N@Z.c)
 *     ?bSaveRegion@@YAHAEAVXDCOBJ@@J@Z @ 0x14025C360 (-bSaveRegion@@YAHAEAVXDCOBJ@@J@Z.c)
 * Callees:
 *     ?W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z @ 0x140094BEC (-W32AcquirePushLockExclusive@@YAXPEAVW32_PUSH_LOCK@@@Z.c)
 */

__int64 __fastcall CPushLock::AcquireLockExclusive(CPushLock *this)
{
  W32AcquirePushLockExclusive(this);
  *((_QWORD *)this + 1) = PsGetCurrentThreadId();
  return 0LL;
}
