/*
 * XREFs of AslStringXmlSanitize @ 0x18009E958
 * Callers:
 *     AslpFileGetClrVersionAttribute @ 0x1800A04B0 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1800A0DFC (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetPeExportNameAttribute @ 0x1800A17C8 (AslpFileGetPeExportNameAttribute.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1800A29B8 (AslpFileMakeStringVersionAttributes.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall AslStringXmlSanitize(_WORD *a1)
{
  __int64 v2; // rax
  unsigned __int64 i; // rdx

  if ( !a1 )
    return 3221225485LL;
  if ( *a1 )
  {
    v2 = -1LL;
    do
      ++v2;
    while ( a1[v2] );
    for ( ; v2; --v2 )
    {
      for ( i = 0LL; i < 0x14; i += 4LL )
      {
        if ( *a1 >= *(_WORD *)&asc_1800CD260[i] && *a1 <= *(_WORD *)&asc_1800CD260[i + 2] )
          goto LABEL_13;
      }
      *a1 = 64;
LABEL_13:
      ++a1;
    }
  }
  return 0LL;
}
