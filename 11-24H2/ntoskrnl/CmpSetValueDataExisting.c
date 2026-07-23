/*
 * XREFs of CmpSetValueDataExisting @ 0x140A59D2C
 * Callers:
 *     CmpSetValueKeyExisting @ 0x140883D24 (CmpSetValueKeyExisting.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvReallocateCell @ 0x14088539C (HvReallocateCell.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpSetValueDataExisting(
        ULONG_PTR BugCheckParameter3,
        char *Src,
        unsigned int a3,
        unsigned int a4,
        ULONG_PTR BugCheckParameter4)
{
  unsigned __int16 v5; // di
  char *v8; // r12
  bool v9; // zf
  __int64 CellPaged; // rax
  __int64 v11; // r14
  ULONG_PTR v12; // rdx
  __int64 CellFlat; // rax
  __int64 v14; // rsi
  unsigned int v15; // r15d
  ULONG_PTR v16; // rdx
  void *v17; // rax
  size_t v18; // r8
  int Cell; // edi
  unsigned __int16 v21; // di
  unsigned int v22; // edx
  int v23; // eax
  unsigned __int16 v24; // r12
  unsigned int v25; // edx
  __int64 v26; // [rsp+40h] [rbp-20h] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  unsigned int v28[2]; // [rsp+50h] [rbp-10h] BYREF
  unsigned int v29[2]; // [rsp+58h] [rbp-8h] BYREF
  __int64 v30; // [rsp+A0h] [rbp+40h] BYREF
  char *v31; // [rsp+A8h] [rbp+48h]
  unsigned int v32; // [rsp+B8h] [rbp+58h]

  v32 = a4;
  v31 = Src;
  v5 = 0;
  v28[1] = 0;
  v28[0] = -1;
  v8 = Src;
  v29[0] = -1;
  v9 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v26 = 0xFFFFFFFFLL;
  v29[1] = 0;
  LODWORD(v30) = 0;
  if ( v9 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, v29);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, v29);
  v11 = CellPaged;
  if ( !CellPaged )
    return 3221225626LL;
  v12 = *(unsigned int *)(CellPaged + 4);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v12, &v26);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v12, &v26);
  v14 = CellFlat;
  if ( CellFlat )
  {
    v15 = (a3 + 16343) / 0x3FD8;
    if ( (unsigned __int16)v15 > *(_WORD *)(v11 + 2) )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v26);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v26);
      v22 = *(_DWORD *)(v11 + 4);
      v27 = 0LL;
      v23 = HvReallocateCell(
              BugCheckParameter3,
              v22,
              4 * (unsigned int)(unsigned __int16)v15,
              1,
              (int *)&v30,
              &v27,
              (__int64)&v26);
      v14 = v27;
      Cell = v23;
      if ( v23 >= 0 )
      {
        v24 = *(_WORD *)(v11 + 2);
        *(_DWORD *)(v11 + 4) = v30;
        while ( 1 )
        {
          if ( v24 >= (unsigned __int16)v15 )
          {
            v8 = v31;
            v5 = 0;
            goto LABEL_9;
          }
          Cell = HvAllocateCell(BugCheckParameter3, 16344, v32, (unsigned int *)(v14 + 4LL * v24), 0LL, 0LL);
          if ( Cell < 0 )
            break;
          ++v24;
        }
      }
    }
    else
    {
      if ( (unsigned __int16)v15 < *(_WORD *)(v11 + 2) )
      {
        v21 = (a3 + 16343) / 0x3FD8;
        do
          HvFreeCell(BugCheckParameter3, *(_DWORD *)(v14 + 4LL * v21++));
        while ( v21 < *(_WORD *)(v11 + 2) );
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v26);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v26);
        v25 = *(_DWORD *)(v11 + 4);
        v5 = 0;
        v27 = 0LL;
        HvReallocateCell(BugCheckParameter3, v25, 4 * (unsigned __int16)v15, 1, (int *)&v30, &v27, (__int64)&v26);
        v14 = v27;
        *(_DWORD *)(v11 + 4) = v30;
      }
LABEL_9:
      while ( v5 < (unsigned __int16)v15 )
      {
        v16 = *(unsigned int *)(v14 + 4LL * v5);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          v17 = (void *)HvpGetCellFlat(BugCheckParameter3, v16, v28);
        else
          v17 = (void *)HvpGetCellPaged(BugCheckParameter3, v16, v28);
        if ( !v17 )
          goto LABEL_19;
        v18 = a3;
        if ( a3 > 0x3FD8 )
          v18 = 16344LL;
        memmove(v17, v8, v18);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v28);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v28);
        a3 -= 16344;
        v8 += 16344;
        ++v5;
      }
      *(_WORD *)(v11 + 2) = v15;
      Cell = 0;
    }
  }
  else
  {
LABEL_19:
    Cell = -1073741670;
  }
  if ( v14 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v26);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v26);
  }
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v29);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v29);
  return (unsigned int)Cell;
}
