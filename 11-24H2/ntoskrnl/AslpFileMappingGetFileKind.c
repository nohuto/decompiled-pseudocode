/*
 * XREFs of AslpFileMappingGetFileKind @ 0x140A8D8CC
 * Callers:
 *     AslFileMappingCreateFromImageView @ 0x14080974C (AslFileMappingCreateFromImageView.c)
 *     AslFileMappingEnsure @ 0x14080989C (AslFileMappingEnsure.c)
 *     AslFileMappingEnsureMappedAs @ 0x14080996C (AslFileMappingEnsureMappedAs.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x140810600 (AslpFileLargeEnsureLargeFileMapping.c)
 *     AslFileMappingCreate @ 0x140941554 (AslFileMappingCreate.c)
 * Callees:
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileMappingGetFileKind(_QWORD *a1, int *a2)
{
  unsigned __int64 v3; // rdx
  unsigned int v4; // ebx
  __int64 v5; // rcx
  int v6; // edi
  __int64 v7; // r8

  v3 = a1[2];
  v4 = 0;
  if ( !v3 || !a1[4] )
  {
    *a2 = 1;
    return 0LL;
  }
  if ( v3 < 0x40 )
  {
    *a2 = 3;
    return 0LL;
  }
  v5 = a1[3];
  v6 = 3;
  if ( (unsigned __int64)(v5 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v4 = -1073741811;
    AslLogCallPrintf(1LL, (__int64)"AslpFileMappingGetFileKind");
  }
  else if ( *(_WORD *)v5 == 23117 )
  {
    v6 = 4;
    v7 = *(unsigned int *)(v5 + 60);
    if ( v3 >= v7 + 4 )
    {
      if ( *(_DWORD *)(v7 + v5) == 17744 )
      {
        v6 = 6;
      }
      else if ( *(_WORD *)(v7 + v5) == 17742 )
      {
        v6 = 5;
      }
    }
  }
  *a2 = v6;
  return v4;
}
