/*
 * XREFs of sub_1404B4658 @ 0x1404B4658
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_1404B4658(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
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
  unsigned int j; // edx
  __int64 v17; // rax
  unsigned int *v18; // rcx
  unsigned int *v19; // rbp
  size_t v20; // rbp
  void *Pool2; // rax
  int v22; // edx
  void *v23; // rcx
  int v24; // r15d
  unsigned int v25; // ecx
  unsigned int v26; // edx
  unsigned int v27; // eax
  int v28; // r8d
  unsigned int v29; // edx
  unsigned int v30; // eax
  __int64 v31; // rax
  _DWORD *v32; // rdx
  int v33; // r15d
  unsigned int v34; // eax
  unsigned int k; // ecx
  unsigned int v36; // eax
  unsigned __int64 v37; // rdx
  unsigned int v38; // eax
  unsigned int m; // ecx
  unsigned int v40; // eax
  _DWORD *v41; // rdx
  unsigned int v42; // ebp
  unsigned int v43; // eax
  unsigned int n; // ecx
  unsigned int v45; // eax
  _DWORD *v46; // rdx
  unsigned int v47; // eax
  unsigned int ii; // ecx
  unsigned int v49; // eax

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
  for ( j = 0; ; ++j )
  {
    v17 = *v4;
    v18 = v4 + 1;
    if ( j >= 4 )
      break;
    if ( v18 < v4 )
      return (unsigned int)-1073741675;
    v4 = (unsigned int *)((char *)v18 + v17);
    if ( (unsigned int *)((char *)v18 + v17) < v18 )
      return (unsigned int)-1073741675;
  }
  if ( v18 < v4 )
    return (unsigned int)-1073741675;
  v19 = 0LL;
  if ( (_DWORD)v17 )
    v19 = v4 + 1;
  if ( (_DWORD)v17 != 4 )
    return (unsigned int)-1073741789;
  v20 = *v19;
  if ( (_DWORD)v20 )
  {
    Pool2 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v20, 0x20534C53u);
    v5 = Pool2;
    if ( !Pool2 )
      return (unsigned int)-1073741801;
    memset_0(Pool2, 0, v20);
    v22 = 0;
  }
  else
  {
    v22 = 1;
  }
  if ( qword_140FD8408 )
  {
    v23 = 0LL;
    if ( !v22 )
      v23 = v5;
    v24 = guard_dispatch_icall_no_overrides(v23, (unsigned int)v20);
  }
  else
  {
    v24 = -1073741637;
  }
  if ( (unsigned int)v20 < 0xFFFFFFFC && (unsigned int)(v20 + 24) >= 0x14 )
  {
    v25 = v20 + 32;
    if ( (int)v20 + 32 >= (unsigned int)(v20 + 24) && v25 < 0xFFFFFFF8 )
    {
      v26 = (v20 + 47) & 0xFFFFFFF8;
      if ( v26 >= (int)v20 + 40 && v26 + 8 >= v26 )
      {
        v27 = v26 + 12;
        v28 = *(_DWORD *)(a2 + 16);
        if ( v26 + 12 < 4 || (v29 = v26 + 16, v27 + 4 < v27) || (v30 = v29 + v28, v29 + v28 < v29) || v30 + 4 < v30 )
          v15 = -1073741675;
        else
          v15 = v30 + 4 + *(_DWORD *)(a2 + 32) < v30 + 4 ? 0xC0000095 : 0;
        if ( v15 < 0 )
          goto LABEL_108;
        if ( !a4 )
          goto LABEL_78;
        v15 = 0;
        *(_DWORD *)(a4 + 4) = v25;
        if ( (_DWORD)v20 == -32 )
        {
          v15 = -1073741762;
        }
        else
        {
          v31 = ExAllocatePool2(0x100uLL, v25, 0x20534C53u);
          if ( v31 )
          {
            *(_QWORD *)(a4 + 8) = v31;
            *(_DWORD *)a4 = 0;
          }
          else
          {
            v15 = -1073741801;
          }
        }
        if ( v15 < 0 )
          goto LABEL_108;
        v32 = *(_DWORD **)(a4 + 8);
        v33 = v24 | 0x10000000;
        if ( v32 )
        {
          for ( k = 0; k < *(_DWORD *)a4; ++k )
          {
            v36 = *v32 + 4;
            if ( *v32 >= 0xFFFFFFFC || (_DWORD *)((char *)v32 + v36) < v32 )
              goto LABEL_85;
            v32 = (_DWORD *)((char *)v32 + v36);
          }
          if ( v32 + 1 < v32 )
            goto LABEL_85;
          if ( (unsigned __int64)(v32 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_93;
          *v32 = 4;
          v32[1] = v33;
        }
        else
        {
          v34 = *(_DWORD *)(a4 + 4);
          if ( v34 + 8 < v34 )
            goto LABEL_84;
          *(_DWORD *)(a4 + 4) = v34 + 8;
        }
        ++*(_DWORD *)a4;
        v37 = *(_QWORD *)(a4 + 8);
        if ( v37 )
        {
          for ( m = 0; m < *(_DWORD *)a4; ++m )
          {
            v40 = *(_DWORD *)v37 + 4;
            if ( *(_DWORD *)v37 >= 0xFFFFFFFC || v37 + v40 < v37 )
              goto LABEL_85;
            v37 += v40;
          }
          if ( v37 + 4 < v37 )
            goto LABEL_85;
          if ( v37 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_93;
          *(_DWORD *)v37 = 8;
          *(_QWORD *)(v37 + 4) = v14;
        }
        else
        {
          v38 = *(_DWORD *)(a4 + 4);
          if ( v38 + 12 < v38 )
            goto LABEL_84;
          *(_DWORD *)(a4 + 4) = v38 + 12;
        }
        ++*(_DWORD *)a4;
        if ( v5 )
        {
          if ( !(_DWORD)v20 )
            goto LABEL_78;
        }
        else if ( (_DWORD)v20 )
        {
LABEL_78:
          v15 = -1073741811;
          goto LABEL_108;
        }
        v41 = *(_DWORD **)(a4 + 8);
        if ( v41 )
        {
          for ( n = 0; n < *(_DWORD *)a4; ++n )
          {
            v45 = *v41 + 4;
            if ( *v41 >= 0xFFFFFFFC || (_DWORD *)((char *)v41 + v45) < v41 )
              goto LABEL_85;
            v41 = (_DWORD *)((char *)v41 + v45);
          }
          if ( v41 + 1 < v41 )
            goto LABEL_85;
          if ( (unsigned __int64)v41 + v20 + 4 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            goto LABEL_93;
          *v41 = v20;
          if ( v5 )
            memmove(v41 + 1, v5, (unsigned int)v20);
LABEL_96:
          ++*(_DWORD *)a4;
          v46 = *(_DWORD **)(a4 + 8);
          if ( !v46 )
          {
            v47 = *(_DWORD *)(a4 + 4);
            if ( v47 + 8 >= v47 )
            {
              ++*(_DWORD *)a4;
              v15 = 0;
              *(_DWORD *)(a4 + 4) = v47 + 8;
              goto LABEL_108;
            }
            goto LABEL_84;
          }
          for ( ii = 0; ii < *(_DWORD *)a4; ++ii )
          {
            v49 = *v46 + 4;
            if ( *v46 >= 0xFFFFFFFC || (_DWORD *)((char *)v46 + v49) < v46 )
              goto LABEL_85;
            v46 = (_DWORD *)((char *)v46 + v49);
          }
          if ( v46 + 1 < v46 )
            goto LABEL_85;
          v15 = 0;
          if ( (unsigned __int64)(v46 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            *v46 = 4;
            v46[1] = 0;
            ++*(_DWORD *)a4;
            goto LABEL_108;
          }
LABEL_93:
          v15 = -1073741789;
          goto LABEL_108;
        }
        v42 = v20 + 4;
        if ( v42 < 4 )
        {
LABEL_85:
          v15 = -1073741675;
          goto LABEL_108;
        }
        v43 = *(_DWORD *)(a4 + 4);
        if ( v43 + v42 >= v43 )
        {
          *(_DWORD *)(a4 + 4) = v43 + v42;
          goto LABEL_96;
        }
LABEL_84:
        *(_DWORD *)(a4 + 4) = -1;
        goto LABEL_85;
      }
    }
  }
  v15 = -1073741675;
LABEL_108:
  if ( v5 )
    ExFreePoolWithTag(v5, 0);
  return (unsigned int)v15;
}
