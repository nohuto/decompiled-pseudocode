/*
 * XREFs of KeIsBugCheckActive @ 0x1404183C0
 * Callers:
 *     KiSendThawExecution @ 0x1404D8230 (KiSendThawExecution.c)
 * Callees:
 *     <none>
 */

char __fastcall KeIsBugCheckActive(unsigned int *a1)
{
  if ( (KiBugCheckActive & 3) == 0 )
    return 0;
  if ( a1 )
    *a1 = (unsigned int)KiBugCheckActive >> 4;
  return 1;
}
