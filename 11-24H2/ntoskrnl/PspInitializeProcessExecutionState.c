/*
 * XREFs of PspInitializeProcessExecutionState @ 0x1404B4F74
 * Callers:
 *     PspRemoveProcessFromJobChain @ 0x1408A9078 (PspRemoveProcessFromJobChain.c)
 *     PspComputeExecutionState @ 0x1408E7EA8 (PspComputeExecutionState.c)
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
