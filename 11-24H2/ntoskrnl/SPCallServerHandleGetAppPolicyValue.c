/*
 * XREFs of SPCallServerHandleGetAppPolicyValue @ 0x140A551F0
 * Callers:
 *     sub_140973C40 @ 0x140973C40 (sub_140973C40.c)
 * Callees:
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
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
  unsigned int v37; // r11d
  unsigned int *v38; // rax
  unsigned int n; // r9d
  __int64 v40; // r8
  unsigned int *v41; // rcx
  unsigned int ii; // r10d
  __int64 v43; // rax
  unsigned int *v44; // rcx
  unsigned int *v45; // r15
  __int64 v46; // r15
  void *v47; // rax
  int v48; // r13d
  unsigned int v49; // ecx
  unsigned int v50; // edx
  unsigned int v51; // eax
  int v52; // r8d
  __int64 v53; // rax
  _DWORD *v54; // rdx
  int v55; // r13d
  unsigned int jj; // ecx
  unsigned int v57; // eax
  unsigned __int64 v58; // rdx
  unsigned int kk; // ecx
  unsigned int v60; // eax
  _DWORD *v61; // rdx
  unsigned int mm; // ecx
  unsigned int v63; // eax
  _DWORD *v64; // rdx
  unsigned int nn; // ecx
  unsigned int v66; // eax
  _DWORD *v67; // rdx
  unsigned int v68; // eax
  unsigned int v69; // edx
  unsigned int v70; // eax
  unsigned int v71; // eax
  unsigned int v72; // r15d
  unsigned int v73; // eax
  unsigned int v74; // eax
  unsigned int v75; // eax
  unsigned int i1; // ecx
  unsigned int v77; // eax
  _DWORD *v78; // rdx
  unsigned int v79; // eax
  unsigned int i2; // ecx
  unsigned int v81; // eax
  void *Src; // [rsp+70h] [rbp-10h]
  unsigned int v84; // [rsp+D0h] [rbp+50h]

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
    goto LABEL_171;
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
LABEL_171:
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
    goto LABEL_161;
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
    goto LABEL_161;
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
  v36 = 0LL;
  if ( (_DWORD)v34 )
    v36 = v35;
  if ( (_DWORD)v34 != 4 )
  {
    v12 = -1073741789;
    goto LABEL_40;
  }
  v37 = *v36;
  v84 = *v36;
  if ( *(_DWORD *)a1 <= 7u )
  {
LABEL_161:
    v12 = -1073741811;
    goto LABEL_40;
  }
  v38 = *(unsigned int **)(a1 + 8);
  for ( n = 0; ; ++n )
  {
    v40 = *v38;
    v41 = v38 + 1;
    if ( n >= 7 )
      break;
    if ( v41 < v38 )
      goto LABEL_39;
    v38 = (unsigned int *)((char *)v41 + v40);
    v84 = v37;
    if ( (unsigned int *)((char *)v41 + v40) < v41 )
      goto LABEL_39;
  }
  if ( v41 >= v38 )
  {
    if ( *(_DWORD *)a1 <= 8u )
      goto LABEL_164;
    for ( ii = 0; ; ++ii )
    {
      v43 = *v26;
      v44 = v26 + 1;
      if ( ii >= 8 )
        break;
      if ( v44 < v26 )
        goto LABEL_70;
      v26 = (unsigned int *)((char *)v44 + v43);
      v84 = v37;
      if ( (unsigned int *)((char *)v44 + v43) < v44 )
        goto LABEL_70;
    }
    if ( v44 < v26 )
      goto LABEL_70;
    v45 = 0LL;
    if ( (_DWORD)v43 )
      v45 = v26 + 1;
    if ( (_DWORD)v43 != 4 )
      goto LABEL_163;
    v46 = *v45;
    if ( (_DWORD)v46 )
    {
      v47 = (void *)ExAllocatePool2(0x100uLL);
      Src = v47;
      if ( !v47 )
      {
        v12 = -1073741801;
        v7 = 0LL;
        goto LABEL_40;
      }
      memset_0(v47, 0, (unsigned int)v46);
      v37 = v84;
    }
    v48 = qword_140FD7388 ? guard_dispatch_icall_no_overrides(v25, v31, (unsigned int)v29, v37) : -1073741637;
    if ( (unsigned int)v46 >= 0xFFFFFFFC
      || (unsigned int)(v46 + 24) < 0x14
      || (int)v46 + 32 < (unsigned int)(v46 + 24)
      || (int)v46 + 40 < (unsigned int)(v46 + 32)
      || (v49 = v46 + 48, (int)v46 + 48 < (unsigned int)(v46 + 40))
      || v49 >= 0xFFFFFFF8
      || (v50 = (v46 + 63) & 0xFFFFFFF8, v50 < (int)v46 + 56)
      || v50 + 8 < v50 )
    {
LABEL_70:
      v12 = -1073741675;
      goto LABEL_71;
    }
    v51 = v50 + 12;
    v52 = *(_DWORD *)(a2 + 16);
    if ( v50 + 12 < 4 || (v69 = v50 + 16, v51 + 4 < v51) || (v70 = v52 + v69, v52 + v69 < v69) || v70 + 4 < v70 )
      v12 = -1073741675;
    else
      v12 = *(_DWORD *)(a2 + 32) + v70 + 4 < v70 + 4 ? 0xC0000095 : 0;
    if ( v12 < 0 )
      goto LABEL_71;
    if ( !a4 )
    {
LABEL_164:
      v12 = -1073741811;
      goto LABEL_71;
    }
    v12 = 0;
    *(_DWORD *)(a4 + 4) = v49;
    if ( (_DWORD)v46 == -48 )
    {
      v12 = -1073741762;
    }
    else
    {
      v53 = ExAllocatePool2(0x100uLL);
      if ( v53 )
      {
        *(_QWORD *)(a4 + 8) = v53;
        *(_DWORD *)a4 = 0;
      }
      else
      {
        v12 = -1073741801;
      }
    }
    if ( v12 < 0 )
      goto LABEL_71;
    v54 = *(_DWORD **)(a4 + 8);
    v55 = v48 | 0x10000000;
    if ( v54 )
    {
      for ( jj = 0; jj < *(_DWORD *)a4; ++jj )
      {
        v57 = *v54 + 4;
        if ( v57 < 4 || (_DWORD *)((char *)v54 + v57) < v54 )
          goto LABEL_103;
        v54 = (_DWORD *)((char *)v54 + v57);
      }
      if ( v54 + 1 < v54 )
        goto LABEL_103;
      if ( (unsigned __int64)(v54 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_163;
      *v54 = 4;
      v54[1] = v55;
    }
    else
    {
      v71 = *(_DWORD *)(a4 + 4);
      if ( v71 + 8 < v71 )
        goto LABEL_153;
      *(_DWORD *)(a4 + 4) = v71 + 8;
    }
    ++*(_DWORD *)a4;
    v58 = *(_QWORD *)(a4 + 8);
    if ( v58 )
    {
      for ( kk = 0; kk < *(_DWORD *)a4; ++kk )
      {
        v60 = *(_DWORD *)v58 + 4;
        if ( v60 < 4 || v58 + v60 < v58 )
          goto LABEL_103;
        v58 += v60;
      }
      if ( v58 + 4 < v58 )
        goto LABEL_103;
      if ( v58 + 12 > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
        goto LABEL_163;
      *(_DWORD *)v58 = 8;
      *(_QWORD *)(v58 + 4) = v15;
    }
    else
    {
      v74 = *(_DWORD *)(a4 + 4);
      if ( v74 + 12 < v74 )
        goto LABEL_153;
      *(_DWORD *)(a4 + 4) = v74 + 12;
    }
    ++*(_DWORD *)a4;
    if ( Src )
    {
      if ( (_DWORD)v46 )
      {
LABEL_121:
        v61 = *(_DWORD **)(a4 + 8);
        if ( v61 )
        {
          for ( mm = 0; mm < *(_DWORD *)a4; ++mm )
          {
            v63 = *v61 + 4;
            if ( v63 < 4 || (_DWORD *)((char *)v61 + v63) < v61 )
              goto LABEL_125;
            v61 = (_DWORD *)((char *)v61 + v63);
          }
          if ( v61 + 1 >= v61 )
          {
            if ( (unsigned __int64)v61 + v46 + 4 <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
            {
              *v61 = v46;
              if ( Src )
                memmove(v61 + 1, Src, (unsigned int)v46);
              goto LABEL_131;
            }
            v12 = -1073741789;
LABEL_126:
            v7 = Src;
            goto LABEL_40;
          }
        }
        else
        {
          v72 = v46 + 4;
          if ( v72 >= 4 )
          {
            v73 = *(_DWORD *)(a4 + 4);
            if ( v73 + v72 >= v73 )
            {
              *(_DWORD *)(a4 + 4) = v73 + v72;
LABEL_131:
              ++*(_DWORD *)a4;
              v64 = *(_DWORD **)(a4 + 8);
              if ( v64 )
              {
                for ( nn = 0; nn < *(_DWORD *)a4; ++nn )
                {
                  v66 = *v64 + 4;
                  if ( v66 < 4 || (_DWORD *)((char *)v64 + v66) < v64 )
                    goto LABEL_103;
                  v64 = (_DWORD *)((char *)v64 + v66);
                }
                if ( v64 + 1 < v64 )
                  goto LABEL_103;
                if ( (unsigned __int64)(v64 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_163;
                *v64 = 4;
                v64[1] = 0;
              }
              else
              {
                v75 = *(_DWORD *)(a4 + 4);
                if ( v75 + 8 < v75 )
                  goto LABEL_153;
                *(_DWORD *)(a4 + 4) = v75 + 8;
              }
              ++*(_DWORD *)a4;
              v67 = *(_DWORD **)(a4 + 8);
              if ( v67 )
              {
                for ( i1 = 0; i1 < *(_DWORD *)a4; ++i1 )
                {
                  v77 = *v67 + 4;
                  if ( v77 < 4 || (_DWORD *)((char *)v67 + v77) < v67 )
                    goto LABEL_103;
                  v67 = (_DWORD *)((char *)v67 + v77);
                }
                if ( v67 + 1 < v67 )
                  goto LABEL_103;
                if ( (unsigned __int64)(v67 + 2) > *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                  goto LABEL_163;
                *v67 = 4;
                v67[1] = 0;
LABEL_184:
                ++*(_DWORD *)a4;
                v78 = *(_DWORD **)(a4 + 8);
                if ( !v78 )
                {
                  v79 = *(_DWORD *)(a4 + 4);
                  if ( v79 + 8 >= v79 )
                  {
                    ++*(_DWORD *)a4;
                    v12 = 0;
                    *(_DWORD *)(a4 + 4) = v79 + 8;
                    goto LABEL_71;
                  }
                  goto LABEL_153;
                }
                for ( i2 = 0; i2 < *(_DWORD *)a4; ++i2 )
                {
                  v81 = *v78 + 4;
                  if ( v81 < 4 || (_DWORD *)((char *)v78 + v81) < v78 )
                    goto LABEL_103;
                  v78 = (_DWORD *)((char *)v78 + v81);
                }
                if ( v78 + 1 < v78 )
                  goto LABEL_103;
                v12 = 0;
                if ( (unsigned __int64)(v78 + 2) <= *(_QWORD *)(a4 + 8) + (unsigned __int64)*(unsigned int *)(a4 + 4) )
                {
                  *v78 = 4;
                  v78[1] = 0;
                  ++*(_DWORD *)a4;
                  goto LABEL_71;
                }
LABEL_163:
                v12 = -1073741789;
                goto LABEL_71;
              }
              v68 = *(_DWORD *)(a4 + 4);
              if ( v68 + 8 >= v68 )
              {
                *(_DWORD *)(a4 + 4) = v68 + 8;
                goto LABEL_184;
              }
LABEL_153:
              *(_DWORD *)(a4 + 4) = -1;
LABEL_103:
              v12 = -1073741675;
LABEL_71:
              v7 = Src;
              goto LABEL_40;
            }
            *(_DWORD *)(a4 + 4) = -1;
          }
        }
LABEL_125:
        v12 = -1073741675;
        goto LABEL_126;
      }
    }
    else if ( !(_DWORD)v46 )
    {
      goto LABEL_121;
    }
    v12 = -1073741811;
    goto LABEL_126;
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
