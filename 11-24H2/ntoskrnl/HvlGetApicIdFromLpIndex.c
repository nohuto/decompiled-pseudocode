/*
 * XREFs of HvlGetApicIdFromLpIndex @ 0x140580650
 * Callers:
 *     KiQueryProcessorNode @ 0x1405B8EF0 (KiQueryProcessorNode.c)
 * Callees:
 *     HvlpGetLpcbByLpIndex @ 0x140440CF0 (HvlpGetLpcbByLpIndex.c)
 */

__int128 *__fastcall HvlGetApicIdFromLpIndex(unsigned int a1, _DWORD *a2)
{
  __int128 *result; // rax
  _DWORD *v3; // r10

  *a2 = -1;
  result = (__int128 *)HvlpFlags;
  if ( (HvlpFlags & 2) != 0 )
  {
    result = HvlpGetLpcbByLpIndex(a1);
    if ( result )
    {
      result = (__int128 *)*((unsigned int *)result + 2);
      *v3 = (_DWORD)result;
    }
  }
  return result;
}
