/*
 * XREFs of CmpFindTagIndex @ 0x140C4DCD4
 * Callers:
 *     CmpAddDriverToList @ 0x140C4CE04 (CmpAddDriverToList.c)
 * Callees:
 *     CmpValueToData @ 0x1407E3B14 (CmpValueToData.c)
 *     CmpFindValueByName @ 0x14086EAC4 (CmpFindValueByName.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetValueData @ 0x14087A8E0 (CmpGetValueData.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpFindTagIndex(ULONG_PTR BugCheckParameter3, ULONG_PTR a2, unsigned int a3)
{
  bool v5; // zf
  unsigned int v6; // ebx
  ULONG_PTR CellPaged; // rax
  unsigned int i; // ebx
  unsigned int *v9; // rsi
  __int64 CellFlat; // rax
  unsigned int ValueByName; // ebx
  __int64 v12; // rax
  unsigned int v14; // [rsp+40h] [rbp-40h] BYREF
  unsigned int v15[2]; // [rsp+48h] [rbp-38h] BYREF
  unsigned int v16[2]; // [rsp+50h] [rbp-30h] BYREF
  unsigned int v17[2]; // [rsp+58h] [rbp-28h] BYREF
  __int64 v18; // [rsp+60h] [rbp-20h] BYREF
  __int64 v19; // [rsp+68h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+70h] [rbp-10h] BYREF
  __int64 v21; // [rsp+B0h] [rbp+30h] BYREF

  v19 = 0xFFFFFFFFLL;
  v15[0] = -1;
  v5 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v16[0] = -1;
  v6 = a2;
  v18 = 0xFFFFFFFFLL;
  v17[0] = -1;
  v15[1] = 0;
  v16[1] = 0;
  v14 = 0;
  v17[1] = 0;
  LOBYTE(v21) = 0;
  P[0] = 0LL;
  if ( v5 )
    CellPaged = HvpGetCellPaged(BugCheckParameter3, a2, v15);
  else
    CellPaged = HvpGetCellFlat(BugCheckParameter3, a2, v15);
  if ( !CellPaged )
    return (unsigned int)-2;
  v9 = (unsigned int *)CmpValueToData(BugCheckParameter3, v6, CellPaged, (__int64)&v14, (__int64)&v19);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v15);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v15);
  if ( !v9 )
    return (unsigned int)-2;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a3, v16);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a3, v16);
  if ( !CellFlat )
  {
LABEL_14:
    i = -2;
    goto LABEL_38;
  }
  ValueByName = CmpFindValueByName(BugCheckParameter3);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)v16);
  else
    HvpReleaseCellPaged(BugCheckParameter3, v16);
  if ( ValueByName != -1 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      v12 = HvpGetCellFlat(BugCheckParameter3, ValueByName, v17);
    else
      v12 = HvpGetCellPaged(BugCheckParameter3, ValueByName, v17);
    if ( v12 )
    {
      CmpGetValueData(BugCheckParameter3, ValueByName, v12, &v14, (__int64)P, (__int64)&v21, &v18);
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, (__int64)v17);
      else
        HvpReleaseCellPaged(BugCheckParameter3, v17);
      if ( P[0] )
      {
        for ( i = 1; i <= *(_DWORD *)P[0]; ++i )
        {
          if ( *((_DWORD *)P[0] + i) == *v9 )
            goto LABEL_33;
        }
        i = -2;
LABEL_33:
        if ( (_BYTE)v21 )
        {
          ExFreePoolWithTag(P[0], 0);
        }
        else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        {
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v18);
        }
        else
        {
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v18);
        }
        goto LABEL_38;
      }
    }
    goto LABEL_14;
  }
  i = *v9;
LABEL_38:
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v19);
  else
    HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v19);
  return i;
}
