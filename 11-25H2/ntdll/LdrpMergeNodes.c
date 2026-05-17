/*
 * XREFs of LdrpMergeNodes @ 0x1800EF5D4
 * Callers:
 *     LdrpCondenseGraphRecurse @ 0x1800EB7D0 (LdrpCondenseGraphRecurse.c)
 * Callees:
 *     LdrpLogInternal @ 0x18007B390 (LdrpLogInternal.c)
 *     RtlFreeHeap @ 0x180080DD0 (RtlFreeHeap.c)
 */

_QWORD *__fastcall LdrpMergeNodes(__int64 a1, _QWORD **a2)
{
  _QWORD *v4; // rdi
  _QWORD *v5; // rsi
  __int64 v6; // rax
  _QWORD *v7; // rcx
  _QWORD *m; // r9
  _QWORD *v9; // rax
  _QWORD *v10; // rcx
  _QWORD *v11; // rax
  _QWORD *v12; // rcx
  _QWORD *result; // rax
  _QWORD *v14; // r8
  _QWORD *v15; // rdx
  _QWORD *i; // rcx
  _QWORD *v17; // rdi
  _QWORD **v18; // rdx
  _QWORD *v19; // rcx
  __int64 v20; // rdx
  _QWORD *v21; // r8
  _QWORD *v22; // rax
  _QWORD **v23; // r14
  _QWORD **v24; // rsi
  _QWORD *k; // rdi
  _QWORD **v26; // rax
  _QWORD *v27; // rdi
  _QWORD **v28; // rcx
  _QWORD **v29; // rax
  _QWORD *v30; // rdx
  _QWORD *v31; // rcx
  _QWORD *v32; // r8
  __int64 v33; // rdx
  _QWORD **v34; // r8
  _QWORD *v35; // r9
  _QWORD *j; // r10
  _QWORD **v37; // rax
  _QWORD *v38; // rax

  LdrpLogInternal(
    (__int64)"minkernel\\ldr\\ldrddag.c",
    1030,
    (__int64)"LdrpMergeNodes",
    2,
    "Merging a cycle rooted at %wZ.\n",
    *(_BYTE *)a1 - 72);
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
            (__int64)"minkernel\\ldr\\ldrddag.c",
            1066,
            (__int64)"LdrpMergeNodes",
            2,
            "Adding cyclic module %wZ.\n",
            (_BYTE)v5 - 72),
          *(v5 - 1) = a1,
          v9 = *(_QWORD **)(a1 + 8),
          *v9 != a1) )
    {
      __fastfail(3u);
    }
    v5[1] = v9;
    *v5 = a1;
    *v9 = v5;
    *(_QWORD *)(a1 + 8) = v5;
    *(_DWORD *)(a1 + 24) += *((_DWORD *)v4 - 10);
    v10 = (_QWORD *)*(v4 - 3);
    *((_DWORD *)v4 - 10) = 0;
    v11 = v10;
    *((_DWORD *)v4 - 2) = -5;
    do
    {
      v11 = (_QWORD *)*v11;
      v11[3] = a1;
    }
    while ( v11 != v10 );
    v12 = (_QWORD *)*(v4 - 2);
    result = v12;
    do
    {
      result = (_QWORD *)*result;
      *(result - 1) = a1;
    }
    while ( result != v12 );
    v4 = (_QWORD *)*v4;
  }
  while ( v4 );
  v14 = *(_QWORD **)(a1 + 40);
  v15 = v14;
  for ( i = (_QWORD *)*v14; ; i = (_QWORD *)*v15 )
  {
    if ( i[1] == a1 )
    {
      result = (_QWORD *)*i;
      *v15 = *i;
      if ( *(_QWORD **)(a1 + 40) == i )
      {
        result = 0LL;
        if ( v15 != i )
          result = v15;
        *(_QWORD *)(a1 + 40) = result;
      }
      *i = 0LL;
    }
    else
    {
      v15 = i;
    }
    if ( i == v14 )
      break;
  }
  v17 = *a2;
  do
  {
    while ( 1 )
    {
      v18 = (_QWORD **)*(v17 - 3);
      if ( !v18 )
        break;
      v19 = *v18;
      if ( *v18 == v18 )
      {
        *(v17 - 3) = 0LL;
      }
      else
      {
        result = (_QWORD *)*v19;
        *v18 = (_QWORD *)*v19;
      }
      if ( !v19 )
        break;
      v20 = v19[1];
      if ( v20 == a1 )
      {
        *v19 = 0LL;
      }
      else
      {
        v21 = *(_QWORD **)(a1 + 40);
        if ( v21 )
        {
          v22 = *(_QWORD **)(a1 + 40);
          while ( 1 )
          {
            v22 = (_QWORD *)*v22;
            if ( v22[1] == v20 )
              break;
            if ( v22 == v21 )
            {
              result = (_QWORD *)*v21;
              *v19 = *v21;
              *v21 = v19;
              goto LABEL_16;
            }
          }
          v34 = *(_QWORD ***)(v20 + 48);
          v35 = v19 + 2;
          for ( j = *v34; j != v35; j = (_QWORD *)*j )
            v34 = (_QWORD **)j;
          *v34 = (_QWORD *)*v35;
          if ( *(_QWORD **)(v20 + 48) == v35 )
          {
            v37 = 0LL;
            if ( v34 != v35 )
              v37 = v34;
            *(_QWORD *)(v20 + 48) = v37;
          }
          --*(_DWORD *)(v20 + 24);
          result = (_QWORD *)RtlFreeHeap(LdrpHeap, 0, (__int64)v19, (__int64)v35);
        }
        else
        {
          *v19 = v19;
LABEL_16:
          *(_QWORD *)(a1 + 40) = v19;
        }
      }
    }
    v17 = (_QWORD *)*v17;
  }
  while ( v17 );
  v23 = *(_QWORD ***)(a1 + 48);
  v24 = v23;
  for ( k = *v23; ; k = *v24 )
  {
    if ( k[1] == a1 )
    {
      *v24 = (_QWORD *)*k;
      if ( *(_QWORD **)(a1 + 48) == k )
      {
        v26 = 0LL;
        if ( v24 != k )
          v26 = v24;
        *(_QWORD *)(a1 + 48) = v26;
      }
      --*(_DWORD *)(a1 + 24);
      result = (_QWORD *)RtlFreeHeap(LdrpHeap, 0, (__int64)(k - 2), (__int64)m);
    }
    else
    {
      v24 = (_QWORD **)k;
    }
    if ( k == v23 )
      break;
  }
  v27 = *a2;
  do
  {
    while ( 1 )
    {
      v30 = (_QWORD *)*(v27 - 2);
      if ( !v30 )
        break;
      v31 = (_QWORD *)*v30;
      if ( (_QWORD *)*v30 == v30 )
      {
        *(v27 - 2) = 0LL;
      }
      else
      {
        result = (_QWORD *)*v31;
        *v30 = *v31;
      }
      if ( !v31 )
        break;
      v32 = v31 - 2;
      v33 = v31[1];
      if ( v33 == a1 )
        goto LABEL_44;
      m = *(_QWORD **)(a1 + 48);
      if ( m )
      {
        v38 = *(_QWORD **)(a1 + 48);
        while ( 1 )
        {
          v38 = (_QWORD *)*v38;
          if ( v38[1] == v33 )
            break;
          if ( v38 == m )
          {
            result = (_QWORD *)*m;
            *v31 = *m;
            *m = v31;
            goto LABEL_52;
          }
        }
        v28 = *(_QWORD ***)(v33 + 40);
        for ( m = *v28; m != v32; m = (_QWORD *)*m )
          v28 = (_QWORD **)m;
        *v28 = (_QWORD *)*v32;
        if ( *(_QWORD **)(v33 + 40) == v32 )
        {
          v29 = 0LL;
          if ( v28 != v32 )
            v29 = v28;
          *(_QWORD *)(v33 + 40) = v29;
        }
LABEL_44:
        --*(_DWORD *)(a1 + 24);
        result = (_QWORD *)RtlFreeHeap(LdrpHeap, 0, (__int64)v32, (__int64)m);
      }
      else
      {
        *v31 = v31;
LABEL_52:
        *(_QWORD *)(a1 + 48) = v31;
      }
    }
    v27 = (_QWORD *)*v27;
  }
  while ( v27 );
  return result;
}
