/*
 * XREFs of KiGenericCallDpcInitiatorWorker @ 0x140414DF0
 * Callers:
 *     <none>
 * Callees:
 *     KiAcquireDpcCorralLock @ 0x140414E6C (KiAcquireDpcCorralLock.c)
 *     KiInitiateGenericCallDpc @ 0x140414ED0 (KiInitiateGenericCallDpc.c)
 *     KiReleaseDpcCorralLock @ 0x140414FB0 (KiReleaseDpcCorralLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
    KiRaiseIrqlProcessIrqlFlags(v4, 2LL);
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
