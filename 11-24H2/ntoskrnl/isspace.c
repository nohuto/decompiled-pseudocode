/*
 * XREFs of isspace @ 0x1404FC300
 * Callers:
 *     ?ScTrimString@@YAXPEAD@Z @ 0x14069E460 (-ScTrimString@@YAXPEAD@Z.c)
 *     CmpGetToken @ 0x140C1A318 (CmpGetToken.c)
 * Callees:
 *     <none>
 */

int __cdecl isspace(int C)
{
  int v1; // eax

  v1 = (unsigned __int8)C;
  if ( C == -1 )
    v1 = -1;
  return off_140E00150[v1] & 8;
}
