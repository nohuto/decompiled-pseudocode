/*
 * XREFs of CmpAddToLeaf @ 0x14087EB94
 * Callers:
 *     CmpAddSubKeyToList @ 0x14087DDCC (CmpAddSubKeyToList.c)
 * Callees:
 *     memmove @ 0x1406B4940 (memmove.c)
 *     CmpHashUnicodeComponent @ 0x140848190 (CmpHashUnicodeComponent.c)
 *     HvpMarkCellDirty @ 0x1408751B0 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x140877170 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140878FA0 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpCompareInIndex @ 0x14087A510 (CmpCompareInIndex.c)
 *     HvReallocateCell @ 0x14087F5A4 (HvReallocateCell.c)
 *     HvFreeCell @ 0x14087FCBC (HvFreeCell.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpGenerateFastLeafHintForUnicodeString @ 0x140A18E20 (CmpGenerateFastLeafHintForUnicodeString.c)
 */

__int64 __fastcall CmpAddToLeaf(
        ULONG_PTR BugCheckParameter3,
        ULONG_PTR BugCheckParameter4,
        int a3,
        unsigned __int16 *a4,
        unsigned int *a5)
{
  unsigned int v7; // r12d
  unsigned int v8; // r15d
  ULONG_PTR v9; // rdx
  int SubKeyInLeafWithStatus; // esi
  __int64 CellFlat; // rax
  __int64 v12; // rbx
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // esi
  int v16; // ecx
  _WORD *v17; // r14
  __int64 v18; // rsi
  int v19; // eax
  int v20; // eax
  int FastLeafHintForUnicodeString; // eax
  int v23; // eax
  unsigned int v24; // [rsp+40h] [rbp-20h] BYREF
  unsigned int v25; // [rsp+44h] [rbp-1Ch] BYREF
  __int64 v26; // [rsp+48h] [rbp-18h] BYREF
  __int64 v27; // [rsp+50h] [rbp-10h] BYREF
  __int64 v28; // [rsp+58h] [rbp-8h] BYREF

  v27 = 0LL;
  LODWORD(v26) = 0;
  v25 = 0;
  v7 = BugCheckParameter4;
  HvpGetCellContextInitialize(&v27);
  v8 = -1;
  SubKeyInLeafWithStatus = HvpMarkCellDirty(BugCheckParameter3, v9, 0);
  if ( SubKeyInLeafWithStatus < 0 )
    return (unsigned int)SubKeyInLeafWithStatus;
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = HvpGetCellFlat(BugCheckParameter3, v7, &v27);
  else
    CellFlat = HvpGetCellPaged(BugCheckParameter3, v7, &v27);
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
    v24 = v7;
    v8 = v7;
    if ( v16 - 4 < v15 )
    {
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        HvpReleaseCellFlat(BugCheckParameter3, &v27);
      else
        HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v27);
      v28 = 0LL;
      v23 = HvReallocateCell(BugCheckParameter3, (__int64)&v24, (__int64)&v28, (__int64)&v27);
      v12 = v28;
      SubKeyInLeafWithStatus = v23;
      v8 = v24;
      if ( v23 < 0 )
        goto LABEL_23;
      if ( v17 )
        v17 = (_WORD *)v28;
    }
    SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(BugCheckParameter3, (__int16 *)v12, a4, 0LL, &v26, &v25);
    if ( SubKeyInLeafWithStatus == -1073741772 )
    {
      v18 = v25;
      if ( v25 == *(unsigned __int16 *)(v12 + 2) )
        goto LABEL_14;
      v19 = CmpCompareInIndex(BugCheckParameter3, a4, 0LL, v25, (WCHAR *)v12, &v26);
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
            HvpReleaseCellFlat(BugCheckParameter3, &v27);
          else
            HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v27);
          v12 = 0LL;
          if ( v8 != v7 )
            HvFreeCell(BugCheckParameter3, v7);
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
            FastLeafHintForUnicodeString = CmpHashUnicodeComponent((__int128 *)a4);
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
      HvpReleaseCellFlat(BugCheckParameter3, &v27);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v27);
  }
  if ( v8 != -1 && v8 != v7 )
    HvFreeCell(BugCheckParameter3, v8);
  return (unsigned int)SubKeyInLeafWithStatus;
}
