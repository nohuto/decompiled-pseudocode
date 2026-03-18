/*
 * XREFs of KeQueryOwnerMutant @ 0x14048F4AC
 * Callers:
 *     NtQueryMutant @ 0x140A374D0 (NtQueryMutant.c)
 * Callees:
 *     KiAcquireKobjectLockSafe @ 0x14031E740 (KiAcquireKobjectLockSafe.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
