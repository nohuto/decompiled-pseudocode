/*
 * XREFs of PopDeviceConstraintsEnforced @ 0x1404BEB74
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x14075EAE0 (PopDripsWatchdogCallbackHandler.c)
 *     PopDripsWatchdogTakeAction @ 0x140765E80 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

bool __fastcall PopDeviceConstraintsEnforced(__int64 a1)
{
  bool v1; // bl
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rdx

  v1 = 0;
  CurrentIrql = KeGetCurrentIrql();
  v3 = 2LL;
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(a1) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(a1, 2LL);
  }
  if ( KeGetCurrentPrcb()->PowerState.IdleStates )
    v1 = PpmPlatformStates != 0;
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v3);
  }
  __writecr8(CurrentIrql);
  return v1;
}
