/*
 * XREFs of PnpEnableWatchdog @ 0x1409C74F8
 * Callers:
 *     PnpDeviceCompletionRequestCreate @ 0x1408BB1DC (PnpDeviceCompletionRequestCreate.c)
 *     PnpDelayedRemoveWorker @ 0x1409C6B60 (PnpDelayedRemoveWorker.c)
 *     PnpCallAddDevice @ 0x1409C71F8 (PnpCallAddDevice.c)
 *     PnpAllocateAndEnableEventWatchdog @ 0x1409C7328 (PnpAllocateAndEnableEventWatchdog.c)
 *     PnpCallDriverEntry @ 0x1409C7678 (PnpCallDriverEntry.c)
 * Callees:
 *     PnpAllocateWatchdog @ 0x1403FFDAC (PnpAllocateWatchdog.c)
 *     PnpWatchdogTimerStart @ 0x1409C7554 (PnpWatchdogTimerStart.c)
 */

__int64 __fastcall PnpEnableWatchdog(int a1, __int64 a2, const UNICODE_STRING *a3)
{
  __int64 Watchdog; // rax
  __int64 v6; // rbx
  __int64 v7; // rcx

  Watchdog = PnpAllocateWatchdog(a3);
  v6 = Watchdog;
  if ( Watchdog )
  {
    *(_QWORD *)(Watchdog + 24) = a2;
    *(_DWORD *)(Watchdog + 16) = a1;
    v7 = *(_QWORD *)(Watchdog + 8);
    *(_QWORD *)Watchdog = MEMORY[0xFFFFF78000000008];
    PnpWatchdogTimerStart(v7);
  }
  return v6;
}
