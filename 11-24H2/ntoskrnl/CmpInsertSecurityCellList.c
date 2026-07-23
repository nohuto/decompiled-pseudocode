/*
 * XREFs of CmpInsertSecurityCellList @ 0x14083234C
 * Callers:
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088452C (CmpGetSecurityDescriptorNodeEx.c)
 * Callees:
 *     CmpAddSecurityCellToCache @ 0x140832634 (CmpAddSecurityCellToCache.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpInsertSecurityCellList(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        int a3,
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
  __int64 v18; // rax
  __int64 v19; // rax
  int v20; // eax
  __int64 v21; // rax
  _DWORD v22[2]; // [rsp+20h] [rbp-30h] BYREF
  _DWORD v23[2]; // [rsp+28h] [rbp-28h] BYREF
  _DWORD v24[2]; // [rsp+30h] [rbp-20h] BYREF
  _DWORD v25[2]; // [rsp+38h] [rbp-18h] BYREF
  _DWORD v26[4]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v27; // [rsp+90h] [rbp+40h]
  char v28; // [rsp+A0h] [rbp+50h]

  v5 = BugCheckParameter4;
  v27 = 0LL;
  v22[0] = -1;
  v7 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v8 = 0LL;
  v22[1] = 0;
  v9 = 0LL;
  v23[0] = -1;
  v10 = 0LL;
  v23[1] = 0;
  v26[0] = -1;
  v26[1] = 0;
  v25[0] = -1;
  v25[1] = 0;
  v24[0] = -1;
  v24[1] = 0;
  v28 = 0;
  if ( v7 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, (unsigned int)a3);
  v12 = CellPaged;
  if ( a3 < 0 )
    goto LABEL_4;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v5);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3);
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
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v21 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v9 + 16));
    else
      v21 = HvpGetCellPaged(BugCheckParameter3);
    v10 = v21;
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v18 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v10 + 44));
  else
    v18 = HvpGetCellPaged(BugCheckParameter3);
  v8 = v18;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v19 = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(v18 + 4));
  else
    v19 = HvpGetCellPaged(BugCheckParameter3);
  v27 = v19;
  v13 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v10 + 44));
  if ( v13 < 0 )
    goto LABEL_7;
  v20 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v8 + 4));
  v14 = v27;
  v13 = v20;
  if ( v20 < 0 )
    goto LABEL_8;
  *(_DWORD *)(v12 + 4) = *(_DWORD *)(v8 + 4);
  *(_DWORD *)(v12 + 8) = *(_DWORD *)(v27 + 8);
  *(_DWORD *)(v8 + 4) = a3;
  *(_DWORD *)(v27 + 8) = a3;
  v28 = 1;
LABEL_5:
  v13 = CmpAddSecurityCellToCache(BugCheckParameter3, (unsigned int)a3);
  if ( v13 >= 0 )
  {
    v13 = 0;
LABEL_7:
    v14 = v27;
    goto LABEL_8;
  }
  v14 = v27;
  if ( v28 )
  {
    *(_DWORD *)(v8 + 4) = *(_DWORD *)(v12 + 4);
    *(_DWORD *)(v27 + 8) = *(_DWORD *)(v12 + 8);
  }
LABEL_8:
  if ( v14 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v22);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v22);
  }
  if ( v8 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v23);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v23);
  }
  if ( v10 && v10 != v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v24);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v24);
  }
  if ( v9 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v25);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v25);
  }
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v26);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v26);
  }
  return (unsigned int)v13;
}
