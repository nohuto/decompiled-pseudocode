/*
 * XREFs of VfRandomGetNumber @ 0x140B830DC
 * Callers:
 *     VfPendingShouldForce @ 0x140B91BC8 (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x140B96568 (VfFaultsInjectResourceFailure.c)
 *     DifpLwSPProcessPrePoolAlloc @ 0x140BA4264 (DifpLwSPProcessPrePoolAlloc.c)
 *     ViInitPickRandomTargets @ 0x140C3B598 (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x14041A510 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
