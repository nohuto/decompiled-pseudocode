/*
 * XREFs of sub_1409F4D38 @ 0x1409F4D38
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     FsRtlKernelFsControlFile @ 0x1409F6160 (FsRtlKernelFsControlFile.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409F4D38(__int64 a1, void *a2, int a3, __int64 a4)
{
  unsigned int *v6; // rcx
  unsigned int *v7; // rax
  unsigned int i; // r9d
  __int64 v9; // r10
  unsigned int *v10; // rdx
  signed int v11; // ebx
  unsigned int *v13; // rax
  __int64 v14; // r12
  unsigned int *v15; // rax
  unsigned int j; // r9d
  __int64 v17; // r11
  unsigned int *v18; // rdx
  void **v19; // r10
  void *v20; // r10
  unsigned int k; // r8d
  __int64 v22; // rax
  unsigned int *v23; // rdx
  unsigned int *v24; // rsi
  size_t v25; // rsi
  NTSTATUS v26; // eax
  struct _FILE_OBJECT *v27; // r15
  __int64 *Pool2; // r14
  __int64 v29; // r13
  __int64 v30; // rax
  __int64 v31; // rax
  unsigned __int64 v32; // rdx
  unsigned int m; // ecx
  unsigned int v34; // eax
  _DWORD *v35; // rdx
  unsigned int n; // ecx
  unsigned int v37; // eax
  unsigned int v38; // edx
  int v39; // eax
  unsigned int v40; // ecx
  __int128 Src; // [rsp+40h] [rbp-10h] BYREF
  PVOID Object; // [rsp+98h] [rbp+48h] BYREF
  __int64 v43; // [rsp+A0h] [rbp+50h] BYREF

  LODWORD(v43) = a3;
  Object = a2;
  Src = 0LL;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v6 = *(unsigned int **)(a1 + 8);
  if ( !v6 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v7 = v6;
  for ( i = 0; ; ++i )
  {
    v9 = *v7;
    v10 = v7 + 1;
    if ( i >= 3 )
      break;
    if ( v10 < v7 )
      return (unsigned int)-1073741675;
    v7 = (unsigned int *)((char *)v10 + v9);
    if ( (unsigned int *)((char *)v10 + v9) < v10 )
      return (unsigned int)-1073741675;
  }
  if ( v10 < v7 )
    return (unsigned int)-1073741675;
  v13 = 0LL;
  if ( (_DWORD)v9 )
    v13 = v10;
  if ( (_DWORD)v9 != 8 )
    return (unsigned int)-1073741789;
  v14 = *(_QWORD *)v13;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v15 = v6;
  for ( j = 0; ; ++j )
  {
    v17 = *v15;
    v18 = v15 + 1;
    if ( j >= 4 )
      break;
    if ( v18 < v15 )
      return (unsigned int)-1073741675;
    v15 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  if ( v18 < v15 )
    return (unsigned int)-1073741675;
  v19 = 0LL;
  if ( (_DWORD)v17 )
    v19 = (void **)(v15 + 1);
  if ( (_DWORD)v17 != 8 )
    return (unsigned int)-1073741762;
  v20 = *v19;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  for ( k = 0; ; ++k )
  {
    v22 = *v6;
    v23 = v6 + 1;
    if ( k >= 5 )
      break;
    if ( v23 < v6 )
      return (unsigned int)-1073741675;
    v6 = (unsigned int *)((char *)v23 + v22);
    if ( (unsigned int *)((char *)v23 + v22) < v23 )
      return (unsigned int)-1073741675;
  }
  if ( v23 < v6 )
    return (unsigned int)-1073741675;
  v24 = 0LL;
  if ( (_DWORD)v22 )
    v24 = v6 + 1;
  if ( (_DWORD)v22 != 4 )
    return (unsigned int)-1073741789;
  v25 = *v24;
  if ( (_DWORD)v25 != 16 )
    return (unsigned int)-1073741762;
  if ( !v20 )
    return (unsigned int)-1073741811;
  Object = 0LL;
  v26 = ObReferenceObjectByHandle(v20, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
  v27 = (struct _FILE_OBJECT *)Object;
  v11 = v26;
  if ( v26 < 0 )
    goto LABEL_48;
  LODWORD(v43) = 0;
  Pool2 = (__int64 *)ExAllocatePool2(0x100uLL, 0x248uLL, 0x20534C53u);
  if ( Pool2 )
  {
    v11 = FsRtlKernelFsControlFile(v27, Pool2, 0x248u, (__int64)&v43);
    if ( v11 >= 0 )
    {
      if ( (unsigned int)v43 < 0x40 )
        goto LABEL_77;
      v29 = *Pool2;
      if ( v27->WriteAccess )
      {
        v11 = FsRtlKernelFsControlFile(v27, Pool2, 0x248u, (__int64)&v43);
        if ( v11 < 0 )
          goto LABEL_47;
        if ( (unsigned int)v43 >= 8 )
        {
          v30 = *Pool2;
          goto LABEL_46;
        }
LABEL_77:
        v11 = -1073741762;
        goto LABEL_47;
      }
      v11 = FsRtlKernelFsControlFile(v27, Pool2, 0x248u, (__int64)&v43);
      if ( v11 >= 0 )
      {
        if ( (unsigned int)v43 >= 0x40 )
        {
          v30 = Pool2[3];
LABEL_46:
          *(_QWORD *)&Src = v29;
          *((_QWORD *)&Src + 1) = v30;
          goto LABEL_47;
        }
        goto LABEL_77;
      }
    }
LABEL_47:
    ExFreePoolWithTag(Pool2, 0);
    goto LABEL_48;
  }
  v11 = -1073741801;
LABEL_48:
  if ( v27 )
    ObfDereferenceObject(v27);
  if ( v11 >= 0 )
  {
    *(_DWORD *)(a4 + 4) = 32;
    v31 = ExAllocatePool2(0x100uLL, 0x20uLL, 0x20534C53u);
    if ( !v31 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = v31;
    *(_DWORD *)a4 = 0;
    v32 = v31;
    for ( m = 0; m < *(_DWORD *)a4; ++m )
    {
      v34 = *(_DWORD *)v32 + 4;
      if ( *(_DWORD *)v32 >= 0xFFFFFFFC || v32 + v34 < v32 )
        return (unsigned int)-1073741675;
      v32 += v34;
    }
    if ( v32 + 4 < v32 )
      return (unsigned int)-1073741675;
    if ( v32 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      return (unsigned int)-1073741789;
    *(_DWORD *)v32 = 8;
    *(_QWORD *)(v32 + 4) = v14;
    ++*(_DWORD *)a4;
    v35 = *(_DWORD **)(a4 + 8);
    if ( v35 )
    {
      for ( n = 0; n < *(_DWORD *)a4; ++n )
      {
        v37 = *v35 + 4;
        if ( *v35 >= 0xFFFFFFFC || (_DWORD *)((char *)v35 + v37) < v35 )
          return (unsigned int)-1073741675;
        v35 = (_DWORD *)((char *)v35 + v37);
      }
      if ( v35 + 1 >= v35 )
      {
        v11 = 0;
        if ( (unsigned __int64)v35 + v25 + 4 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v35 = 16;
          memmove(v35 + 1, &Src, v25);
          ++*(_DWORD *)a4;
          return (unsigned int)v11;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741675;
    }
    v38 = *(_DWORD *)(a4 + 4);
    v39 = -1;
    v40 = v38 + 20;
    if ( v38 + 20 >= v38 )
      v39 = v38 + 20;
    *(_DWORD *)(a4 + 4) = v39;
    v11 = v40 < v38 ? 0xC0000095 : 0;
    if ( v40 >= v38 )
    {
      ++*(_DWORD *)a4;
      return 0;
    }
  }
  return (unsigned int)v11;
}
