/*
 * XREFs of AslFileMappingEnsure @ 0x18009EE00
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x18009EFA0 (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x18009F164 (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x18009F824 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1800A04B0 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExeWrapperAttribute @ 0x1800A0BFC (AslpFileGetExeWrapperAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1800A0DFC (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x1800A0FA4 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameAttribute @ 0x1800A17C8 (AslpFileGetPeExportNameAttribute.c)
 *     AslpFileGetVersionBlock @ 0x1800A1994 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x1800A224C (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x18009F3B8 (AslpFileMappingGetFileKind.c)
 *     RtlFileMapMapView @ 0x18009F638 (RtlFileMapMapView.c)
 */

__int64 __fastcall AslFileMappingEnsure(__int64 a1)
{
  int FileKind; // edi
  _DWORD *v4; // rsi

  if ( *(_DWORD *)(a1 + 72) )
  {
    if ( *(_DWORD *)(a1 + 56) != 1 )
      return *(_QWORD *)(a1 + 32) == 0LL ? 0xC000046D : 0;
    return 3221225758LL;
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    return 0;
  }
  else
  {
    v4 = (_DWORD *)(a1 + 56);
    if ( *(_DWORD *)(a1 + 56) == 1 )
      return 3221225758LL;
    FileKind = RtlFileMapMapView(a1 + 8, 0LL);
    if ( FileKind >= 0 )
    {
      if ( *(_BYTE *)(a1 + 51) )
      {
        *v4 = 6;
      }
      else
      {
        FileKind = AslpFileMappingGetFileKind(a1 + 8, v4);
        if ( FileKind < 0 )
        {
          AslLogCallPrintf(1LL);
          *v4 = 3;
        }
      }
    }
  }
  return (unsigned int)FileKind;
}
