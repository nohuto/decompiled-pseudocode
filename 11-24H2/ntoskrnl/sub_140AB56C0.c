/*
 * XREFs of sub_140AB56C0 @ 0x140AB56C0
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140AB56C0(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  unsigned int m; // edx
  __int64 v25; // rax
  unsigned int *v26; // rcx
  unsigned int *v27; // rbp
  size_t v28; // rbp
  void *Pool2; // rax
  int v30; // r15d
  unsigned int v31; // ecx
  unsigned int v32; // edx
  unsigned int v33; // eax
  int v34; // r8d
  unsigned int v35; // edx
  unsigned int v36; // eax
  __int64 v37; // rax
  _DWORD *v38; // rdx
  int v39; // r15d
  unsigned int v40; // eax
  unsigned int n; // ecx
  unsigned int v42; // eax
  unsigned __int64 v43; // rdx
  unsigned int v44; // eax
  unsigned int ii; // ecx
  unsigned int v46; // eax
  _DWORD *v47; // rdx
  unsigned int v48; // ebp
  unsigned int v49; // eax
  unsigned int jj; // ecx
  unsigned int v51; // eax
  _DWORD *v52; // rdx
  unsigned int v53; // eax
  unsigned int kk; // ecx
  unsigned int v55; // eax

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
  if ( *(_DWORD *)a1 <= 6u )
    return (unsigned int)-1073741811;
  for ( m = 0; ; ++m )
  {
    v25 = *v4;
    v26 = v4 + 1;
    if ( m >= 6 )
      break;
    if ( v26 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v26 + v25);
    if ( (unsigned int *)((char *)v26 + v25) < v26 )
      return (unsigned int)-1073741675;
  }
  if ( v26 < v4 )
    return (unsigned int)-1073741675;
  v27 = 0LL;
  if ( (_DWORD)v25 )
    v27 = v4 + 1;
  if ( (_DWORD)v25 != 4 )
    return (unsigned int)-1073741789;
  v28 = *v27;
  if ( (_DWORD)v28 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v28, 0x20534C53u);
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    v5 = Pool2;
    memset_0(Pool2, 0, v28);
  }
  if ( qword_140FD83D8 )
    v30 = guard_dispatch_icall_no_overrides(v18, (unsigned int)v16);
  else
    v30 = -1073741637;
  if ( (unsigned int)v28 < 0xFFFFFFFC && (unsigned int)(v28 + 24) >= 0x14 )
  {
    v31 = v28 + 32;
    if ( (int)v28 + 32 >= (unsigned int)(v28 + 24) && v31 < 0xFFFFFFF8 )
    {
      v32 = (v28 + 47) & 0xFFFFFFF8;
      if ( v32 >= (int)v28 + 40 && v32 + 8 >= v32 )
      {
        v33 = v32 + 12;
        v34 = *(_DWORD *)(a2 + 16);
        if ( v32 + 12 < 4 || (v35 = v32 + 16, v33 + 4 < v33) || (v36 = v35 + v34, v35 + v34 < v35) || v36 + 4 < v36 )
          v19 = -1073741675;
        else
          v19 = v36 + 4 + *(_DWORD *)(a2 + 32) < v36 + 4 ? 0xC0000095 : 0;
        if ( v19 < 0 )
          goto LABEL_121;
        if ( !a4 )
          goto LABEL_91;
        v19 = 0;
        *(_DWORD *)(a4 + 4) = v31;
        if ( (_DWORD)v28 == -32 )
        {
          v19 = -1073741762;
        }
        else
        {
          v37 = ExAllocatePool2(0x100uLL, v31, 0x20534C53u);
          if ( v37 )
          {
            *(_QWORD *)(a4 + 8) = v37;
            *(_DWORD *)a4 = 0;
          }
          else
          {
            v19 = -1073741801;
          }
        }
        if ( v19 < 0 )
          goto LABEL_121;
        v38 = *(_DWORD **)(a4 + 8);
        v39 = v30 | 0x10000000;
        if ( v38 )
        {
          for ( n = 0; n < *(_DWORD *)a4; ++n )
          {
            v42 = *v38 + 4;
            if ( *v38 >= 0xFFFFFFFC || (_DWORD *)((char *)v38 + v42) < v38 )
              goto LABEL_98;
            v38 = (_DWORD *)((char *)v38 + v42);
          }
          if ( v38 + 1 < v38 )
            goto LABEL_98;
          if ( (unsigned __int64)(v38 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_106;
          *v38 = 4;
          v38[1] = v39;
        }
        else
        {
          v40 = *(_DWORD *)(a4 + 4);
          if ( v40 + 8 < v40 )
            goto LABEL_97;
          *(_DWORD *)(a4 + 4) = v40 + 8;
        }
        ++*(_DWORD *)a4;
        v43 = *(_QWORD *)(a4 + 8);
        if ( v43 )
        {
          for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
          {
            v46 = *(_DWORD *)v43 + 4;
            if ( *(_DWORD *)v43 >= 0xFFFFFFFC || v43 + v46 < v43 )
              goto LABEL_98;
            v43 += v46;
          }
          if ( v43 + 4 < v43 )
            goto LABEL_98;
          if ( v43 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_106;
          *(_DWORD *)v43 = 8;
          *(_QWORD *)(v43 + 4) = v13;
        }
        else
        {
          v44 = *(_DWORD *)(a4 + 4);
          if ( v44 + 12 < v44 )
            goto LABEL_97;
          *(_DWORD *)(a4 + 4) = v44 + 12;
        }
        ++*(_DWORD *)a4;
        if ( v5 )
        {
          if ( !(_DWORD)v28 )
            goto LABEL_91;
        }
        else if ( (_DWORD)v28 )
        {
LABEL_91:
          v19 = -1073741811;
          goto LABEL_121;
        }
        v47 = *(_DWORD **)(a4 + 8);
        if ( v47 )
        {
          for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
          {
            v51 = *v47 + 4;
            if ( *v47 >= 0xFFFFFFFC || (_DWORD *)((char *)v47 + v51) < v47 )
              goto LABEL_98;
            v47 = (_DWORD *)((char *)v47 + v51);
          }
          if ( v47 + 1 < v47 )
            goto LABEL_98;
          if ( (unsigned __int64)v47 + v28 + 4 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_106;
          *v47 = v28;
          if ( v5 )
            memmove(v47 + 1, v5, (unsigned int)v28);
LABEL_109:
          ++*(_DWORD *)a4;
          v52 = *(_DWORD **)(a4 + 8);
          if ( !v52 )
          {
            v53 = *(_DWORD *)(a4 + 4);
            if ( v53 + 8 >= v53 )
            {
              ++*(_DWORD *)a4;
              v19 = 0;
              *(_DWORD *)(a4 + 4) = v53 + 8;
              goto LABEL_121;
            }
            goto LABEL_97;
          }
          for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
          {
            v55 = *v52 + 4;
            if ( *v52 >= 0xFFFFFFFC || (_DWORD *)((char *)v52 + v55) < v52 )
              goto LABEL_98;
            v52 = (_DWORD *)((char *)v52 + v55);
          }
          if ( v52 + 1 < v52 )
            goto LABEL_98;
          v19 = 0;
          if ( (unsigned __int64)(v52 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *v52 = 4;
            v52[1] = 0;
            ++*(_DWORD *)a4;
            goto LABEL_121;
          }
LABEL_106:
          v19 = -1073741789;
          goto LABEL_121;
        }
        v48 = v28 + 4;
        if ( v48 < 4 )
        {
LABEL_98:
          v19 = -1073741675;
          goto LABEL_121;
        }
        v49 = *(_DWORD *)(a4 + 4);
        if ( v49 + v48 >= v49 )
        {
          *(_DWORD *)(a4 + 4) = v49 + v48;
          goto LABEL_109;
        }
LABEL_97:
        *(_DWORD *)(a4 + 4) = -1;
        goto LABEL_98;
      }
    }
  }
  v19 = -1073741675;
LABEL_121:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v19;
}
