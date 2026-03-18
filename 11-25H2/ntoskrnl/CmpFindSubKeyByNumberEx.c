/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x14087D350
 * Callers:
 *     CmEnumerateKey @ 0x14087C630 (CmEnumerateKey.c)
 *     CmpFindSubKeyByNumberFromMergedView @ 0x140A9B4D4 (CmpFindSubKeyByNumberFromMergedView.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x1408471B0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpReferenceKeyControlBlock @ 0x140849E30 (CmpReferenceKeyControlBlock.c)
 *     CmEqualTrans @ 0x140871010 (CmEqualTrans.c)
 *     CmpIsKeyDeleted @ 0x140871220 (CmpIsKeyDeleted.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpDelayDerefKeyControlBlock @ 0x14087C4C0 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x14087C588 (CmpDoQueueLateUnloadWorker.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpDoFindSubKeyByNumber @ 0x140975E60 (CmpDoFindSubKeyByNumber.c)
 *     CmRmIsKCBVisible @ 0x1409A6EB0 (CmRmIsKCBVisible.c)
 *     CmListGetNextElement @ 0x140BA9A30 (CmListGetNextElement.c)
 */

__int64 __fastcall CmpFindSubKeyByNumberEx(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR a2,
        unsigned int a3,
        int *a4,
        ULONG_PTR a5,
        ULONG_PTR a6,
        __int64 a7,
        __int64 a8,
        ULONG_PTR *a9)
{
  unsigned int v9; // esi
  bool v10; // zf
  int SubkeyInHashByChildCell; // edi
  ULONG_PTR v15; // r15
  _DWORD *CellPaged; // rax
  _DWORD *v17; // r14
  ULONG_PTR *v18; // r12
  unsigned int v19; // edx
  ULONG_PTR v20; // rdx
  ULONG_PTR v21; // rcx
  _WORD *v22; // rax
  _WORD *v23; // rdi
  int v24; // edi
  int *v25; // rsi
  __int64 v26; // rdx
  unsigned __int64 v27; // rcx
  ULONG_PTR v28; // r8
  _QWORD *v29; // rax
  ULONG_PTR v30; // rdx
  __int64 v31; // rax
  _WORD *v32; // rcx
  unsigned int v33; // eax
  unsigned __int64 v34; // r8
  bool v35; // r10
  int v36; // eax
  __int64 v38; // rdx
  _QWORD *v39; // rcx
  int v40; // ecx
  int v41; // eax
  char v42; // al
  __int64 v43; // rax
  int SubKeyByNumber; // eax
  unsigned int *v45; // rdx
  ULONG_PTR v46; // r9
  __int64 CellFlat; // rax
  __int64 NextElement; // rax
  __int64 v49; // rsi
  ULONG_PTR v50; // rax
  __int64 v51; // rsi
  __int64 v52; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v54[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-28h]
  unsigned int v56; // [rsp+4Ch] [rbp-24h]
  _DWORD v57[2]; // [rsp+50h] [rbp-20h] BYREF
  _DWORD v58[2]; // [rsp+58h] [rbp-18h] BYREF
  ULONG_PTR v59; // [rsp+60h] [rbp-10h]
  unsigned int v60; // [rsp+B0h] [rbp+40h] BYREF
  int v61; // [rsp+B4h] [rbp+44h]
  int *v62; // [rsp+C8h] [rbp+58h]

  v62 = a4;
  v9 = 0;
  v54[0] = -1;
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  v54[1] = 0;
  BugCheckParameter2 = 0LL;
  SubkeyInHashByChildCell = 0;
  v15 = 0LL;
  if ( v10 )
    CellPaged = (_DWORD *)HvpGetCellPaged(BugCheckParameter3, a2, v54);
  else
    CellPaged = (_DWORD *)HvpGetCellFlat(BugCheckParameter3, a2, v54);
  v17 = CellPaged;
  if ( !CellPaged )
    return (unsigned int)-1073741670;
  *a4 = -1;
  v18 = a9;
  if ( a9 )
    *a9 = 0LL;
  if ( a5 && *(_QWORD *)(a5 + 208) != a5 + 208 )
  {
    v40 = CellPaged[5];
    v60 = 0;
    v57[0] = -1;
    v57[1] = 0;
    v58[0] = -1;
    v58[1] = 0;
    LODWORD(v52) = v40;
    if ( v40 )
      v55 = CellPaged[7];
    else
      v55 = -1;
    v41 = CellPaged[6];
    if ( v41 )
      v56 = v17[8];
    else
      v56 = -1;
    v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    LODWORD(v59) = v41 + v40;
    if ( v10 )
      HvpReleaseCellPaged(BugCheckParameter3, v54);
    else
      HvpReleaseCellFlat(BugCheckParameter3, v54);
    v17 = 0LL;
    while ( v9 < (unsigned int)v59 )
    {
      v42 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
      BugCheckParameter2 = 0LL;
      if ( v9 >= (unsigned int)v52 )
      {
        if ( v42 )
          CellFlat = HvpGetCellFlat(BugCheckParameter3, v56, v58);
        else
          CellFlat = HvpGetCellPaged(BugCheckParameter3, v56, v58);
        if ( !CellFlat )
          return (unsigned int)-1073741670;
        SubKeyByNumber = CmpDoFindSubKeyByNumber(BugCheckParameter3);
        v45 = v58;
      }
      else
      {
        if ( v42 )
          v43 = HvpGetCellFlat(BugCheckParameter3, v55, v57);
        else
          v43 = HvpGetCellPaged(BugCheckParameter3, v55, v57);
        if ( !v43 )
          return (unsigned int)-1073741670;
        SubKeyByNumber = CmpDoFindSubKeyByNumber(BugCheckParameter3);
        v45 = v57;
      }
      v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
      *v62 = SubKeyByNumber;
      if ( v10 )
        HvpReleaseCellPaged(BugCheckParameter3, v45);
      else
        HvpReleaseCellFlat(BugCheckParameter3, v45);
      v46 = (unsigned int)*v62;
      if ( (_DWORD)v46 == -1 )
        return (unsigned int)-1073741670;
      SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, BugCheckParameter3, v46, &BugCheckParameter2);
      if ( SubkeyInHashByChildCell < 0 )
        return (unsigned int)SubkeyInHashByChildCell;
      v15 = BugCheckParameter2;
      if ( !BugCheckParameter2 || (unsigned __int8)CmRmIsKCBVisible(BugCheckParameter2, a7) && !CmpIsKeyDeleted(v15, a7) )
        ++v60;
      if ( v60 == a3 + 1 )
        goto LABEL_16;
      if ( v15 )
        CmpDelayDerefKeyControlBlock(v15, a8);
      ++v9;
    }
    if ( v9 == (_DWORD)v59 )
    {
      v52 = 0LL;
      *v62 = -1;
      v50 = a5 + 208;
      v59 = a5 + 208;
      while ( 1 )
      {
        NextElement = CmListGetNextElement(v50, &v52, 32LL);
        v49 = NextElement;
        if ( !NextElement )
          break;
        if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a7) )
        {
          if ( *(_DWORD *)(v49 + 68) == 1 )
          {
            v15 = *(_QWORD *)(v49 + 88);
            v51 = a7;
            BugCheckParameter2 = v15;
            if ( (unsigned __int8)CmRmIsKCBVisible(v15, a7) )
            {
              if ( !CmpIsKeyDeleted(v15, v51) )
              {
                if ( v60 == a3 )
                {
                  v25 = v62;
                  *v62 = *(_DWORD *)(v15 + 40);
                  CmpReferenceKeyControlBlock(v15);
                  goto LABEL_17;
                }
                ++v60;
              }
            }
          }
        }
        v50 = v59;
        v15 = 0LL;
        BugCheckParameter2 = 0LL;
      }
    }
    goto LABEL_16;
  }
  v52 = 0xFFFFFFFFLL;
  v19 = CellPaged[5];
  if ( a3 < v19 )
  {
    v20 = (unsigned int)CellPaged[7];
    v21 = BugCheckParameter3;
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    {
LABEL_9:
      v22 = (_WORD *)HvpGetCellFlat(v21, v20, &v52);
      goto LABEL_10;
    }
LABEL_33:
    v22 = (_WORD *)HvpGetCellPaged(v21, v20, &v52);
LABEL_10:
    v23 = v22;
    if ( v22 )
    {
      v60 = -1;
      v61 = 0;
      if ( *v22 == 26994 )
      {
        while ( v9 < (unsigned __int16)v23[1] )
        {
          v30 = *(unsigned int *)&v23[2 * v9 + 2];
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            v31 = HvpGetCellFlat(BugCheckParameter3, v30, &v60);
          else
            v31 = HvpGetCellPaged(BugCheckParameter3, v30, &v60);
          v32 = (_WORD *)v31;
          if ( !v31 )
          {
            v24 = -1;
            goto LABEL_14;
          }
          v33 = *(unsigned __int16 *)(v31 + 2);
          if ( a3 < v33 )
          {
            if ( ((*v32 - 26220) & 0xFDFF) != 0 )
              v24 = *(_DWORD *)&v32[2 * a3 + 2];
            else
              v24 = *(_DWORD *)&v32[4 * a3 + 2];
            if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
              HvpReleaseCellFlat(BugCheckParameter3, &v60);
            else
              HvpReleaseCellPaged(BugCheckParameter3, &v60);
            goto LABEL_14;
          }
          a3 -= v33;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v60);
          else
            HvpReleaseCellPaged(BugCheckParameter3, &v60);
          ++v9;
        }
      }
      if ( ((*v23 - 26220) & 0xFDFF) != 0 )
        v24 = *(_DWORD *)&v23[2 * a3 + 2];
      else
        v24 = *(_DWORD *)&v23[4 * a3 + 2];
LABEL_14:
      *v62 = v24;
      SubkeyInHashByChildCell = 0;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v52);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v52);
    }
    else
    {
      SubkeyInHashByChildCell = -1073741670;
    }
    goto LABEL_16;
  }
  if ( *(_DWORD *)(BugCheckParameter3 + 216) > 1u )
  {
    a3 -= v19;
    if ( a3 < CellPaged[6] )
    {
      v20 = (unsigned int)CellPaged[8];
      v21 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        goto LABEL_9;
      goto LABEL_33;
    }
  }
LABEL_16:
  v25 = v62;
LABEL_17:
  if ( !v18 || *v25 == -1 )
  {
    if ( v15 )
    {
      v26 = *(_QWORD *)(v15 + 32);
      v27 = *(_QWORD *)v15;
      do
      {
        if ( v27 <= 1 )
        {
          v28 = BugCheckParameter2;
          v29 = (_QWORD *)(BugCheckParameter2 + 224);
          if ( (_QWORD *)*v29 != v29 )
            KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 1uLL, 0LL);
          v38 = a8;
          v39 = *(_QWORD **)(a8 + 8);
          if ( *v39 != a8 )
            __fastfail(3u);
          *v29 = a8;
          v29[1] = v39;
          *v39 = v29;
          *(_QWORD *)(v38 + 8) = v29;
          *(_BYTE *)(v28 + 64) |= 1u;
          goto LABEL_49;
        }
        v34 = v27 - 1;
        v35 = v27 == 3 && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v26 + 2944) == 1;
        v27 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v34, v27);
      }
      while ( v27 != v34 + 1 );
      if ( v27 < v34 )
        KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter2, 0LL, 0LL);
      if ( v35 )
        CmpDoQueueLateUnloadWorker(v26);
    }
  }
  else
  {
    if ( !v15 )
    {
      if ( v17 )
      {
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, v54);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v54);
        v17 = 0LL;
      }
      v36 = CmpFindSubkeyInHashByChildCell(a5, a6, BugCheckParameter3, (unsigned int)*v25, &BugCheckParameter2);
      v15 = BugCheckParameter2;
      SubkeyInHashByChildCell = v36;
      if ( v36 < 0 )
        *v25 = -1;
    }
    *v18 = v15;
  }
LABEL_49:
  if ( v17 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v54);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v54);
  }
  return (unsigned int)SubkeyInHashByChildCell;
}
