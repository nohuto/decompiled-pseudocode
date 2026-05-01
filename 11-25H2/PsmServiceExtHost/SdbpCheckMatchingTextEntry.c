/*
 * XREFs of SdbpCheckMatchingTextEntry @ 0x18009A16C
 * Callers:
 *     SdbpCheckMatchingText @ 0x18009A040 (SdbpCheckMatchingText.c)
 * Callees:
 *     AslLogCallPrintf @ 0x1800717F0 (AslLogCallPrintf.c)
 *     SdbpInitializeSearchDBContext @ 0x18009B5C0 (SdbpInitializeSearchDBContext.c)
 *     SdbpResolveMatchingFile @ 0x18009B9F8 (SdbpResolveMatchingFile.c)
 *     AslFileNotFound @ 0x18009D6D0 (AslFileNotFound.c)
 *     AslFree @ 0x18009D6FC (AslFree.c)
 *     AslStringSearchA @ 0x18009E820 (AslStringSearchA.c)
 *     AslStringSearchW @ 0x18009E8B8 (AslStringSearchW.c)
 *     AslFileMappingCreate @ 0x18009EB18 (AslFileMappingCreate.c)
 *     AslFileMappingDelete @ 0x18009ED88 (AslFileMappingDelete.c)
 *     AslFileMappingEnsureMappedAs @ 0x18009EED0 (AslFileMappingEnsureMappedAs.c)
 *     AslFileMappingGetViewBase @ 0x18009F3A0 (AslFileMappingGetViewBase.c)
 *     memcpy_0 @ 0x1800A7802 (memcpy_0.c)
 */

__int64 __fastcall SdbpCheckMatchingTextEntry(
        __int64 a1,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int a5,
        int a6,
        unsigned int a7,
        int *a8,
        int *a9)
{
  int *v11; // r15
  __int64 v12; // rdx
  __int64 v13; // r10
  unsigned int v14; // r12d
  __int64 v15; // rbx
  int v16; // eax
  int v17; // r8d
  int *v18; // r14
  int i; // edi
  __int64 v20; // r9
  int v21; // eax
  __int64 v22; // r8
  __int64 v23; // rcx
  int v24; // ecx
  __int64 ViewBase; // rax
  unsigned int v26; // esi
  unsigned int v27; // edi
  int v28; // ebx
  int v29; // ebx
  struct _PEB *v30; // rax
  unsigned int v31; // r15d
  PVOID Heap; // rax
  const void *v33; // rdx
  __int64 v34; // rax
  int v35; // ecx
  unsigned __int64 v36; // rax
  __int64 v37; // rcx
  __int64 v39; // [rsp+30h] [rbp-28h] BYREF
  __int64 v40; // [rsp+38h] [rbp-20h] BYREF
  unsigned __int64 v41; // [rsp+40h] [rbp-18h]
  int v43; // [rsp+A8h] [rbp+50h]
  unsigned __int16 *v44; // [rsp+B0h] [rbp+58h]
  PVOID v46; // [rsp+D8h] [rbp+80h]

  v44 = a3;
  v11 = a9;
  v12 = 0LL;
  v13 = a1;
  v43 = 0;
  v14 = 0;
  v40 = 0LL;
  v15 = 0LL;
  v39 = 0LL;
  *a8 = 0;
  *a9 = 0;
  if ( (*(_BYTE *)a2 & 1) == 0 )
  {
    v16 = SdbpInitializeSearchDBContext(a2);
    v12 = 0LL;
    if ( !v16 )
    {
      AslLogCallPrintf(1LL);
      v12 = 0LL;
      v17 = 1;
      goto LABEL_45;
    }
    v13 = a1;
    a3 = v44;
  }
  v18 = *(int **)(a2 + 72);
  for ( i = 0; ; ++i )
  {
    if ( i >= *v18 )
    {
      v17 = 1;
      goto LABEL_43;
    }
    v20 = -1LL;
    do
      ++v20;
    while ( a3[v20] );
    if ( !(unsigned int)SdbpResolveMatchingFile(v13, a2, a3, v20, &v18[12 * i + 2], &v40) )
      goto LABEL_40;
    v21 = AslFileMappingCreate(&v39, v40);
    v15 = v39;
    v23 = (unsigned int)v21;
    if ( v21 >= 0 )
      v23 = (unsigned int)AslFileMappingEnsureMappedAs(v39, 0LL, v22);
    if ( !(unsigned int)AslFileNotFound(v23) )
      break;
    AslFileMappingDelete(v15);
    v39 = 0LL;
    AslFree(NtCurrentPeb()->ProcessHeap, v40);
    v15 = v39;
    v12 = 0LL;
    v13 = a1;
    a3 = v44;
    v40 = 0LL;
  }
  if ( v24 >= 0 )
  {
    v17 = 1;
    if ( i > 0 )
      *a9 = 1;
    if ( v15 )
    {
      ViewBase = AslFileMappingGetViewBase(v15);
      v26 = a7;
      v27 = v12;
      if ( (unsigned __int64)a7 >= *(_QWORD *)(v15 + 24) )
        v26 = *(_DWORD *)(v15 + 24);
      v41 = ViewBase;
      if ( a5 <= v26 )
      {
        v28 = v12;
        LOBYTE(v28) = a6 == 3;
        v29 = v17 + v28;
        while ( v27 < v26 )
        {
          if ( v27 > a5 )
            v27 += v29 - a5;
          v30 = NtCurrentPeb();
          v31 = v26 - v27;
          if ( v26 - v27 > 0x1000 )
            v31 = 4096;
          Heap = RtlAllocateHeap(v30->ProcessHeap, 8u, v31 + 2LL);
          v46 = Heap;
          if ( !Heap || (v33 = (const void *)(v41 + v27), (unsigned __int64)v33 < v41) )
          {
LABEL_38:
            AslLogCallPrintf(1LL);
            v15 = v39;
            v11 = a9;
            goto LABEL_41;
          }
          memcpy_0(Heap, v33, v31);
          if ( a6 == 1 || a6 == 2 )
          {
            v34 = AslStringSearchA(v46, v31, a4, a5);
            v35 = v43;
            if ( v34 )
              v35 = 1;
            v43 = v35;
          }
          else
          {
            if ( a6 != 3 )
              goto LABEL_38;
            if ( AslStringSearchW(v46, v31 >> 1, a4, a5 >> 1) )
              v43 = 1;
          }
          v27 += v31;
          AslFree(NtCurrentPeb()->ProcessHeap, v46);
        }
        v17 = 1;
        v15 = v39;
        v12 = 0LL;
        v11 = a9;
        *a8 = v43;
        goto LABEL_44;
      }
    }
LABEL_43:
    *a8 = v12;
LABEL_44:
    v14 = v17;
    goto LABEL_45;
  }
LABEL_40:
  AslLogCallPrintf(1LL);
LABEL_41:
  v12 = 0LL;
  v17 = 1;
LABEL_45:
  v36 = *v44;
  LOWORD(v36) = v36 - 37;
  if ( (unsigned __int16)v36 <= 0x37u )
  {
    v37 = 0x80000000000201LL;
    if ( _bittest64(&v37, v36) )
      *v11 = v17;
  }
  if ( v40 != v12 )
  {
    AslFree(NtCurrentPeb()->ProcessHeap, v40);
    v15 = v39;
  }
  if ( v15 )
    AslFileMappingDelete(v15);
  return v14;
}
