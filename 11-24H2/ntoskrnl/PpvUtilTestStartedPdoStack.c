/*
 * XREFs of PpvUtilTestStartedPdoStack @ 0x1404B407C
 * Callers:
 *     PipProcessStartPhase3 @ 0x14099006C (PipProcessStartPhase3.c)
 * Callees:
 *     VfMajorTestStartedPdoStack @ 0x140B930C0 (VfMajorTestStartedPdoStack.c)
 */

__int64 PpvUtilTestStartedPdoStack()
{
  __int64 result; // rax

  if ( PpvUtilVerifierEnabled )
    return VfMajorTestStartedPdoStack();
  return result;
}
