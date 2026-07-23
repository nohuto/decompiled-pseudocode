/*
 * XREFs of CmpAddSecurityCellToCache @ 0x140832634
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x140830F98 (CmpSetSecurityDescriptorInfo.c)
 *     CmpInsertSecurityCellList @ 0x14083234C (CmpInsertSecurityCellList.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1408328B8 (CmpValidateHiveSecurityDescriptors.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140415340 (CmpFindSecurityCellCacheIndex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpSecConvKey @ 0x140832898 (CmpSecConvKey.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpAddSecurityCellToCache(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        char a3,
        __int64 a4)
{
  unsigned int v5; // r15d
  int v7; // ecx
  __int64 CellFlat; // rax
  __int64 v9; // rsi
  __int64 v10; // rcx
  __int64 v11; // rax
  __int64 v12; // r14
  int v13; // eax
  ULONG_PTR *v14; // rcx
  ULONG_PTR v15; // rdx
  ULONG_PTR **v16; // rax
  __int64 v18; // rbx
  unsigned int v19; // eax
  __int64 v20; // rcx
  const void *v21; // rbx
  int v22; // eax
  int v23; // ecx
  unsigned int v24; // esi
  void *v25; // rax
  unsigned int v26; // ecx
  _DWORD v27[4]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v28; // [rsp+78h] [rbp+48h] BYREF
  int v29; // [rsp+7Ch] [rbp+4Ch]

  v29 = HIDWORD(a4);
  v27[0] = -1;
  v28 = 0;
  v5 = BugCheckParameter4;
  v27[1] = 0;
  if ( CmpFindSecurityCellCacheIndex(BugCheckParameter3, BugCheckParameter4, &v28) != 1 )
  {
    v7 = *(_DWORD *)(BugCheckParameter3 + 1876);
    if ( *(_DWORD *)(BugCheckParameter3 + 1872) == v7 )
    {
      v21 = *(const void **)(BugCheckParameter3 + 1888);
      v22 = v7 + 16;
      v23 = v7 + 256;
      v24 = 16 * *(_DWORD *)(BugCheckParameter3 + 1876);
      if ( a3 != 1 )
        v23 = v22;
      *(_DWORD *)(BugCheckParameter3 + 1876) = v23;
      v25 = (void *)guard_dispatch_icall_no_overrides((unsigned int)(16 * v23), 0LL);
      v26 = *(_DWORD *)(BugCheckParameter3 + 1872);
      *(_QWORD *)(BugCheckParameter3 + 1888) = v25;
      if ( !v25 )
      {
        *(_QWORD *)(BugCheckParameter3 + 1888) = v21;
        *(_DWORD *)(BugCheckParameter3 + 1876) = v26;
        return 3221225626LL;
      }
      memmove(v25, v21, 16LL * v26);
      if ( v21 )
        guard_dispatch_icall_no_overrides(v21, v24);
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v5);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3);
    v9 = CellFlat;
    if ( CellFlat )
    {
      v10 = (unsigned int)(*(_DWORD *)(CellFlat + 16) + 32);
      if ( *(_DWORD *)(CellFlat + 16) < 0xFFFFFFE0 && (_DWORD)v10 != 32 )
      {
        v11 = guard_dispatch_icall_no_overrides(v10, 0LL);
        v12 = v11;
        if ( v11 )
        {
          memmove((void *)(v11 + 32), (const void *)(v9 + 20), *(unsigned int *)(v9 + 16));
          *(_DWORD *)v12 = v5;
          *(_DWORD *)(v12 + 24) = *(_DWORD *)(v9 + 16);
          *(_DWORD *)(v12 + 28) = 0;
          v13 = CmpSecConvKey(*(unsigned int *)(v9 + 16), v9 + 20);
          *(_DWORD *)(v12 + 4) = v13;
          v14 = (ULONG_PTR *)(v12 + 8);
          v15 = 16LL * (v13 & 0x3F) + BugCheckParameter3 + 1896;
          v16 = *(ULONG_PTR ***)(v15 + 8);
          if ( *v16 != (ULONG_PTR *)v15 )
            __fastfail(3u);
          v18 = v28;
          *v14 = v15;
          *(_QWORD *)(v12 + 16) = v16;
          *v16 = v14;
          *(_QWORD *)(v15 + 8) = v14;
          v19 = *(_DWORD *)(BugCheckParameter3 + 1872);
          if ( (unsigned int)v18 < v19 )
            memmove(
              (void *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * (unsigned int)(v18 + 1)),
              (const void *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * (unsigned int)v18),
              16LL * (v19 - (unsigned int)v18));
          v20 = 2 * v18;
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 8 * v20) = v5;
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 8 * v20 + 8) = v12;
          ++*(_DWORD *)(BugCheckParameter3 + 1872);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, v27);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v27);
          return 0LL;
        }
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, v27);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v27);
    }
    return 3221225626LL;
  }
  return 0LL;
}
