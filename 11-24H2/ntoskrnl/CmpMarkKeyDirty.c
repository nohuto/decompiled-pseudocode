/*
 * XREFs of CmpMarkKeyDirty @ 0x1408839E4
 * Callers:
 *     CmDeleteLayeredKey @ 0x14040AAA8 (CmDeleteLayeredKey.c)
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpFreeKeyByCell @ 0x1408842D0 (CmpFreeKeyByCell.c)
 *     CmpCreateChild @ 0x14090B2FC (CmpCreateChild.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A13D80 (CmpLightWeightPrepareDeleteKeyUoW.c)
 * Callees:
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpMarkIndexDirty @ 0x1408834C8 (CmpMarkIndexDirty.c)
 *     CmpMarkValueDataDirty @ 0x1408840F8 (CmpMarkValueDataDirty.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpMarkKeyDirty(ULONG_PTR BugCheckParameter3, ULONG_PTR BugCheckParameter4, char a3)
{
  unsigned int v3; // r15d
  char v5; // r13
  bool v6; // zf
  unsigned int v7; // r12d
  __int64 v8; // r14
  __int64 CellPaged; // rax
  __int64 v10; // rsi
  int v11; // edi
  ULONG_PTR v12; // rdx
  ULONG_PTR v13; // rdx
  ULONG_PTR v14; // rdx
  __int64 CellFlat; // rax
  __int64 v16; // r15
  ULONG_PTR v17; // rdx
  __int64 v18; // rax
  ULONG_PTR v19; // rdx
  __int64 v20; // rax
  __int64 v21; // r13
  unsigned int *v23; // rdx
  unsigned int v24[2]; // [rsp+20h] [rbp-20h] BYREF
  unsigned int v25[2]; // [rsp+28h] [rbp-18h] BYREF
  unsigned int v26[4]; // [rsp+30h] [rbp-10h] BYREF
  unsigned int v27; // [rsp+80h] [rbp+40h] BYREF
  int v28; // [rsp+84h] [rbp+44h]
  int v29; // [rsp+88h] [rbp+48h]
  char v30; // [rsp+90h] [rbp+50h]

  v30 = a3;
  v29 = BugCheckParameter4;
  v3 = 0;
  v26[1] = 0;
  v5 = a3;
  v26[0] = -1;
  v25[0] = -1;
  v6 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v7 = BugCheckParameter4;
  v27 = -1;
  v8 = 0LL;
  v24[0] = -1;
  v25[1] = 0;
  v28 = 0;
  v24[1] = 0;
  if ( v6 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, v26);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, BugCheckParameter4, v26);
  v10 = CellPaged;
  if ( (*(_BYTE *)(CellPaged + 2) & 2) != 0 )
  {
    v11 = 0;
    goto LABEL_37;
  }
  v11 = HvpMarkCellDirty(BugCheckParameter3, v7, 0);
  if ( v11 < 0 )
    goto LABEL_37;
  v12 = *(unsigned int *)(v10 + 48);
  if ( (_DWORD)v12 != -1 )
  {
    v11 = HvpMarkCellDirty(BugCheckParameter3, v12, 0);
    if ( v11 < 0 )
      goto LABEL_37;
  }
  v13 = *(unsigned int *)(v10 + 44);
  if ( (_DWORD)v13 != -1 )
  {
    v11 = HvpMarkCellDirty(BugCheckParameter3, v13, 0);
    if ( v11 < 0 )
      goto LABEL_37;
    v14 = *(unsigned int *)(v10 + 44);
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(BugCheckParameter3, v14, &v27);
    else
      CellFlat = HvpGetCellPaged(BugCheckParameter3, v14, &v27);
    v16 = CellFlat;
    v11 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(CellFlat + 4), 0);
    if ( v11 < 0 || (v11 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v16 + 8), 0), v11 < 0) )
    {
      if ( !v16 )
        goto LABEL_37;
      v23 = &v27;
      goto LABEL_56;
    }
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v27);
    else
      HvpReleaseCellPaged(BugCheckParameter3, &v27);
    v3 = 0;
  }
  if ( (*(_BYTE *)(v10 + 2) & 0x40) != 0 || !*(_DWORD *)(v10 + 36) )
  {
LABEL_30:
    if ( (*(_BYTE *)(v10 + 2) & 4) != 0
      || !v5
      || (v11 = CmpMarkIndexDirty(BugCheckParameter3, *(unsigned int *)(v10 + 16)), v11 >= 0)
      && (v11 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v10 + 16), 0), v11 >= 0) )
    {
      v11 = 0;
    }
    goto LABEL_34;
  }
  v11 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v10 + 40), 0);
  if ( v11 < 0 )
    goto LABEL_37;
  v17 = *(unsigned int *)(v10 + 40);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    v18 = HvpGetCellFlat(BugCheckParameter3, v17, v25);
  else
    v18 = HvpGetCellPaged(BugCheckParameter3, v17, v25);
  v8 = v18;
  while ( 1 )
  {
    if ( v3 >= *(_DWORD *)(v10 + 36) )
    {
      v5 = v30;
      goto LABEL_30;
    }
    v11 = HvpMarkCellDirty(BugCheckParameter3, *(unsigned int *)(v8 + 4LL * v3), 0);
    if ( v11 < 0 )
      goto LABEL_34;
    v19 = *(unsigned int *)(v8 + 4LL * v3);
    v20 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
        ? HvpGetCellFlat(BugCheckParameter3, v19, v24)
        : HvpGetCellPaged(BugCheckParameter3, v19, v24);
    v21 = v20;
    v11 = CmpMarkValueDataDirty(BugCheckParameter3);
    if ( v11 < 0 )
      break;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v24);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v24);
    ++v3;
  }
  if ( !v21 )
    goto LABEL_34;
  v23 = v24;
LABEL_56:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v23);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v23);
LABEL_34:
  if ( v8 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v25);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v25);
  }
LABEL_37:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, v26);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v26);
  return (unsigned int)v11;
}
