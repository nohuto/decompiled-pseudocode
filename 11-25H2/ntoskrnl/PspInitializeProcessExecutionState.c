/*
 * XREFs of PspInitializeProcessExecutionState @ 0x1404B73DC
 * Callers:
 *     PspComputeExecutionState @ 0x1408D8C70 (PspComputeExecutionState.c)
 *     PspRemoveProcessFromJobChain @ 0x1408E09E4 (PspRemoveProcessFromJobChain.c)
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
