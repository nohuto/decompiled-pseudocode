/*
 * XREFs of SdbpCheckMatchingFiles @ 0x1800996E0
 * Callers:
 *     <none>
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpCheckAllAttributes @ 0x180096ABC (SdbpCheckAllAttributes.c)
 *     SdbFindFirstTag @ 0x180097A8C (SdbFindFirstTag.c)
 *     SdbGetStringTagPtr @ 0x180097D74 (SdbGetStringTagPtr.c)
 *     SdbpInitializeSearchDBContext @ 0x18009B5C0 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x18009B9F8 (SdbpResolveMatchingFile.c)
 *     AslFileNotFound @ 0x18009D6D0 (AslFileNotFound.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 *     AslFileMappingCreate @ 0x18009EB18 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x18009ED88 (AslFileMappingDelete.c)
 */

__int64 __fastcall SdbpCheckMatchingFiles(_DWORD *a1, __int64 a2, __int64 a3, __int64 a4, unsigned int a5, __int64 a6)
{
  unsigned int v7; // edi
  __int64 v9; // r13
  unsigned int FirstTag; // eax
  _WORD *StringTagPtr; // r15
  __int64 v12; // rsi
  unsigned int v13; // eax
  int v14; // ecx
  __int64 v15; // r12
  int *v16; // rdx
  int v17; // r14d
  unsigned __int64 v18; // rax
  __int64 v19; // rcx
  unsigned int v21; // [rsp+30h] [rbp-20h] BYREF
  __int64 v22; // [rsp+38h] [rbp-18h] BYREF
  int *v23; // [rsp+40h] [rbp-10h]

  v7 = 0;
  v21 = 0;
  v22 = 0LL;
  v9 = 0LL;
  FirstTag = SdbFindFirstTag(a3, a5, 24577);
  if ( !FirstTag )
    goto LABEL_27;
  StringTagPtr = (_WORD *)SdbGetStringTagPtr(a3, FirstTag);
  if ( !StringTagPtr )
  {
LABEL_8:
    AslLogCallPrintf(1LL);
    goto LABEL_27;
  }
  v12 = a6;
  if ( *StringTagPtr != 42 )
  {
    v15 = -1LL;
    do
      ++v15;
    while ( StringTagPtr[v15] );
    if ( (*(_BYTE *)a6 & 1) == 0 && !(unsigned int)SdbpInitializeSearchDBContext(a6) )
      goto LABEL_8;
    v16 = *(int **)(v12 + 72);
    v17 = 0;
    v23 = v16;
    while ( v17 < *v16 )
    {
      if ( !(unsigned int)SdbpResolveMatchingFile(a2, v12, StringTagPtr, (unsigned int)v15, &v16[12 * v17 + 2], &v22) )
        goto LABEL_8;
      a6 = 0LL;
      if ( (int)AslFileMappingCreate(&a6, v22) >= 0 )
      {
        v9 = a6;
        if ( (int)SdbpCheckAllAttributes(&v21, a2, a3, a5, a6) >= 0 )
        {
          if ( v17 > 0 )
            *(_DWORD *)(v12 + 80) = 1;
          break;
        }
        AslFileMappingDelete(v9);
        a6 = 0LL;
      }
      AslFree(NtCurrentPeb()->ProcessHeap, v22);
      v16 = v23;
      ++v17;
      v9 = a6;
      v22 = 0LL;
    }
    v18 = (unsigned __int16)*StringTagPtr;
    LOWORD(v18) = v18 - 37;
    if ( (unsigned __int16)v18 <= 0x37u )
    {
      v19 = 0x80000000000201LL;
      if ( _bittest64(&v19, v18) )
        *(_DWORD *)(v12 + 80) = 1;
    }
LABEL_26:
    v7 = 1;
    goto LABEL_27;
  }
  if ( !*(_QWORD *)(a6 + 8) )
  {
    v21 = 1;
    goto LABEL_26;
  }
  v13 = SdbpCheckAllAttributes(&v21, a2, a3, a5, *(_QWORD *)(a6 + 8));
  if ( !(unsigned int)AslFileNotFound(v13) && v14 < 0 )
    goto LABEL_8;
  v7 = 1;
LABEL_27:
  AslFileMappingDelete(v9);
  AslFree(NtCurrentPeb()->ProcessHeap, v22);
  *a1 = v21;
  return v7;
}
