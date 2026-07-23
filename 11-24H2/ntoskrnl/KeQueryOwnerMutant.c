/*
 * XREFs of KeQueryOwnerMutant @ 0x1404896BC
 * Callers:
 *     NtQueryMutant @ 0x140A2C320 (NtQueryMutant.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x1402C72D0 (KiAcquireKobjectLockSafe.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

void __stdcall KeQueryOwnerMutant(PKMUTANT Mutant, PCLIENT_ID ClientId)
{
  PKMUTANT v3; // rbx
  unsigned __int8 CurrentIrql; // di
  __int64 v5; // rdx
  _KTHREAD *OwnerThread; // rax

  ClientId->UniqueProcess = 0LL;
  ClientId->UniqueThread = 0LL;
  v3 = Mutant;
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( KiIrqlFlags )
  {
    LOBYTE(Mutant) = CurrentIrql;
    KiRaiseIrqlProcessIrqlFlags(Mutant, 2LL);
  }
  KiAcquireKobjectLockSafe(&v3->Header.Lock);
  OwnerThread = v3->OwnerThread;
  if ( OwnerThread )
    *ClientId = *(PCLIENT_ID)&OwnerThread[1].CycleTime;
  _InterlockedAnd(&v3->Header.Lock, 0xFFFFFF7F);
  if ( KiIrqlFlags )
  {
    LOBYTE(v5) = CurrentIrql;
    KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v5);
  }
  __writecr8(CurrentIrql);
}
