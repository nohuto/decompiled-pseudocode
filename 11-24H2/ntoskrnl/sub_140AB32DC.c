/*
 * XREFs of sub_140AB32DC @ 0x140AB32DC
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     StringCbLengthW @ 0x1404478B0 (StringCbLengthW.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall sub_140AB32DC(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  const wchar_t *v4; // r8
  void *v7; // r13
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r9
  unsigned int *v11; // rcx
  __int64 *v12; // r14
  __int64 v13; // r14
  signed int v14; // ebx
  unsigned int *v15; // rax
  unsigned int j; // edx
  __int64 v17; // r9
  unsigned int *v18; // rcx
  unsigned int *v19; // r15
  bool v20; // cc
  unsigned int v21; // r15d
  unsigned int k; // r9d
  size_t v23; // rdx
  const wchar_t *v24; // rcx
  const void *v25; // rbp
  __int64 v26; // r11
  unsigned int v27; // ecx
  size_t v28; // r12
  void *Pool2; // rax
  void *v30; // rdi
  unsigned int *v31; // rdx
  unsigned int *v32; // rax
  unsigned int m; // r8d
  __int64 v34; // r13
  unsigned int *v35; // rcx
  unsigned int *v36; // rax
  unsigned int n; // r9d
  __int64 v38; // r8
  unsigned int *v39; // rcx
  size_t v40; // rax
  unsigned int ii; // r10d
  __int64 v42; // r11
  unsigned int *v43; // rcx
  unsigned int *v44; // rbp
  size_t v45; // rbp
  void *v46; // rax
  int v47; // r15d
  unsigned int v48; // ecx
  unsigned int v49; // edx
  unsigned int v50; // eax
  int v51; // r8d
  unsigned int v52; // edx
  unsigned int v53; // eax
  __int64 v54; // rax
  _DWORD *v55; // rdx
  int v56; // r15d
  unsigned int v57; // eax
  unsigned int jj; // ecx
  unsigned int v59; // eax
  unsigned __int64 v60; // rdx
  unsigned int v61; // eax
  unsigned int kk; // ecx
  unsigned int v63; // eax
  _DWORD *v64; // rdx
  unsigned int v65; // ebp
  unsigned int v66; // eax
  unsigned int mm; // ecx
  unsigned int v68; // eax
  _DWORD *v69; // rdx
  unsigned int v70; // eax
  unsigned int nn; // ecx
  unsigned int v72; // eax
  void *Src; // [rsp+58h] [rbp-50h]
  size_t pcbLength[9]; // [rsp+60h] [rbp-48h] BYREF

  v4 = *(const wchar_t **)(a1 + 8);
  Src = 0LL;
  v7 = 0LL;
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
  v15 = (unsigned int *)v4;
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
    v19 = v15 + 1;
  if ( (_DWORD)v17 != 4 )
    return (unsigned int)-1073741789;
  v20 = *(_DWORD *)a1 <= 5u;
  v21 = *v19;
  pcbLength[0] = 0LL;
  if ( v20 )
    return (unsigned int)-1073741811;
  for ( k = 0; ; ++k )
  {
    v23 = *(unsigned int *)v4;
    v24 = v4 + 2;
    if ( k >= 5 )
      break;
    if ( v24 < v4 )
      return (unsigned int)-1073741675;
    v4 = (const wchar_t *)((char *)v24 + v23);
    if ( (const wchar_t *)((char *)v24 + v23) < v24 )
      return (unsigned int)-1073741675;
  }
  if ( v24 < v4 )
    return (unsigned int)-1073741675;
  if ( !(_DWORD)v23 )
    return (unsigned int)-1073741762;
  v25 = v4 + 2;
  if ( (v23 & 1) != 0 )
    return (unsigned int)-1073741762;
  if ( v24[(v23 >> 1) - 1] )
    return (unsigned int)-1073741762;
  if ( StringCbLengthW(v24, v23, pcbLength) < 0 )
    return (unsigned int)-1073741762;
  if ( pcbLength[0] + 2 != v26 )
    return (unsigned int)-1073741762;
  v27 = 2 * (pcbLength[0] >> 1) + 2;
  if ( 2 * (unsigned int)(pcbLength[0] >> 1) == -2 )
    return (unsigned int)-1073741762;
  v28 = v27;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v27, 0x20534C53u);
  v30 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v25, v28);
  v31 = *(unsigned int **)(a1 + 8);
  if ( v31 && *(_DWORD *)a1 > 6u )
  {
    v32 = *(unsigned int **)(a1 + 8);
    for ( m = 0; ; ++m )
    {
      v34 = *v32;
      v35 = v32 + 1;
      if ( m >= 6 )
        break;
      if ( v35 < v32 )
        goto LABEL_101;
      v32 = (unsigned int *)((char *)v35 + v34);
      if ( (unsigned int *)((char *)v35 + v34) < v35 )
        goto LABEL_101;
    }
    if ( v35 < v32 )
      goto LABEL_101;
    if ( *(_DWORD *)a1 <= 7u )
    {
LABEL_50:
      v14 = -1073741811;
LABEL_102:
      v7 = Src;
      goto LABEL_103;
    }
    v36 = *(unsigned int **)(a1 + 8);
    for ( n = 0; ; ++n )
    {
      v38 = *v36;
      v39 = v36 + 1;
      if ( n >= 7 )
        break;
      if ( v39 < v36 )
        goto LABEL_101;
      v36 = (unsigned int *)((char *)v39 + v38);
      if ( (unsigned int *)((char *)v39 + v38) < v39 )
        goto LABEL_101;
    }
    if ( v39 < v36 )
      goto LABEL_101;
    v40 = 0LL;
    if ( (_DWORD)v38 )
      v40 = (size_t)v39;
    v20 = *(_DWORD *)a1 <= 8u;
    pcbLength[0] = v40;
    if ( v20 )
      goto LABEL_50;
    for ( ii = 0; ; ++ii )
    {
      v42 = *v31;
      v43 = v31 + 1;
      if ( ii >= 8 )
        break;
      if ( v43 < v31 )
        goto LABEL_101;
      v31 = (unsigned int *)((char *)v43 + v42);
      pcbLength[0] = v40;
      if ( (unsigned int *)((char *)v43 + v42) < v43 )
        goto LABEL_101;
    }
    if ( v43 < v31 )
      goto LABEL_101;
    v44 = 0LL;
    if ( (_DWORD)v42 )
      v44 = v31 + 1;
    if ( (_DWORD)v42 != 4 )
      goto LABEL_69;
    v45 = *v44;
    if ( (_DWORD)v45 )
    {
      v46 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v45, 0x20534C53u);
      Src = v46;
      if ( !v46 )
      {
        v14 = -1073741801;
        v7 = 0LL;
        goto LABEL_103;
      }
      memset_0(v46, 0, v45);
    }
    v47 = qword_140FD8390 ? guard_dispatch_icall_no_overrides(v21, v30) : -1073741637;
    if ( (unsigned int)v45 >= 0xFFFFFFFC )
      goto LABEL_101;
    if ( (unsigned int)(v45 + 24) < 0x14 )
      goto LABEL_101;
    v48 = v45 + 32;
    if ( (int)v45 + 32 < (unsigned int)(v45 + 24) )
      goto LABEL_101;
    if ( v48 >= 0xFFFFFFF8 )
      goto LABEL_101;
    v49 = (v45 + 47) & 0xFFFFFFF8;
    if ( v49 < (int)v45 + 40 || v49 + 8 < v49 )
      goto LABEL_101;
    v50 = v49 + 12;
    v51 = *(_DWORD *)(a2 + 16);
    if ( v49 + 12 < 4 || (v52 = v49 + 16, v50 + 4 < v50) || (v53 = v51 + v52, v51 + v52 < v52) || v53 + 4 < v53 )
      v14 = -1073741675;
    else
      v14 = *(_DWORD *)(a2 + 32) + v53 + 4 < v53 + 4 ? 0xC0000095 : 0;
    if ( v14 < 0 )
      goto LABEL_102;
    if ( !a4 )
      goto LABEL_50;
    *(_DWORD *)(a4 + 4) = v48;
    v14 = 0;
    if ( (_DWORD)v45 == -32 )
    {
      v14 = -1073741762;
    }
    else
    {
      v54 = ExAllocatePool2(0x100uLL, v48, 0x20534C53u);
      if ( v54 )
      {
        *(_QWORD *)(a4 + 8) = v54;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v14 = -1073741801;
      }
    }
    if ( v14 < 0 )
      goto LABEL_102;
    v55 = *(_DWORD **)(a4 + 8);
    v56 = v47 | 0x10000000;
    if ( v55 )
    {
      for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
      {
        v59 = *v55 + 4;
        if ( *v55 >= 0xFFFFFFFC || (_DWORD *)((char *)v55 + v59) < v55 )
          goto LABEL_101;
        v55 = (_DWORD *)((char *)v55 + v59);
      }
      if ( v55 + 1 < v55 )
        goto LABEL_101;
      if ( (unsigned __int64)(v55 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_69;
      *v55 = 4;
      v55[1] = v56;
    }
    else
    {
      v57 = *(_DWORD *)(a4 + 4);
      if ( v57 + 8 < v57 )
        goto LABEL_100;
      *(_DWORD *)(a4 + 4) = v57 + 8;
    }
    ++*(_DWORD *)a4;
    v60 = *(_QWORD *)(a4 + 8);
    if ( !v60 )
    {
      v61 = *(_DWORD *)(a4 + 4);
      if ( v61 + 12 >= v61 )
      {
        *(_DWORD *)(a4 + 4) = v61 + 12;
        goto LABEL_126;
      }
LABEL_100:
      *(_DWORD *)(a4 + 4) = -1;
      goto LABEL_101;
    }
    for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
    {
      v63 = *(_DWORD *)v60 + 4;
      if ( *(_DWORD *)v60 >= 0xFFFFFFFC || v60 + v63 < v60 )
        goto LABEL_101;
      v60 += v63;
    }
    if ( v60 + 4 < v60 )
      goto LABEL_101;
    if ( v60 + 12 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
    {
      *(_DWORD *)v60 = 8;
      *(_QWORD *)(v60 + 4) = v13;
LABEL_126:
      ++*(_DWORD *)a4;
      if ( Src )
      {
        if ( !(_DWORD)v45 )
          goto LABEL_128;
      }
      else if ( (_DWORD)v45 )
      {
LABEL_128:
        v14 = -1073741811;
LABEL_136:
        v7 = Src;
        goto LABEL_103;
      }
      v64 = *(_DWORD **)(a4 + 8);
      if ( v64 )
      {
        for ( mm = 0; mm < *(_DWORD *)a4; ++mm )
        {
          v68 = *v64 + 4;
          if ( *v64 >= 0xFFFFFFFC || (_DWORD *)((char *)v64 + v68) < v64 )
            goto LABEL_135;
          v64 = (_DWORD *)((char *)v64 + v68);
        }
        if ( v64 + 1 >= v64 )
        {
          if ( (unsigned __int64)v64 + v45 + 4 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
          {
            v14 = -1073741789;
            goto LABEL_136;
          }
          *v64 = v45;
          if ( Src )
            memmove(v64 + 1, Src, (unsigned int)v45);
          goto LABEL_147;
        }
      }
      else
      {
        v65 = v45 + 4;
        if ( v65 >= 4 )
        {
          v66 = *(_DWORD *)(a4 + 4);
          if ( v66 + v65 >= v66 )
          {
            *(_DWORD *)(a4 + 4) = v66 + v65;
LABEL_147:
            ++*(_DWORD *)a4;
            v69 = *(_DWORD **)(a4 + 8);
            if ( !v69 )
            {
              v70 = *(_DWORD *)(a4 + 4);
              if ( v70 + 8 >= v70 )
              {
                ++*(_DWORD *)a4;
                v14 = 0;
                *(_DWORD *)(a4 + 4) = v70 + 8;
                goto LABEL_102;
              }
              goto LABEL_100;
            }
            for ( nn = 0; nn < *(_DWORD *)a4; ++nn )
            {
              v72 = *v69 + 4;
              if ( *v69 >= 0xFFFFFFFC || (_DWORD *)((char *)v69 + v72) < v69 )
                goto LABEL_101;
              v69 = (_DWORD *)((char *)v69 + v72);
            }
            if ( v69 + 1 >= v69 )
            {
              v14 = 0;
              if ( (unsigned __int64)(v69 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
              {
                *v69 = 4;
                v69[1] = 0;
                ++*(_DWORD *)a4;
                goto LABEL_102;
              }
              goto LABEL_69;
            }
LABEL_101:
            v14 = -1073741675;
            goto LABEL_102;
          }
          *(_DWORD *)(a4 + 4) = -1;
        }
      }
LABEL_135:
      v14 = -1073741675;
      goto LABEL_136;
    }
LABEL_69:
    v14 = -1073741789;
    goto LABEL_102;
  }
  v14 = -1073741811;
LABEL_103:
  if ( v30 )
    ExFreePoolWithTag(v30, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v14;
}
