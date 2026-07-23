/*
 * XREFs of SdbpCheckMatchingDir @ 0x140803330
 * Callers:
 *     <none>
 * Callees:
 *     SdbpInitializeSearchDBContext @ 0x140805650 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140805CD0 (SdbpResolveMatchingFile.c)
 *     AslDoesDirectoryExistNtPath @ 0x140808DE8 (AslDoesDirectoryExistNtPath.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingDir(
        _DWORD *a1,
        __int64 a2,
        __int64 a3,
        __int64 a4,
        unsigned int a5,
        PCWSTR SourceString)
{
  unsigned int v7; // ebx
  int DoesDirectoryExistNtPath; // r12d
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  unsigned __int16 *v11; // r15
  const char *v12; // r9
  int v13; // r8d
  __int64 v14; // r14
  PCWSTR v15; // rsi
  int *v16; // r13
  int i; // ebp
  __int64 v18; // rcx
  unsigned __int64 v19; // rax
  __int64 v20; // rcx

  v7 = 0;
  DoesDirectoryExistNtPath = 0;
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( FirstTag )
  {
    StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
    v11 = (unsigned __int16 *)StringTagPtr;
    if ( !StringTagPtr )
    {
      v12 = "Failed to get the string from the database";
      v13 = 3071;
LABEL_4:
      AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingDir", v13, (_DWORD)v12);
      goto LABEL_21;
    }
    v14 = -1LL;
    do
      ++v14;
    while ( *(_WORD *)(StringTagPtr + 2 * v14) );
    v15 = SourceString;
    if ( (*(_DWORD *)SourceString & 1) == 0 && !(unsigned int)SdbpInitializeSearchDBContext(SourceString) )
    {
      v12 = "Failed to initialize SEARCHDBCONTEXT";
      v13 = 3084;
      goto LABEL_4;
    }
    v16 = (int *)*((_QWORD *)v15 + 9);
    for ( i = 0; i < *v16; ++i )
    {
      SourceString = 0LL;
      if ( !(unsigned int)SdbpResolveMatchingFile(a2, v15, v11, (unsigned int)v14, &v16[12 * i + 2], &SourceString) )
      {
        v12 = "Failed to resolve matching dir";
        v13 = 3108;
        goto LABEL_4;
      }
      DoesDirectoryExistNtPath = AslDoesDirectoryExistNtPath(SourceString);
      AslFree(v18);
      if ( DoesDirectoryExistNtPath )
      {
        if ( i > 0 )
          *((_DWORD *)v15 + 20) = 1;
        break;
      }
    }
    v19 = *v11;
    LOWORD(v19) = v19 - 37;
    if ( (unsigned __int16)v19 <= 0x37u )
    {
      v20 = 0x80000000000201LL;
      if ( _bittest64(&v20, v19) )
        *((_DWORD *)v15 + 20) = 1;
    }
    v7 = 1;
  }
LABEL_21:
  *a1 = DoesDirectoryExistNtPath;
  return v7;
}
