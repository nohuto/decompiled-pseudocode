/*
 * XREFs of EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x1403BD5D0
 * Callers:
 *     EtwpTiAsyncVadQueryEventWrite @ 0x1403BD46C (EtwpTiAsyncVadQueryEventWrite.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14029B2A0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 */

__int64 __fastcall EtwpTiAllocVadQueryEventWriteWorkItemContext(
        __int64 a1,
        unsigned int a2,
        unsigned int a3,
        void *a4,
        void *Src,
        unsigned int a6,
        __int64 a7,
        __int64 a8,
        _QWORD *a9)
{
  unsigned int v9; // esi
  __int64 v10; // r15
  unsigned int v11; // r10d
  void *v12; // r12
  unsigned __int64 v15; // rdi
  unsigned int v16; // eax
  unsigned __int64 v17; // rbp
  _QWORD *Pool2; // rax
  _QWORD *v19; // rbx
  char *v20; // r14
  const void **v21; // rdi
  __int64 v22; // r12
  int v23; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  void *v26; // rcx

  v9 = 0;
  v10 = a3;
  v11 = 0;
  v12 = a4;
  while ( v11 < a3 )
  {
    if ( v9 + *(_DWORD *)(a1 + 16LL * v11 + 8) < v9 )
      return 3221225621LL;
    v9 += *(_DWORD *)(a1 + 16LL * v11++ + 8);
  }
  v15 = 16LL * a2;
  if ( v15 > 0xFFFFFFFF )
    return 3221225621LL;
  v16 = v15 + 88;
  if ( (unsigned int)v15 >= 0xFFFFFFA8 )
    return 3221225621LL;
  if ( v16 + v9 < v16 )
    return 3221225621LL;
  v17 = 8LL * a6;
  if ( v17 > 0xFFFFFFFF || v16 + v9 + (unsigned int)v17 < v16 + v9 )
    return 3221225621LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL);
  v19 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  Pool2[4] = Pool2 + 11;
  v20 = (char *)Pool2 + (unsigned int)v15 + 88;
  Pool2[5] = v20;
  Pool2[9] = &v20[v9];
  if ( (_DWORD)v10 )
  {
    v21 = (const void **)(a1 + 8);
    v22 = v10;
    do
    {
      memmove(v20, *(v21 - 1), *(unsigned int *)v21);
      v23 = *(_DWORD *)v21;
      v24 = (__int64)v21 + v19[4] - a1 - 8;
      *(_DWORD *)(v24 + 12) = 0;
      *(_QWORD *)v24 = v20;
      *(_DWORD *)(v24 + 8) = v23;
      v25 = *(unsigned int *)v21;
      v21 += 2;
      v20 += v25;
      --v22;
    }
    while ( v22 );
    v12 = a4;
  }
  *((_DWORD *)v19 + 12) = v10;
  ObfReferenceObjectWithTag(v12, 0x69547445u);
  v26 = (void *)v19[9];
  v19[8] = v12;
  memmove(v26, Src, (unsigned int)v17);
  *((_DWORD *)v19 + 13) = a6;
  v19[7] = a7;
  v19[10] = a8;
  *a9 = v19;
  return 0LL;
}
