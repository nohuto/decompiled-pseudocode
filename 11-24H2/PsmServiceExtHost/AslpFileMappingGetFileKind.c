/*
 * XREFs of AslpFileMappingGetFileKind @ 0x18009F6A8
 * Callers:
 *     AslFileMappingEnsure @ 0x18009F0F0 (AslFileMappingEnsure.c)
 *     AslFileMappingEnsureMappedAs @ 0x18009F1C0 (AslFileMappingEnsureMappedAs.c)
 *     AslpFileLargeEnsureLargeFileMapping @ 0x1800A7110 (AslpFileLargeEnsureLargeFileMapping.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 */

__int64 __fastcall AslpFileMappingGetFileKind(_QWORD *a1, int *a2)
{
  unsigned int v3; // ebx
  __int64 v4; // rdx
  int v5; // edi
  __int64 v6; // rax

  v3 = 0;
  if ( !a1[2] || !a1[4] )
  {
    *a2 = 1;
    return 0LL;
  }
  if ( a1[2] < 0x40uLL )
  {
    *a2 = 3;
    return 0LL;
  }
  v4 = a1[3];
  v5 = 3;
  if ( (unsigned __int64)(v4 - 1) > 0xFFFFFFFFFFFFFFFDuLL )
  {
    v3 = -1073741811;
    AslLogCallPrintf(1LL);
  }
  else if ( *(_WORD *)v4 == 23117 )
  {
    v5 = 4;
    v6 = *(unsigned int *)(v4 + 60);
    if ( a1[2] >= (unsigned __int64)(v6 + 4) )
    {
      if ( *(_DWORD *)((unsigned int)v6 + v4) == 17744 )
      {
        v5 = 6;
      }
      else if ( *(_WORD *)((unsigned int)v6 + v4) == 17742 )
      {
        v5 = 5;
      }
    }
  }
  *a2 = v5;
  return v3;
}
