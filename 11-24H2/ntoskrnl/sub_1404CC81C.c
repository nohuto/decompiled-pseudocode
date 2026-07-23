/*
 * XREFs of sub_1404CC81C @ 0x1404CC81C
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1404CC81C(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  int v27; // r15d
  unsigned int v28; // ecx
  unsigned int v29; // edx
  unsigned int v30; // eax
  int v31; // r8d
  unsigned int v32; // edx
  unsigned int v33; // eax
  __int64 v34; // rax
  _DWORD *v35; // rdx
  int v36; // r15d
  unsigned int v37; // eax
  unsigned int m; // ecx
  unsigned int v39; // eax
  unsigned __int64 v40; // rdx
  unsigned int v41; // eax
  unsigned int n; // ecx
  unsigned int v43; // eax
  _DWORD *v44; // rdx
  unsigned int v45; // ebp
  unsigned int v46; // eax
  unsigned int ii; // ecx
  unsigned int v48; // eax
  _DWORD *v49; // rdx
  unsigned int v50; // eax
  unsigned int jj; // ecx
  unsigned int v52; // eax

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
    Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v25, 0x20534C53u);
    v5 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memset_0(Pool2, 0, v25);
  }
  if ( qword_140FD83A8 )
    v27 = guard_dispatch_icall_no_overrides(v20, (unsigned int)v18);
  else
    v27 = -1073741637;
  if ( (unsigned int)v25 < 0xFFFFFFFC && (unsigned int)(v25 + 24) >= 0x14 )
  {
    v28 = v25 + 32;
    if ( (int)v25 + 32 >= (unsigned int)(v25 + 24) && v28 < 0xFFFFFFF8 )
    {
      v29 = (v25 + 47) & 0xFFFFFFF8;
      if ( v29 >= (int)v25 + 40 && v29 + 8 >= v29 )
      {
        v30 = v29 + 12;
        v31 = *(_DWORD *)(a2 + 16);
        if ( v29 + 12 < 4 || (v32 = v29 + 16, v30 + 4 < v30) || (v33 = v31 + v32, v31 + v32 < v32) || v33 + 4 < v33 )
          v15 = -1073741675;
        else
          v15 = *(_DWORD *)(a2 + 32) + v33 + 4 < v33 + 4 ? 0xC0000095 : 0;
        if ( v15 < 0 )
          goto LABEL_114;
        if ( !a4 )
          goto LABEL_84;
        v15 = 0;
        *(_DWORD *)(a4 + 4) = v28;
        if ( (_DWORD)v25 == -32 )
        {
          v15 = -1073741762;
        }
        else
        {
          v34 = ExAllocatePool2(0x100uLL, v28, 0x20534C53u);
          if ( v34 )
          {
            *(_QWORD *)(a4 + 8) = v34;
            *(_DWORD *)a4 = 0;
          }
          else
          {
            v15 = -1073741801;
          }
        }
        if ( v15 < 0 )
          goto LABEL_114;
        v35 = *(_DWORD **)(a4 + 8);
        v36 = v27 | 0x10000000;
        if ( v35 )
        {
          for ( m = 0; m < *(_DWORD *)a4; ++m )
          {
            v39 = *v35 + 4;
            if ( *v35 >= 0xFFFFFFFC || (_DWORD *)((char *)v35 + v39) < v35 )
              goto LABEL_91;
            v35 = (_DWORD *)((char *)v35 + v39);
          }
          if ( v35 + 1 < v35 )
            goto LABEL_91;
          if ( (unsigned __int64)(v35 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_99;
          *v35 = 4;
          v35[1] = v36;
        }
        else
        {
          v37 = *(_DWORD *)(a4 + 4);
          if ( v37 + 8 < v37 )
            goto LABEL_90;
          *(_DWORD *)(a4 + 4) = v37 + 8;
        }
        ++*(_DWORD *)a4;
        v40 = *(_QWORD *)(a4 + 8);
        if ( v40 )
        {
          for ( n = 0; n < *(_DWORD *)a4; ++n )
          {
            v43 = *(_DWORD *)v40 + 4;
            if ( *(_DWORD *)v40 >= 0xFFFFFFFC || v40 + v43 < v40 )
              goto LABEL_91;
            v40 += v43;
          }
          if ( v40 + 4 < v40 )
            goto LABEL_91;
          if ( v40 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_99;
          *(_DWORD *)v40 = 8;
          *(_QWORD *)(v40 + 4) = v14;
        }
        else
        {
          v41 = *(_DWORD *)(a4 + 4);
          if ( v41 + 12 < v41 )
            goto LABEL_90;
          *(_DWORD *)(a4 + 4) = v41 + 12;
        }
        ++*(_DWORD *)a4;
        if ( v5 )
        {
          if ( !(_DWORD)v25 )
            goto LABEL_84;
        }
        else if ( (_DWORD)v25 )
        {
LABEL_84:
          v15 = -1073741811;
          goto LABEL_114;
        }
        v44 = *(_DWORD **)(a4 + 8);
        if ( v44 )
        {
          for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
          {
            v48 = *v44 + 4;
            if ( *v44 >= 0xFFFFFFFC || (_DWORD *)((char *)v44 + v48) < v44 )
              goto LABEL_91;
            v44 = (_DWORD *)((char *)v44 + v48);
          }
          if ( v44 + 1 < v44 )
            goto LABEL_91;
          if ( (unsigned __int64)v44 + v25 + 4 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_99;
          *v44 = v25;
          if ( v5 )
            memmove(v44 + 1, v5, (unsigned int)v25);
LABEL_102:
          ++*(_DWORD *)a4;
          v49 = *(_DWORD **)(a4 + 8);
          if ( !v49 )
          {
            v50 = *(_DWORD *)(a4 + 4);
            if ( v50 + 8 >= v50 )
            {
              ++*(_DWORD *)a4;
              v15 = 0;
              *(_DWORD *)(a4 + 4) = v50 + 8;
              goto LABEL_114;
            }
            goto LABEL_90;
          }
          for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
          {
            v52 = *v49 + 4;
            if ( *v49 >= 0xFFFFFFFC || (_DWORD *)((char *)v49 + v52) < v49 )
              goto LABEL_91;
            v49 = (_DWORD *)((char *)v49 + v52);
          }
          if ( v49 + 1 < v49 )
            goto LABEL_91;
          v15 = 0;
          if ( (unsigned __int64)(v49 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *v49 = 4;
            v49[1] = 0;
            ++*(_DWORD *)a4;
            goto LABEL_114;
          }
LABEL_99:
          v15 = -1073741789;
          goto LABEL_114;
        }
        v45 = v25 + 4;
        if ( v45 < 4 )
        {
LABEL_91:
          v15 = -1073741675;
          goto LABEL_114;
        }
        v46 = *(_DWORD *)(a4 + 4);
        if ( v46 + v45 >= v46 )
        {
          *(_DWORD *)(a4 + 4) = v46 + v45;
          goto LABEL_102;
        }
LABEL_90:
        *(_DWORD *)(a4 + 4) = -1;
        goto LABEL_91;
      }
    }
  }
  v15 = -1073741675;
LABEL_114:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v15;
}
