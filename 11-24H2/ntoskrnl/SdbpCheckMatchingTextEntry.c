/*
 * XREFs of SdbpCheckMatchingTextEntry @ 0x140803EB0
 * Callers:
 *     SdbpCheckMatchingText @ 0x140803D90 (SdbpCheckMatchingText.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     AslFileNotFound @ 0x1406F95F0 (AslFileNotFound.c)
 *     SdbpInitializeSearchDBContext @ 0x140805650 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x140805CD0 (SdbpResolveMatchingFile.c)
 *     AslStringSearchA @ 0x140808C30 (AslStringSearchA.c)
 *     AslStringSearchW @ 0x140808CC8 (AslStringSearchW.c)
 *     AslFileMappingEnsureMappedAs @ 0x14080996C (AslFileMappingEnsureMappedAs.c)
 *     AslFileMappingGetViewBase @ 0x140809E34 (AslFileMappingGetViewBase.c)
 *     AslFileMappingCreate @ 0x140941554 (AslFileMappingCreate.c)
 *     AslFree @ 0x1409447E4 (AslFree.c)
 *     AslFileMappingDelete @ 0x140944898 (AslFileMappingDelete.c)
 *     AslAlloc @ 0x140944EA4 (AslAlloc.c)
 *     AslLogCallPrintf @ 0x140947C9C (AslLogCallPrintf.c)
 */

__int64 __fastcall SdbpCheckMatchingTextEntry(
        __int64 a1,
        int *a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        unsigned int *a8,
        _DWORD *a9)
{
  unsigned int v9; // r10d
  _DWORD *v10; // rsi
  void *v11; // rbx
  __int64 v13; // r12
  int v14; // eax
  unsigned int v15; // r13d
  unsigned __int64 v16; // rdi
  int v17; // eax
  int *v18; // rbp
  int i; // esi
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // r8
  int v24; // ecx
  __int64 v25; // rcx
  __int64 ViewBase; // rax
  unsigned __int64 v27; // rdx
  unsigned int v28; // r14d
  unsigned int v29; // esi
  unsigned int v30; // r15d
  unsigned int v31; // r15d
  unsigned int v32; // ebp
  void *v33; // rax
  const void *v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rax
  const char *v37; // r9
  int v38; // r8d
  unsigned __int64 v39; // rax
  unsigned __int64 v41; // [rsp+30h] [rbp-48h] BYREF
  void *v42; // [rsp+38h] [rbp-40h] BYREF
  unsigned int v43; // [rsp+88h] [rbp+10h]
  unsigned __int16 *v44; // [rsp+90h] [rbp+18h]

  v44 = a3;
  v9 = 0;
  v10 = a9;
  v11 = 0LL;
  v41 = 0LL;
  v42 = 0LL;
  v13 = a1;
  v14 = *a2;
  v43 = 0;
  v15 = 0;
  *a8 = 0;
  v16 = 0LL;
  *a9 = 0;
  if ( (v14 & 1) == 0 )
  {
    v17 = SdbpInitializeSearchDBContext(a2);
    v9 = 0;
    if ( !v17 )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingTextEntry",
        1921,
        (unsigned int)"Failed to initialize SEARCHDBCONTEXT");
      goto LABEL_48;
    }
    a3 = v44;
  }
  v18 = (int *)*((_QWORD *)a2 + 9);
  for ( i = 0; ; ++i )
  {
    if ( i >= *v18 )
      goto LABEL_45;
    v20 = -1LL;
    do
      ++v20;
    while ( a3[v20] );
    if ( !(unsigned int)SdbpResolveMatchingFile(v13, a2, a3, v20, &v18[12 * i + 2], &v41) )
    {
      AslLogCallPrintf(
        1,
        (unsigned int)"SdbpCheckMatchingTextEntry",
        1945,
        (unsigned int)"Failed to resolve matching text file");
      v16 = v41;
      goto LABEL_47;
    }
    v16 = v41;
    v21 = AslFileMappingCreate((unsigned int)&v42, v41, 0, 0, 0LL);
    v11 = v42;
    v24 = v21;
    if ( v21 >= 0 )
      v24 = AslFileMappingEnsureMappedAs(v42, v22, v23);
    if ( !AslFileNotFound(v24) )
      break;
    AslFileMappingDelete(v11);
    v11 = 0LL;
    v42 = 0LL;
    AslFree(v25);
    a3 = v44;
    v9 = 0;
    v16 = 0LL;
    v41 = 0LL;
  }
  if ( (int)a1 < 0 )
  {
    AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingTextEntry", 1977, (unsigned int)"Failed to map file [%x]");
    goto LABEL_47;
  }
  if ( i > 0 )
    *a9 = 1;
  if ( !v11 )
    goto LABEL_45;
  ViewBase = AslFileMappingGetViewBase(v11);
  v28 = a7;
  v29 = v9;
  v41 = ViewBase;
  if ( a7 >= v27 )
    v28 = v27;
  if ( a5 > v28 )
  {
LABEL_45:
    *a8 = v9;
    goto LABEL_46;
  }
  v30 = v9;
  LOBYTE(v30) = a6 == 3;
  v31 = v30 + 1;
  while ( 1 )
  {
    a1 = 4096LL;
    if ( v29 >= v28 )
      break;
    if ( v29 > a5 )
      v29 += v31 - a5;
    v32 = v28 - v29;
    if ( v28 - v29 > 0x1000 )
      v32 = 4096;
    v33 = (void *)AslAlloc(4096LL, v32 + 2LL);
    v42 = v33;
    if ( !v33 )
    {
      v37 = "Failed to allocate temp buffer";
      v38 = 2048;
      goto LABEL_40;
    }
    v34 = (const void *)(v41 + v29);
    if ( (unsigned __int64)v34 < v41 )
    {
      v37 = "Overflow doing pointer addition";
      v38 = 2055;
      goto LABEL_40;
    }
    memmove(v33, v34, v32);
    if ( a6 == 1 || a6 == 2 )
    {
      v36 = AslStringSearchA(v42, v32, a4, a5);
      v35 = v43;
      if ( v36 )
        v35 = 1LL;
      v43 = v35;
    }
    else
    {
      if ( a6 != 3 )
      {
        v37 = "Unknown file encoding";
        v38 = 2089;
LABEL_40:
        AslLogCallPrintf(1, (unsigned int)"SdbpCheckMatchingTextEntry", v38, (_DWORD)v37);
        goto LABEL_47;
      }
      if ( AslStringSearchW(v42, v32 >> 1, a4, a5 >> 1) )
        v43 = 1;
    }
    v29 += v32;
    AslFree(v35);
  }
  *a8 = v43;
LABEL_46:
  v15 = 1;
LABEL_47:
  v10 = a9;
LABEL_48:
  v39 = *v44;
  LOWORD(v39) = v39 - 37;
  if ( (unsigned __int16)v39 <= 0x37u )
  {
    a1 = 0x80000000000201LL;
    if ( _bittest64(&a1, v39) )
      *v10 = 1;
  }
  if ( v16 )
    AslFree(a1);
  if ( v11 )
    AslFileMappingDelete(v11);
  return v15;
}
