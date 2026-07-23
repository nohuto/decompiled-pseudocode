/*
 * XREFs of HvlQueryHypervisorProcessorNodeNumber @ 0x140580880
 * Callers:
 *     <none>
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x140440CF0 (HvlpGetLpcbByLpIndex.c)
 */

__int64 __fastcall HvlQueryHypervisorProcessorNodeNumber(unsigned int a1)
{
  __int128 *LpcbByLpIndex; // rax
  _WORD *v2; // r10

  if ( (HvlpFlags & 2) == 0 )
    return 3221225473LL;
  if ( a1 >= 0x800 )
    return 3221225473LL;
  LpcbByLpIndex = HvlpGetLpcbByLpIndex(a1);
  if ( !LpcbByLpIndex )
    return 3221225473LL;
  *v2 = *((_WORD *)LpcbByLpIndex + 48);
  return 0LL;
}
