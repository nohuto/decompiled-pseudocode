/*
 * XREFs of ?CleanupRitTimerScanWakeEvent@CRitTimerScanWakeSystem@@SAXXZ @ 0x1C009F378
 * Callers:
 *     EditionBaseDriverUnloadUninitialize @ 0x1C00598D0 (EditionBaseDriverUnloadUninitialize.c)
 *     RawInputThread @ 0x1C00D6580 (RawInputThread.c)
 * Callees:
 *     ??0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z @ 0x1C0030A10 (--0CAutoPushLockEx@@QEAA@PEAU_EX_PUSH_LOCK@@@Z.c)
 */

void CRitTimerScanWakeSystem::CleanupRitTimerScanWakeEvent(void)
{
  __int64 v0; // [rsp+30h] [rbp+8h] BYREF

  CAutoPushLockEx::CAutoPushLockEx(
    (CAutoPushLockEx *)&v0,
    (struct _EX_PUSH_LOCK *)&CRitTimerScanWakeSystem::ritTimerScanWakeSystemLock);
  if ( CRitTimerScanWakeSystem::ritTimerScanWakeEvent )
  {
    Win32FreePool(CRitTimerScanWakeSystem::ritTimerScanWakeEvent);
    CRitTimerScanWakeSystem::ritTimerScanWakeEvent = 0LL;
  }
  ExReleasePushLockExclusiveEx(v0, 0LL);
  KeLeaveCriticalRegion();
}
