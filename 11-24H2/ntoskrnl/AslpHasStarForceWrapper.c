/*
 * XREFs of AslpHasStarForceWrapper @ 0x140810508
 * Callers:
 *     AslpFileGetExeWrapper @ 0x14080DDA4 (AslpFileGetExeWrapper.c)
 * Callees:
 *     strncmp @ 0x1406C0A20 (strncmp.c)
 */

__int64 __fastcall AslpHasStarForceWrapper(__int64 a1)
{
  __int64 v1; // rdi
  unsigned int v3; // ebx
  unsigned int i; // esi

  v1 = *(unsigned __int16 *)(a1 + 20) + a1 + 24;
  v3 = 0;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 6); ++i )
  {
    if ( *(_DWORD *)(v1 + 12) && *(_DWORD *)(v1 + 8) && !strncmp((const char *)v1, ".ps4", 8uLL) )
      return 1;
    v1 += 40LL;
  }
  return v3;
}
