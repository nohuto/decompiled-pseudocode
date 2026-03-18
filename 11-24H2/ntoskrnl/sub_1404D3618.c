/*
 * XREFs of sub_1404D3618 @ 0x1404D3618
 * Callers:
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1404D3618(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  void *v5; // r12
  unsigned int *v9; // rax
  unsigned int i; // edx
  __int64 v11; // r10
  unsigned int *v12; // rcx
  __int64 *v13; // r14
  __int64 v14; // r14
  signed int v15; // ebx
  unsigned int *v16; // rax
  unsigned int j; // edx
  __int64 v18; // rbx
  unsigned int *v19; // rcx
  unsigned int *v20; // rdi
  unsigned int k; // edx
  __int64 v22; // rax
  unsigned int *v23; // rcx
  unsigned int *v24; // rbp
  size_t v25; // rbp
  void *Pool2; // rax
  int v27; // ecx
  void *v28; // r8
  int v29; // r15d
  unsigned int v30; // ecx
  unsigned int v31; // edx
  unsigned int v32; // eax
  int v33; // r8d
  unsigned int v34; // edx
  unsigned int v35; // eax
  __int64 v36; // rax
  _DWORD *v37; // rdx
  int v38; // r15d
  unsigned int v39; // eax
  unsigned int m; // ecx
  unsigned int v41; // eax
  unsigned __int64 v42; // rdx
  unsigned int v43; // eax
  unsigned int n; // ecx
  unsigned int v45; // eax
  _DWORD *v46; // rdx
  unsigned int v47; // ebp
  unsigned int v48; // eax
  unsigned int ii; // ecx
  unsigned int v50; // eax
  _DWORD *v51; // rdx
  unsigned int v52; // eax
  unsigned int jj; // ecx
  unsigned int v54; // eax

  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v9 = *(unsigned int **)(a1 + 8);
  for ( i = 0; ; ++i )
  {
    v11 = *v9;
    v12 = v9 + 1;
    if ( i >= 3 )
      break;
    if ( v12 < v9 )
      return (unsigned int)-1073741675;
    v9 = (unsigned int *)((char *)v12 + v11);
    if ( (unsigned int *)((char *)v12 + v11) < v12 )
      return (unsigned int)-1073741675;
  }
  if ( v12 < v9 )
    return (unsigned int)-1073741675;
  v13 = 0LL;
  if ( (_DWORD)v11 )
    v13 = (__int64 *)(v9 + 1);
  if ( (_DWORD)v11 != 8 )
    return (unsigned int)-1073741789;
  v14 = *v13;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v16 = v4;
  for ( j = 0; ; ++j )
  {
    v18 = *v16;
    v19 = v16 + 1;
    if ( j >= 4 )
      break;
    if ( v19 < v16 )
      return (unsigned int)-1073741675;
    v16 = (unsigned int *)((char *)v19 + v18);
    if ( (unsigned int *)((char *)v19 + v18) < v19 )
      return (unsigned int)-1073741675;
  }
  if ( v19 < v16 )
    return (unsigned int)-1073741675;
  v20 = 0LL;
  if ( (_DWORD)v18 )
    v20 = v16 + 1;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  for ( k = 0; ; ++k )
  {
    v22 = *v4;
    v23 = v4 + 1;
    if ( k >= 5 )
      break;
    if ( v23 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v23 + v22);
    if ( (unsigned int *)((char *)v23 + v22) < v23 )
      return (unsigned int)-1073741675;
  }
  if ( v23 < v4 )
    return (unsigned int)-1073741675;
  v24 = 0LL;
  if ( (_DWORD)v22 )
    v24 = v4 + 1;
  if ( (_DWORD)v22 != 4 )
    return (unsigned int)-1073741789;
  v25 = *v24;
  if ( (_DWORD)v25 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    v5 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memset_0(Pool2, 0, v25);
    v27 = 0;
  }
  else
  {
    v27 = 1;
  }
  if ( qword_140FD7398 )
  {
    v28 = 0LL;
    if ( !v27 )
      v28 = v5;
    v29 = guard_dispatch_icall_no_overrides(v20, (unsigned int)v18, v28, (unsigned int)v25);
  }
  else
  {
    v29 = -1073741637;
  }
  if ( (unsigned int)v25 < 0xFFFFFFFC && (unsigned int)(v25 + 24) >= 0x14 )
  {
    v30 = v25 + 32;
    if ( (int)v25 + 32 >= (unsigned int)(v25 + 24) && v30 < 0xFFFFFFF8 )
    {
      v31 = (v25 + 47) & 0xFFFFFFF8;
      if ( v31 >= (int)v25 + 40 && v31 + 8 >= v31 )
      {
        v32 = v31 + 12;
        v33 = *(_DWORD *)(a2 + 16);
        if ( v31 + 12 < 4 || (v34 = v31 + 16, v32 + 4 < v32) || (v35 = v33 + v34, v33 + v34 < v34) || v35 + 4 < v35 )
          v15 = -1073741675;
        else
          v15 = *(_DWORD *)(a2 + 32) + v35 + 4 < v35 + 4 ? 0xC0000095 : 0;
        if ( v15 < 0 )
          goto LABEL_117;
        if ( !a4 )
          goto LABEL_87;
        v15 = 0;
        *(_DWORD *)(a4 + 4) = v30;
        if ( (_DWORD)v25 == -32 )
        {
          v15 = -1073741762;
        }
        else
        {
          v36 = ExAllocatePool2(0x100uLL);
          if ( v36 )
          {
            *(_QWORD *)(a4 + 8) = v36;
            *(_DWORD *)a4 = 0;
          }
          else
          {
            v15 = -1073741801;
          }
        }
        if ( v15 < 0 )
          goto LABEL_117;
        v37 = *(_DWORD **)(a4 + 8);
        v38 = v29 | 0x10000000;
        if ( v37 )
        {
          for ( m = 0; m < *(_DWORD *)a4; ++m )
          {
            v41 = *v37 + 4;
            if ( *v37 >= 0xFFFFFFFC || (_DWORD *)((char *)v37 + v41) < v37 )
              goto LABEL_94;
            v37 = (_DWORD *)((char *)v37 + v41);
          }
          if ( v37 + 1 < v37 )
            goto LABEL_94;
          if ( (unsigned __int64)(v37 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_102;
          *v37 = 4;
          v37[1] = v38;
        }
        else
        {
          v39 = *(_DWORD *)(a4 + 4);
          if ( v39 + 8 < v39 )
            goto LABEL_93;
          *(_DWORD *)(a4 + 4) = v39 + 8;
        }
        ++*(_DWORD *)a4;
        v42 = *(_QWORD *)(a4 + 8);
        if ( v42 )
        {
          for ( n = 0; n < *(_DWORD *)a4; ++n )
          {
            v45 = *(_DWORD *)v42 + 4;
            if ( *(_DWORD *)v42 >= 0xFFFFFFFC || v42 + v45 < v42 )
              goto LABEL_94;
            v42 += v45;
          }
          if ( v42 + 4 < v42 )
            goto LABEL_94;
          if ( v42 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_102;
          *(_DWORD *)v42 = 8;
          *(_QWORD *)(v42 + 4) = v14;
        }
        else
        {
          v43 = *(_DWORD *)(a4 + 4);
          if ( v43 + 12 < v43 )
            goto LABEL_93;
          *(_DWORD *)(a4 + 4) = v43 + 12;
        }
        ++*(_DWORD *)a4;
        if ( v5 )
        {
          if ( !(_DWORD)v25 )
            goto LABEL_87;
        }
        else if ( (_DWORD)v25 )
        {
LABEL_87:
          v15 = -1073741811;
          goto LABEL_117;
        }
        v46 = *(_DWORD **)(a4 + 8);
        if ( v46 )
        {
          for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
          {
            v50 = *v46 + 4;
            if ( *v46 >= 0xFFFFFFFC || (_DWORD *)((char *)v46 + v50) < v46 )
              goto LABEL_94;
            v46 = (_DWORD *)((char *)v46 + v50);
          }
          if ( v46 + 1 < v46 )
            goto LABEL_94;
          if ( (unsigned __int64)v46 + v25 + 4 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_102;
          *v46 = v25;
          if ( v5 )
            memmove(v46 + 1, v5, (unsigned int)v25);
LABEL_105:
          ++*(_DWORD *)a4;
          v51 = *(_DWORD **)(a4 + 8);
          if ( !v51 )
          {
            v52 = *(_DWORD *)(a4 + 4);
            if ( v52 + 8 >= v52 )
            {
              ++*(_DWORD *)a4;
              v15 = 0;
              *(_DWORD *)(a4 + 4) = v52 + 8;
              goto LABEL_117;
            }
            goto LABEL_93;
          }
          for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
          {
            v54 = *v51 + 4;
            if ( *v51 >= 0xFFFFFFFC || (_DWORD *)((char *)v51 + v54) < v51 )
              goto LABEL_94;
            v51 = (_DWORD *)((char *)v51 + v54);
          }
          if ( v51 + 1 < v51 )
            goto LABEL_94;
          v15 = 0;
          if ( (unsigned __int64)(v51 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *v51 = 4;
            v51[1] = 0;
            ++*(_DWORD *)a4;
            goto LABEL_117;
          }
LABEL_102:
          v15 = -1073741789;
          goto LABEL_117;
        }
        v47 = v25 + 4;
        if ( v47 < 4 )
        {
LABEL_94:
          v15 = -1073741675;
          goto LABEL_117;
        }
        v48 = *(_DWORD *)(a4 + 4);
        if ( v48 + v47 >= v48 )
        {
          *(_DWORD *)(a4 + 4) = v48 + v47;
          goto LABEL_105;
        }
LABEL_93:
        *(_DWORD *)(a4 + 4) = -1;
        goto LABEL_94;
      }
    }
  }
  v15 = -1073741675;
LABEL_117:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v15;
}
