/*
 * XREFs of AslFileMappingEnsure @ 0x1407F95EC
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x1407F978C (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x1407F9950 (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x1407FC8EC (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1407FD54C (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExeWrapperAttribute @ 0x1407FDC80 (AslpFileGetExeWrapperAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1407FDE80 (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x1407FE028 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameAttribute @ 0x1407FE844 (AslpFileGetPeExportNameAttribute.c)
 *     AslpFileGetVersionBlock @ 0x1407FEA10 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x1407FF218 (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     RtlFileMapMapView @ 0x14068B394 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x140A8C0CC (AslpFileMappingGetFileKind.c)
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
