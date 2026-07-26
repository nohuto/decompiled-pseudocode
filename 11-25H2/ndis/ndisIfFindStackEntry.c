/*
 * XREFs of ndisIfFindStackEntry @ 0x14004BDE0
 * Callers:
 *     NdisIfAddIfStackEntry @ 0x14004BB90 (NdisIfAddIfStackEntry.c)
 *     NdisIfDeleteIfStackEntry @ 0x1400CF7A0 (NdisIfDeleteIfStackEntry.c)
 * Callees:
 *     <none>
 */

PVOID *__fastcall ndisIfFindStackEntry(int a1, int a2)
{
  PVOID *result; // rax

  for ( result = (PVOID *)P; result != &P; result = (PVOID *)*result )
  {
    if ( *((_DWORD *)result + 4) == a1 && *((_DWORD *)result + 5) == a2 )
      return result;
  }
  return 0LL;
}
