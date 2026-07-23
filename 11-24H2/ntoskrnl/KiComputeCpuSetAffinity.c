/*
 * XREFs of KiComputeCpuSetAffinity @ 0x1402A9B00
 * Callers:
 *     KiComputeThreadAffinity @ 0x1402A9724 (KiComputeThreadAffinity.c)
 * Callees:
 *     ?KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x1402AA18C (-KiOrAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     ?KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z @ 0x14032C800 (-KiAndAffinityEx@@YAKPEAU_KAFFINITY_EX@@00G@Z.c)
 *     KeAndAffinityEx2 @ 0x14032C8C0 (KeAndAffinityEx2.c)
 *     KeIsEmptyAffinityEx @ 0x140371960 (KeIsEmptyAffinityEx.c)
 *     ?KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z @ 0x14039FF30 (-KiCopyAffinityEx@@YAXPEAU_KAFFINITY_EX@@G0@Z.c)
 *     KiCopyGroupMasksToAffinityEx @ 0x140405BF0 (KiCopyGroupMasksToAffinityEx.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 */

unsigned __int64 __fastcall KiComputeCpuSetAffinity(__int64 a1, struct _KAFFINITY_EX *a2)
{
  __int64 v3; // r14
  __int64 v4; // r15
  unsigned __int16 v5; // r12
  char *v6; // rsi
  char *v7; // r13
  unsigned __int16 Size; // di
  unsigned __int16 v9; // ax
  unsigned __int16 v10; // cx
  $B38C3B1372D6E954799962D5DD404846 *v11; // rdx
  __int64 v12; // r9
  __int64 *v13; // r8
  __int64 v14; // rax
  __int64 v15; // rax
  unsigned int v16; // eax
  unsigned __int16 v17; // r8
  unsigned __int16 v18; // dx
  __int64 v19; // rcx
  __int64 v20; // rax
  unsigned __int16 v21; // dx
  unsigned __int16 v22; // cx
  __int64 v23; // r8
  signed __int64 v24; // r9
  __int64 v25; // rax
  unsigned __int16 v26; // cx
  char v27; // r15
  unsigned __int16 Count; // r14
  unsigned __int16 v29; // si
  __int64 v30; // rax
  unsigned __int16 i; // cx
  __int64 v32; // r8
  unsigned __int64 result; // rax
  _QWORD *v34; // rdx
  unsigned __int16 v35; // r9
  unsigned __int16 v36; // di
  unsigned __int16 v37; // cx
  __int64 v38; // rax
  unsigned __int16 j; // cx
  unsigned __int16 v40; // dx
  unsigned __int16 v41; // cx
  __int64 v42; // r8
  signed __int64 v43; // r10
  __int64 v44; // rax
  unsigned __int16 k; // cx
  unsigned __int16 v46; // r9
  unsigned __int16 v47; // r11
  char *v48; // rsi
  unsigned __int64 v49; // r8
  __int64 v50; // r10
  unsigned __int64 v51; // rdx
  unsigned __int16 v52; // si
  unsigned __int16 v53; // di
  __int64 v54; // rax
  struct _KAFFINITY_EX v56; // [rsp+30h] [rbp-D0h] BYREF
  struct _KAFFINITY_EX v57; // [rsp+140h] [rbp+40h] BYREF
  struct _KAFFINITY_EX v58; // [rsp+250h] [rbp+150h] BYREF

  v3 = a1;
  memset_0(&v57.8, 0, sizeof(v57.8));
  memset_0(&v58.8, 0, sizeof(v58.8));
  memset_0(&v56.8, 0, sizeof(v56.8));
  v57.Size = 32;
  v57.Reserved = 0;
  memset_0(&v57.8, 0, sizeof(v57.8));
  *(_QWORD *)&v58.Count = 2097153LL;
  memset_0(&v58.8, 0, sizeof(v58.8));
  *(_QWORD *)&v56.Count = 2097153LL;
  memset_0(&v56.8, 0, sizeof(v56.8));
  memset_0(&a2->8, 0, 8LL * a2->Count);
  a2->Count = 1;
  v4 = *(_QWORD *)(v3 + 544);
  v5 = KiMaximumGroups;
  v6 = (char *)(v4 + 1736);
  v7 = (char *)(v4 + 1744);
  if ( (*(_DWORD *)(v4 + 1532) & 0x80u) != 0 )
  {
    v6 = *(char **)v6;
    v7 = *(char **)v7;
  }
  Size = v57.Size;
  v9 = KiMaximumGroups;
  if ( (unsigned __int16)KiMaximumGroups > v57.Size )
    v9 = v57.Size;
  v57.Count = v9;
  v10 = 0;
  if ( v9 )
  {
    v11 = &v57.8;
    v12 = v9;
    v13 = KiSystemAllowedCpuSets;
    v10 = v9;
    do
    {
      v14 = *v13;
      v13 += 2;
      v11->Bitmap[0] = v14;
      v11 = ($B38C3B1372D6E954799962D5DD404846 *)((char *)v11 + 8);
      --v12;
    }
    while ( v12 );
    Size = v57.Size;
  }
  if ( v10 < Size )
  {
    do
    {
      v15 = v10++;
      v57.Bitmap[v15] = 0LL;
      Size = v57.Size;
    }
    while ( v10 < v57.Size );
  }
  v16 = (*(_DWORD *)(v3 + 1444) >> 11) & 1;
  if ( v16 )
  {
    v17 = a2->Size;
    v18 = 0;
    if ( v5 <= v17 )
      v17 = v5;
    a2->Count = v17;
    if ( v17 )
    {
      do
      {
        v19 = v18++;
        a2->Bitmap[v19] = KiSystemAllowedCpuSets[2 * v19 + v16];
      }
      while ( v18 < v17 );
    }
    for ( ; v18 < a2->Size; a2->Bitmap[v20] = 0LL )
      v20 = v18++;
    KiOrAffinityEx(&v57, a2, &v57, Size);
    Size = v57.Size;
  }
  v21 = v5;
  if ( v5 > a2->Size )
    v21 = a2->Size;
  a2->Count = v21;
  v22 = 0;
  if ( v21 )
  {
    v23 = v21;
    v24 = (char *)a2 - v6;
    v22 = v21;
    do
    {
      *(_QWORD *)&v6[v24 + 8] = *(_QWORD *)v6;
      v6 += 8;
      --v23;
    }
    while ( v23 );
  }
  for ( ; v22 < a2->Size; a2->Bitmap[v25] = 0LL )
    v25 = v22++;
  if ( (*(_DWORD *)(v4 + 496) & 0x8000000) == 0 || (unsigned int)KeIsEmptyAffinityEx(a2) )
  {
    v26 = v58.Size;
    v27 = 1;
    Count = v58.Size;
    v58.Reserved = 0;
    v29 = 0;
    if ( v57.Count <= v58.Size )
      Count = v57.Count;
    v58.Count = Count;
    if ( Count )
    {
      memmove(&v58.8, &v57.8, 8LL * Count);
      do
        ++v29;
      while ( v29 < Count );
      v26 = v58.Size;
    }
    if ( v29 < v26 )
    {
      do
      {
        v30 = v29++;
        v58.Bitmap[v30] = 0LL;
      }
      while ( v29 < v58.Size );
    }
    KiOrAffinityEx(&v57, a2, &v57, Size);
    v3 = a1;
  }
  else
  {
    v27 = 0;
    KiCopyAffinityEx(&v57, Size, a2);
    KiCopyAffinityEx(&v58, v58.Size, a2);
  }
  for ( i = 0; ; ++i )
  {
    if ( i >= v57.Count )
    {
      v32 = a2->Count;
LABEL_41:
      result = (unsigned __int64)memset_0(&a2->8, 0, 8 * v32);
      a2->Count = 1;
      return result;
    }
    if ( v57.Bitmap[i] )
      break;
  }
  v34 = (_QWORD *)(v3 + 1680);
  if ( (*(_DWORD *)(v3 + 1440) & 0x20000) != 0 )
    v34 = (_QWORD *)*v34;
  v35 = v56.Size;
  v36 = v5;
  if ( v5 > v56.Size )
    v36 = v56.Size;
  v56.Count = v36;
  v37 = 0;
  if ( v36 )
  {
    memmove(&v56.8, v34, 8LL * v36);
    v35 = v56.Size;
    v37 = v36;
    v36 = v56.Count;
  }
  if ( v37 < v35 )
  {
    do
    {
      v38 = v37++;
      v56.Bitmap[v38] = 0LL;
      v35 = v56.Size;
    }
    while ( v37 < v56.Size );
    v36 = v56.Count;
  }
  for ( j = 0; j < v36; ++j )
  {
    if ( v56.Bitmap[j] )
      goto LABEL_68;
  }
  v40 = v5;
  if ( v5 > a2->Size )
    v40 = a2->Size;
  a2->Count = v40;
  v41 = 0;
  if ( v40 )
  {
    v42 = v40;
    v43 = (char *)a2 - v7;
    v41 = v40;
    do
    {
      *(_QWORD *)&v7[v43 + 8] = *(_QWORD *)v7;
      v7 += 8;
      --v42;
    }
    while ( v42 );
  }
  for ( ; v41 < a2->Size; a2->Bitmap[v44] = 0LL )
    v44 = v41++;
  for ( k = 0; k < a2->Count; ++k )
  {
    if ( a2->Bitmap[k] )
    {
      KiCopyAffinityEx(&v56, v35, a2);
      v35 = v56.Size;
      goto LABEL_68;
    }
  }
  if ( !KiRestrictedSystemCpuSetsActive && v27 )
  {
    v32 = a2->Count;
    goto LABEL_41;
  }
  v52 = v35;
  if ( v58.Count <= v35 )
    v52 = v58.Count;
  v56.Count = v52;
  v53 = 0;
  v56.Reserved = 0;
  if ( v52 )
  {
    memmove(&v56.8, &v58.8, 8LL * v52);
    do
      ++v53;
    while ( v53 < v52 );
    v35 = v56.Size;
  }
  if ( v53 < v35 )
  {
    do
    {
      v54 = v53++;
      v56.Bitmap[v54] = 0LL;
      v35 = v56.Size;
    }
    while ( v53 < v56.Size );
  }
LABEL_68:
  if ( !KiAndAffinityEx(&v56, &v57, &v56, v35) )
    KiCopyAffinityEx(&v56, v56.Size, &v57);
  KiCopyGroupMasksToAffinityEx(a2, &KiNonParkedCpuSets, v5);
  if ( (unsigned int)KeAndAffinityEx2(&v56, a2, a2) )
    KiCopyAffinityEx(&v56, v56.Size, a2);
  result = (unsigned __int64)memset_0(&a2->8, 0, 8LL * a2->Count);
  v46 = a2->Size;
  v47 = 0;
  if ( v5 <= v46 )
    v46 = v5;
  a2->Count = v46;
  if ( v46 )
  {
    do
    {
      result = v47;
      v48 = (char *)a2 + 8 * v47;
      *((_QWORD *)v48 + 1) = 0LL;
      v49 = v56.Bitmap[v47];
      if ( v49 )
      {
        v50 = 0LL;
        do
        {
          _BitScanForward64(&v51, v49);
          v50 |= *((_QWORD *)KiCpuSetAffinities + 64 * v47 + (int)v51);
          result = (unsigned int)v51;
          v49 &= ~(1LL << v51);
          *((_QWORD *)v48 + 1) = v50;
        }
        while ( v49 );
      }
      ++v47;
    }
    while ( v47 < v46 );
  }
  return result;
}
