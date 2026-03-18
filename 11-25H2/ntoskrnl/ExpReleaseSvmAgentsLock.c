/*
 * XREFs of ExpReleaseSvmAgentsLock @ 0x14064D100
 * Callers:
 *     ExpAllocateAsid @ 0x14064CB78 (ExpAllocateAsid.c)
 *     ExpFreeAsid @ 0x14064CDF8 (ExpFreeAsid.c)
 *     ExpSvmDereferenceAsid @ 0x14064D750 (ExpSvmDereferenceAsid.c)
 *     ExpSvmReferenceAsid @ 0x14064DA00 (ExpSvmReferenceAsid.c)
 *     ExpSvmServicePageFault @ 0x14064DAD0 (ExpSvmServicePageFault.c)
 * Callees:
 *     KeReleaseInStackQueuedSpinLockFromDpcLevel @ 0x14028A810 (KeReleaseInStackQueuedSpinLockFromDpcLevel.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F1088 (KiLowerIrqlProcessIrqlFlags.c)
 */

void __fastcall ExpReleaseSvmAgentsLock(struct _KLOCK_QUEUE_HANDLE *a1, unsigned __int8 a2)
{
  unsigned __int64 v2; // rbx

  v2 = a2;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(a1);
  if ( (_BYTE)v2 != 15 )
  {
    if ( KiIrqlFlags )
      KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
    __writecr8(v2);
  }
}
