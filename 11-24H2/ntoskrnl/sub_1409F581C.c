/*
 * XREFs of sub_1409F581C @ 0x1409F581C
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     RtlCompareMemory @ 0x1406B4930 (RtlCompareMemory.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     FsRtlQueryKernelEaFile @ 0x1409F5D70 (FsRtlQueryKernelEaFile.c)
 *     FsRtlKernelFsControlFile @ 0x1409F6160 (FsRtlKernelFsControlFile.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1409F581C(__int64 a1, void *a2, int a3, __int64 a4)
{
  int v6; // r14d
  void **v7; // rcx
  unsigned int *v8; // rax
  unsigned int i; // r9d
  __int64 v10; // r10
  unsigned int *v11; // rdx
  unsigned int v12; // ebx
  unsigned int *v14; // rax
  __int64 v15; // r13
  unsigned int j; // r8d
  __int64 v17; // rax
  void **v18; // rdx
  void **v19; // rcx
  void *v20; // rcx
  void *v21; // r12
  __int64 v22; // r15
  NTSTATUS v23; // eax
  struct _FILE_OBJECT *v24; // rbx
  int v25; // esi
  __int64 Pool2; // rax
  __int64 v27; // rax
  int KernelEaFile; // eax
  __int64 v29; // rdx
  _QWORD *v30; // r8
  __int64 *v31; // r13
  int v32; // ebx
  unsigned __int64 v33; // rax
  _DWORD *v34; // rdx
  unsigned int k; // ecx
  unsigned int v36; // eax
  unsigned int v37; // edx
  int v38; // eax
  unsigned int v39; // ecx
  __int64 v40; // [rsp+50h] [rbp-30h]
  __int64 Source2; // [rsp+58h] [rbp-28h] BYREF
  __int64 v42; // [rsp+60h] [rbp-20h]
  _QWORD *v43; // [rsp+68h] [rbp-18h]
  __int64 v44; // [rsp+70h] [rbp-10h]
  __int64 v45; // [rsp+C0h] [rbp+40h]
  PVOID Object; // [rsp+C8h] [rbp+48h] BYREF
  __int64 v47; // [rsp+D0h] [rbp+50h] BYREF

  LODWORD(v47) = a3;
  Object = a2;
  v6 = 0;
  if ( !a1 )
    return (unsigned int)-1073741811;
  if ( !a4 )
    return (unsigned int)-1073741811;
  v7 = *(void ***)(a1 + 8);
  if ( !v7 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v8 = (unsigned int *)v7;
  for ( i = 0; ; ++i )
  {
    v10 = *v8;
    v11 = v8 + 1;
    if ( i >= 3 )
      break;
    if ( v11 < v8 )
      return (unsigned int)-1073741675;
    v8 = (unsigned int *)((char *)v11 + v10);
    if ( (unsigned int *)((char *)v11 + v10) < v11 )
      return (unsigned int)-1073741675;
  }
  if ( v11 < v8 )
    return (unsigned int)-1073741675;
  v14 = 0LL;
  if ( (_DWORD)v10 )
    v14 = v11;
  if ( (_DWORD)v10 != 8 )
    return (unsigned int)-1073741789;
  v15 = *(_QWORD *)v14;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  for ( j = 0; ; ++j )
  {
    v17 = *(unsigned int *)v7;
    v18 = (void **)((char *)v7 + 4);
    v44 = v15;
    if ( j >= 4 )
      break;
    if ( v18 < v7 )
      return (unsigned int)-1073741675;
    v7 = (void **)((char *)v18 + v17);
    if ( (void **)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  if ( v18 < v7 )
    return (unsigned int)-1073741675;
  v19 = 0LL;
  if ( (_DWORD)v17 )
    v19 = v18;
  if ( (_DWORD)v17 != 8 )
    return (unsigned int)-1073741762;
  v20 = *v19;
  v21 = 0LL;
  LODWORD(v47) = 0;
  v22 = 0LL;
  v45 = 0LL;
  v40 = 0LL;
  Source2 = 0LL;
  if ( !v20 )
    return (unsigned int)-1073741811;
  Object = 0LL;
  v23 = ObReferenceObjectByHandle(v20, 0, (POBJECT_TYPE)IoFileObjectType, 1, &Object, 0LL);
  v24 = (struct _FILE_OBJECT *)Object;
  v25 = v23;
  if ( v23 >= 0 )
  {
    Pool2 = ExAllocatePool2(0x100uLL, 0x1FuLL, 0x20534C53u);
    v21 = (void *)Pool2;
    if ( !Pool2 )
      goto LABEL_71;
    *(_QWORD *)(Pool2 + 5) = 0LL;
    *(_QWORD *)(Pool2 + 13) = 0LL;
    *(_QWORD *)(Pool2 + 21) = 0LL;
    *(_BYTE *)(Pool2 + 30) = 0;
    *(_BYTE *)(Pool2 + 4) = 25;
    *(_DWORD *)Pool2 = 0;
    strcpy((char *)(Pool2 + 5), "$Kernel.Purge.AppxFICach");
    v27 = ExAllocatePool2(0x100uLL, 0x3AuLL, 0x20534C53u);
    v22 = v27;
    if ( !v27 )
    {
LABEL_71:
      v25 = -1073741801;
      goto LABEL_47;
    }
    *(_OWORD *)v27 = 0LL;
    *(_OWORD *)(v27 + 16) = 0LL;
    *(_OWORD *)(v27 + 32) = 0LL;
    *(_QWORD *)(v27 + 48) = 0LL;
    *(_WORD *)(v27 + 56) = 0;
    KernelEaFile = FsRtlQueryKernelEaFile(v24, (__int64)v21, 31, 0LL, 1, (__int64)&v47);
    v25 = KernelEaFile;
    if ( KernelEaFile != -1073741275 )
    {
      if ( KernelEaFile < 0 )
        goto LABEL_47;
      v29 = *(unsigned __int16 *)(v22 + 6);
      v30 = (_QWORD *)(v22 + *(unsigned __int8 *)(v22 + 5) + 9LL);
      v43 = v30;
      if ( (unsigned __int64)v30 + v29 > v22 + (unsigned __int64)(unsigned int)v47 )
      {
LABEL_72:
        v25 = -1073741762;
        goto LABEL_47;
      }
      if ( (_WORD)v29 )
      {
        if ( (_DWORD)v29 == 24 && RtlCompareMemory(v30 + 2, &Source2, 8uLL) == 8 )
        {
          LODWORD(v47) = 0;
          v6 = 2;
          v31 = (__int64 *)ExAllocatePool2(0x100uLL, 0x248uLL, 0x20534C53u);
          if ( !v31 )
          {
LABEL_46:
            v15 = v44;
            goto LABEL_47;
          }
          v32 = FsRtlKernelFsControlFile(v24, v31, 0x248u, (__int64)&v47);
          if ( v32 >= 0 )
          {
            if ( (unsigned int)v47 < 0x40 )
              goto LABEL_75;
            v42 = *v31;
            v32 = FsRtlKernelFsControlFile((PFILE_OBJECT)Object, v31, 0x248u, (__int64)&v47);
            if ( v32 >= 0 )
            {
              if ( (unsigned int)v47 >= 0x40 )
              {
                v40 = v31[3];
                v45 = v42;
                goto LABEL_42;
              }
LABEL_75:
              v32 = -1073741762;
            }
          }
LABEL_42:
          ExFreePoolWithTag(v31, 0);
          if ( v32 >= 0 && v45 == *v43 && v40 == v43[1] )
            v6 = 3;
          goto LABEL_46;
        }
        goto LABEL_72;
      }
    }
    v25 = 0;
  }
LABEL_47:
  if ( Object )
    ObfDereferenceObject(Object);
  if ( v21 )
    ExFreePoolWithTag(v21, 0);
  if ( v22 )
    ExFreePoolWithTag((PVOID)v22, 0);
  v12 = v25;
  if ( v25 >= 0 )
  {
    *(_DWORD *)(a4 + 4) = 20;
    v33 = ExAllocatePool2(0x100uLL, 0x14uLL, 0x20534C53u);
    if ( !v33 )
      return (unsigned int)-1073741801;
    *(_QWORD *)(a4 + 8) = v33;
    *(_DWORD *)a4 = 0;
    if ( v33 + 4 < v33 )
      return (unsigned int)-1073741675;
    if ( v33 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
      return (unsigned int)-1073741789;
    *(_DWORD *)v33 = 8;
    *(_QWORD *)(v33 + 4) = v15;
    ++*(_DWORD *)a4;
    v34 = *(_DWORD **)(a4 + 8);
    if ( v34 )
    {
      for ( k = 0; k < *(_DWORD *)a4; ++k )
      {
        v36 = *v34 + 4;
        if ( *v34 >= 0xFFFFFFFC || (_DWORD *)((char *)v34 + v36) < v34 )
          return (unsigned int)-1073741675;
        v34 = (_DWORD *)((char *)v34 + v36);
      }
      if ( v34 + 1 >= v34 )
      {
        v12 = 0;
        if ( (unsigned __int64)(v34 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        {
          *v34 = 4;
          v34[1] = v6;
          ++*(_DWORD *)a4;
          return v12;
        }
        return (unsigned int)-1073741789;
      }
      return (unsigned int)-1073741675;
    }
    v37 = *(_DWORD *)(a4 + 4);
    v38 = -1;
    v39 = v37 + 8;
    if ( v37 + 8 >= v37 )
      v38 = v37 + 8;
    *(_DWORD *)(a4 + 4) = v38;
    v12 = v39 < v37 ? 0xC0000095 : 0;
    if ( v39 >= v37 )
    {
      ++*(_DWORD *)a4;
      return 0;
    }
  }
  return v12;
}
