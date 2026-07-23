/*
 * XREFs of EtwpTiAllocVadQueryEventWriteWorkItemContext @ 0x140263100
 * Callers:
 *     EtwpTiAsyncVadQueryEventWrite @ 0x140262F9C (EtwpTiAsyncVadQueryEventWrite.c)
 * Callees:
 *     ObfReferenceObjectWithTag @ 0x14031F8C0 (ObfReferenceObjectWithTag.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
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
  unsigned int v17; // ecx
  unsigned __int64 v18; // rbp
  _QWORD *Pool2; // rax
  _QWORD *v20; // rbx
  char *v21; // r14
  const void **v22; // rdi
  __int64 v23; // r12
  int v24; // eax
  __int64 v25; // rcx
  __int64 v26; // rax
  void *v27; // rcx

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
  v17 = v16 + v9;
  if ( v16 + v9 < v16 )
    return 3221225621LL;
  v18 = 8LL * a6;
  if ( v18 > 0xFFFFFFFF || v17 + (unsigned int)v18 < v17 )
    return 3221225621LL;
  Pool2 = (_QWORD *)ExAllocatePool2(0x40uLL, v17 + (unsigned int)v18, 0x6E734954u);
  v20 = Pool2;
  if ( !Pool2 )
    return 3221225495LL;
  Pool2[4] = Pool2 + 11;
  v21 = (char *)Pool2 + (unsigned int)v15 + 88;
  Pool2[5] = v21;
  Pool2[9] = &v21[v9];
  if ( (_DWORD)v10 )
  {
    v22 = (const void **)(a1 + 8);
    v23 = v10;
    do
    {
      memmove(v21, *(v22 - 1), *(unsigned int *)v22);
      v24 = *(_DWORD *)v22;
      v25 = (__int64)v22 + v20[4] - a1 - 8;
      *(_DWORD *)(v25 + 12) = 0;
      *(_QWORD *)v25 = v21;
      *(_DWORD *)(v25 + 8) = v24;
      v26 = *(unsigned int *)v22;
      v22 += 2;
      v21 += v26;
      --v23;
    }
    while ( v23 );
    v12 = a4;
  }
  *((_DWORD *)v20 + 12) = v10;
  ObfReferenceObjectWithTag(v12, 0x69547445u);
  v27 = (void *)v20[9];
  v20[8] = v12;
  memmove(v27, Src, (unsigned int)v18);
  *((_DWORD *)v20 + 13) = a6;
  v20[7] = a7;
  v20[10] = a8;
  *a9 = v20;
  return 0LL;
}
