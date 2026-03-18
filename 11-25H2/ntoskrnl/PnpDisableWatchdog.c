/*
 * XREFs of PnpDisableWatchdog @ 0x14096E4C0
 * Callers:
 *     PnpDeviceCompletionRequestDestroyWorkItem @ 0x1404694D0 (PnpDeviceCompletionRequestDestroyWorkItem.c)
 *     PnpDelayedRemoveWorker @ 0x14082EE10 (PnpDelayedRemoveWorker.c)
 *     PnpCallAddDevice @ 0x140832FB8 (PnpCallAddDevice.c)
 *     PnpDisableAndFreeEventWatchdog @ 0x14096E47C (PnpDisableAndFreeEventWatchdog.c)
 *     PnpCallDriverEntry @ 0x1409AF444 (PnpCallDriverEntry.c)
 * Callees:
 *     PnpWatchdogEtwWrite @ 0x1404C86F0 (PnpWatchdogEtwWrite.c)
 *     PnpWatchdogTimerPause @ 0x14096E52C (PnpWatchdogTimerPause.c)
 *     PnpRecordBlackbox @ 0x14096E5E8 (PnpRecordBlackbox.c)
 *     WdtpCancelTimer @ 0x14096E630 (WdtpCancelTimer.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
