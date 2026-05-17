/*
 * XREFs of isprint @ 0x180121A40
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isprint(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_1801CC150[v1] & 0x157;
}
