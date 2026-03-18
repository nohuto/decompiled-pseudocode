/*
 * XREFs of ExpAcquireSvmAgentsLock @ 0x14064CB1C
 * Callers:
 *     ExpAllocateAsid @ 0x14064CB78 (ExpAllocateAsid.c)
 *     ExpFreeAsid @ 0x14064CDF8 (ExpFreeAsid.c)
 *     ExpSvmDereferenceAsid @ 0x14064D750 (ExpSvmDereferenceAsid.c)
 *     ExpSvmReferenceAsid @ 0x14064DA00 (ExpSvmReferenceAsid.c)
 *     ExpSvmServicePageFault @ 0x14064DAD0 (ExpSvmServicePageFault.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x140300F20 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F1018 (KiRaiseIrqlProcessIrqlFlags.c)
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
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140EFA078, LockHandle);
  return CurrentIrql;
}
