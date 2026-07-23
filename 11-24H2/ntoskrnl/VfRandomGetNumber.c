/*
 * XREFs of VfRandomGetNumber @ 0x140B850DC
 * Callers:
 *     VfPendingShouldForce @ 0x140B93BC8 (VfPendingShouldForce.c)
 *     VfFaultsInjectResourceFailure @ 0x140B98568 (VfFaultsInjectResourceFailure.c)
 *     DifpLwSPProcessPrePoolAlloc @ 0x140BA6264 (DifpLwSPProcessPrePoolAlloc.c)
 *     ViInitPickRandomTargets @ 0x140C3D6F0 (ViInitPickRandomTargets.c)
 * Callees:
 *     RtlRandomEx @ 0x14040A510 (RtlRandomEx.c)
 */

ULONG __fastcall VfRandomGetNumber(unsigned int a1, unsigned int a2)
{
  ULONG result; // eax

  result = RtlRandomEx(&ViRandomSeed);
  if ( a2 >= a1 )
    return a1 + result % (a2 - a1 + 1);
  return result;
}
