/*
 * XREFs of RtlpConvertRelativeToAbsoluteSecurityAttribute @ 0x180139A40
 * Callers:
 *     <none>
 * Callees:
 *     RtlStringCbLengthW @ 0x1800E7158 (RtlStringCbLengthW.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpConvertRelativeToAbsoluteSecurityAttribute(
        unsigned int *a1,
        unsigned int a2,
        unsigned int *a3,
        unsigned int *a4)
{
  unsigned int v4; // edi
  unsigned __int64 v5; // r15
  int v9; // ebx
  unsigned int v10; // eax
  unsigned int v11; // ebp
  unsigned int v12; // r11d
  __int64 v13; // r9
  int v14; // eax
  unsigned int v15; // ecx
  unsigned int k; // edx
  __int64 v17; // rcx
  unsigned int v18; // r8d
  int v19; // eax
  unsigned int v20; // ecx
  unsigned int i; // r12d
  __int64 v22; // rcx
  unsigned int v23; // r11d
  int v24; // eax
  unsigned int j; // ecx
  unsigned int v26; // edx
  unsigned int v27; // ebx
  int v28; // ecx
  char *v29; // rdx
  int v30; // ecx
  int v31; // ecx
  int v32; // ecx
  int v33; // ecx
  int v34; // ecx
  unsigned __int64 v35; // rax
  __int64 v36; // rcx
  unsigned int v37; // r15d
  char *v38; // rbp
  unsigned int m; // r13d
  unsigned int *v40; // rdx
  unsigned int v41; // ecx
  unsigned int v42; // eax
  __int64 v43; // r12
  unsigned __int64 v44; // rax
  __int64 v45; // rcx
  unsigned int v46; // ebp
  char *v47; // r12
  unsigned int n; // r13d
  __int64 v49; // r11
  unsigned int v50; // ecx
  unsigned int v51; // eax
  unsigned int v52; // ecx
  unsigned __int64 v53; // rax
  __int64 v54; // rdx
  __int64 v56; // [rsp+50h] [rbp+8h] BYREF

  v4 = 0;
  v5 = a2;
  v56 = 0LL;
  if ( !a1 || !a4 )
    return (unsigned int)-1073741811;
  if ( a2 < 0x14 )
    return (unsigned int)-1073741705;
  if ( a2 < *a1 )
    return (unsigned int)-1073741705;
  v10 = a2 - *a1;
  if ( v10 < 4 )
    return (unsigned int)-1073741705;
  v9 = RtlStringCbLengthW((unsigned int *)((char *)a1 + *a1), v10, &v56);
  if ( v9 < 0 )
    return (unsigned int)v9;
  v11 = v56 + 2;
  if ( (int)v56 + 2 < (unsigned int)v56 )
    return (unsigned int)-1073741675;
  if ( (int)v56 + 5 < (unsigned int)(v56 + 2) )
    return (unsigned int)-1073741675;
  v12 = ((v56 + 5) & 0xFFFFFFFC) + 32;
  if ( v12 < 0x20 )
    return (unsigned int)-1073741675;
  v13 = a1[3];
  if ( (unsigned __int64)(4 * v13) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  if ( (int)v5 - 16 < (unsigned int)(4 * v13) )
    return (unsigned int)-1073741705;
  switch ( *((_WORD *)a1 + 2) )
  {
    case 1:
    case 2:
      goto LABEL_42;
    case 3:
      v19 = 8 * v13;
      if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF )
        return (unsigned int)-1073741675;
      v20 = v12 + v19;
      if ( v12 + v19 < v12 )
        return (unsigned int)-1073741675;
      for ( i = 0; ; ++i )
      {
        v12 = v20;
        if ( i >= a1[3] )
          break;
        v22 = a1[i + 4];
        if ( (unsigned int)v5 < (unsigned int)v22 || (unsigned int)(v5 - v22) < 2 )
          return (unsigned int)-1073741705;
        v9 = RtlStringCbLengthW((unsigned int *)((char *)a1 + v22), (unsigned int)(v5 - v22), &v56);
        if ( v9 < 0 )
          return (unsigned int)v9;
        if ( (int)v56 + 2 < (unsigned int)v56 )
          return (unsigned int)-1073741675;
        if ( (int)v56 + 5 < (unsigned int)(v56 + 2) )
          return (unsigned int)-1073741675;
        v20 = ((v56 + 5) & 0xFFFFFFFC) + v23;
        if ( v20 < v23 )
          return (unsigned int)-1073741675;
      }
      goto LABEL_49;
    case 5:
      goto LABEL_19;
    case 6:
LABEL_42:
      v24 = 8 * v13;
      if ( (unsigned __int64)(8 * v13) > 0xFFFFFFFF || v12 + v24 < v12 )
        return (unsigned int)-1073741675;
      v12 += v24;
      for ( j = 0; j < (unsigned int)v13; ++j )
      {
        v26 = a1[j + 4];
        if ( (unsigned int)v5 < v26 || (unsigned int)v5 - v26 < 8 )
          return (unsigned int)-1073741705;
      }
      goto LABEL_49;
  }
  if ( *((_WORD *)a1 + 2) != 16 )
    goto LABEL_49;
LABEL_19:
  v14 = 16 * v13;
  if ( (unsigned __int64)(16 * v13) > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v15 = v12 + v14;
  if ( v12 + v14 < v12 )
    return (unsigned int)-1073741675;
  for ( k = 0; ; ++k )
  {
    v12 = v15;
    if ( k >= (unsigned int)v13 )
      break;
    v17 = a1[k + 4];
    if ( (unsigned int)v5 < (unsigned int)v17 || (unsigned int)(v5 - v17) < 4 )
      return (unsigned int)-1073741705;
    v18 = *(unsigned int *)((char *)a1 + v17);
    if ( (int)v17 + 4 < (unsigned int)v17 )
      return (unsigned int)-1073741675;
    if ( (int)v5 - ((int)v17 + 4) < v18 )
      return (unsigned int)-1073741705;
    if ( v18 + 3 < v18 )
      return (unsigned int)-1073741675;
    v15 = ((v18 + 3) & 0xFFFFFFFC) + v12;
    if ( v15 < v12 )
      return (unsigned int)-1073741675;
  }
LABEL_49:
  if ( *a4 < v12 )
  {
    *a4 = v12;
    return (unsigned int)-1073741789;
  }
  if ( !a3 )
    return (unsigned int)-1073741811;
  *a4 = v12;
  memset_thunk_772440563353939046(a3, 0, v12);
  *((_WORD *)a3 + 4) = *((_WORD *)a1 + 2);
  *((_WORD *)a3 + 5) = *((_WORD *)a1 + 3);
  a3[3] = a1[2];
  a3[4] = a1[3];
  if ( v11 >= 0xFFFFFFE0 || v11 + 35 < v11 + 32 )
    return (unsigned int)-1073741675;
  v27 = (v11 + 35) & 0xFFFFFFFC;
  memmove(a3 + 8, (char *)a1 + *a1, v11);
  v28 = *((unsigned __int16 *)a3 + 4);
  v29 = (char *)a3 + v27;
  *(_QWORD *)a3 = a3 + 8;
  v30 = v28 - 1;
  if ( !v30 )
    goto LABEL_78;
  v31 = v30 - 1;
  if ( !v31 )
    goto LABEL_78;
  v32 = v31 - 1;
  if ( v32 )
  {
    v33 = v32 - 2;
    if ( !v33 )
    {
LABEL_60:
      v35 = 16LL * a3[4];
      if ( v35 <= 0xFFFFFFFF )
      {
        v36 = (unsigned int)v35 + v27;
        if ( (unsigned int)v36 >= v27 )
        {
          v37 = v35 + v27;
          v38 = (char *)a3 + v36;
          v9 = 0;
          *((_QWORD *)a3 + 3) = v29;
          for ( m = 0; m < a3[4]; ++m )
          {
            v40 = &a1[m];
            v41 = *(unsigned int *)((char *)a1 + v40[4]);
            LODWORD(v56) = v41;
            v42 = v41 + v37;
            if ( v41 + v37 < v37 || v42 + 3 < v42 )
              return (unsigned int)-1073741675;
            v43 = 2LL * m;
            v37 = (v42 + 3) & 0xFFFFFFFC;
            v9 = 0;
            *(_QWORD *)(*((_QWORD *)a3 + 3) + 16LL * m) = 0LL;
            if ( v41 )
            {
              memmove(v38, (char *)a1 + v40[4] + 4, v41);
              v41 = v56;
              *(_QWORD *)(*((_QWORD *)a3 + 3) + 16LL * m) = v38;
            }
            v38 = (char *)a3 + v37;
            *(_DWORD *)(*((_QWORD *)a3 + 3) + 8 * v43 + 8) = v41;
          }
          return (unsigned int)v9;
        }
      }
      return (unsigned int)-1073741675;
    }
    v34 = v33 - 1;
    if ( v34 )
    {
      if ( v34 == 10 )
        goto LABEL_60;
      return (unsigned int)-1073741705;
    }
LABEL_78:
    v52 = a3[4];
    v53 = 8LL * v52;
    if ( v53 <= 0xFFFFFFFF && v27 + (unsigned int)v53 >= v27 )
    {
      *((_QWORD *)a3 + 3) = v29;
      v9 = 0;
      if ( v52 )
      {
        do
        {
          v54 = v4++;
          *(_QWORD *)(*((_QWORD *)a3 + 3) + 8 * v54) = *(_QWORD *)((char *)a1 + a1[v54 + 4]);
        }
        while ( v4 < a3[4] );
      }
      return (unsigned int)v9;
    }
    return (unsigned int)-1073741675;
  }
  v44 = 8LL * a3[4];
  if ( v44 > 0xFFFFFFFF )
    return (unsigned int)-1073741675;
  v45 = (unsigned int)v44 + v27;
  if ( (unsigned int)v45 < v27 )
    return (unsigned int)-1073741675;
  v46 = v44 + v27;
  v47 = (char *)a3 + v45;
  v9 = 0;
  *((_QWORD *)a3 + 3) = v29;
  for ( n = 0; n < a3[4]; ++n )
  {
    v9 = RtlStringCbLengthW((unsigned int *)((char *)a1 + a1[n + 4]), v5, &v56);
    if ( v9 < 0 )
      break;
    v50 = v56 + 2;
    if ( (int)v56 + 2 < (unsigned int)v56 )
      return (unsigned int)-1073741675;
    v51 = v50 + v46;
    if ( v50 + v46 < v46 || v51 + 3 < v51 )
      return (unsigned int)-1073741675;
    v9 = 0;
    v46 = (v51 + 3) & 0xFFFFFFFC;
    memmove(v47, (char *)a1 + a1[v49 + 4], v50);
    *(_QWORD *)(*((_QWORD *)a3 + 3) + 8LL * n) = v47;
    v47 = (char *)a3 + v46;
  }
  return (unsigned int)v9;
}
