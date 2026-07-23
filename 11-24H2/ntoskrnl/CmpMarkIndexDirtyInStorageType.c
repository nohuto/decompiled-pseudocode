/*
 * XREFs of CmpMarkIndexDirtyInStorageType @ 0x140A1D6C0
 * Callers:
 *     CmpMarkIndexDirty @ 0x1408834C8 (CmpMarkIndexDirty.c)
 * Callees:
 *     CmpFindSubKeyInRoot @ 0x14083EC40 (CmpFindSubKeyInRoot.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     CmpFindSubKeyInLeafWithStatus @ 0x1408777E0 (CmpFindSubKeyInLeafWithStatus.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpGetCellContextMove @ 0x140886D10 (HvpGetCellContextMove.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 */

__int64 __fastcall CmpMarkIndexDirtyInStorageType(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        unsigned __int16 *a4,
        int a5)
{
  __int64 v7; // rdx
  unsigned int v8; // r12d
  __int16 *CellFlat; // rax
  __int16 *v10; // rsi
  unsigned int v11; // r15d
  __int16 *v12; // r14
  int SubKeyInLeafWithStatus; // ebx
  __int64 CellPaged; // rax
  __int64 v16; // [rsp+30h] [rbp-20h] BYREF
  __int64 v17; // [rsp+38h] [rbp-18h] BYREF
  unsigned int v18[4]; // [rsp+40h] [rbp-10h] BYREF
  __int64 v19; // [rsp+98h] [rbp+48h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+50h] BYREF

  LODWORD(v19) = 0;
  *(_QWORD *)v18 = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v17 = 0LL;
  LODWORD(v16) = 0;
  HvpGetCellContextInitialize(v18);
  HvpGetCellContextInitialize(&v17);
  if ( !*(_DWORD *)(v7 + 4LL * a5 + 20) )
    return (unsigned int)-1073741772;
  v8 = *(_DWORD *)(v7 + 4LL * a5 + 28);
  if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
    CellFlat = (__int16 *)HvpGetCellFlat(BugCheckParameter3, v8, v18);
  else
    CellFlat = (__int16 *)HvpGetCellPaged(BugCheckParameter3, v8, v18);
  v10 = CellFlat;
  if ( !CellFlat )
    return (unsigned int)-1073741670;
  if ( *CellFlat == 26994 )
  {
    LODWORD(v19) = CmpFindSubKeyInRoot(BugCheckParameter3, (__int64)CellFlat, a4, 0LL, &BugCheckParameter4);
    if ( (_DWORD)v19 != 0x80000000 )
    {
      v11 = BugCheckParameter4;
      if ( (_DWORD)BugCheckParameter4 == -1 )
      {
        SubKeyInLeafWithStatus = -1073741772;
LABEL_15:
        if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, (__int64)v18);
        else
          HvpReleaseCellPaged(BugCheckParameter3, v18);
        return (unsigned int)SubKeyInLeafWithStatus;
      }
      if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
        CellPaged = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v17);
      else
        CellPaged = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, &v17);
      v12 = (__int16 *)CellPaged;
      if ( CellPaged )
        goto LABEL_7;
    }
    SubKeyInLeafWithStatus = -1073741670;
    goto LABEL_15;
  }
  v11 = v8;
  v8 = -1;
  v12 = CellFlat;
  v10 = 0LL;
  HvpGetCellContextMove(&v17, v18);
LABEL_7:
  SubKeyInLeafWithStatus = CmpFindSubKeyInLeafWithStatus(BugCheckParameter3, v12, a4, 0LL, &v16, (unsigned int *)&v19);
  if ( SubKeyInLeafWithStatus < 0 )
    goto LABEL_12;
  if ( !v10 || (SubKeyInLeafWithStatus = HvpMarkCellDirty(BugCheckParameter3, v8, 0), SubKeyInLeafWithStatus >= 0) )
  {
    SubKeyInLeafWithStatus = HvpMarkCellDirty(BugCheckParameter3, v11, 0);
    if ( SubKeyInLeafWithStatus >= 0 )
      SubKeyInLeafWithStatus = 0;
  }
  if ( v12 )
  {
LABEL_12:
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)&v17);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)&v17);
  }
  if ( v10 )
    goto LABEL_15;
  return (unsigned int)SubKeyInLeafWithStatus;
}
