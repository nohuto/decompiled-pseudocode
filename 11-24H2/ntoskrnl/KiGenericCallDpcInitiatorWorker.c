/*
 * XREFs of KiGenericCallDpcInitiatorWorker @ 0x140270C50
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireDpcCorralLock @ 0x140270CCC (KiAcquireDpcCorralLock.c)
 *     KiInitiateGenericCallDpc @ 0x140270D30 (KiInitiateGenericCallDpc.c)
 *     KiReleaseDpcCorralLock @ 0x140270E10 (KiReleaseDpcCorralLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

__int64 __fastcall KiGenericCallDpcInitiatorWorker(__int64 a1, __int64 a2)
{
  __int64 v3; // rcx
  unsigned __int8 CurrentIrql; // bl
  __int64 v5; // rdx

  KiAcquireDpcCorralLock(a1, a2);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(v3) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(v3, 2LL);
  }
  KiInitiateGenericCallDpc(a1);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  }
  __writecr8(CurrentIrql);
  return KiReleaseDpcCorralLock();
}
