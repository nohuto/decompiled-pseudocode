/*
 * XREFs of isspace @ 0x180123580
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

int __cdecl isspace(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_1801CE150[v1] & 8;
}
