/*
 * XREFs of AslFileMappingEnsure @ 0x18009F0F0
 * Callers:
 *     AslFileMappingGetFileKindDetail @ 0x18009F290 (AslFileMappingGetFileKindDetail.c)
 *     AslFileMappingGetImageTypeEx @ 0x18009F454 (AslFileMappingGetImageTypeEx.c)
 *     AslFileAllocAndGetAttributes @ 0x18009FB14 (AslFileAllocAndGetAttributes.c)
 *     AslpFileGetClrVersionAttribute @ 0x1800A07A0 (AslpFileGetClrVersionAttribute.c)
 *     AslpFileGetExeWrapperAttribute @ 0x1800A0EEC (AslpFileGetExeWrapperAttribute.c)
 *     AslpFileGetHeaderAttributesNE @ 0x1800A10EC (AslpFileGetHeaderAttributesNE.c)
 *     AslpFileGetHeaderAttributesPE @ 0x1800A1294 (AslpFileGetHeaderAttributesPE.c)
 *     AslpFileGetPeExportNameAttribute @ 0x1800A1AB8 (AslpFileGetPeExportNameAttribute.c)
 *     AslpFileGetVersionBlock @ 0x1800A1C84 (AslpFileGetVersionBlock.c)
 *     AslpFileGetVersionBlockImageOnly @ 0x1800A253C (AslpFileGetVersionBlockImageOnly.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x18009F6A8 (AslpFileMappingGetFileKind.c)
 *     RtlFileMapMapView @ 0x18009F928 (RtlFileMapMapView.c)
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
