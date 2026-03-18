/*
 * XREFs of KiSetPendingTick @ 0x1402A0A04
 * Callers:
 *     KiSetClockTickRate @ 0x1402A07B0 (KiSetClockTickRate.c)
 *     KiRestoreClockTickRate @ 0x1404C89B0 (KiRestoreClockTickRate.c)
 *     KePrepareClockTimerForPlatformIdle @ 0x1405B94A0 (KePrepareClockTimerForPlatformIdle.c)
 *     KeResumeClockTimerFromIdle @ 0x1405B9944 (KeResumeClockTimerFromIdle.c)
 *     KeInitializeClockOtherProcessors @ 0x140B5748C (KeInitializeClockOtherProcessors.c)
 *     KeInitializeClock @ 0x140C60350 (KeInitializeClock.c)
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
