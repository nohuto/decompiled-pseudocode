/*
 * XREFs of CmpSplitLeaf @ 0x140A5DCF0
 * Callers:
 *     CmpSelectLeaf @ 0x14088367C (CmpSelectLeaf.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvReallocateCell @ 0x14088539C (HvReallocateCell.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpSplitLeaf(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, unsigned int a3, unsigned int a4, int *a5)
{
  __int64 v6; // r13
  __int64 v7; // r14
  unsigned int v8; // esi
  __int64 CellFlat; // rax
  __int64 v10; // rdi
  unsigned int v11; // r15d
  _WORD *CellPaged; // rax
  _WORD *v13; // r12
  int v14; // r15d
  int v15; // eax
  int v16; // esi
  int v17; // r15d
  _WORD *v18; // rdx
  __int64 v19; // rsi
  int v20; // ecx
  int v22; // esi
  int v23; // eax
  unsigned __int16 v24; // [rsp+40h] [rbp-30h]
  unsigned int v25; // [rsp+44h] [rbp-2Ch] BYREF
  int v26; // [rsp+48h] [rbp-28h] BYREF
  unsigned int v27; // [rsp+4Ch] [rbp-24h]
  __int64 v28; // [rsp+50h] [rbp-20h] BYREF
  unsigned int v29[2]; // [rsp+58h] [rbp-18h] BYREF
  __int64 v30; // [rsp+60h] [rbp-10h] BYREF
  __int64 v31; // [rsp+68h] [rbp-8h] BYREF
  unsigned __int16 v32; // [rsp+B0h] [rbp+40h]
  unsigned int v33; // [rsp+B8h] [rbp+48h]

  v33 = a2;
  v6 = a3;
  v28 = 0xFFFFFFFFLL;
  v7 = 0LL;
  v8 = -1;
  v29[0] = -1;
  v29[1] = 0;
  v30 = 0xFFFFFFFFLL;
  v26 = 0;
  v31 = 0LL;
  v25 = -1;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v28);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, &v28);
  v10 = CellFlat;
  if ( *(_WORD *)(CellFlat + 2) == 0xFFFF )
  {
    v14 = -1073741670;
    goto LABEL_20;
  }
  v11 = *(_DWORD *)(CellFlat + 4 * v6 + 4);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (_WORD *)HvpGetCellFlat(BugCheckParameter3, v11, v29);
  else
    CellPaged = (_WORD *)HvpGetCellPaged(BugCheckParameter3, v11, v29);
  v13 = CellPaged;
  v32 = CellPaged[1] >> 1;
  v24 = CellPaged[1] - v32;
  v27 = ((*CellPaged - 26220) & 0xFDFF) != 0 ? 4 : 8;
  v14 = HvpMarkCellDirty(BugCheckParameter3, v11, 0);
  if ( v14 >= 0 )
  {
    v27 *= v24;
    v15 = HvAllocateCell(BugCheckParameter3, v27 + 5, a4, &v25, &v31, (__int64)&v30);
    v7 = v31;
    v14 = v15;
    if ( v15 >= 0 )
    {
      *(_WORD *)v31 = *v13;
      v16 = *(_DWORD *)(v10 - 4);
      if ( ((-8 - 4 * *(unsigned __int16 *)(v10 + 2) - v16) & 0xFFFFFFFC) >= 4 )
      {
        v17 = v33;
LABEL_10:
        if ( ((*v13 - 26220) & 0xFDFF) != 0 )
          v18 = &v13[2 * v32 + 2];
        else
          v18 = &v13[4 * v32 + 2];
        memmove((void *)(v7 + 4), v18, v27);
        v13[1] = v32;
        v19 = (unsigned int)(v6 + 1);
        *(_WORD *)(v7 + 2) = v24;
        v20 = *(unsigned __int16 *)(v10 + 2);
        if ( (unsigned int)v6 < v20 - 1 )
          memmove(
            (void *)(v10 + 4 * ((unsigned int)(v6 + 2) + 1LL)),
            (const void *)(v10 + 4 * ((unsigned int)v19 + 1LL)),
            4LL * (unsigned int)(v20 - v6 - 1));
        ++*(_WORD *)(v10 + 2);
        *(_DWORD *)(v10 + 4 * v19 + 4) = v25;
        v8 = -1;
        *a5 = v17;
        v14 = 0;
        goto LABEL_15;
      }
      v22 = -v16;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v28);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v28);
      v31 = 0LL;
      v23 = HvReallocateCell(BugCheckParameter3, v33, v22, 1, &v26, &v31, (__int64)&v28);
      v10 = v31;
      v14 = v23;
      if ( v23 >= 0 )
      {
        v17 = v26;
        goto LABEL_10;
      }
    }
    v8 = v25;
  }
LABEL_15:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v29);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v29);
  if ( v7 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v30);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v30);
  }
LABEL_20:
  if ( v10 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v28);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v28);
  }
  if ( v8 != -1 )
    HvFreeCell(BugCheckParameter3, v8);
  return (unsigned int)v14;
}
