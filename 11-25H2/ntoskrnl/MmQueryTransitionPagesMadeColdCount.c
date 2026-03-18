/*
 * XREFs of MmQueryTransitionPagesMadeColdCount @ 0x140492694
 * Callers:
 *     PfSnCheckActionsNeeded @ 0x140826AA8 (PfSnCheckActionsNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MmQueryTransitionPagesMadeColdCount(unsigned int *a1)
{
  *a1 = ((unsigned int)HvlEnlightenments >> 21) & 1;
  return (unsigned int)dword_140E35A14;
}
