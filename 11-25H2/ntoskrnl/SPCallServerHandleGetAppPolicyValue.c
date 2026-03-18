/*
 * XREFs of SPCallServerHandleGetAppPolicyValue @ 0x140A53A04
 * Callers:
 *     sub_140979E70 @ 0x140979E70 (sub_140979E70.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406B4940 (memmove.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
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
  unsigned int *v31; // rax
  unsigned int m; // r8d
  __int64 v33; // r10
  unsigned int *v34; // rcx
  unsigned int *v35; // rax
  unsigned int n; // r9d
  __int64 v37; // r8
  unsigned int *v38; // rcx
  unsigned int ii; // r10d
  __int64 v40; // rax
  unsigned int *v41; // rcx
  unsigned int *v42; // r15
  __int64 v43; // r15
  void *v44; // rax
  int v45; // r13d
  unsigned int v46; // ecx
  unsigned int v47; // edx
  unsigned int v48; // eax
  int v49; // r8d
  __int64 v50; // rax
  _DWORD *v51; // rdx
  int v52; // r13d
  unsigned int jj; // ecx
  unsigned int v54; // eax
  unsigned __int64 v55; // rdx
  unsigned int kk; // ecx
  unsigned int v57; // eax
  _DWORD *v58; // rdx
  unsigned int mm; // ecx
  unsigned int v60; // eax
  _DWORD *v61; // rdx
  unsigned int nn; // ecx
  unsigned int v63; // eax
  _DWORD *v64; // rdx
  unsigned int v65; // eax
  unsigned int v66; // edx
  unsigned int v67; // eax
  unsigned int v68; // eax
  unsigned int v69; // r15d
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // eax
  unsigned int i1; // ecx
  unsigned int v74; // eax
  _DWORD *v75; // rdx
  unsigned int v76; // eax
  unsigned int i2; // ecx
  unsigned int v78; // eax
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
    goto LABEL_167;
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
LABEL_167:
    v22 = 0LL;
  if ( !v20 || 2 * v22 + 2 != v17 || 2 * (unsigned int)((2 * v22) >> 1) == -2 )
    return (unsigned int)-1073741762;
  v23 = 2 * ((2 * v22) >> 1) + 2;
  Pool2 = (void *)ExAllocatePool2(0x100uLL);
  v25 = Pool2;
  if ( !Pool2 )
    return (unsigned int)-1073741801;
  memmove(Pool2, v21, v23);
  v26 = *(unsigned int **)(a1 + 8);
  if ( !v26 || *(_DWORD *)a1 <= 5u )
    goto LABEL_157;
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
  if ( *(_DWORD *)a1 <= 6u )
    goto LABEL_157;
  v31 = *(unsigned int **)(a1 + 8);
  for ( m = 0; ; ++m )
  {
    v33 = *v31;
    v34 = v31 + 1;
    if ( m >= 6 )
      break;
    if ( v34 < v31 )
      goto LABEL_39;
    v31 = (unsigned int *)((char *)v34 + v33);
    if ( (unsigned int *)((char *)v34 + v33) < v34 )
      goto LABEL_39;
  }
  if ( v34 < v31 )
    goto LABEL_39;
  if ( (_DWORD)v33 != 4 )
  {
    v12 = -1073741789;
    goto LABEL_40;
  }
  if ( *(_DWORD *)a1 <= 7u )
  {
LABEL_157:
    v12 = -1073741811;
    goto LABEL_40;
  }
  v35 = *(unsigned int **)(a1 + 8);
  for ( n = 0; ; ++n )
  {
    v37 = *v35;
    v38 = v35 + 1;
    if ( n >= 7 )
      break;
    if ( v38 < v35 )
      goto LABEL_39;
    v35 = (unsigned int *)((char *)v38 + v37);
    if ( (unsigned int *)((char *)v38 + v37) < v38 )
      goto LABEL_39;
  }
  if ( v38 >= v35 )
  {
    if ( *(_DWORD *)a1 <= 8u )
      goto LABEL_160;
    for ( ii = 0; ; ++ii )
    {
      v40 = *v26;
      v41 = v26 + 1;
      if ( ii >= 8 )
        break;
      if ( v41 < v26 )
        goto LABEL_66;
      v26 = (unsigned int *)((char *)v41 + v40);
      if ( (unsigned int *)((char *)v41 + v40) < v41 )
        goto LABEL_66;
    }
    if ( v41 < v26 )
      goto LABEL_66;
    v42 = 0LL;
    if ( (_DWORD)v40 )
      v42 = v26 + 1;
    if ( (_DWORD)v40 != 4 )
      goto LABEL_159;
    v43 = *v42;
    if ( (_DWORD)v43 )
    {
      v44 = (void *)ExAllocatePool2(0x100uLL);
      Src = v44;
      if ( !v44 )
      {
        v12 = -1073741801;
        v7 = 0LL;
        goto LABEL_40;
      }
      memset_0(v44, 0, (unsigned int)v43);
    }
    v45 = qword_140FD7388 ? guard_dispatch_icall_no_overrides(v25) : -1073741637;
    if ( (unsigned int)v43 >= 0xFFFFFFFC
      || (unsigned int)(v43 + 24) < 0x14
      || (int)v43 + 32 < (unsigned int)(v43 + 24)
      || (int)v43 + 40 < (unsigned int)(v43 + 32)
      || (v46 = v43 + 48, (int)v43 + 48 < (unsigned int)(v43 + 40))
      || v46 >= 0xFFFFFFF8
      || (v47 = (v43 + 63) & 0xFFFFFFF8, v47 < (int)v43 + 56)
      || v47 + 8 < v47 )
    {
LABEL_66:
      v12 = -1073741675;
      goto LABEL_67;
    }
    v48 = v47 + 12;
    v49 = *(_DWORD *)(a2 + 16);
    if ( v47 + 12 < 4 || (v66 = v47 + 16, v48 + 4 < v48) || (v67 = v49 + v66, v49 + v66 < v66) || v67 + 4 < v67 )
      v12 = -1073741675;
    else
      v12 = *(_DWORD *)(a2 + 32) + v67 + 4 < v67 + 4 ? 0xC0000095 : 0;
    if ( v12 < 0 )
      goto LABEL_67;
    if ( !a4 )
    {
LABEL_160:
      v12 = -1073741811;
      goto LABEL_67;
    }
    v12 = 0;
    *(_DWORD *)(a4 + 4) = v46;
    if ( (_DWORD)v43 == -48 )
    {
      v12 = -1073741762;
    }
    else
    {
      v50 = ExAllocatePool2(0x100uLL);
      if ( v50 )
      {
        *(_QWORD *)(a4 + 8) = v50;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v12 = -1073741801;
      }
    }
    if ( v12 < 0 )
      goto LABEL_67;
    v51 = *(_DWORD **)(a4 + 8);
    v52 = v45 | 0x10000000;
    if ( v51 )
    {
      for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
      {
        v54 = *v51 + 4;
        if ( v54 < 4 || (_DWORD *)((char *)v51 + v54) < v51 )
          goto LABEL_99;
        v51 = (_DWORD *)((char *)v51 + v54);
      }
      if ( v51 + 1 < v51 )
        goto LABEL_99;
      if ( (unsigned __int64)(v51 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_159;
      *v51 = 4;
      v51[1] = v52;
    }
    else
    {
      v68 = *(_DWORD *)(a4 + 4);
      if ( v68 + 8 < v68 )
        goto LABEL_149;
      *(_DWORD *)(a4 + 4) = v68 + 8;
    }
    ++*(_DWORD *)a4;
    v55 = *(_QWORD *)(a4 + 8);
    if ( v55 )
    {
      for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
      {
        v57 = *(_DWORD *)v55 + 4;
        if ( v57 < 4 || v55 + v57 < v55 )
          goto LABEL_99;
        v55 += v57;
      }
      if ( v55 + 4 < v55 )
        goto LABEL_99;
      if ( v55 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_159;
      *(_DWORD *)v55 = 8;
      *(_QWORD *)(v55 + 4) = v15;
    }
    else
    {
      v71 = *(_DWORD *)(a4 + 4);
      if ( v71 + 12 < v71 )
        goto LABEL_149;
      *(_DWORD *)(a4 + 4) = v71 + 12;
    }
    ++*(_DWORD *)a4;
    if ( Src )
    {
      if ( (_DWORD)v43 )
      {
LABEL_116:
        v58 = *(_DWORD **)(a4 + 8);
        if ( v58 )
        {
          for ( mm = 0; mm < *(_DWORD *)a4; ++mm )
          {
            v60 = *v58 + 4;
            if ( v60 < 4 || (_DWORD *)((char *)v58 + v60) < v58 )
              goto LABEL_120;
            v58 = (_DWORD *)((char *)v58 + v60);
          }
          if ( v58 + 1 >= v58 )
          {
            if ( (unsigned __int64)v58 + v43 + 4 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *v58 = v43;
              if ( Src )
                memmove(v58 + 1, Src, (unsigned int)v43);
              goto LABEL_126;
            }
            v12 = -1073741789;
LABEL_121:
            v7 = Src;
            goto LABEL_40;
          }
        }
        else
        {
          v69 = v43 + 4;
          if ( v69 >= 4 )
          {
            v70 = *(_DWORD *)(a4 + 4);
            if ( v70 + v69 >= v70 )
            {
              *(_DWORD *)(a4 + 4) = v70 + v69;
LABEL_126:
              ++*(_DWORD *)a4;
              v61 = *(_DWORD **)(a4 + 8);
              if ( v61 )
              {
                for ( nn = 0; nn < *(_DWORD *)a4; ++nn )
                {
                  v63 = *v61 + 4;
                  if ( v63 < 4 || (_DWORD *)((char *)v61 + v63) < v61 )
                    goto LABEL_99;
                  v61 = (_DWORD *)((char *)v61 + v63);
                }
                if ( v61 + 1 < v61 )
                  goto LABEL_99;
                if ( (unsigned __int64)(v61 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_159;
                *v61 = 4;
                v61[1] = 0;
              }
              else
              {
                v72 = *(_DWORD *)(a4 + 4);
                if ( v72 + 8 < v72 )
                  goto LABEL_149;
                *(_DWORD *)(a4 + 4) = v72 + 8;
              }
              ++*(_DWORD *)a4;
              v64 = *(_DWORD **)(a4 + 8);
              if ( v64 )
              {
                for ( i1 = 0; i1 < *(_DWORD *)a4; ++i1 )
                {
                  v74 = *v64 + 4;
                  if ( v74 < 4 || (_DWORD *)((char *)v64 + v74) < v64 )
                    goto LABEL_99;
                  v64 = (_DWORD *)((char *)v64 + v74);
                }
                if ( v64 + 1 < v64 )
                  goto LABEL_99;
                if ( (unsigned __int64)(v64 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_159;
                *v64 = 4;
                v64[1] = 0;
LABEL_180:
                ++*(_DWORD *)a4;
                v75 = *(_DWORD **)(a4 + 8);
                if ( !v75 )
                {
                  v76 = *(_DWORD *)(a4 + 4);
                  if ( v76 + 8 >= v76 )
                  {
                    ++*(_DWORD *)a4;
                    v12 = 0;
                    *(_DWORD *)(a4 + 4) = v76 + 8;
                    goto LABEL_67;
                  }
                  goto LABEL_149;
                }
                for ( i2 = 0; i2 < *(_DWORD *)a4; ++i2 )
                {
                  v78 = *v75 + 4;
                  if ( v78 < 4 || (_DWORD *)((char *)v75 + v78) < v75 )
                    goto LABEL_99;
                  v75 = (_DWORD *)((char *)v75 + v78);
                }
                if ( v75 + 1 < v75 )
                  goto LABEL_99;
                v12 = 0;
                if ( (unsigned __int64)(v75 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *v75 = 4;
                  v75[1] = 0;
                  ++*(_DWORD *)a4;
                  goto LABEL_67;
                }
LABEL_159:
                v12 = -1073741789;
                goto LABEL_67;
              }
              v65 = *(_DWORD *)(a4 + 4);
              if ( v65 + 8 >= v65 )
              {
                *(_DWORD *)(a4 + 4) = v65 + 8;
                goto LABEL_180;
              }
LABEL_149:
              *(_DWORD *)(a4 + 4) = -1;
LABEL_99:
              v12 = -1073741675;
LABEL_67:
              v7 = Src;
              goto LABEL_40;
            }
            *(_DWORD *)(a4 + 4) = -1;
          }
        }
LABEL_120:
        v12 = -1073741675;
        goto LABEL_121;
      }
    }
    else if ( !(_DWORD)v43 )
    {
      goto LABEL_116;
    }
    v12 = -1073741811;
    goto LABEL_121;
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
