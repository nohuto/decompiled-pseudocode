/*
 * XREFs of CmpDoesParseEnterRegistryA @ 0x1409A99C0
 * Callers:
 *     CmpParseKey @ 0x1408A77F0 (CmpParseKey.c)
 * Callees:
 *     <none>
 */

bool __fastcall CmpDoesParseEnterRegistryA(__int64 a1, __int64 a2)
{
  _WORD *v3; // r8

  if ( *(_QWORD *)(a1 + 8) != *((_QWORD *)CmpRegistryRootObject + 1) )
    return 0;
  if ( !*(_WORD *)a2 )
    return 0;
  v3 = *(_WORD **)(a2 + 8);
  if ( ((*v3 - 65) & 0xFFDF) != 0 )
    return 0;
  if ( *(_WORD *)a2 <= 2u )
    return 1;
  return v3[1] == 92;
}
