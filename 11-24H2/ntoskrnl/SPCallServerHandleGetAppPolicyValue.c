/*
 * XREFs of SPCallServerHandleGetAppPolicyValue @ 0x140A4D140
 * Callers:
 *     sub_14095C450 @ 0x14095C450 (sub_14095C450.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SPCallServerHandleGetAppPolicyValue(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  unsigned int *v4; // r8
  void *v7; // r13
  unsigned int *v8; // rax
  unsigned int i; // edx
  __int64 v10; // r9
  unsigned int *v11; // rcx
  signed int v12; // ebx
  __int64 *v14; // r12
  __int64 v15; // r12
  unsigned int j; // ecx
  unsigned __int64 v17; // r9
  unsigned int *v18; // rdx
  _WORD *v19; // rcx
  unsigned __int64 v20; // rax
  const void *v21; // rsi
  unsigned __int64 v22; // rdx
  unsigned int v23; // ebx
  void *Pool2; // rax
  void *v25; // rdi
  unsigned int *v26; // rdx
  unsigned int *v27; // rax
  unsigned int k; // r8d
  __int64 v29; // rsi
  unsigned int *v30; // rcx
  unsigned int *v31; // rbx
  unsigned int *v32; // rax
  unsigned int m; // r8d
  __int64 v34; // r10
  unsigned int *v35; // rcx
  unsigned int *v36; // rax
  unsigned int n; // r9d
  __int64 v38; // r8
  unsigned int *v39; // rcx
  unsigned int ii; // r10d
  __int64 v41; // rax
  unsigned int *v42; // rcx
  unsigned int *v43; // r15
  __int64 v44; // r15
  void *v45; // rax
  int v46; // r13d
  unsigned int v47; // ecx
  unsigned int v48; // edx
  unsigned int v49; // eax
  int v50; // r8d
  __int64 v51; // rax
  _DWORD *v52; // rdx
  int v53; // r13d
  unsigned int jj; // ecx
  unsigned int v55; // eax
  unsigned __int64 v56; // rdx
  unsigned int kk; // ecx
  unsigned int v58; // eax
  _DWORD *v59; // rdx
  unsigned int mm; // ecx
  unsigned int v61; // eax
  _DWORD *v62; // rdx
  unsigned int nn; // ecx
  unsigned int v64; // eax
  _DWORD *v65; // rdx
  unsigned int v66; // eax
  unsigned int v67; // edx
  unsigned int v68; // eax
  unsigned int v69; // eax
  unsigned int v70; // r15d
  unsigned int v71; // eax
  unsigned int v72; // eax
  unsigned int v73; // eax
  unsigned int i1; // ecx
  unsigned int v75; // eax
  _DWORD *v76; // rdx
  unsigned int v77; // eax
  unsigned int i2; // ecx
  unsigned int v79; // eax
  void *Src; // [rsp+70h] [rbp-10h]

  v4 = *(unsigned int **)(a1 + 8);
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
  v14 = 0LL;
  if ( (_DWORD)v10 )
    v14 = (__int64 *)(v8 + 1);
  if ( (_DWORD)v10 != 8 )
    return (unsigned int)-1073741789;
  v15 = *v14;
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
  if ( !(_DWORD)v17 )
    return (unsigned int)-1073741762;
  v19 = v4 + 1;
  if ( (v17 & 1) != 0 )
    return (unsigned int)-1073741762;
  v20 = v17 >> 1;
  if ( *((_WORD *)v18 + (v17 >> 1) - 1) || v4 == (unsigned int *)-4LL )
    return (unsigned int)-1073741762;
  v21 = v4 + 1;
  if ( !v20 )
    goto LABEL_169;
  do
  {
    if ( !*v19 )
      break;
    ++v19;
    --v20;
  }
  while ( v20 );
  if ( v20 )
    v22 = (v17 >> 1) - v20;
  else
LABEL_169:
    v22 = 0LL;
  if ( !v20 || 2 * v22 + 2 != v17 || 2 * (unsigned int)((2 * v22) >> 1) == -2 )
    return (unsigned int)-1073741762;
  v23 = 2 * ((2 * v22) >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL, v23, 0x20534C53u);
  v25 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v21, v23);
  v26 = *(unsigned int **)(a1 + 8);
  if ( !v26 || *(_DWORD *)a1 <= 5u )
    goto LABEL_159;
  v27 = *(unsigned int **)(a1 + 8);
  for ( k = 0; ; ++k )
  {
    v29 = *v27;
    v30 = v27 + 1;
    if ( k >= 5 )
      break;
    if ( v30 < v27 )
      goto LABEL_39;
    v27 = (unsigned int *)((char *)v30 + v29);
    if ( (unsigned int *)((char *)v30 + v29) < v30 )
      goto LABEL_39;
  }
  if ( v30 < v27 )
    goto LABEL_39;
  v31 = 0LL;
  if ( (_DWORD)v29 )
    v31 = v27 + 1;
  if ( *(_DWORD *)a1 <= 6u )
    goto LABEL_159;
  v32 = *(unsigned int **)(a1 + 8);
  for ( m = 0; ; ++m )
  {
    v34 = *v32;
    v35 = v32 + 1;
    if ( m >= 6 )
      break;
    if ( v35 < v32 )
      goto LABEL_39;
    v32 = (unsigned int *)((char *)v35 + v34);
    if ( (unsigned int *)((char *)v35 + v34) < v35 )
      goto LABEL_39;
  }
  if ( v35 < v32 )
    goto LABEL_39;
  if ( (_DWORD)v34 != 4 )
  {
    v12 = -1073741789;
    goto LABEL_40;
  }
  if ( *(_DWORD *)a1 <= 7u )
  {
LABEL_159:
    v12 = -1073741811;
    goto LABEL_40;
  }
  v36 = *(unsigned int **)(a1 + 8);
  for ( n = 0; ; ++n )
  {
    v38 = *v36;
    v39 = v36 + 1;
    if ( n >= 7 )
      break;
    if ( v39 < v36 )
      goto LABEL_39;
    v36 = (unsigned int *)((char *)v39 + v38);
    if ( (unsigned int *)((char *)v39 + v38) < v39 )
      goto LABEL_39;
  }
  if ( v39 >= v36 )
  {
    if ( *(_DWORD *)a1 <= 8u )
      goto LABEL_162;
    for ( ii = 0; ; ++ii )
    {
      v41 = *v26;
      v42 = v26 + 1;
      if ( ii >= 8 )
        break;
      if ( v42 < v26 )
        goto LABEL_68;
      v26 = (unsigned int *)((char *)v42 + v41);
      if ( (unsigned int *)((char *)v42 + v41) < v42 )
        goto LABEL_68;
    }
    if ( v42 < v26 )
      goto LABEL_68;
    v43 = 0LL;
    if ( (_DWORD)v41 )
      v43 = v26 + 1;
    if ( (_DWORD)v41 != 4 )
      goto LABEL_161;
    v44 = *v43;
    if ( (_DWORD)v44 )
    {
      v45 = (void *)ExAllocatePool2(0x100uLL, (unsigned int)v44, 0x20534C53u);
      Src = v45;
      if ( !v45 )
      {
        v12 = -1073741801;
        v7 = 0LL;
        goto LABEL_40;
      }
      memset_0(v45, 0, (unsigned int)v44);
    }
    v46 = qword_140FD8398 ? guard_dispatch_icall_no_overrides(v25, v31) : -1073741637;
    if ( (unsigned int)v44 >= 0xFFFFFFFC
      || (unsigned int)(v44 + 24) < 0x14
      || (int)v44 + 32 < (unsigned int)(v44 + 24)
      || (int)v44 + 40 < (unsigned int)(v44 + 32)
      || (v47 = v44 + 48, (int)v44 + 48 < (unsigned int)(v44 + 40))
      || v47 >= 0xFFFFFFF8
      || (v48 = (v44 + 63) & 0xFFFFFFF8, v48 < (int)v44 + 56)
      || v48 + 8 < v48 )
    {
LABEL_68:
      v12 = -1073741675;
      goto LABEL_69;
    }
    v49 = v48 + 12;
    v50 = *(_DWORD *)(a2 + 16);
    if ( v48 + 12 < 4 || (v67 = v48 + 16, v49 + 4 < v49) || (v68 = v50 + v67, v50 + v67 < v67) || v68 + 4 < v68 )
      v12 = -1073741675;
    else
      v12 = *(_DWORD *)(a2 + 32) + v68 + 4 < v68 + 4 ? 0xC0000095 : 0;
    if ( v12 < 0 )
      goto LABEL_69;
    if ( !a4 )
    {
LABEL_162:
      v12 = -1073741811;
      goto LABEL_69;
    }
    v12 = 0;
    *(_DWORD *)(a4 + 4) = v47;
    if ( (_DWORD)v44 == -48 )
    {
      v12 = -1073741762;
    }
    else
    {
      v51 = ExAllocatePool2(0x100uLL, v47, 0x20534C53u);
      if ( v51 )
      {
        *(_QWORD *)(a4 + 8) = v51;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v12 = -1073741801;
      }
    }
    if ( v12 < 0 )
      goto LABEL_69;
    v52 = *(_DWORD **)(a4 + 8);
    v53 = v46 | 0x10000000;
    if ( v52 )
    {
      for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
      {
        v55 = *v52 + 4;
        if ( v55 < 4 || (_DWORD *)((char *)v52 + v55) < v52 )
          goto LABEL_101;
        v52 = (_DWORD *)((char *)v52 + v55);
      }
      if ( v52 + 1 < v52 )
        goto LABEL_101;
      if ( (unsigned __int64)(v52 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_161;
      *v52 = 4;
      v52[1] = v53;
    }
    else
    {
      v69 = *(_DWORD *)(a4 + 4);
      if ( v69 + 8 < v69 )
        goto LABEL_151;
      *(_DWORD *)(a4 + 4) = v69 + 8;
    }
    ++*(_DWORD *)a4;
    v56 = *(_QWORD *)(a4 + 8);
    if ( v56 )
    {
      for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
      {
        v58 = *(_DWORD *)v56 + 4;
        if ( v58 < 4 || v56 + v58 < v56 )
          goto LABEL_101;
        v56 += v58;
      }
      if ( v56 + 4 < v56 )
        goto LABEL_101;
      if ( v56 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_161;
      *(_DWORD *)v56 = 8;
      *(_QWORD *)(v56 + 4) = v15;
    }
    else
    {
      v72 = *(_DWORD *)(a4 + 4);
      if ( v72 + 12 < v72 )
        goto LABEL_151;
      *(_DWORD *)(a4 + 4) = v72 + 12;
    }
    ++*(_DWORD *)a4;
    if ( Src )
    {
      if ( (_DWORD)v44 )
      {
LABEL_119:
        v59 = *(_DWORD **)(a4 + 8);
        if ( v59 )
        {
          for ( mm = 0; mm < *(_DWORD *)a4; ++mm )
          {
            v61 = *v59 + 4;
            if ( v61 < 4 || (_DWORD *)((char *)v59 + v61) < v59 )
              goto LABEL_123;
            v59 = (_DWORD *)((char *)v59 + v61);
          }
          if ( v59 + 1 >= v59 )
          {
            if ( (unsigned __int64)v59 + v44 + 4 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *v59 = v44;
              if ( Src )
                memmove(v59 + 1, Src, (unsigned int)v44);
              goto LABEL_129;
            }
            v12 = -1073741789;
LABEL_124:
            v7 = Src;
            goto LABEL_40;
          }
        }
        else
        {
          v70 = v44 + 4;
          if ( v70 >= 4 )
          {
            v71 = *(_DWORD *)(a4 + 4);
            if ( v71 + v70 >= v71 )
            {
              *(_DWORD *)(a4 + 4) = v71 + v70;
LABEL_129:
              ++*(_DWORD *)a4;
              v62 = *(_DWORD **)(a4 + 8);
              if ( v62 )
              {
                for ( nn = 0; nn < *(_DWORD *)a4; ++nn )
                {
                  v64 = *v62 + 4;
                  if ( v64 < 4 || (_DWORD *)((char *)v62 + v64) < v62 )
                    goto LABEL_101;
                  v62 = (_DWORD *)((char *)v62 + v64);
                }
                if ( v62 + 1 < v62 )
                  goto LABEL_101;
                if ( (unsigned __int64)(v62 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_161;
                *v62 = 4;
                v62[1] = 0;
              }
              else
              {
                v73 = *(_DWORD *)(a4 + 4);
                if ( v73 + 8 < v73 )
                  goto LABEL_151;
                *(_DWORD *)(a4 + 4) = v73 + 8;
              }
              ++*(_DWORD *)a4;
              v65 = *(_DWORD **)(a4 + 8);
              if ( v65 )
              {
                for ( i1 = 0; i1 < *(_DWORD *)a4; ++i1 )
                {
                  v75 = *v65 + 4;
                  if ( v75 < 4 || (_DWORD *)((char *)v65 + v75) < v65 )
                    goto LABEL_101;
                  v65 = (_DWORD *)((char *)v65 + v75);
                }
                if ( v65 + 1 < v65 )
                  goto LABEL_101;
                if ( (unsigned __int64)(v65 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_161;
                *v65 = 4;
                v65[1] = 0;
LABEL_182:
                ++*(_DWORD *)a4;
                v76 = *(_DWORD **)(a4 + 8);
                if ( !v76 )
                {
                  v77 = *(_DWORD *)(a4 + 4);
                  if ( v77 + 8 >= v77 )
                  {
                    ++*(_DWORD *)a4;
                    v12 = 0;
                    *(_DWORD *)(a4 + 4) = v77 + 8;
                    goto LABEL_69;
                  }
                  goto LABEL_151;
                }
                for ( i2 = 0; i2 < *(_DWORD *)a4; ++i2 )
                {
                  v79 = *v76 + 4;
                  if ( v79 < 4 || (_DWORD *)((char *)v76 + v79) < v76 )
                    goto LABEL_101;
                  v76 = (_DWORD *)((char *)v76 + v79);
                }
                if ( v76 + 1 < v76 )
                  goto LABEL_101;
                v12 = 0;
                if ( (unsigned __int64)(v76 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *v76 = 4;
                  v76[1] = 0;
                  ++*(_DWORD *)a4;
                  goto LABEL_69;
                }
LABEL_161:
                v12 = -1073741789;
                goto LABEL_69;
              }
              v66 = *(_DWORD *)(a4 + 4);
              if ( v66 + 8 >= v66 )
              {
                *(_DWORD *)(a4 + 4) = v66 + 8;
                goto LABEL_182;
              }
LABEL_151:
              *(_DWORD *)(a4 + 4) = -1;
LABEL_101:
              v12 = -1073741675;
LABEL_69:
              v7 = Src;
              goto LABEL_40;
            }
            *(_DWORD *)(a4 + 4) = -1;
          }
        }
LABEL_123:
        v12 = -1073741675;
        goto LABEL_124;
      }
    }
    else if ( !(_DWORD)v44 )
    {
      goto LABEL_119;
    }
    v12 = -1073741811;
    goto LABEL_124;
  }
LABEL_39:
  v12 = -1073741675;
LABEL_40:
  if ( v25 )
    ExFreePoolWithTag(v25, 0);
  if ( v7 )
    ExFreePoolWithTag(v7, 0);
  return (unsigned int)v12;
}
