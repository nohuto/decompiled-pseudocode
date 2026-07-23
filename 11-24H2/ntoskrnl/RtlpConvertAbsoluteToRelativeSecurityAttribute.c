/*
 * XREFs of RtlpConvertAbsoluteToRelativeSecurityAttribute @ 0x14078033C
 * Callers:
 *     RtlAddResourceAttributeAce @ 0x14077FDD0 (RtlAddResourceAttributeAce.c)
 * Callees:
 *     RtlStringCbLengthW @ 0x14044CF68 (RtlStringCbLengthW.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

__int64 __fastcall RtlpConvertAbsoluteToRelativeSecurityAttribute(__int64 a1, unsigned int *a2, unsigned int *a3)
{
  unsigned int v3; // esi
  unsigned __int64 v7; // rax
  int v8; // ecx
  unsigned int v9; // r12d
  NTSTATUS k; // edi
  unsigned int v11; // ebx
  unsigned int v12; // r11d
  unsigned int j; // edx
  unsigned int v14; // eax
  unsigned int i; // ebp
  unsigned int v16; // r11d
  int v17; // ecx
  unsigned __int64 v18; // rax
  unsigned int v19; // eax
  int v20; // eax
  unsigned int v21; // ebp
  unsigned int v22; // ebp
  _DWORD *v23; // r11
  unsigned int v24; // r12d
  __int64 v25; // rbx
  unsigned int v26; // ebp
  __int64 v27; // rdx
  unsigned int v28; // eax
  unsigned int v29; // r12d
  void *v30; // r11
  int v31; // ebx
  __int64 v32; // rcx
  size_t pcbLength; // [rsp+50h] [rbp+8h] BYREF

  v3 = 0;
  pcbLength = 0LL;
  LODWORD(v7) = 0;
  if ( !a1 || !a3 )
    return (unsigned int)-1073741811;
  v8 = *(_DWORD *)(a1 + 16);
  if ( v8 )
  {
    v7 = 4LL * (unsigned int)(v8 - 1);
    if ( v7 > 0xFFFFFFFF )
      return (unsigned int)-1073741675;
  }
  v9 = v7 + 20;
  if ( (unsigned int)(v7 + 20) < 0x14 )
    return (unsigned int)-1073741675;
  k = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)a1, 0xFFFFuLL, &pcbLength);
  if ( k < 0 )
    return (unsigned int)k;
  v11 = pcbLength + 2;
  if ( (int)pcbLength + 2 < (unsigned int)pcbLength )
    return (unsigned int)-1073741675;
  v12 = v9 + v11;
  if ( v9 + v11 < v9 )
    return (unsigned int)-1073741675;
  if ( *(_WORD *)(a1 + 8) != 1 && *(_WORD *)(a1 + 8) != 2 )
  {
    if ( *(_WORD *)(a1 + 8) == 3 )
    {
      for ( i = 0; i < *(_DWORD *)(a1 + 16); ++i )
      {
        k = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(*(_QWORD *)(a1 + 24) + 8LL * i), 0xFFFFuLL, &pcbLength);
        if ( k < 0 )
          return (unsigned int)k;
        v17 = pcbLength + 2;
        if ( (int)pcbLength + 2 < (unsigned int)pcbLength || v17 + v16 < v16 )
          return (unsigned int)-1073741675;
        v12 = v17 + v16;
      }
      goto LABEL_30;
    }
    if ( *(_WORD *)(a1 + 8) == 5 )
    {
LABEL_15:
      for ( j = 0; j < *(_DWORD *)(a1 + 16); ++j )
      {
        v14 = v12 + *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * j + 8);
        if ( v14 < v12 )
          return (unsigned int)-1073741675;
        v12 = v14 + 4;
        if ( v14 + 4 < v14 )
          return (unsigned int)-1073741675;
      }
      goto LABEL_30;
    }
    if ( *(_WORD *)(a1 + 8) != 6 )
    {
      if ( *(_WORD *)(a1 + 8) != 16 )
        goto LABEL_30;
      goto LABEL_15;
    }
  }
  v18 = 8LL * *(unsigned int *)(a1 + 16);
  if ( v18 > 0xFFFFFFFF || v12 + (unsigned int)v18 < v12 )
    return (unsigned int)-1073741675;
  v12 += v18;
LABEL_30:
  if ( v12 + 3 < v12 )
    return (unsigned int)-1073741675;
  v19 = (v12 + 3) & 0xFFFFFFFC;
  if ( *a3 < v19 )
  {
    *a3 = v19;
    return (unsigned int)-1073741789;
  }
  if ( !a2 )
    return (unsigned int)-1073741811;
  *a3 = v19;
  memset_0(a2, 0, v19);
  *((_WORD *)a2 + 2) = *(_WORD *)(a1 + 8);
  *((_WORD *)a2 + 3) = *(_WORD *)(a1 + 10);
  a2[2] = *(_DWORD *)(a1 + 12);
  a2[3] = *(_DWORD *)(a1 + 16);
  v20 = *(_DWORD *)(a1 + 16);
  v21 = 4 * v20 + 16;
  if ( !v20 )
    v21 = 20;
  *a2 = v21;
  memmove((char *)a2 + v21, *(const void **)a1, v11);
  v22 = v11 + v21;
  v23 = (unsigned int *)((char *)a2 + v22);
  if ( *(_WORD *)(a1 + 8) != 1 && *(_WORD *)(a1 + 8) != 2 )
  {
    if ( *(_WORD *)(a1 + 8) == 3 )
    {
      v29 = 0;
      k = 0;
      while ( v29 < *(_DWORD *)(a1 + 16) )
      {
        a2[v29 + 4] = v22;
        k = RtlStringCbLengthW(*(STRSAFE_PCNZWCH *)(*(_QWORD *)(a1 + 24) + 8LL * v29), 0xFFFFuLL, &pcbLength);
        if ( k < 0 )
          break;
        v31 = pcbLength + 2;
        memmove(v30, *(const void **)(*(_QWORD *)(a1 + 24) + 8LL * v29), (unsigned int)(pcbLength + 2));
        v22 += v31;
        ++v29;
      }
      return (unsigned int)k;
    }
    if ( *(_WORD *)(a1 + 8) == 5 )
      goto LABEL_42;
    if ( *(_WORD *)(a1 + 8) != 6 )
    {
      if ( *(_WORD *)(a1 + 8) == 16 )
      {
LABEL_42:
        v24 = 0;
        for ( k = 0; v24 < *(_DWORD *)(a1 + 16); v23 = (unsigned int *)((char *)a2 + v22) )
        {
          a2[v24 + 4] = v22;
          v25 = 2LL * v24;
          v26 = v22 + 4;
          *v23 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 16LL * v24 + 8);
          v27 = *(_QWORD *)(a1 + 24);
          v28 = *(_DWORD *)(v27 + 16LL * v24 + 8);
          if ( v28 )
            memmove((char *)a2 + v26, *(const void **)(v27 + 16LL * v24), v28);
          ++v24;
          v22 = *(_DWORD *)(*(_QWORD *)(a1 + 24) + 8 * v25 + 8) + v26;
        }
        return (unsigned int)k;
      }
      return (unsigned int)-1073741811;
    }
  }
  k = 0;
  if ( *(_DWORD *)(a1 + 16) )
  {
    do
    {
      v32 = v3++;
      a2[v32 + 4] = v22;
      v22 += 8;
      *(_QWORD *)v23 = *(_QWORD *)(*(_QWORD *)(a1 + 24) + 8 * v32);
      v23 = (unsigned int *)((char *)a2 + v22);
    }
    while ( v3 < *(_DWORD *)(a1 + 16) );
  }
  return (unsigned int)k;
}
