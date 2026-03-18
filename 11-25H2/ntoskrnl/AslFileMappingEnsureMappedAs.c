/*
 * XREFs of AslFileMappingEnsureMappedAs @ 0x1407F96BC
 * Callers:
 *     SdbOpenDatabaseEx @ 0x1407F10C4 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x1407F38C0 (SdbpCheckMatchingTextEntry.c)
 *     AslpFileGetChecksumAttributes @ 0x1407FD130 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     RtlFileMapMapView @ 0x14068B394 (RtlFileMapMapView.c)
 *     AslLogCallPrintf @ 0x140825A60 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x140A8C0CC (AslpFileMappingGetFileKind.c)
 */

__int64 __fastcall AslFileMappingEnsureMappedAs(__int64 a1)
{
  _DWORD *v1; // rsi
  int v2; // eax
  int v5; // eax
  int FileKind; // ebx

  v1 = (_DWORD *)(a1 + 64);
  v2 = *(_DWORD *)(a1 + 64);
  if ( *(_DWORD *)(a1 + 80) )
  {
    if ( v2 != 1 )
      return 3221226605LL;
    return 3221225758LL;
  }
  if ( v2 == 1 )
    return 3221225758LL;
  v5 = RtlFileMapMapView(a1 + 8, 0);
  FileKind = v5;
  if ( v5 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 59) )
    {
      *v1 = 6;
    }
    else
    {
      FileKind = AslpFileMappingGetFileKind(a1 + 8, v1);
      if ( FileKind < 0 )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"AslFileMappingEnsureMappedAs",
          503,
          (unsigned int)"AslpFileMappingGetFileKind failed %S [%x]");
        *v1 = 3;
      }
    }
  }
  else if ( v5 == -1073741554 && !*(_BYTE *)(a1 + 59) )
  {
    return 0;
  }
  return (unsigned int)FileKind;
}
