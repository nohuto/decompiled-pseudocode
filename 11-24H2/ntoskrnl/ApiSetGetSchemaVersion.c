/*
 * XREFs of ApiSetGetSchemaVersion @ 0x14065E200
 * Callers:
 *     ApiSetLoadSchemaWithExtensions @ 0x1407C9D10 (ApiSetLoadSchemaWithExtensions.c)
 * Callees:
 *     <none>
 */

__int16 __fastcall ApiSetGetSchemaVersion(__int64 a1)
{
  __int16 v1; // ax

  if ( *(_BYTE *)a1 == 7 )
  {
    v1 = *(unsigned __int8 *)(a1 + 1);
    return v1 | 0x700;
  }
  if ( *(_DWORD *)a1 == 6 && *(_DWORD *)(a1 + 16) > 8u && *(_BYTE *)(a1 + 28) == 7 )
  {
    v1 = *(unsigned __int8 *)(a1 + 29);
    return v1 | 0x700;
  }
  return *(_WORD *)a1 << 8;
}
