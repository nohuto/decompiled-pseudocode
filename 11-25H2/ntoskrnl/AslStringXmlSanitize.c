/*
 * XREFs of AslStringXmlSanitize @ 0x140AAE338
 * Callers:
 *     AslpFileGetClrVersionAttribute @ 0x1407FD54C (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1407FDE80 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetPeExportNameAttribute @ 0x1407FE844 (AslpFileGetPeExportNameAttribute.c)
 *     AslpFileMakeStringVersionAttributes @ 0x1407FF91C (AslpFileMakeStringVersionAttributes.c)
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
        if ( *a1 >= *(_WORD *)((char *)qword_14001E668 + i) && *a1 <= *(_WORD *)((char *)qword_14001E668 + i + 2) )
          goto LABEL_13;
      }
      *a1 = 64;
LABEL_13:
      ++a1;
    }
  }
  return 0LL;
}
