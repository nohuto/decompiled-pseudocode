/*
 * XREFs of SdbpCheckMatchingDir @ 0x180099880
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     SdbFindFirstTag @ 0x180097EEC (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x1800981D4 (SdbGetStringTagPtr.c)
 *     SdbpInitializeSearchDBContext @ 0x18009B898 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x18009BCE8 (SdbpResolveMatchingFile.c)
 *     AslDoesDirectoryExistNtPath @ 0x18009D5CC (AslDoesDirectoryExistNtPath.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
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
  int DoesDirectoryExistNtPath; // r13d
  unsigned int FirstTag; // eax
  __int64 StringTagPtr; // rax
  unsigned __int16 *v11; // r15
  __int64 v12; // r14
  PCWSTR v13; // rsi
  int *v14; // r12
  int i; // ebp
  unsigned __int64 v16; // rax
  __int64 v17; // rcx

  v7 = 0;
  DoesDirectoryExistNtPath = 0;
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( FirstTag )
  {
    StringTagPtr = SdbGetStringTagPtr(a3, FirstTag);
    v11 = (unsigned __int16 *)StringTagPtr;
    if ( !StringTagPtr )
      goto LABEL_3;
    v12 = -1LL;
    do
      ++v12;
    while ( *(_WORD *)(StringTagPtr + 2 * v12) );
    v13 = SourceString;
    if ( (*(_BYTE *)SourceString & 1) != 0 || (unsigned int)SdbpInitializeSearchDBContext(SourceString) )
    {
      v14 = (int *)*((_QWORD *)v13 + 9);
      for ( i = 0; i < *v14; ++i )
      {
        SourceString = 0LL;
        if ( !(unsigned int)SdbpResolveMatchingFile(a2, v13, v11, (unsigned int)v12, &v14[12 * i + 2], &SourceString) )
          goto LABEL_3;
        DoesDirectoryExistNtPath = AslDoesDirectoryExistNtPath(SourceString);
        AslFree(NtCurrentPeb()->ProcessHeap, SourceString);
        if ( DoesDirectoryExistNtPath )
        {
          if ( i > 0 )
            *((_DWORD *)v13 + 20) = 1;
          break;
        }
      }
      v16 = *v11;
      LOWORD(v16) = v16 - 37;
      if ( (unsigned __int16)v16 <= 0x37u )
      {
        v17 = 0x80000000000201LL;
        if ( _bittest64(&v17, v16) )
          *((_DWORD *)v13 + 20) = 1;
      }
      v7 = 1;
    }
    else
    {
LABEL_3:
      AslLogCallPrintf(1LL);
    }
  }
  *a1 = DoesDirectoryExistNtPath;
  return v7;
}
