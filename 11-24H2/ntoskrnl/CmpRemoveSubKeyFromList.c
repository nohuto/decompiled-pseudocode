/*
 * XREFs of CmpRemoveSubKeyFromList @ 0x140A13FA8
 * Callers:
 *     CmRenameKey @ 0x1407D95B8 (CmRenameKey.c)
 *     CmpLightWeightPrepareDeleteKeyUoW @ 0x140A13D80 (CmpLightWeightPrepareDeleteKeyUoW.c)
 *     CmpRemoveSubKey @ 0x140A13EFC (CmpRemoveSubKey.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpFindSubKeyInRoot @ 0x14083EC40 (CmpFindSubKeyInRoot.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408777E0 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvpGetCellContextMove @ 0x140886D10 (HvpGetCellContextMove.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

char __fastcall CmpRemoveSubKeyFromList(ULONG_PTR BugCheckParameter3, unsigned int *a2, unsigned int a3)
{
  int v3; // esi
  __int16 *v6; // r13
  _WORD *CellFlat; // rax
  __int16 v9; // r12
  bool v10; // zf
  unsigned int v11; // r15d
  unsigned int v12; // r14d
  __int16 *CellPaged; // rax
  __int16 *v14; // rdi
  unsigned __int8 **v15; // r9
  UNICODE_STRING *v16; // r8
  unsigned int v17; // ecx
  unsigned __int16 v18; // ax
  unsigned int v19; // edx
  __int64 v20; // r9
  size_t v21; // r8
  __int16 *v22; // rdx
  __int16 *v23; // rcx
  char v24; // si
  UNICODE_STRING *p_DestinationString; // r8
  __int64 v27; // rax
  unsigned __int16 v28; // ax
  int SubKeyInRoot; // [rsp+30h] [rbp-30h]
  unsigned int v30[2]; // [rsp+38h] [rbp-28h] BYREF
  unsigned int v31[2]; // [rsp+40h] [rbp-20h] BYREF
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+40h] BYREF
  _DWORD *v34; // [rsp+A8h] [rbp+48h]
  __int64 v35; // [rsp+B8h] [rbp+58h] BYREF

  v34 = a2;
  v3 = -1;
  v35 = 0xFFFFFFFFLL;
  v30[0] = -1;
  v30[1] = 0;
  v31[0] = -1;
  v31[1] = 0;
  v6 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (_WORD *)HvpGetCellFlat(BugCheckParameter3, a3, &v35);
  else
    CellFlat = (_WORD *)HvpGetCellPaged(BugCheckParameter3, a3, &v35);
  if ( !CellFlat )
    return 0;
  v9 = CellFlat[1] & 0x20;
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  DestinationString.Length = CellFlat[36];
  DestinationString.MaximumLength = DestinationString.Length;
  DestinationString.Buffer = CellFlat + 38;
  if ( v10 )
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v35);
  else
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v35);
  v11 = *a2;
  v12 = *a2;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellPaged = (__int16 *)HvpGetCellFlat(BugCheckParameter3, v11, v30);
  else
    CellPaged = (__int16 *)HvpGetCellPaged(BugCheckParameter3, v11, v30);
  v14 = CellPaged;
  if ( !CellPaged )
    return 0;
  SubKeyInRoot = 0x80000000;
  if ( *CellPaged != 26994 )
    goto LABEL_10;
  p_DestinationString = &DestinationString;
  if ( v9 )
    p_DestinationString = 0LL;
  SubKeyInRoot = CmpFindSubKeyInRoot(
                   BugCheckParameter3,
                   (__int64)CellPaged,
                   &p_DestinationString->Length,
                   (unsigned __int16 *)((unsigned __int64)&DestinationString & -(__int64)(v9 != 0)),
                   &BugCheckParameter4);
  if ( SubKeyInRoot < 0 )
  {
    v24 = 0;
LABEL_20:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v30);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v30);
LABEL_22:
    if ( !v6 )
      return v24;
    goto LABEL_23;
  }
  v6 = v14;
  HvpGetCellContextMove(v31, v30);
  v12 = BugCheckParameter4;
  v27 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0
      ? HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, v30)
      : HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, v30);
  v14 = (__int16 *)v27;
  if ( v27 )
  {
LABEL_10:
    LODWORD(v35) = 0;
    if ( v9 )
    {
      v15 = (unsigned __int8 **)&DestinationString;
      v16 = 0LL;
    }
    else
    {
      v15 = 0LL;
      v16 = &DestinationString;
    }
    CmpFindSubKeyInLeafWithStatus(BugCheckParameter3, v14, &v16->Length, v15, &BugCheckParameter4, (unsigned int *)&v35);
    v17 = v35;
    if ( (int)v35 < 0 )
    {
      v24 = 0;
LABEL_19:
      if ( !v14 )
        goto LABEL_22;
      goto LABEL_20;
    }
    v18 = v14[1] - 1;
    v14[1] = v18;
    if ( v18 )
    {
      v3 = v11;
      if ( v17 < v18 )
      {
        v19 = v18 - v17;
        v20 = v17 + 1;
        if ( *v14 == 26988 )
        {
          v21 = 4LL * v19;
          v22 = &v14[2 * v20 + 2];
          v23 = &v14[2 * v17 + 2];
        }
        else
        {
          v21 = 8LL * v19;
          v22 = &v14[4 * v20 + 2];
          v23 = &v14[4 * v17 + 2];
        }
        goto LABEL_17;
      }
    }
    else
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v30);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v30);
      v14 = 0LL;
      HvFreeCell(BugCheckParameter3, v12);
      if ( !v6 )
        goto LABEL_18;
      v28 = v6[1] - 1;
      v6[1] = v28;
      if ( !v28 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v31);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v31);
        v6 = 0LL;
        HvFreeCell(BugCheckParameter3, v11);
        goto LABEL_18;
      }
      v3 = v11;
      if ( SubKeyInRoot < (unsigned int)v28 )
      {
        v21 = 4LL * ((unsigned int)v28 - SubKeyInRoot);
        v22 = &v6[2 * (SubKeyInRoot + 1) + 2];
        v23 = &v6[2 * SubKeyInRoot + 2];
LABEL_17:
        memmove(v23, v22, v21);
      }
    }
LABEL_18:
    *v34 = v3;
    v24 = 1;
    goto LABEL_19;
  }
  v24 = 0;
LABEL_23:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v31);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v31);
  return v24;
}
