/*
 * XREFs of CmpInsertSecurityCellList @ 0x1409A1028
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088067C (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140871600 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x140874470 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408744C0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140875760 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140884BB0 (HvpReleaseCellFlat.c)
 *     CmpAddSecurityCellToCache @ 0x1409A1310 (CmpAddSecurityCellToCache.c)
 */

__int64 __fastcall CmpInsertSecurityCellList(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        unsigned int a3,
        char a4)
{
  unsigned int v5; // r14d
  bool v7; // zf
  __int64 v8; // r15
  __int64 v9; // r12
  __int64 v10; // r13
  __int64 CellPaged; // rax
  __int64 v12; // rdi
  int v13; // r14d
  __int64 v14; // rcx
  __int64 CellFlat; // rax
  __int16 v17; // ax
  ULONG_PTR v18; // rdx
  __int64 v19; // rax
  ULONG_PTR v20; // rdx
  __int64 v21; // rax
  int v22; // eax
  ULONG_PTR v23; // rdx
  __int64 v24; // rax
  unsigned int v25[2]; // [rsp+20h] [rbp-30h] BYREF
  unsigned int v26[2]; // [rsp+28h] [rbp-28h] BYREF
  unsigned int v27[2]; // [rsp+30h] [rbp-20h] BYREF
  unsigned int v28[2]; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v29[4]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v30; // [rsp+90h] [rbp+40h]
  char v31; // [rsp+A0h] [rbp+50h]

  v5 = BugCheckParameter4;
  v30 = 0LL;
  v25[0] = -1;
  v7 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v8 = 0LL;
  v25[1] = 0;
  v9 = 0LL;
  v26[0] = -1;
  v10 = 0LL;
  v26[1] = 0;
  v29[0] = -1;
  v29[1] = 0;
  v28[0] = -1;
  v28[1] = 0;
  v27[0] = -1;
  v27[1] = 0;
  v31 = 0;
  if ( v7 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a3, v29);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a3, v29);
  v12 = CellPaged;
  if ( (a3 & 0x80000000) != 0 )
    goto LABEL_4;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v5, v28);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v5, v28);
  v9 = CellFlat;
  v17 = *(_WORD *)(CellFlat + 2) & 4;
  if ( a4 )
  {
    v10 = v9;
  }
  else
  {
    if ( v17 )
    {
LABEL_4:
      *(_DWORD *)(v12 + 8) = a3;
      *(_DWORD *)(v12 + 4) = a3;
      goto LABEL_5;
    }
    v23 = *(unsigned int *)(v9 + 16);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v24 = HvpGetCellFlat(BugCheckParameter3, v23, v27);
    else
      v24 = HvpGetCellPaged(BugCheckParameter3, v23, v27);
    v10 = v24;
  }
  v18 = *(unsigned int *)(v10 + 44);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v19 = HvpGetCellFlat(BugCheckParameter3, v18, v26);
  else
    v19 = HvpGetCellPaged(BugCheckParameter3, v18, v26);
  v20 = *(unsigned int *)(v19 + 4);
  v8 = v19;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v21 = HvpGetCellFlat(BugCheckParameter3, v20, v25);
  else
    v21 = HvpGetCellPaged(BugCheckParameter3, v20, v25);
  v30 = v21;
  v13 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v10 + 44), 0);
  if ( v13 < 0 )
    goto LABEL_7;
  v22 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v8 + 4), 0);
  v14 = v30;
  v13 = v22;
  if ( v22 < 0 )
    goto LABEL_8;
  *(_DWORD *)(v12 + 4) = *(_DWORD *)(v8 + 4);
  *(_DWORD *)(v12 + 8) = *(_DWORD *)(v30 + 8);
  *(_DWORD *)(v8 + 4) = a3;
  *(_DWORD *)(v30 + 8) = a3;
  v31 = 1;
LABEL_5:
  v13 = CmpAddSecurityCellToCache(BugCheckParameter3, a3);
  if ( v13 >= 0 )
  {
    v13 = 0;
LABEL_7:
    v14 = v30;
    goto LABEL_8;
  }
  v14 = v30;
  if ( v31 )
  {
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(v12 + 4);
    *(_DWORD *)(v30 + 8) = *(_DWORD *)(v12 + 8);
  }
LABEL_8:
  if ( v14 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v25);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v25);
  }
  if ( v8 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v26);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v26);
  }
  if ( v10 && v10 != v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v27);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v27);
  }
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v28);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v28);
  }
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v29);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v29);
  }
  return (unsigned int)v13;
}
