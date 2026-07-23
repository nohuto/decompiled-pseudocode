/*
 * XREFs of wcscmp @ 0x180125950
 * Callers:
 *     LdrpFusionManifestCodePages @ 0x180009898 (LdrpFusionManifestCodePages.c)
 * Callees:
 *     <none>
 */

int __cdecl wcscmp(const wchar_t *String1, const wchar_t *String2)
{
  int v2; // eax
  unsigned int v3; // r8d
  signed __int64 v4; // rcx

  v2 = *String2;
  v3 = *String1 - v2;
  if ( !v3 )
  {
    v4 = (char *)String1 - (char *)String2;
    do
    {
      if ( !(_WORD)v2 )
        break;
      v2 = *++String2;
      v3 = *(const wchar_t *)((char *)String2 + v4) - v2;
    }
    while ( !v3 );
  }
  return ((int)v3 > 0) - (v3 >> 31);
}
