/*
 * XREFs of LdrpMergeNodes @ 0x1800E95CC
 * Callers:
 *     LdrpCondenseGraphRecurse @ 0x1800E5BA0 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     LdrpLogInternal @ 0x180040780 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x1800533F0 (RtlFreeHeap.c)
 */

int __fastcall LdrpMergeNodes(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *v8; // rax
  _QWORD *v9; // rcx
  _QWORD *v10; // rax
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  _QWORD *v13; // r8
  _QWORD *v14; // rdx
  _QWORD *i; // rcx
  _QWORD *v16; // rdi
  _QWORD **v17; // rdx
  _QWORD *v18; // rcx
  __int64 v19; // rdx
  _QWORD *v20; // r8
  _QWORD *v21; // rax
  _QWORD **v22; // r14
  _QWORD **v23; // rsi
  _QWORD *k; // rdi
  _QWORD **v25; // rax
  _QWORD *v26; // rdi
  _QWORD **v27; // rcx
  _QWORD *m; // r9
  _QWORD **v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // r8
  __int64 v33; // rdx
  _QWORD *v34; // r9
  _QWORD **v35; // r8
  _QWORD *v36; // r9
  _QWORD *j; // r10
  _QWORD **v38; // rax
  _QWORD *v39; // rax

  LdrpLogInternal(
    "minkernel\\ldr\\ldrddag.c",
    1030,
    (__int64)"LdrpMergeNodes",
    2,
    "Merging a cycle rooted at %wZ.\n",
    *(_QWORD *)a1 - 72LL);
  v4 = *a2;
  do
  {
    v5 = (_QWORD *)*(v4 - 8);
    v6 = *v5;
    if ( *(_QWORD **)(*v5 + 8LL) != v5
      || (v7 = (_QWORD *)v5[1], (_QWORD *)*v7 != v5)
      || (*v7 = v6,
          *(_QWORD *)(v6 + 8) = v7,
          LdrpLogInternal(
            "minkernel\\ldr\\ldrddag.c",
            1066,
            (__int64)"LdrpMergeNodes",
            2,
            "Adding cyclic module %wZ.\n",
            v5 - 9),
          *(v5 - 1) = a1,
          v8 = *(_QWORD **)(a1 + 8),
          *v8 != a1) )
    {
      __fastfail(3u);
    }
    v5[1] = v8;
    *v5 = a1;
    *v8 = v5;
    *(_QWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 24) += *((_DWORD *)v4 - 10);
    v9 = (_QWORD *)*(v4 - 3);
    *((_DWORD *)v4 - 10) = 0;
    v10 = v9;
    *((_DWORD *)v4 - 2) = -5;
    do
    {
      v10 = (_QWORD *)*v10;
      v10[3] = a1;
    }
    while ( v10 != v9 );
    v11 = (_QWORD *)*(v4 - 2);
    v12 = v11;
    do
    {
      v12 = (_QWORD *)*v12;
      *(v12 - 1) = a1;
    }
    while ( v12 != v11 );
    v4 = (_QWORD *)*v4;
  }
  while ( v4 );
  v13 = *(_QWORD **)(a1 + 40);
  v14 = v13;
  for ( i = (_QWORD *)*v13; ; i = (_QWORD *)*v14 )
  {
    if ( i[1] == a1 )
    {
      v12 = (_QWORD *)*i;
      *v14 = *i;
      if ( *(_QWORD **)(a1 + 40) == i )
      {
        v12 = 0LL;
        if ( v14 != i )
          v12 = v14;
        *(_QWORD *)(a1 + 40) = v12;
      }
      *i = 0LL;
    }
    else
    {
      v14 = i;
    }
    if ( i == v13 )
      break;
  }
  v16 = *a2;
  do
  {
    while ( 1 )
    {
      v17 = (_QWORD **)*(v16 - 3);
      if ( !v17 )
        break;
      v18 = *v17;
      if ( *v17 == v17 )
      {
        *(v16 - 3) = 0LL;
      }
      else
      {
        v12 = (_QWORD *)*v18;
        *v17 = (_QWORD *)*v18;
      }
      if ( !v18 )
        break;
      v19 = v18[1];
      if ( v19 == a1 )
      {
        *v18 = 0LL;
      }
      else
      {
        v20 = *(_QWORD **)(a1 + 40);
        if ( v20 )
        {
          v21 = *(_QWORD **)(a1 + 40);
          while ( 1 )
          {
            v21 = (_QWORD *)*v21;
            if ( v21[1] == v19 )
              break;
            if ( v21 == v20 )
            {
              v12 = (_QWORD *)*v20;
              *v18 = *v20;
              *v20 = v18;
              goto LABEL_16;
            }
          }
          v35 = *(_QWORD ***)(v19 + 48);
          v36 = v18 + 2;
          for ( j = *v35; j != v36; j = (_QWORD *)*j )
            v35 = (_QWORD **)j;
          *v35 = (_QWORD *)*v36;
          if ( *(_QWORD **)(v19 + 48) == v36 )
          {
            v38 = 0LL;
            if ( v35 != v36 )
              v38 = v35;
            *(_QWORD *)(v19 + 48) = v38;
          }
          --*(_DWORD *)(v19 + 24);
          LODWORD(v12) = RtlFreeHeap(LdrpHeap, 0, v18);
        }
        else
        {
          *v18 = v18;
LABEL_16:
          *(_QWORD *)(a1 + 40) = v18;
        }
      }
    }
    v16 = (_QWORD *)*v16;
  }
  while ( v16 );
  v22 = *(_QWORD ***)(a1 + 48);
  v23 = v22;
  for ( k = *v22; ; k = *v23 )
  {
    if ( k[1] == a1 )
    {
      *v23 = (_QWORD *)*k;
      if ( *(_QWORD **)(a1 + 48) == k )
      {
        v25 = 0LL;
        if ( v23 != k )
          v25 = v23;
        *(_QWORD *)(a1 + 48) = v25;
      }
      --*(_DWORD *)(a1 + 24);
      LODWORD(v12) = RtlFreeHeap(LdrpHeap, 0, k - 2);
    }
    else
    {
      v23 = (_QWORD **)k;
    }
    if ( k == v22 )
      break;
  }
  v26 = *a2;
  do
  {
    while ( 1 )
    {
      v30 = (_QWORD *)*(v26 - 2);
      if ( !v30 )
        break;
      v31 = (_QWORD *)*v30;
      if ( (_QWORD *)*v30 == v30 )
      {
        *(v26 - 2) = 0LL;
      }
      else
      {
        v12 = (_QWORD *)*v31;
        *v30 = *v31;
      }
      if ( !v31 )
        break;
      v32 = v31 - 2;
      v33 = v31[1];
      if ( v33 == a1 )
        goto LABEL_44;
      v34 = *(_QWORD **)(a1 + 48);
      if ( v34 )
      {
        v39 = *(_QWORD **)(a1 + 48);
        while ( 1 )
        {
          v39 = (_QWORD *)*v39;
          if ( v39[1] == v33 )
            break;
          if ( v39 == v34 )
          {
            v12 = (_QWORD *)*v34;
            *v31 = *v34;
            *v34 = v31;
            goto LABEL_52;
          }
        }
        v27 = *(_QWORD ***)(v33 + 40);
        for ( m = *v27; m != v32; m = (_QWORD *)*m )
          v27 = (_QWORD **)m;
        *v27 = (_QWORD *)*v32;
        if ( *(_QWORD **)(v33 + 40) == v32 )
        {
          v29 = 0LL;
          if ( v27 != v32 )
            v29 = v27;
          *(_QWORD *)(v33 + 40) = v29;
        }
LABEL_44:
        --*(_DWORD *)(a1 + 24);
        LODWORD(v12) = RtlFreeHeap(LdrpHeap, 0, v32);
      }
      else
      {
        *v31 = v31;
LABEL_52:
        *(_QWORD *)(a1 + 48) = v31;
      }
    }
    v26 = (_QWORD *)*v26;
  }
  while ( v26 );
  return (int)v12;
}
