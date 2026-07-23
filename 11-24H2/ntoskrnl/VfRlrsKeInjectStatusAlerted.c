/*
 * XREFs of VfRlrsKeInjectStatusAlerted @ 0x140BA1704
 * Callers:
 *     VerifierKeDelayExecutionThread @ 0x140B974B0 (VerifierKeDelayExecutionThread.c)
 *     VerifierKeWaitForMultipleObjects @ 0x140B97D40 (VerifierKeWaitForMultipleObjects.c)
 *     VerifierKeWaitForSingleObject @ 0x140B97DF0 (VerifierKeWaitForSingleObject.c)
 * Callees:
 *     VfUtilIsLocalSystem @ 0x140B85404 (VfUtilIsLocalSystem.c)
 *     VfFaultsInjectResourceFailure @ 0x140B98568 (VfFaultsInjectResourceFailure.c)
 */

__int64 __fastcall VfRlrsKeInjectStatusAlerted(char a1)
{
  unsigned int v1; // ebx
  struct _KPROCESS *Process; // rdi

  v1 = 0;
  if ( !a1 )
    return 0LL;
  Process = KeGetCurrentThread()->ApcState.Process;
  if ( !PsInitialSystemProcess
    || Process == PsInitialSystemProcess
    || Process == PsIdleProcess
    || !(unsigned int)VfFaultsInjectResourceFailure(0) )
  {
    return 0LL;
  }
  LOBYTE(v1) = (unsigned int)VfUtilIsLocalSystem(Process) == 0;
  return v1;
}
