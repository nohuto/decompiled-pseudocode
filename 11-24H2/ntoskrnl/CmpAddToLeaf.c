/*
 * XREFs of CmpAddToLeaf @ 0x140887458
 * Callers:
 *     CmpAddSubKeyToList @ 0x140882878 (CmpAddSubKeyToList.c)
 * Callees:
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408777E0 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvReallocateCell @ 0x14088539C (HvReallocateCell.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     CmpCompareInIndex @ 0x140888330 (CmpCompareInIndex.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x140A3C2FC (CmpGenerateFastLeafHintForUnicodeString.c)
 */

__int64 __fastcall CmpAddToLeaf(ULONG_PTR BugCheckParameter3, unsigned int a2, int a3, __m128i *a4, unsigned int *a5)
{
  unsigned int v8; // r15d
  ULONG_PTR v9; // rdx
  int SubKeyInLeafWithStatus; // esi
  __int64 CellFlat; // rax
  __int64 v12; // rbx
  int v13; // eax
  unsigned int v14; // r8d
  unsigned int v15; // esi
  unsigned int v16; // ecx
  _WORD *v17; // r14
  __int64 v18; // rsi
  int v19; // eax
  int v20; // eax
  int FastLeafHintForUnicodeString; // eax
  int v23; // esi
  int v24; // eax
  unsigned int v25; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v26; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v27; // [rsp+48h] [rbp-18h] BYREF
  __int64 v28; // [rsp+50h] [rbp-10h] BYREF
  __int64 v29; // [rsp+58h] [rbp-8h] BYREF

  v28 = 0LL;
  LODWORD(v27) = 0;
  v26 = 0;
  HvpGetCellContextInitialize(&v28);
  v8 = -1;
  SubKeyInLeafWithStatus = HvpMarkCellDirty(BugCheckParameter3, v9, 0);
  if ( SubKeyInLeafWithStatus < 0 )
    return (unsigned int)SubKeyInLeafWithStatus;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, a2, &v28);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, a2, &v28);
  v12 = CellFlat;
  v13 = *(unsigned __int16 *)(CellFlat + 2);
  if ( (_WORD)v13 == 0xFFFF )
  {
    SubKeyInLeafWithStatus = -1073741670;
  }
  else
  {
    v14 = -4 - *(_DWORD *)(v12 - 4);
    if ( *(_WORD *)v12 == 26988 )
    {
      v17 = 0LL;
      v16 = v14 - 4 * v13;
      v15 = 4;
    }
    else
    {
      v15 = 8;
      v16 = v14 - 8 * v13;
      v17 = (_WORD *)v12;
    }
    v25 = a2;
    v8 = a2;
    if ( v16 - 4 < v15 )
    {
      if ( (v14 >> 1) + v14 >= v15 + v14 )
        v15 = v14 >> 1;
      v23 = v14 + v15;
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v28);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v28);
      v29 = 0LL;
      v24 = HvReallocateCell(BugCheckParameter3, a2, v23, 0, (int *)&v25, &v29, (__int64)&v28);
      v12 = v29;
      SubKeyInLeafWithStatus = v24;
      v8 = v25;
      if ( v24 < 0 )
        goto LABEL_23;
      if ( v17 )
        v17 = (_WORD *)v29;
    }
    SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(
                               BugCheckParameter3,
                               (__int16 *)v12,
                               (unsigned __int16 *)a4,
                               0LL,
                               &v27,
                               &v26);
    if ( SubKeyInLeafWithStatus == -1073741772 )
    {
      v18 = v26;
      if ( v26 == *(unsigned __int16 *)(v12 + 2) )
        goto LABEL_14;
      v19 = CmpCompareInIndex(BugCheckParameter3, v12, (__int64)&v27);
      if ( v19 != 2 )
      {
        if ( v19 > 0 )
          v18 = (unsigned int)(v18 + 1);
        v20 = *(unsigned __int16 *)(v12 + 2);
        if ( (_DWORD)v18 != v20 )
        {
          if ( v17 )
          {
            memmove(
              &v17[4 * (unsigned int)(v18 + 1) + 2],
              &v17[4 * v18 + 2],
              8LL * ((unsigned __int16)v17[1] - (unsigned int)v18));
            goto LABEL_15;
          }
          memmove(
            (void *)(v12 + 4 * ((unsigned int)(v18 + 1) + 1LL)),
            (const void *)(v12 + 4 * ((unsigned int)v18 + 1LL)),
            4LL * (unsigned int)(v20 - v18));
LABEL_32:
          *(_DWORD *)(v12 + 4 * v18 + 4) = a3;
LABEL_18:
          ++*(_WORD *)(v12 + 2);
          if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
            HvpReleaseCellFlat(BugCheckParameter3, &v28);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v28);
          v12 = 0LL;
          if ( v8 != a2 )
            HvFreeCell(BugCheckParameter3, a2);
          *a5 = v8;
          v8 = -1;
          SubKeyInLeafWithStatus = 0;
          goto LABEL_23;
        }
LABEL_14:
        if ( v17 )
        {
LABEL_15:
          *(_DWORD *)&v17[4 * v18 + 2] = a3;
          if ( *v17 == 26732 )
            FastLeafHintForUnicodeString = CmpHashUnicodeComponent(a4);
          else
            FastLeafHintForUnicodeString = CmpGenerateFastLeafHintForUnicodeString(a4);
          *(_DWORD *)&v17[4 * v18 + 4] = FastLeafHintForUnicodeString;
          goto LABEL_18;
        }
        goto LABEL_32;
      }
      SubKeyInLeafWithStatus = -1073741670;
    }
  }
LABEL_23:
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, &v28);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v28);
  }
  if ( v8 != -1 && v8 != a2 )
    HvFreeCell(BugCheckParameter3, v8);
  return (unsigned int)SubKeyInLeafWithStatus;
}
