/*
 * XREFs of CmpCopyValue @ 0x140885564
 * Callers:
 *     CmpMergeKeyValues @ 0x1407E24E4 (CmpMergeKeyValues.c)
 *     CmpSyncKeyValues @ 0x1407E2FD4 (CmpSyncKeyValues.c)
 *     CmpCopyKeyPartial @ 0x140884DC0 (CmpCopyKeyPartial.c)
 *     CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140908550 (CmpFullPromoteSingleKeyFromKeyNodeStacks.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetValueData @ 0x14087A8E0 (CmpGetValueData.c)
 *     CmpFreeValueData @ 0x140884884 (CmpFreeValueData.c)
 *     CmpSetValueDataNew @ 0x1408849EC (CmpSetValueDataNew.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     CmpCopyCell @ 0x140885DE0 (CmpCopyCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall CmpCopyValue(ULONG_PTR BugCheckParameter3, unsigned int a2, ULONG_PTR a3, int a4, unsigned int *a5)
{
  unsigned int v6; // r12d
  ULONG_PTR v8; // rdx
  __int64 CellFlat; // rax
  __int64 v10; // r13
  unsigned int v11; // eax
  unsigned int v12; // r14d
  int v13; // eax
  unsigned int v14; // esi
  int v15; // r15d
  bool v16; // sf
  __int64 v17; // rax
  int *CellPaged; // rax
  int v20; // r15d
  __int64 v21; // rax
  bool ValueData; // al
  unsigned int v23; // r15d
  ULONG_PTR BugCheckParameter4; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v25; // [rsp+48h] [rbp-28h] BYREF
  __int64 v26; // [rsp+50h] [rbp-20h] BYREF
  __int64 v27; // [rsp+58h] [rbp-18h] BYREF
  PVOID P[2]; // [rsp+60h] [rbp-10h] BYREF
  __int64 v29; // [rsp+B0h] [rbp+40h] BYREF
  unsigned int v30; // [rsp+B8h] [rbp+48h]
  int v31; // [rsp+C8h] [rbp+58h]

  v31 = a4;
  v30 = a2;
  v27 = 0LL;
  v6 = -1;
  BugCheckParameter4 = -1LL;
  HvpGetCellContextInitialize(&v27);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v8, &v27);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v8, &v27);
  v10 = CellFlat;
  v11 = *(_DWORD *)(CellFlat + 4);
  LODWORD(v26) = v11;
  v12 = v11 + 0x80000000;
  if ( v11 < 0x80000000 )
    v12 = v11;
  P[0] = (PVOID)(v10 + 8);
  LODWORD(v29) = *(_DWORD *)(v10 + 8);
  v25 = v12;
  v13 = CmpCopyCell(BugCheckParameter3, (__int64)&BugCheckParameter4 + 4);
  v14 = HIDWORD(BugCheckParameter4);
  v15 = v13;
  if ( v13 >= 0 )
  {
    if ( !v12 )
    {
LABEL_21:
      v15 = 0;
      *a5 = v14;
      v14 = -1;
      v6 = -1;
      goto LABEL_22;
    }
    if ( v12 <= 4 )
    {
      CellPaged = (int *)P[0];
      if ( (unsigned int)v26 < 0x80000000 )
      {
        v23 = *(_DWORD *)P[0];
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v27);
        else
          HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v27);
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          CellPaged = (int *)HvpGetCellFlat(BugCheckParameter3, v23, &v27);
        else
          CellPaged = (int *)HvpGetCellPaged(BugCheckParameter3, v23, &v27);
      }
      v20 = *CellPaged;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v27);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v27);
      if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
        v21 = HvpGetCellFlat(a3, v14, &v27);
      else
        v21 = HvpGetCellPaged(a3, v14, &v27);
      *(_DWORD *)(v21 + 8) = v20;
      *(_DWORD *)(v21 + 4) = v12 + 0x80000000;
      if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(a3, &v27);
      else
        HvpReleaseCellPaged(a3, (unsigned int *)&v27);
      v10 = 0LL;
      goto LABEL_21;
    }
    if ( *(_DWORD *)(BugCheckParameter3 + 220) >= 4u && v12 - 16345 <= 0x7FFFC026
      || *(_DWORD *)(a3 + 220) >= 4u && v12 - 16345 <= 0x7FFFC026 )
    {
      v26 = 0xFFFFFFFFLL;
      P[0] = 0LL;
      LOBYTE(v29) = 0;
      ValueData = CmpGetValueData(BugCheckParameter3, v30, v10, &v25, (__int64)P, (__int64)&v29, &v26);
      v12 = v25;
      if ( !ValueData )
      {
        v14 = HIDWORD(BugCheckParameter4);
        v15 = -1073741670;
        goto LABEL_22;
      }
      v15 = CmpSetValueDataNew(a3, (char *)P[0], v25, v31, &BugCheckParameter4);
      if ( (_BYTE)v29 )
      {
        ExFreePoolWithTag(P[0], 0);
      }
      else if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      {
        HvpReleaseCellFlat(BugCheckParameter3, &v26);
      }
      else
      {
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v26);
      }
      v16 = v15 < 0;
    }
    else
    {
      v15 = CmpCopyCell(BugCheckParameter3, (__int64)&BugCheckParameter4);
      v16 = v15 < 0;
    }
    if ( !v16 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v27);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v27);
      if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
        v17 = HvpGetCellFlat(a3, v14, &v27);
      else
        v17 = HvpGetCellPaged(a3, v14, &v27);
      *(_DWORD *)(v17 + 8) = BugCheckParameter4;
      *(_DWORD *)(v17 + 4) = v12;
      if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(a3, &v27);
      else
        HvpReleaseCellPaged(a3, (unsigned int *)&v27);
      v10 = 0LL;
      goto LABEL_21;
    }
    v6 = BugCheckParameter4;
  }
LABEL_22:
  if ( v10 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v27);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v27);
  }
  if ( v6 != -1 )
    CmpFreeValueData(a3, v6, v12);
  if ( v14 != -1 )
    HvFreeCell(a3, v14);
  return (unsigned int)v15;
}
