/*
 * XREFs of CmpFindSubKeyByNumberEx @ 0x140881510
 * Callers:
 *     CmpFindSubKeyByNumberFromMergedView @ 0x14087F9B0 (CmpFindSubKeyByNumberFromMergedView.c)
 *     CmEnumerateKey @ 0x140880800 (CmEnumerateKey.c)
 * Callees:
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CmpFindSubkeyInHashByChildCell @ 0x14083F9C0 (CmpFindSubkeyInHashByChildCell.c)
 *     CmpReferenceKeyControlBlock @ 0x140841D90 (CmpReferenceKeyControlBlock.c)
 *     CmpIsKeyDeleted @ 0x140872540 (CmpIsKeyDeleted.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmEqualTrans @ 0x14087D5B0 (CmEqualTrans.c)
 *     CmpDelayDerefKeyControlBlock @ 0x140882420 (CmpDelayDerefKeyControlBlock.c)
 *     CmpDoQueueLateUnloadWorker @ 0x1408824E8 (CmpDoQueueLateUnloadWorker.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpDoFindSubKeyByNumber @ 0x14090ABD0 (CmpDoFindSubKeyByNumber.c)
 *     CmRmIsKCBVisible @ 0x1409909A0 (CmRmIsKCBVisible.c)
 *     CmListGetNextElement @ 0x140BBB940 (CmListGetNextElement.c)
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
  unsigned int v9; // r15d
  bool v10; // zf
  int SubkeyInHashByChildCell; // esi
  ULONG_PTR v15; // r14
  _DWORD *CellPaged; // rax
  _DWORD *v17; // rdi
  ULONG_PTR *v18; // r12
  unsigned int v19; // edx
  ULONG_PTR v20; // rdx
  ULONG_PTR v21; // rcx
  _WORD *CellFlat; // rax
  _WORD *v23; // rsi
  int v24; // esi
  int *v25; // r15
  ULONG_PTR BugCheckParameter4; // r11
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  ULONG_PTR v29; // r8
  _QWORD *v30; // rax
  unsigned __int64 v31; // r8
  bool v32; // r10
  int v33; // eax
  ULONG_PTR v35; // rdx
  __int64 v36; // rax
  _WORD *v37; // rcx
  unsigned int v38; // eax
  __int64 v39; // rdx
  _QWORD *v40; // rcx
  int v41; // ecx
  int v42; // eax
  unsigned int v43; // ecx
  char v44; // al
  __int64 v45; // rax
  int SubKeyByNumber; // eax
  unsigned int *v47; // rdx
  ULONG_PTR v48; // r9
  __int64 v49; // rax
  __int64 NextElement; // rax
  ULONG_PTR v51; // rax
  __int64 v52; // [rsp+30h] [rbp-40h] BYREF
  ULONG_PTR BugCheckParameter2; // [rsp+38h] [rbp-38h] BYREF
  unsigned int v54[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v55; // [rsp+48h] [rbp-28h]
  unsigned int v56; // [rsp+4Ch] [rbp-24h]
  ULONG_PTR v57; // [rsp+50h] [rbp-20h] BYREF
  _DWORD v58[2]; // [rsp+58h] [rbp-18h] BYREF
  ULONG_PTR v59; // [rsp+60h] [rbp-10h]
  __int64 v60; // [rsp+68h] [rbp-8h]
  unsigned int v61; // [rsp+B0h] [rbp+40h] BYREF
  int v62; // [rsp+B4h] [rbp+44h]
  int *v63; // [rsp+C8h] [rbp+58h]

  v63 = a4;
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
  if ( !a5 || *(_QWORD *)(a5 + 208) == a5 + 208 )
  {
    v52 = 0xFFFFFFFFLL;
    v19 = CellPaged[5];
    if ( a3 >= v19 )
    {
      if ( *(_DWORD *)(BugCheckParameter3 + 216) <= 1u || (a3 -= v19, a3 >= CellPaged[6]) )
      {
LABEL_126:
        v25 = v63;
        goto LABEL_16;
      }
      v20 = (unsigned int)CellPaged[8];
      v21 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        goto LABEL_9;
    }
    else
    {
      v20 = (unsigned int)CellPaged[7];
      v21 = BugCheckParameter3;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      {
LABEL_9:
        CellFlat = (_WORD *)HvpGetCellFlat(v21, v20, &v52);
LABEL_10:
        v23 = CellFlat;
        if ( CellFlat )
        {
          v61 = -1;
          v62 = 0;
          if ( *CellFlat == 26994 )
          {
            while ( v9 < (unsigned __int16)v23[1] )
            {
              v35 = *(unsigned int *)&v23[2 * v9 + 2];
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                v36 = HvpGetCellFlat(BugCheckParameter3, v35, &v61);
              else
                v36 = HvpGetCellPaged(BugCheckParameter3, v35, &v61);
              v37 = (_WORD *)v36;
              if ( !v36 )
              {
                v24 = -1;
                goto LABEL_14;
              }
              v38 = *(unsigned __int16 *)(v36 + 2);
              if ( a3 < v38 )
              {
                if ( ((*v37 - 26220) & 0xFDFF) != 0 )
                  v24 = *(_DWORD *)&v37[2 * a3 + 2];
                else
                  v24 = *(_DWORD *)&v37[4 * a3 + 2];
                if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                  HvpReleaseCellFlat(BugCheckParameter3, &v61);
                else
                  HvpReleaseCellPaged(BugCheckParameter3, &v61);
                goto LABEL_14;
              }
              a3 -= v38;
              if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
                HvpReleaseCellFlat(BugCheckParameter3, &v61);
              else
                HvpReleaseCellPaged(BugCheckParameter3, &v61);
              ++v9;
            }
          }
          if ( ((*v23 - 26220) & 0xFDFF) != 0 )
            v24 = *(_DWORD *)&v23[2 * a3 + 2];
          else
            v24 = *(_DWORD *)&v23[4 * a3 + 2];
LABEL_14:
          v25 = v63;
          *v63 = v24;
          SubkeyInHashByChildCell = 0;
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v52);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v52);
          goto LABEL_16;
        }
        SubkeyInHashByChildCell = -1073741670;
        goto LABEL_126;
      }
    }
    CellFlat = (_WORD *)HvpGetCellPaged(v21, v20, &v52);
    goto LABEL_10;
  }
  v41 = CellPaged[5];
  v61 = 0;
  LODWORD(v57) = -1;
  HIDWORD(v57) = 0;
  v58[0] = -1;
  v58[1] = 0;
  LODWORD(v52) = v41;
  if ( v41 )
    v56 = CellPaged[7];
  else
    v56 = -1;
  v42 = CellPaged[6];
  if ( v42 )
    LODWORD(v59) = v17[8];
  else
    LODWORD(v59) = -1;
  v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
  LODWORD(v60) = v42 + v41;
  if ( v10 )
    HvpReleaseCellPaged(BugCheckParameter3, v54);
  else
    HvpReleaseCellFlat(BugCheckParameter3, v54);
  v17 = 0LL;
  v43 = 0;
  v25 = v63;
  while ( 1 )
  {
    v55 = v43;
    if ( v43 >= (unsigned int)v60 )
      break;
    BugCheckParameter2 = 0LL;
    v44 = *(_BYTE *)(BugCheckParameter3 + 140) & 1;
    if ( v43 >= (unsigned int)v52 )
    {
      if ( v44 )
        v49 = HvpGetCellFlat(BugCheckParameter3, (unsigned int)v59, v58);
      else
        v49 = HvpGetCellPaged(BugCheckParameter3, v59, v58);
      if ( !v49 )
        return (unsigned int)-1073741670;
      SubKeyByNumber = CmpDoFindSubKeyByNumber(BugCheckParameter3);
      v47 = v58;
    }
    else
    {
      if ( v44 )
        v45 = HvpGetCellFlat(BugCheckParameter3, v56, &v57);
      else
        v45 = HvpGetCellPaged(BugCheckParameter3, v56, &v57);
      if ( !v45 )
        return (unsigned int)-1073741670;
      SubKeyByNumber = CmpDoFindSubKeyByNumber(BugCheckParameter3);
      v47 = (unsigned int *)&v57;
    }
    v10 = (*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0;
    *v25 = SubKeyByNumber;
    if ( v10 )
      HvpReleaseCellPaged(BugCheckParameter3, v47);
    else
      HvpReleaseCellFlat(BugCheckParameter3, v47);
    v48 = (unsigned int)*v25;
    if ( (_DWORD)v48 == -1 )
      return (unsigned int)-1073741670;
    SubkeyInHashByChildCell = CmpFindSubkeyInHashByChildCell(a5, a6, BugCheckParameter3, v48, &BugCheckParameter2);
    if ( SubkeyInHashByChildCell < 0 )
      return (unsigned int)SubkeyInHashByChildCell;
    v15 = BugCheckParameter2;
    if ( !BugCheckParameter2 || (unsigned __int8)CmRmIsKCBVisible(BugCheckParameter2, a7) && !CmpIsKeyDeleted(v15, a7) )
      ++v61;
    if ( v61 == a3 + 1 )
      goto LABEL_16;
    if ( v15 )
      CmpDelayDerefKeyControlBlock(v15);
    v43 = v55 + 1;
  }
  if ( v43 == (_DWORD)v60 )
  {
    v51 = a5 + 208;
    v52 = 0LL;
    v59 = a5 + 208;
    *v25 = -1;
    while ( 1 )
    {
      NextElement = CmListGetNextElement(v51, &v52, 32LL);
      v60 = NextElement;
      if ( !NextElement )
        goto LABEL_17;
      if ( CmEqualTrans(*(_QWORD *)(NextElement + 56), a7) )
      {
        if ( *(_DWORD *)(v60 + 68) == 1 )
        {
          v15 = *(_QWORD *)(v60 + 88);
          BugCheckParameter2 = v15;
          if ( (unsigned __int8)CmRmIsKCBVisible(v15, a7) )
          {
            if ( !CmpIsKeyDeleted(v15, a7) )
            {
              if ( v61 == a3 )
              {
                *v25 = *(_DWORD *)(v15 + 40);
                CmpReferenceKeyControlBlock(v15);
                break;
              }
              ++v61;
            }
          }
        }
      }
      v51 = v59;
      v15 = 0LL;
      BugCheckParameter2 = 0LL;
    }
  }
LABEL_16:
  BugCheckParameter4 = 0LL;
LABEL_17:
  if ( !v18 || *v25 == -1 )
  {
    if ( v15 )
    {
      v27 = *(_QWORD *)(v15 + 32);
      v28 = *(_QWORD *)v15;
      do
      {
        if ( v28 <= 1 )
        {
          v29 = BugCheckParameter2;
          v30 = (_QWORD *)(BugCheckParameter2 + 224);
          if ( (_QWORD *)*v30 != v30 )
            KeBugCheckEx(0x51u, 0x34uLL, BugCheckParameter2, 1uLL, BugCheckParameter4);
          v39 = a8;
          v40 = *(_QWORD **)(a8 + 8);
          if ( *v40 != a8 )
            __fastfail(3u);
          *v30 = a8;
          v30[1] = v40;
          *v40 = v30;
          *(_QWORD *)(v39 + 8) = v30;
          *(_BYTE *)(v29 + 64) |= 1u;
          goto LABEL_39;
        }
        v31 = v28 - 1;
        v32 = v28 == 3 && (*(_DWORD *)(BugCheckParameter2 + 184) & 0x40000) != 0 && *(_BYTE *)(v27 + 2944) == 1;
        v28 = _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, v31, v28);
      }
      while ( v28 != v31 + 1 );
      if ( v28 < v31 )
        KeBugCheckEx(0x51u, 0x25uLL, BugCheckParameter2, 0LL, BugCheckParameter4);
      if ( v32 )
        CmpDoQueueLateUnloadWorker(v27);
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
      v33 = CmpFindSubkeyInHashByChildCell(a5, a6, BugCheckParameter3, (unsigned int)*v25, &BugCheckParameter2);
      v15 = BugCheckParameter2;
      SubkeyInHashByChildCell = v33;
      if ( v33 < 0 )
        *v25 = -1;
    }
    *v18 = v15;
  }
LABEL_39:
  if ( v17 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, v54);
    else
      HvpReleaseCellPaged(BugCheckParameter3, v54);
  }
  return (unsigned int)SubkeyInHashByChildCell;
}
