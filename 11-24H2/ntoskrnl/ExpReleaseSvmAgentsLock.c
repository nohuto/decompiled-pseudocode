/*
 * XREFs of ExpReleaseSvmAgentsLock @ 0x140657694
 * Callers:
 *     ExpAllocateAsid @ 0x1406570F8 (ExpAllocateAsid.c)
 *     ExpFreeAsid @ 0x14065738C (ExpFreeAsid.c)
 *     ExpSvmDereferenceAsid @ 0x140657C90 (ExpSvmDereferenceAsid.c)
 *     ExpSvmReferenceAsid @ 0x140657F40 (ExpSvmReferenceAsid.c)
 *     ExpSvmServicePageFault @ 0x140658010 (ExpSvmServicePageFault.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x1402CA740 (KxReleaseQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F2848 (KiLowerIrqlProcessIrqlFlags.c)
 */

char __fastcall ExpReleaseSvmAgentsLock(volatile signed __int64 **a1, __int64 a2)
{
  unsigned __int64 v2; // rbx
  char result; // al

  v2 = (unsigned __int8)a2;
  result = KxReleaseQueuedSpinLock(a1, a2);
  if ( (_BYTE)v2 != 15 )
  {
    if ( KiIrqlFlags )
      result = KiLowerIrqlProcessIrqlFlags(KeGetCurrentIrql(), v2);
    __writecr8(v2);
  }
  return result;
}
