/*
 * XREFs of MiPageIndexToMoveInProgress @ 0x14026489C
 * Callers:
 *     MiGetLargePageDemoteAsNeeded @ 0x140263DE4 (MiGetLargePageDemoteAsNeeded.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall MiPageIndexToMoveInProgress(unsigned int a1, int a2)
{
  unsigned int v2; // r8d
  __int64 result; // rax

  v2 = 0;
  result = 2LL;
  if ( !a2 )
  {
    LOBYTE(v2) = a1 < 2;
    return v2;
  }
  return result;
}
