/*
 * XREFs of sub_140ABA6A0 @ 0x140ABA6A0
 * Callers:
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140ABA6A0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  void *v5; // r13
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r10
  unsigned int *v11; // rcx
  __int64 *v12; // r14
  __int64 v13; // r14
  unsigned int *v14; // rax
  unsigned int j; // edx
  __int64 v16; // rbx
  unsigned int *v17; // rcx
  unsigned int *v18; // rdi
  signed int v19; // ebx
  unsigned int *v20; // rax
  unsigned int k; // edx
  __int64 v22; // r12
  unsigned int *v23; // rcx
  unsigned int *v24; // r15
  unsigned int m; // edx
  __int64 v26; // rax
  unsigned int *v27; // rcx
  unsigned int *v28; // rbp
  size_t v29; // rbp
  void *Pool2; // rax
  int v31; // r15d
  unsigned int v32; // ecx
  unsigned int v33; // edx
  unsigned int v34; // eax
  int v35; // r8d
  unsigned int v36; // edx
  unsigned int v37; // eax
  __int64 v38; // rax
  _DWORD *v39; // rdx
  int v40; // r15d
  unsigned int v41; // eax
  unsigned int n; // ecx
  unsigned int v43; // eax
  unsigned __int64 v44; // rdx
  unsigned int v45; // eax
  unsigned int ii; // ecx
  unsigned int v47; // eax
  _DWORD *v48; // rdx
  unsigned int v49; // ebp
  unsigned int v50; // eax
  unsigned int jj; // ecx
  unsigned int v52; // eax
  _DWORD *v53; // rdx
  unsigned int v54; // eax
  unsigned int kk; // ecx
  unsigned int v56; // eax

  v4 = *(unsigned int **)(a1 + 8);
  v5 = 0LL;
  if ( !v4 || *(_DWORD *)a1 <= 3u )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int **)(a1 + 8);
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
  v12 = 0LL;
  if ( (_DWORD)v10 )
    v12 = (__int64 *)(v8 + 1);
  if ( (_DWORD)v10 != 8 )
    return (unsigned int)-1073741789;
  v13 = *v12;
  if ( *(_DWORD *)a1 <= 4u )
    return (unsigned int)-1073741811;
  v14 = v4;
  for ( j = 0; ; ++j )
  {
    v16 = *v14;
    v17 = v14 + 1;
    if ( j >= 4 )
      break;
    if ( v17 < v14 )
      return (unsigned int)-1073741675;
    v14 = (unsigned int *)((char *)v17 + v16);
    if ( (unsigned int *)((char *)v17 + v16) < v17 )
      return (unsigned int)-1073741675;
  }
  if ( v17 < v14 )
    return (unsigned int)-1073741675;
  v18 = 0LL;
  if ( (_DWORD)v16 )
    v18 = v14 + 1;
  if ( *(_DWORD *)a1 <= 5u )
    return (unsigned int)-1073741811;
  v20 = v4;
  for ( k = 0; ; ++k )
  {
    v22 = *v20;
    v23 = v20 + 1;
    if ( k >= 5 )
      break;
    if ( v23 < v20 )
      return (unsigned int)-1073741675;
    v20 = (unsigned int *)((char *)v23 + v22);
    if ( (unsigned int *)((char *)v23 + v22) < v23 )
      return (unsigned int)-1073741675;
  }
  if ( v23 < v20 )
    return (unsigned int)-1073741675;
  v24 = 0LL;
  if ( (_DWORD)v22 )
    v24 = v20 + 1;
  if ( *(_DWORD *)a1 <= 6u )
    return (unsigned int)-1073741811;
  for ( m = 0; ; ++m )
  {
    v26 = *v4;
    v27 = v4 + 1;
    if ( m >= 6 )
      break;
    if ( v27 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v27 + v26);
    if ( (unsigned int *)((char *)v27 + v26) < v27 )
      return (unsigned int)-1073741675;
  }
  if ( v27 < v4 )
    return (unsigned int)-1073741675;
  v28 = 0LL;
  if ( (_DWORD)v26 )
    v28 = v4 + 1;
  if ( (_DWORD)v26 != 4 )
    return (unsigned int)-1073741789;
  v29 = *v28;
  if ( (_DWORD)v29 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v5 = Pool2;
    memset_0(Pool2, 0, v29);
  }
  if ( qword_140FD73C8 )
    v31 = guard_dispatch_icall_no_overrides(v18, (unsigned int)v16, v24, (unsigned int)v22);
  else
    v31 = -1073741637;
  if ( (unsigned int)v29 < 0xFFFFFFFC && (unsigned int)(v29 + 24) >= 0x14 )
  {
    v32 = v29 + 32;
    if ( (int)v29 + 32 >= (unsigned int)(v29 + 24) && v32 < 0xFFFFFFF8 )
    {
      v33 = (v29 + 47) & 0xFFFFFFF8;
      if ( v33 >= (int)v29 + 40 && v33 + 8 >= v33 )
      {
        v34 = v33 + 12;
        v35 = *(_DWORD *)(a2 + 16);
        if ( v33 + 12 < 4 || (v36 = v33 + 16, v34 + 4 < v34) || (v37 = v36 + v35, v36 + v35 < v36) || v37 + 4 < v37 )
          v19 = -1073741675;
        else
          v19 = v37 + 4 + *(_DWORD *)(a2 + 32) < v37 + 4 ? 0xC0000095 : 0;
        if ( v19 < 0 )
          goto LABEL_123;
        if ( !a4 )
          goto LABEL_93;
        v19 = 0;
        *(_DWORD *)(a4 + 4) = v32;
        if ( (_DWORD)v29 == -32 )
        {
          v19 = -1073741762;
        }
        else
        {
          v38 = ExAllocatePool2(0x100uLL);
          if ( v38 )
          {
            *(_QWORD *)(a4 + 8) = v38;
            *(_DWORD *)a4 = 0;
          }
          else
          {
            v19 = -1073741801;
          }
        }
        if ( v19 < 0 )
          goto LABEL_123;
        v39 = *(_DWORD **)(a4 + 8);
        v40 = v31 | 0x10000000;
        if ( v39 )
        {
          for ( n = 0; n < *(_DWORD *)a4; ++n )
          {
            v43 = *v39 + 4;
            if ( *v39 >= 0xFFFFFFFC || (_DWORD *)((char *)v39 + v43) < v39 )
              goto LABEL_100;
            v39 = (_DWORD *)((char *)v39 + v43);
          }
          if ( v39 + 1 < v39 )
            goto LABEL_100;
          if ( (unsigned __int64)(v39 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_108;
          *v39 = 4;
          v39[1] = v40;
        }
        else
        {
          v41 = *(_DWORD *)(a4 + 4);
          if ( v41 + 8 < v41 )
            goto LABEL_99;
          *(_DWORD *)(a4 + 4) = v41 + 8;
        }
        ++*(_DWORD *)a4;
        v44 = *(_QWORD *)(a4 + 8);
        if ( v44 )
        {
          for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
          {
            v47 = *(_DWORD *)v44 + 4;
            if ( *(_DWORD *)v44 >= 0xFFFFFFFC || v44 + v47 < v44 )
              goto LABEL_100;
            v44 += v47;
          }
          if ( v44 + 4 < v44 )
            goto LABEL_100;
          if ( v44 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_108;
          *(_DWORD *)v44 = 8;
          *(_QWORD *)(v44 + 4) = v13;
        }
        else
        {
          v45 = *(_DWORD *)(a4 + 4);
          if ( v45 + 12 < v45 )
            goto LABEL_99;
          *(_DWORD *)(a4 + 4) = v45 + 12;
        }
        ++*(_DWORD *)a4;
        if ( v5 )
        {
          if ( !(_DWORD)v29 )
            goto LABEL_93;
        }
        else if ( (_DWORD)v29 )
        {
LABEL_93:
          v19 = -1073741811;
          goto LABEL_123;
        }
        v48 = *(_DWORD **)(a4 + 8);
        if ( v48 )
        {
          for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
          {
            v52 = *v48 + 4;
            if ( *v48 >= 0xFFFFFFFC || (_DWORD *)((char *)v48 + v52) < v48 )
              goto LABEL_100;
            v48 = (_DWORD *)((char *)v48 + v52);
          }
          if ( v48 + 1 < v48 )
            goto LABEL_100;
          if ( (unsigned __int64)v48 + v29 + 4 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_108;
          *v48 = v29;
          if ( v5 )
            memmove(v48 + 1, v5, (unsigned int)v29);
LABEL_111:
          ++*(_DWORD *)a4;
          v53 = *(_DWORD **)(a4 + 8);
          if ( !v53 )
          {
            v54 = *(_DWORD *)(a4 + 4);
            if ( v54 + 8 >= v54 )
            {
              ++*(_DWORD *)a4;
              v19 = 0;
              *(_DWORD *)(a4 + 4) = v54 + 8;
              goto LABEL_123;
            }
            goto LABEL_99;
          }
          for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
          {
            v56 = *v53 + 4;
            if ( *v53 >= 0xFFFFFFFC || (_DWORD *)((char *)v53 + v56) < v53 )
              goto LABEL_100;
            v53 = (_DWORD *)((char *)v53 + v56);
          }
          if ( v53 + 1 < v53 )
            goto LABEL_100;
          v19 = 0;
          if ( (unsigned __int64)(v53 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *v53 = 4;
            v53[1] = 0;
            ++*(_DWORD *)a4;
            goto LABEL_123;
          }
LABEL_108:
          v19 = -1073741789;
          goto LABEL_123;
        }
        v49 = v29 + 4;
        if ( v49 < 4 )
        {
LABEL_100:
          v19 = -1073741675;
          goto LABEL_123;
        }
        v50 = *(_DWORD *)(a4 + 4);
        if ( v50 + v49 >= v50 )
        {
          *(_DWORD *)(a4 + 4) = v50 + v49;
          goto LABEL_111;
        }
LABEL_99:
        *(_DWORD *)(a4 + 4) = -1;
        goto LABEL_100;
      }
    }
  }
  v19 = -1073741675;
LABEL_123:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v19;
}
