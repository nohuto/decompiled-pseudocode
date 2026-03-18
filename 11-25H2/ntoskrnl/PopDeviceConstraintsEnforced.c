/*
 * XREFs of PopDeviceConstraintsEnforced @ 0x1404C4F9C
 * Callers:
 *     PopDripsWatchdogCallbackHandler @ 0x140752EE0 (PopDripsWatchdogCallbackHandler.c)
 *     PopDripsWatchdogTakeAction @ 0x1407564A0 (PopDripsWatchdogTakeAction.c)
 * Callees:
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(a1);
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
