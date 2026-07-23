/*
 * XREFs of ExpAcquireSvmAgentsLock @ 0x14065709C
 * Callers:
 *     ExpAllocateAsid @ 0x1406570F8 (ExpAllocateAsid.c)
 *     ExpFreeAsid @ 0x14065738C (ExpFreeAsid.c)
 *     ExpSvmDereferenceAsid @ 0x140657C90 (ExpSvmDereferenceAsid.c)
 *     ExpSvmReferenceAsid @ 0x140657F40 (ExpSvmReferenceAsid.c)
 *     ExpSvmServicePageFault @ 0x140658010 (ExpSvmServicePageFault.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140359760 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F28AC (KiRaiseIrqlProcessIrqlFlags.c)
 */

unsigned __int8 __fastcall ExpAcquireSvmAgentsLock(PKLOCK_QUEUE_HANDLE LockHandle)
{
  unsigned __int8 CurrentIrql; // bl

  CurrentIrql = KeGetCurrentIrql();
  if ( KeGetCurrentIrql() < 0xFu )
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(0xFuLL);
    if ( KiIrqlFlags )
      KiRaiseIrqlProcessIrqlFlags(CurrentIrql, 15);
  }
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140EFA6D8, LockHandle);
  return CurrentIrql;
}
