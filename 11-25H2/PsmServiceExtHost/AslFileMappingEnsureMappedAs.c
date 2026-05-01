/*
 * XREFs of AslFileMappingEnsureMappedAs @ 0x18009EED0
 * Callers:
 *     SdbOpenDatabaseEx @ 0x180092550 (SdbOpenDatabaseEx.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A16C (SdbpCheckMatchingTextEntry.c)
 *     AslpFileGetChecksumAttributes @ 0x1800A0078 (AslpFileGetChecksumAttributes.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     AslpFileMappingGetFileKind @ 0x18009F3B8 (AslpFileMappingGetFileKind.c)
 *     RtlFileMapMapView @ 0x18009F638 (RtlFileMapMapView.c)
 */

__int64 __fastcall AslFileMappingEnsureMappedAs(__int64 a1)
{
  _DWORD *v1; // rsi
  int v2; // eax
  int v5; // eax
  int FileKind; // ebx

  v1 = (_DWORD *)(a1 + 56);
  v2 = *(_DWORD *)(a1 + 56);
  if ( *(_DWORD *)(a1 + 72) )
  {
    if ( v2 != 1 )
      return 3221226605LL;
    return 3221225758LL;
  }
  if ( v2 == 1 )
    return 3221225758LL;
  v5 = RtlFileMapMapView(a1 + 8, 0LL);
  FileKind = v5;
  if ( v5 >= 0 )
  {
    if ( *(_BYTE *)(a1 + 51) )
    {
      *v1 = 6;
    }
    else
    {
      FileKind = AslpFileMappingGetFileKind(a1 + 8, v1);
      if ( FileKind < 0 )
      {
        AslLogCallPrintf(1LL);
        *v1 = 3;
      }
    }
  }
  else if ( v5 == -1073741554 && !*(_BYTE *)(a1 + 51) )
  {
    return 0;
  }
  return (unsigned int)FileKind;
}
