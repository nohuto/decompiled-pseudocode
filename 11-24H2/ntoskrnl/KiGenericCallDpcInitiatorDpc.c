/*
 * XREFs of KiGenericCallDpcInitiatorDpc @ 0x1404B6360
 * Callers:
 *     <none>
 * Callees:
 *     KeSignalGate @ 0x14030AB68 (KeSignalGate.c)
 *     KiInitiateGenericCallDpc @ 0x140414ED0 (KiInitiateGenericCallDpc.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
  KiInitiateGenericCallDpc((__int64)CurrentPrcb, (PKDEFERRED_ROUTINE *)a2);
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
  return KeSignalGate((_DWORD *)(a2 + 80), 0LL);
}
