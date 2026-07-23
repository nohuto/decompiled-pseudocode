/*
 * XREFs of RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x1801102C0
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x180139330 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x1800E7158 (RtlStringCbLengthW.c)
 *     memmove @ 0x1801657C0 (memmove.c)
 *     memset$thunk$772440563353939046 @ 0x180171030 (memset$thunk$772440563353939046.c)
 */

__int64 __fastcall RtlpConvertAbsoluteToRelativeSecurityAttribute(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned __int64 v7; // rax
  __int64 v8; // r9
  unsigned int v9; // edx
  _WORD *v10; // rax
  __int64 v11; // rcx
  unsigned int k; // edi
  unsigned int v13; // ebx
  unsigned int v14; // r11d
  unsigned int j; // edx
  unsigned int v16; // eax
  unsigned int i; // ebp
  unsigned int v18; // r11d
  int v19; // ecx
  int v20; // eax
  unsigned int v21; // eax
  int v22; // eax
  unsigned int v23; // ebp
  unsigned int v24; // ebp
  _QWORD *v25; // r9
  unsigned int v26; // r15d
  __int64 v27; // rbx
  unsigned int v28; // ebp
  __int64 v29; // rdx
  unsigned int v30; // r13d
  __int64 v31; // rax
  const void *v32; // rdx
  _WORD *v33; // rax
  __int64 v34; // rcx
  unsigned int v35; // ebx
  __int64 v36; // rcx
  __int64 v38; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  LODWORD(v7) = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v8 = *(unsigned int *)(a1 + 16);
  if ( (_DWORD)v8 )
  {
    v7 = 4LL * (unsigned int)(v8 - 1);
    if ( v7 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
  }
  v9 = v7 + 20;
  if ( (unsigned int)(v7 + 20) < 0x14 )
    return (unsigned int)-1073741675;
  v10 = *(_WORD **)a1;
  if ( !*(_QWORD *)a1 )
    return (unsigned int)-1073741811;
  v11 = 0x7FFFLL;
  do
  {
    if ( !*v10 )
      break;
    ++v10;
    --v11;
  }
  while ( v11 );
  k = v11 == 0 ? 0xC000000D : 0;
  if ( !v11 )
    return k;
  v38 = (2 * (0x7FFF - v11)) & -(__int64)(v11 != 0);
  v13 = v38 + 2;
  if ( (int)v38 + 2 < (unsigned int)v38 )
    return (unsigned int)-1073741675;
  v14 = v9 + v13;
  if ( v9 + v13 < v9 )
    return (unsigned int)-1073741675;
  if ( *(_WORD *)(a1 + 8) != 1 && *(_WORD *)(a1 + 8) != 2 )
  {
    if ( *(_WORD *)(a1 + 8) == 3 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
      {
        k = RtlStringCbLengthW(*(_WORD **)(*(_QWORD *)(a1 + 24) + 8LL * i), 0xFFFFuLL, &v38);
        if ( (k & 0x80000000) != 0 )
          return k;
        v19 = v38 + 2;
        if ( (int)v38 + 2 < (unsigned int)v38 || v19 + v18 < v18 )
          return (unsigned int)-1073741675;
        v14 = v19 + v18;
      }
      goto LABEL_34;
    }
    if ( *(_WORD *)(a1 + 8) == 5 )
    {
LABEL_19:
      for ( j = 0; j < (unsigned int)v8; ++j )
      {
        v16 = v14 + *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * j + 8);
        if ( v16 < v14 )
          return (unsigned int)-1073741675;
        v14 = v16 + 4;
        if ( v16 + 4 < v16 )
          return (unsigned int)-1073741675;
      }
      goto LABEL_34;
    }
    if ( *(_WORD *)(a1 + 8) != 6 )
    {
      if ( *(_WORD *)(a1 + 8) != 16 )
        goto LABEL_34;
      goto LABEL_19;
    }
  }
  v20 = 8 * v8;
  if ( (unsigned __int64)(8 * v8) > 0xFFFFFFFF || v14 + v20 < v14 )
    return (unsigned int)-1073741675;
  v14 += v20;
LABEL_34:
  if ( v14 + 3 < v14 )
    return (unsigned int)-1073741675;
  v21 = (v14 + 3) & 0xFFFFFFFC;
  if ( *a3 < v21 )
  {
    *a3 = v21;
    return (unsigned int)-1073741789;
  }
  if ( !a2 )
    return (unsigned int)-1073741811;
  *a3 = v21;
  memset_thunk_772440563353939046(a2, 0, v21);
  *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 8);
  *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 10);
  a2[2] = *(_DWORD *)(a1 + 12);
  a2[3] = *(_DWORD *)(a1 + 16);
  v22 = *(_DWORD *)(a1 + 16);
  v23 = 4 * v22 + 16;
  if ( !v22 )
    v23 = 20;
  *a2 = v23;
  memmove((char *)a2 + v23, *(const void **)a1, v13);
  v24 = v13 + v23;
  v25 = (_QWORD *)((char *)a2 + v24);
  if ( *(_WORD *)(a1 + 8) == 1 || *(_WORD *)(a1 + 8) == 2 )
  {
LABEL_60:
    k = 0;
    if ( *(_DWORD *)(a1 + 16) )
    {
      do
      {
        v36 = v3++;
        a2[v36 + 4] = v24;
        v24 += 8;
        *v25 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v36);
        v25 = (_QWORD *)((char *)a2 + v24);
      }
      while ( v3 < *(_DWORD *)(a1 + 16) );
    }
    return k;
  }
  if ( *(_WORD *)(a1 + 8) != 3 )
  {
    if ( *(_WORD *)(a1 + 8) == 5 )
    {
LABEL_47:
      v26 = 0;
      for ( k = 0; v26 < *(_DWORD *)(a1 + 16); v25 = (_QWORD *)((char *)a2 + v24) )
      {
        a2[v26 + 4] = v24;
        v27 = 2LL * v26;
        v28 = v24 + 4;
        *(_DWORD *)v25 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v26 + 8);
        v29 = *(_QWORD *)(a1 + 24);
        if ( *(_DWORD *)(v29 + 16LL * v26 + 8) )
          memmove((char *)a2 + v28, *(const void **)(v29 + 16LL * v26), *(unsigned int *)(v29 + 16LL * v26 + 8));
        ++v26;
        v24 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8 * v27 + 8) + v28;
      }
      return k;
    }
    if ( *(_WORD *)(a1 + 8) != 6 )
    {
      if ( *(_WORD *)(a1 + 8) != 16 )
        return (unsigned int)-1073741811;
      goto LABEL_47;
    }
    goto LABEL_60;
  }
  v30 = 0;
  k = 0;
  while ( v30 < *(_DWORD *)(a1 + 16) )
  {
    a2[v30 + 4] = v24;
    v31 = *(_QWORD *)(a1 + 24);
    v32 = *(const void **)(v31 + 8LL * v30);
    if ( !v32 )
      return (unsigned int)-1073741811;
    v33 = *(_WORD **)(v31 + 8LL * v30);
    v34 = 0x7FFFLL;
    do
    {
      if ( !*v33 )
        break;
      ++v33;
      --v34;
    }
    while ( v34 );
    k = v34 == 0 ? 0xC000000D : 0;
    if ( !v34 )
      break;
    v35 = v34 != 0 ? 2 * (0x7FFF - v34) + 2 : 2;
    memmove(v25, v32, v35);
    v24 += v35;
    v25 = (_QWORD *)((char *)a2 + v24);
    ++v30;
  }
  return k;
}
