/*
 * XREFs of SdbpResolveMatchingFile @ 0x18009BCE8
 * Callers:
 *     SdbpCheckMatchingDir @ 0x180099880 (SdbpCheckMatchingDir.c)
 *     SdbpCheckMatchingFiles @ 0x180099A30 (SdbpCheckMatchingFiles.c)
 *     SdbpCheckMatchingTextEntry @ 0x18009A4BC (SdbpCheckMatchingTextEntry.c)
 *     SdbpCheckMatchingWildcardFiles @ 0x18009A880 (SdbpCheckMatchingWildcardFiles.c)
 * Callees:
 *     AslLogCallPrintf @ 0x180071658 (AslLogCallPrintf.c)
 *     RtlULongLongMult @ 0x18009933C (RtlULongLongMult.c)
 *     AslFree @ 0x18009D9EC (AslFree.c)
 *     AslPathClean @ 0x1800A3C00 (AslPathClean.c)
 *     AslEnvExpandStrings2 @ 0x1800A668C (AslEnvExpandStrings2.c)
 *     AslEnvGetProcessWowInfo @ 0x1800A6898 (AslEnvGetProcessWowInfo.c)
 *     AslImageFileToArchitecture @ 0x1800A6DEC (AslImageFileToArchitecture.c)
 *     memmove_0 @ 0x1800A7AFE (memmove_0.c)
 */

__int64 __fastcall SdbpResolveMatchingFile(__int64 a1, __int64 a2, _WORD *a3, unsigned int a4, __int64 a5, _QWORD *a6)
{
  _QWORD *v6; // r12
  unsigned int v7; // ebx
  __int64 v12; // r15
  __int16 v13; // ax
  int v14; // ecx
  unsigned __int64 v15; // rax
  unsigned __int64 v16; // rcx
  unsigned __int64 v17; // rdx
  SIZE_T v18; // rsi
  char *Heap; // rax
  char *v20; // rdi
  __int16 v21; // ax
  int v23; // [rsp+28h] [rbp-28h]
  int v24; // [rsp+30h] [rbp-20h]
  _QWORD v25[2]; // [rsp+40h] [rbp-10h] BYREF
  __int16 v28; // [rsp+A8h] [rbp+58h] BYREF

  v6 = a6;
  v7 = 0;
  v25[0] = 0LL;
  v28 = -1;
  *a6 = 0LL;
  LOWORD(a6) = -1;
  if ( !a4 )
    goto LABEL_26;
  v12 = a5;
  if ( *a3 != 37 )
  {
    v16 = *(unsigned int *)(a5 + 8);
    v17 = v16 + a4;
    if ( v17 >= v16 )
    {
      v15 = v17 + 1;
      if ( v17 + 1 >= v17 )
        goto LABEL_11;
    }
LABEL_26:
    AslLogCallPrintf(1LL);
    return v7;
  }
  if ( (int)AslEnvGetProcessWowInfo(&a6, &v28) < 0 )
    goto LABEL_26;
  v13 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 584));
  if ( v13 == -1 )
    v13 = v28;
  v14 = AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, 0LL, 0LL, v25, (_WORD)a6, v13);
  if ( (int)(v14 + 0x80000000) >= 0 && v14 != -1073741789 )
    goto LABEL_26;
  v15 = 2LL * v25[0];
LABEL_11:
  if ( v15 + 20 < v15 )
    goto LABEL_26;
  v25[0] = v15 + 20;
  if ( (int)RtlULongLongMult(v15 + 20, 2uLL, v25) < 0 )
    goto LABEL_26;
  v18 = v25[0];
  if ( v25[0] < 0x208uLL )
    v18 = 520LL;
  Heap = (char *)RtlAllocateHeap(NtCurrentPeb()->ProcessHeap, 8u, v18);
  v20 = Heap;
  if ( !Heap )
    goto LABEL_26;
  if ( *a3 == 37 )
  {
    if ( (int)AslEnvGetProcessWowInfo(&a6, &v28) < 0 )
      goto LABEL_24;
    v21 = AslImageFileToArchitecture(*(unsigned __int16 *)(a1 + 584));
    if ( v21 == -1 )
      v21 = v28;
    LOWORD(v24) = v21;
    LOWORD(v23) = (_WORD)a6;
    if ( (int)AslEnvExpandStrings2(*(_QWORD *)(a2 + 56), a3, v20, v18 >> 1, v25, v23, v24) < 0 )
      goto LABEL_24;
  }
  else
  {
    memmove_0(Heap, *(const void **)v12, 2LL * *(unsigned int *)(v12 + 8));
    memmove_0(&v20[2 * *(unsigned int *)(v12 + 8)], a3, 2LL * (a4 + 1));
  }
  if ( (int)AslPathClean(v20, v20) >= 0 )
  {
    *v6 = v20;
    return 1;
  }
LABEL_24:
  AslLogCallPrintf(1LL);
  AslFree(NtCurrentPeb()->ProcessHeap, v20);
  return v7;
}
