/*
 * XREFs of SdbpCheckMatchingFiles @ 0x1408034C0
 * Callers:
 *     <none>
 * Callees:
 *     AslFileNotFound @ 0x1406F95F0 (AslFileNotFound.c)
 *     SdbpInitializeSearchDBContext @ 0x140805650 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140805CD0 (SdbpResolveMatchingFile.c)
 *     SdbpCheckAllAttributes @ 0x140807A9C (SdbpCheckAllAttributes.c)
 *     AslFileMappingCreate @ 0x140941554 (AslFileMappingCreate.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslFileMappingDelete @ 0x140944898 (AslFileMappingDelete.c)
 *     SdbGetStringTagPtr @ 0x140947558 (SdbGetStringTagPtr.c)
 *     SdbFindFirstTag @ 0x140947AFC (SdbFindFirstTag.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingFiles(int *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v6; // edi
  int v8; // r15d
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // r12
  const char *v11; // r9
  int v12; // r8d
  __int64 v13; // rsi
  int v14; // eax
  int v15; // ecx
  __int64 v16; // r13
  int *v17; // rdx
  int v18; // r15d
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned __int64 v21; // rax
  __int64 v22; // rcx
  __int64 v23; // rcx
  int v25; // [rsp+30h] [rbp-20h] BYREF
  __int64 v26; // [rsp+38h] [rbp-18h]
  __int64 v27; // [rsp+40h] [rbp-10h] BYREF
  int *v28; // [rsp+48h] [rbp-8h]
  int v31; // [rsp+A0h] [rbp+50h]

  v31 = a3;
  v6 = 0;
  v8 = a2;
  v25 = 0;
  v27 = 0LL;
  v26 = 0LL;
  FirstTag = SdbFindFirstTag(a3, a5, 24577LL);
  if ( !FirstTag )
    goto LABEL_31;
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a3, FirstTag);
  if ( !StringTagPtr )
  {
    v11 = "Failed to get the string from the database";
    v12 = 3208;
LABEL_4:
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingFiles", v12, (_DWORD)v11);
    goto LABEL_31;
  }
  v13 = a6;
  if ( *StringTagPtr != 42 )
  {
    v16 = -1LL;
    do
      ++v16;
    while ( StringTagPtr[v16] );
    if ( (*(_DWORD *)a6 & 1) == 0 && !(unsigned int)SdbpInitializeSearchDBContext(a6) )
    {
      v11 = "Failed to initialize SEARCHDBCONTEXT";
      v12 = 3267;
      goto LABEL_4;
    }
    v17 = *(int **)(v13 + 72);
    v18 = 0;
    v28 = v17;
    while ( v18 < *v17 )
    {
      if ( !(unsigned int)SdbpResolveMatchingFile(a2, v13, StringTagPtr, (unsigned int)v16, &v17[12 * v18 + 2], &v27) )
      {
        AslLogCallPrintf(
          1,
          (unsigned int)"SdbpCheckMatchingFiles",
          3291,
          (unsigned int)"Failed to resolve matching file");
        goto LABEL_31;
      }
      a6 = 0LL;
      if ( (int)AslFileMappingCreate((unsigned int)&a6, v27, 0, 0, 0LL) >= 0 )
      {
        v26 = a6;
        if ( (int)SdbpCheckAllAttributes((unsigned int)&v25, a2, v31, a5, a6) >= 0 )
        {
          if ( v18 > 0 )
            *(_DWORD *)(v13 + 80) = 1;
          break;
        }
        AslFileMappingDelete(v26);
        v26 = 0LL;
        AslFree(v20);
      }
      else
      {
        AslFree(v19);
        v26 = a6;
      }
      v17 = v28;
      v27 = 0LL;
      ++v18;
    }
    v21 = (unsigned __int16)*StringTagPtr;
    LOWORD(v21) = v21 - 37;
    if ( (unsigned __int16)v21 <= 0x37u )
    {
      v22 = 0x80000000000201LL;
      if ( _bittest64(&v22, v21) )
        *(_DWORD *)(v13 + 80) = 1;
    }
LABEL_30:
    v6 = 1;
    goto LABEL_31;
  }
  if ( !*(_QWORD *)(a6 + 8) )
  {
    v25 = 1;
    goto LABEL_30;
  }
  v14 = SdbpCheckAllAttributes((unsigned int)&v25, v8, a3, a5, *(_QWORD *)(a6 + 8));
  if ( AslFileNotFound(v14) || v15 >= 0 )
    v6 = 1;
  else
    AslLogCallPrintf(
      1,
      (unsigned int)"SdbpCheckMatchingFiles",
      3233,
      (unsigned int)"Failed to check file attributes [%x]");
LABEL_31:
  AslFileMappingDelete(v26);
  AslFree(v23);
  *a1 = v25;
  return v6;
}
