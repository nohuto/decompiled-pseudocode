/*
 * XREFs of ExpReleaseSvmAgentsLock @ 0x140658FF4
 * Callers:
 *     ExpAllocateAsid @ 0x140658A58 (ExpAllocateAsid.c)
 *     ExpFreeAsid @ 0x140658CEC (ExpFreeAsid.c)
 *     ExpSvmDereferenceAsid @ 0x1406595F0 (ExpSvmDereferenceAsid.c)
 *     ExpSvmReferenceAsid @ 0x1406598A0 (ExpSvmReferenceAsid.c)
 *     ExpSvmServicePageFault @ 0x140659970 (ExpSvmServicePageFault.c)
 * Callees:
 *     KxReleaseQueuedSpinLock @ 0x140321BB0 (KxReleaseQueuedSpinLock.c)
 *     KiLowerIrqlProcessIrqlFlags @ 0x1404F4F48 (KiLowerIrqlProcessIrqlFlags.c)
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
