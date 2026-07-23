/*
 * XREFs of MiUpdateAvailableEvents @ 0x1406867F4
 * Callers:
 *     MiInitializeMemoryEvents @ 0x14080067C (MiInitializeMemoryEvents.c)
 * Callees:
 *     MiUpdateAvailableEventsAtDpc @ 0x140261834 (MiUpdateAvailableEventsAtDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall MiUpdateAvailableEvents(__int64 a1)
{
  unsigned __int8 CurrentIrql; // bl
  __int64 result; // rax

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
    KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 2);
  MiUpdateAvailableEventsAtDpc(a1);
  if ( KiIrqlFlags )
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), CurrentIrql);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}
