/*
 * XREFs of KiSetPendingTick @ 0x140277258
 * Callers:
 *     KiSetClockTickRate @ 0x140276FBC (KiSetClockTickRate.c)
 *     KiRestoreClockTickRate @ 0x1404C7BF0 (KiRestoreClockTickRate.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B5660 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B5B04 (KeResumeClockTimerFromIdle.c)
 *     KeInitializeClockOtherProcessors @ 0x140B474EC (KeInitializeClockOtherProcessors.c)
 *     KeInitializeClock @ 0x140C4ECE8 (KeInitializeClock.c)
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall KiSetPendingTick(char a1)
{
  struct _KPRCB *CurrentPrcb; // r8
  unsigned __int8 result; // al
  __int64 v3; // rdx

  if ( KiClockTimerPerCpu )
  {
    CurrentPrcb = KeGetCurrentPrcb();
    result = CurrentPrcb->PendingTickFlags;
    CurrentPrcb->PendingTickFlags = result ^ (a1 ^ result) & 1;
  }
  else
  {
    v3 = KiProcessorBlock[(unsigned int)KiClockTimerOwner];
    result = *(_BYTE *)(v3 + 34);
    *(_BYTE *)(v3 + 34) = result ^ (a1 ^ result) & 1;
  }
  return result;
}
