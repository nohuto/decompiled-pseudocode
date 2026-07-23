/*
 * XREFs of RtlpAddIntersectingRanges @ 0x14077D3EC
 * Callers:
 *     RtlpAddRange @ 0x1406F9D60 (RtlpAddRange.c)
 * Callees:
 *     RtlpAddToMergedRange @ 0x14077D60C (RtlpAddToMergedRange.c)
 *     RtlpCopyRangeListEntry @ 0x140A4A140 (RtlpCopyRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x140A4A338 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlpAddIntersectingRanges(__int64 *a1, __int64 a2, unsigned __int64 *a3, unsigned int a4)
{
  char v4; // r10
  __int64 v7; // rbx
  unsigned __int64 i; // rcx
  unsigned __int64 *v10; // rcx
  unsigned __int64 v11; // r8
  unsigned __int64 v12; // rax
  bool v13; // cf
  __int64 v15; // rdx
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _DWORD *v18; // rdx
  __int64 *v19; // rax
  __int64 v20; // rsi
  __int64 *v21; // rdi
  __int64 *v22; // rsi
  _QWORD *v23; // rcx
  __int64 *v24; // rax
  __int64 *j; // rdx
  __int64 *v26; // r8
  __int64 **v27; // rcx
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 **v30; // rcx
  __int64 v31; // rdx
  _QWORD *v32; // rax

  v4 = *((_BYTE *)a3 + 33) & 1;
  v7 = a2;
  if ( (a4 & 1) == 0 )
  {
    while ( 1 )
    {
      if ( a1 == (__int64 *)(a2 + 40) || a3[1] < *(_QWORD *)a2 )
        goto LABEL_19;
      if ( (*(_BYTE *)(a2 + 34) & 1) != 0 )
        break;
      if ( !v4 || (*(_BYTE *)(a2 + 33) & 1) == 0 )
        return 3221226114LL;
LABEL_17:
      a2 = *(_QWORD *)(a2 + 40) - 40LL;
    }
    for ( i = *(_QWORD *)(a2 + 16); ; i = v10[5] )
    {
      v10 = (unsigned __int64 *)(i - 40);
      if ( (unsigned __int64 *)a2 == v10 + 3 )
        goto LABEL_17;
      v11 = *v10;
      v12 = *a3;
      v13 = *a3 < *v10;
      if ( *a3 > *v10 )
      {
        if ( v10[1] < v12 )
          continue;
        v13 = v12 < v11;
      }
      if ( (!v13 || a3[1] >= v11) && (!v4 || (*((_BYTE *)v10 + 33) & 1) == 0) )
        return 3221226114LL;
    }
  }
LABEL_19:
  if ( (*(_BYTE *)(v7 + 34) & 1) == 0 )
  {
    v15 = RtlpCopyRangeListEntry(v7);
    if ( !v15 )
      return 3221225626LL;
    v16 = v7 + 16;
    if ( (*(_BYTE *)(v7 + 33) & 0x10) != 0 )
    {
      --**(_DWORD **)v16;
      *(_BYTE *)(v7 + 33) &= ~0x10u;
    }
    *(_QWORD *)(v7 + 24) = v7 + 16;
    v17 = (_QWORD *)(v15 + 40);
    *(_QWORD *)v16 = v16;
    *(_WORD *)(v7 + 34) = 1;
    v18 = *(_DWORD **)v16;
    if ( *(_QWORD *)(*(_QWORD *)v16 + 8LL) != v16 )
LABEL_42:
      __fastfail(3u);
    *v17 = v18;
    v17[1] = v16;
    *((_QWORD *)v18 + 1) = v17;
    *(_QWORD *)v16 = v17;
  }
  v19 = *(__int64 **)(v7 + 40);
  v20 = *v19;
  v21 = v19 - 5;
  while ( 1 )
  {
    v22 = (__int64 *)(v20 - 40);
    v23 = v21 + 5;
    if ( a1 == v21 + 5 || a3[1] < *v21 )
      return RtlpAddToMergedRange(v7, a3, a4);
    if ( (*((_BYTE *)v21 + 34) & 1) != 0 )
    {
      v24 = (__int64 *)v21[2];
      for ( j = v24 - 5; ; j = (__int64 *)v28 )
      {
        v28 = *v24 - 40;
        if ( v21 + 2 == v24 )
          break;
        v26 = (__int64 *)*v24;
        if ( *(__int64 **)(*v24 + 8) != v24 )
          goto LABEL_42;
        v27 = (__int64 **)v24[1];
        if ( *v27 != v24 )
          goto LABEL_42;
        *v27 = v26;
        v26[1] = (__int64)v27;
        RtlpAddToMergedRange(v7, j, a4);
        v24 = (__int64 *)(v28 + 40);
      }
      v29 = v21[5];
      if ( *(__int64 **)(v29 + 8) != v21 + 5 )
        goto LABEL_42;
      v30 = (__int64 **)v21[6];
      if ( *v30 != v21 + 5 )
        goto LABEL_42;
      *v30 = (__int64 *)v29;
      *(_QWORD *)(v29 + 8) = v30;
      RtlpFreeRangeListEntry(v21);
    }
    else
    {
      v31 = *v23;
      if ( *(_QWORD **)(*v23 + 8LL) != v23 )
        goto LABEL_42;
      v32 = (_QWORD *)v21[6];
      if ( (_QWORD *)*v32 != v23 )
        goto LABEL_42;
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
      RtlpAddToMergedRange(v7, v21, a4);
    }
    v21 = v22;
    v20 = v22[5];
  }
}
