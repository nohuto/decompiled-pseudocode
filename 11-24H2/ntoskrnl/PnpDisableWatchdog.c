/*
 * XREFs of PnpDisableWatchdog @ 0x1409EFFB0
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x140467C90 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     PnpDelayedRemoveWorker @ 0x1409C6B60 (PnpDelayedRemoveWorker.c)
 *     PnpCallAddDevice @ 0x1409C71F8 (PnpCallAddDevice.c)
 *     PnpCallDriverEntry @ 0x1409C7678 (PnpCallDriverEntry.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x1409EFF6C (PnpDisableAndFreeEventWatchdog.c)
 * Callees:
 *     PnpWatchdogEtwWrite @ 0x1404C9280 (PnpWatchdogEtwWrite.c)
 *     PnpWatchdogTimerPause @ 0x1409F001C (PnpWatchdogTimerPause.c)
 *     PnpRecordBlackbox @ 0x1409F00D8 (PnpRecordBlackbox.c)
 *     WdtpCancelTimer @ 0x1409F0120 (WdtpCancelTimer.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

void __fastcall PnpDisableWatchdog(__int64 a1, __int64 a2)
{
  __int64 v3; // rdx
  void *v4; // rbx

  PnpWatchdogTimerPause(*(_QWORD *)(a1 + 8), a2);
  PnpRecordBlackbox(0LL, *(unsigned int *)(a1 + 16));
  if ( *(_BYTE *)(a1 + 32) )
  {
    PnpWatchdogEtwWrite(a1, 1);
    if ( !*(_BYTE *)(a1 + 33) )
      PnpWatchdogEtwWrite(a1, 3);
  }
  v4 = *(void **)(a1 + 8);
  LOBYTE(v3) = 1;
  WdtpCancelTimer(v4, v3);
  ExFreePoolWithTag(v4, 0x54645750u);
}
