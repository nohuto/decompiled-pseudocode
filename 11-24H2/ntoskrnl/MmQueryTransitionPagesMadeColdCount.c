/*
 * XREFs of MmQueryTransitionPagesMadeColdCount @ 0x1404917D0
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x140961228 (PfSnCheckActionsNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQueryTransitionPagesMadeColdCount(unsigned int *a1)
{
  *a1 = ((unsigned int)HvlEnlightenments >> 21) & 1;
  return (unsigned int)dword_140E35C54;
}
