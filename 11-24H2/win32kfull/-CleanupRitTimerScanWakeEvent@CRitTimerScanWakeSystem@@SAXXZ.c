/*
 * XREFs of ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1401F2EC4
 * Callers:
 *     EditionDriverUninitialize @ 0x1401F2C60 (EditionDriverUninitialize.c)
 *     RawInputThread @ 0x140230DC0 (RawInputThread.c)
 * Callees:
 *     ?W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BB10 (-W32ReleasePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 *     ?W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z @ 0x14002BCE8 (-W32AcquirePushLockExclusiveEx@@YAXPEAVW32_PUSH_LOCK@@K@Z.c)
 */

void __fastcall CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent(__int64 a1, __int64 a2)
{
  __int64 UserSessionState; // rdi
  void *v3; // rcx

  UserSessionState = W32GetUserSessionState(a1, a2);
  W32AcquirePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 18776), 0);
  v3 = *(void **)(UserSessionState + 18768);
  if ( v3 )
  {
    Win32FreePool(v3);
    *(_QWORD *)(UserSessionState + 18768) = 0LL;
  }
  W32ReleasePushLockExclusiveEx((struct W32_PUSH_LOCK *)(UserSessionState + 18776), 0LL);
}
