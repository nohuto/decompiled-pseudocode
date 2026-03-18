/*
 * XREFs of AslpFileHasSecuromWrapper @ 0x14080F15C
 * Callers:
 *     AslpFileGetExeWrapper @ 0x14080D664 (AslpFileGetExeWrapper.c)
 * Callees:
 *     strncmp @ 0x1406BFB20 (strncmp.c)
 */

__int64 __fastcall AslpFileHasSecuromWrapper(__int64 a1)
{
  unsigned int v1; // ebx
  __int64 v3; // rdi
  unsigned int i; // esi

  v1 = 0;
  v3 = *(unsigned __int16 *)(a1 + 20) + a1 + 24;
  for ( i = 0; i < *(unsigned __int16 *)(a1 + 6); ++i )
  {
    if ( *(_DWORD *)(v3 + 12) && *(_DWORD *)(v3 + 8) && !strncmp((const char *)v3, ".securom", 8uLL) )
      return 1;
    v3 += 40LL;
  }
  return v1;
}
