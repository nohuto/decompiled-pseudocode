/*
 * XREFs of PnpEnableWatchdog @ 0x140833C84
 * Callers:
 *     PnpDelayedRemoveWorker @ 0x14082EE10 (PnpDelayedRemoveWorker.c)
 *     PnpCallAddDevice @ 0x140832FB8 (PnpCallAddDevice.c)
 *     PnpAllocateAndEnableEventWatchdog @ 0x140833AB8 (PnpAllocateAndEnableEventWatchdog.c)
 *     PnpDeviceCompletionRequestCreate @ 0x140835154 (PnpDeviceCompletionRequestCreate.c)
 *     PnpCallDriverEntry @ 0x1409AF444 (PnpCallDriverEntry.c)
 * Callees:
 *     PnpAllocateWatchdog @ 0x14036CADC (PnpAllocateWatchdog.c)
 *     PnpWatchdogTimerStart @ 0x140833CE0 (PnpWatchdogTimerStart.c)
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
