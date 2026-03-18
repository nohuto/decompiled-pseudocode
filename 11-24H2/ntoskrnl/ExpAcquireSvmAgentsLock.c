/*
 * XREFs of ExpAcquireSvmAgentsLock @ 0x1406589FC
 * Callers:
 *     ExpAllocateAsid @ 0x140658A58 (ExpAllocateAsid.c)
 *     ExpFreeAsid @ 0x140658CEC (ExpFreeAsid.c)
 *     ExpSvmDereferenceAsid @ 0x1406595F0 (ExpSvmDereferenceAsid.c)
 *     ExpSvmReferenceAsid @ 0x1406598A0 (ExpSvmReferenceAsid.c)
 *     ExpSvmServicePageFault @ 0x140659970 (ExpSvmServicePageFault.c)
 * Callees:
 *     KeAcquireInStackQueuedSpinLockAtDpcLevel @ 0x1402D84E0 (KeAcquireInStackQueuedSpinLockAtDpcLevel.c)
 *     KiRaiseIrqlProcessIrqlFlags @ 0x1404F4FAC (KiRaiseIrqlProcessIrqlFlags.c)
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
  KeAcquireInStackQueuedSpinLockAtDpcLevel(&qword_140EFA458, LockHandle);
  return CurrentIrql;
}
