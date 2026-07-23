/*
 * XREFs of PnpDisableWatchdog @ 0x1409ED880
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x140460640 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     PnpCallDriverEntry @ 0x1409B914C (PnpCallDriverEntry.c)
 *     PnpCallAddDevice @ 0x1409B9504 (PnpCallAddDevice.c)
 *     PnpDelayedRemoveWorker @ 0x1409BABD0 (PnpDelayedRemoveWorker.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x1409ED83C (PnpDisableAndFreeEventWatchdog.c)
 * Callees:
 *     PnpWatchdogEtwWrite @ 0x1404C2730 (PnpWatchdogEtwWrite.c)
 *     PnpWatchdogTimerPause @ 0x1409ED8EC (PnpWatchdogTimerPause.c)
 *     PnpRecordBlackbox @ 0x1409ED9A8 (PnpRecordBlackbox.c)
 *     WdtpCancelTimer @ 0x1409ED9F0 (WdtpCancelTimer.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
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
