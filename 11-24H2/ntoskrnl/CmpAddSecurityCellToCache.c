/*
 * XREFs of CmpAddSecurityCellToCache @ 0x1409A1310
 * Callers:
 *     CmpSetSecurityDescriptorInfo @ 0x1409A0064 (CmpSetSecurityDescriptorInfo.c)
 *     CmpValidateHiveSecurityDescriptors @ 0x1409A0BDC (CmpValidateHiveSecurityDescriptors.c)
 *     CmpInsertSecurityCellList @ 0x1409A1028 (CmpInsertSecurityCellList.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x14041FBC0 (CmpFindSecurityCellCacheIndex.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     memmove @ 0x1406BFC40 (memmove.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpSecConvKey @ 0x1409A1574 (CmpSecConvKey.c)
 */

__int64 __fastcall CmpAddSecurityCellToCache(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        char a3,
        __int64 a4)
{
  unsigned int v5; // r15d
  __int64 v7; // r9
  int v8; // ecx
  __int64 CellFlat; // rax
  __int64 v10; // r9
  __int64 v11; // rsi
  __int64 v12; // rcx
  __int64 v13; // rax
  __int64 v14; // r14
  int v15; // eax
  ULONG_PTR *v16; // rcx
  ULONG_PTR v17; // rdx
  ULONG_PTR **v18; // rax
  __int64 v20; // rbx
  unsigned int v21; // eax
  __int64 v22; // rcx
  const void *v23; // rbx
  int v24; // eax
  int v25; // ecx
  unsigned int v26; // esi
  void *v27; // rax
  unsigned int v28; // ecx
  __int64 v29; // r8
  __int64 v30; // r9
  unsigned int v31[4]; // [rsp+20h] [rbp-10h] BYREF
  unsigned int v32; // [rsp+78h] [rbp+48h] BYREF
  int v33; // [rsp+7Ch] [rbp+4Ch]

  v33 = HIDWORD(a4);
  v31[0] = -1;
  v32 = 0;
  v5 = BugCheckParameter4;
  v31[1] = 0;
  if ( CmpFindSecurityCellCacheIndex(BugCheckParameter3, BugCheckParameter4, &v32) != 1 )
  {
    v8 = *(_DWORD *)(BugCheckParameter3 + 1876);
    if ( *(_DWORD *)(BugCheckParameter3 + 1872) == v8 )
    {
      v23 = *(const void **)(BugCheckParameter3 + 1888);
      v24 = v8 + 16;
      v25 = v8 + 256;
      v26 = 16 * *(_DWORD *)(BugCheckParameter3 + 1876);
      if ( a3 != 1 )
        v25 = v24;
      *(_DWORD *)(BugCheckParameter3 + 1876) = v25;
      v27 = (void *)guard_dispatch_icall_no_overrides((unsigned int)(16 * v25), 0LL, 1666403651LL, v7);
      v28 = *(_DWORD *)(BugCheckParameter3 + 1872);
      *(_QWORD *)(BugCheckParameter3 + 1888) = v27;
      if ( !v27 )
      {
        *(_QWORD *)(BugCheckParameter3 + 1888) = v23;
        *(_DWORD *)(BugCheckParameter3 + 1876) = v28;
        return 3221225626LL;
      }
      memmove(v27, v23, 16LL * v28);
      if ( v23 )
        guard_dispatch_icall_no_overrides(v23, v26, v29, v30);
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v5, v31);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v5, v31);
    v11 = CellFlat;
    if ( CellFlat )
    {
      v12 = (unsigned int)(*(_DWORD *)(CellFlat + 16) + 32);
      if ( *(_DWORD *)(CellFlat + 16) < 0xFFFFFFE0 && (_DWORD)v12 != 32 )
      {
        v13 = guard_dispatch_icall_no_overrides(v12, 0LL, 1666403651LL, v10);
        v14 = v13;
        if ( v13 )
        {
          memmove((void *)(v13 + 32), (const void *)(v11 + 20), *(unsigned int *)(v11 + 16));
          *(_DWORD *)v14 = v5;
          *(_DWORD *)(v14 + 24) = *(_DWORD *)(v11 + 16);
          *(_DWORD *)(v14 + 28) = 0;
          v15 = CmpSecConvKey(*(unsigned int *)(v11 + 16), v11 + 20);
          *(_DWORD *)(v14 + 4) = v15;
          v16 = (ULONG_PTR *)(v14 + 8);
          v17 = 16LL * (v15 & 0x3F) + BugCheckParameter3 + 1896;
          v18 = *(ULONG_PTR ***)(v17 + 8);
          if ( *v18 != (ULONG_PTR *)v17 )
            __fastfail(3u);
          v20 = v32;
          *v16 = v17;
          *(_QWORD *)(v14 + 16) = v18;
          *v18 = v16;
          *(_QWORD *)(v17 + 8) = v16;
          v21 = *(_DWORD *)(BugCheckParameter3 + 1872);
          if ( (unsigned int)v20 < v21 )
            memmove(
              (void *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * (unsigned int)(v20 + 1)),
              (const void *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * (unsigned int)v20),
              16LL * (v21 - (unsigned int)v20));
          v22 = 2 * v20;
          *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 8 * v22) = v5;
          *(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 8 * v22 + 8) = v14;
          ++*(_DWORD *)(BugCheckParameter3 + 1872);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, (__int64)v31);
          else
            HvpReleaseCellPaged(BugCheckParameter3, v31);
          return 0LL;
        }
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v31);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v31);
    }
    return 3221225626LL;
  }
  return 0LL;
}
