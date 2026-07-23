/*
 * XREFs of KiGenericCallDpcInitiatorDpc @ 0x1402700D0
 * Callers:
 *     <none>
 * Callees:
 *     KiInitiateGenericCallDpc @ 0x140270D30 (KiInitiateGenericCallDpc.c)
 *     KeSignalGate @ 0x140314A48 (KeSignalGate.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiGenericCallDpcInitiatorDpc(__int64 a1, __int64 a2)
{
  struct _KPRCB *CurrentPrcb; // rdi
  int DpcWatchdogCount; // esi
  __int64 v5; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v7; // rdx

  CurrentPrcb = KeGetCurrentPrcb();
  DpcWatchdogCount = CurrentPrcb->DpcWatchdogCount;
  KiInitiateGenericCallDpc(CurrentPrcb);
  CurrentIrql = KeGetCurrentIrql();
  v7 = 13LL;
  __writecr8(0xDuLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v5, 13LL);
  }
  if ( DpcWatchdogCount < CurrentPrcb->DpcWatchdogCount )
    CurrentPrcb->DpcWatchdogCount = DpcWatchdogCount;
  if ( KiIrqlFlags )
  {
    LOBYTE(v7) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v7);
  }
  __writecr8(CurrentIrql);
  return KeSignalGate((PVOID)(a2 + 80));
}
