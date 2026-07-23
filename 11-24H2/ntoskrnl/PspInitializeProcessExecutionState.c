/*
 * XREFs of PspInitializeProcessExecutionState @ 0x1404AF774
 * Callers:
 *     PspComputeExecutionState @ 0x1408D86EC (PspComputeExecutionState.c)
 *     PspRemoveProcessFromJobChain @ 0x1408FF2D8 (PspRemoveProcessFromJobChain.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall PspInitializeProcessExecutionState(_BYTE *a1)
{
  __int64 result; // rax

  result = 0LL;
  *a1 = 0;
  return result;
}
