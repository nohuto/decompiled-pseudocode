/*
 * XREFs of ExGetHandleAttributes @ 0x1403FA940
 * Callers:
 *     ExpSnapShotHandleTables @ 0x140921A40 (ExpSnapShotHandleTables.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ExGetHandleAttributes(unsigned int *a1, int a2)
{
  unsigned int v2; // eax

  v2 = ((__int64)*a1 >> 17) & 7 | 8;
  if ( (a1[2] & 0x2000000) == 0 )
    v2 = ((__int64)*a1 >> 17) & 7;
  return a2 & v2;
}
