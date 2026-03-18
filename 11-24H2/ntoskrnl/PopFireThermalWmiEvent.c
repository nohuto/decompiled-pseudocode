/*
 * XREFs of PopFireThermalWmiEvent @ 0x1405D3BE4
 * Callers:
 *     PopThermalWorker @ 0x140A40A30 (PopThermalWorker.c)
 * Callees:
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
 *     PpmFireWmiEvent @ 0x1405D7EF8 (PpmFireWmiEvent.c)
 */

__int64 __fastcall PopFireThermalWmiEvent(char a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax
  __int128 v3; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0LL;
  LOBYTE(v3) = a1;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  PpmFireWmiEvent(&KeGetCurrentPrcb()->PowerState.WmiDispatchPtr, &PPM_THERMAL_POLICY_CHANGE_GUID, 16LL, &v3);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
