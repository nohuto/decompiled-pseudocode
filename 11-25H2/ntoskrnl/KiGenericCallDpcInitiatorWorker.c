/*
 * XREFs of KiGenericCallDpcInitiatorWorker @ 0x140417C10
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireDpcCorralLock @ 0x140417C8C (KiAcquireDpcCorralLock.c)
 *     KiInitiateGenericCallDpc @ 0x140417CF0 (KiInitiateGenericCallDpc.c)
 *     KiReleaseDpcCorralLock @ 0x140417DD0 (KiReleaseDpcCorralLock.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiGenericCallDpcInitiatorWorker(__int64 a1, __int64 a2)
{
  __int64 v4; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v6; // rdx

  KiAcquireDpcCorralLock(a1, a2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v4) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v4);
  }
  KiInitiateGenericCallDpc(a1, a2);
  if ( KiIrqlFlags )
  {
    LOBYTE(v6) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v6);
  }
  __writecr8(CurrentIrql);
  return KiReleaseDpcCorralLock();
}
