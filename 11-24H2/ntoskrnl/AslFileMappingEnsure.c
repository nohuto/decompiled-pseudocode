/*
 * XREFs of AslFileMappingEnsure @ 0x14080915C
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x1408092FC (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x1408094C0 (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x14080C45C (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x14080D0BC (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExeWrapperAttribute @ 0x14080D7F0 (AslpFileGetExeWrapperAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x14080D9F0 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x14080DB98 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameAttribute @ 0x14080E3B4 (AslpFileGetPeExportNameAttribute.c)
 *     AslpFileGetVersionBlock @ 0x14080E580 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x14080ED88 (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     RtlFileMapMapView @ 0x1406966E4 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x1409601DC (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x140A911CC (AslpFileMappingGetFileKind.c)
 */

__int64 __fastcall AslFileMappingEnsure(__int64 a1)
{
  int FileKind; // edi
  _DWORD *v4; // rsi

  if ( *(_DWORD *)(a1 + 80) )
  {
    if ( *(_DWORD *)(a1 + 64) != 1 )
      return *(_QWORD *)(a1 + 32) == 0LL ? 0xC000046D : 0;
    return 3221225758LL;
  }
  if ( *(_QWORD *)(a1 + 32) )
  {
    return 0;
  }
  else
  {
    v4 = (_DWORD *)(a1 + 64);
    if ( *(_DWORD *)(a1 + 64) == 1 )
      return 3221225758LL;
    FileKind = RtlFileMapMapView(a1 + 8, 0);
    if ( FileKind >= 0 )
    {
      if ( *(_BYTE *)(a1 + 59) )
      {
        *v4 = 6;
      }
      else
      {
        FileKind = AslpFileMappingGetFileKind(a1 + 8, v4);
        if ( FileKind < 0 )
        {
          AslLogCallPrintf(
            1,
            (unsigned int)"AslFileMappingEnsure",
            591,
            (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]");
          *v4 = 3;
        }
      }
    }
  }
  return (unsigned int)FileKind;
}
