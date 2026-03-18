/*
 * XREFs of CmpSyncSubKeysAfterDelete @ 0x140AA8450
 * Callers:
 *     CmpCopySyncTree2 @ 0x140889B3C (CmpCopySyncTree2.c)
 * Callees:
 *     CmpDeleteTree @ 0x1407D41F4 (CmpDeleteTree.c)
 *     CmpFindSubKeyByNameWithStatus @ 0x140875D60 (CmpFindSubKeyByNameWithStatus.c)
 *     HvpGetCellFlat @ 0x140878130 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x140878180 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140878FD0 (HvpReleaseCellPaged.c)
 *     CmpFreeKeyByCell @ 0x140886C64 (CmpFreeKeyByCell.c)
 *     CmpFindSubKeyByNumber @ 0x14088A4F0 (CmpFindSubKeyByNumber.c)
 *     HvpReleaseCellFlat @ 0x14088B670 (HvpReleaseCellFlat.c)
 *     CmpInitializeKeyNameString @ 0x140A734DC (CmpInitializeKeyNameString.c)
 */

bool __fastcall CmpSyncSubKeysAfterDelete(ULONG_PTR a1, __int64 a2, ULONG_PTR a3, _DWORD *a4, unsigned __int64 a5)
{
  _BYTE *v5; // r15
  unsigned int v6; // r12d
  int SubKeyByNumber; // ebx
  ULONG_PTR v10; // rsi
  unsigned int v11; // r14d
  ULONG_PTR CellFlat; // rax
  unsigned int BugCheckParameter4; // [rsp+20h] [rbp-20h] BYREF
  int BugCheckParameter4_4; // [rsp+24h] [rbp-1Ch] BYREF
  __int64 v16; // [rsp+28h] [rbp-18h] BYREF
  __int128 v17; // [rsp+30h] [rbp-10h] BYREF

  v5 = (_BYTE *)(a3 + 140);
  v16 = 0xFFFFFFFFLL;
  BugCheckParameter4 = 0;
  v6 = 0;
  v17 = 0LL;
  while ( 1 )
  {
    SubKeyByNumber = CmpFindSubKeyByNumber(a3, a4, v6, (int *)&BugCheckParameter4);
    v10 = 0LL;
    if ( SubKeyByNumber < 0 )
      break;
    v11 = BugCheckParameter4;
    if ( BugCheckParameter4 == -1 )
      return SubKeyByNumber >= 0;
    v5 = (_BYTE *)(a3 + 140);
    if ( (*(_BYTE *)(a3 + 140) & 1) != 0 )
      CellFlat = HvpGetCellFlat(a3, BugCheckParameter4, &v16);
    else
      CellFlat = HvpGetCellPaged(a3, BugCheckParameter4, &v16);
    v10 = CellFlat;
    if ( !CellFlat )
    {
      SubKeyByNumber = -1073741670;
      return SubKeyByNumber >= 0;
    }
    CmpInitializeKeyNameString(CellFlat, (__int64)&v17, a5);
    BugCheckParameter4_4 = 0;
    CmpFindSubKeyByNameWithStatus(a1, a2, (unsigned __int16 *)&v17, &BugCheckParameter4_4);
    if ( BugCheckParameter4_4 == -1 )
    {
      if ( *(_DWORD *)(v10 + 20) + *(_DWORD *)(v10 + 24) )
        CmpDeleteTree(a3, v11);
      SubKeyByNumber = CmpFreeKeyByCell(a3, v11, 1);
      if ( SubKeyByNumber < 0 )
        break;
    }
    else
    {
      ++v6;
    }
    if ( (*v5 & 1) != 0 )
      HvpReleaseCellFlat(a3, &v16);
    else
      HvpReleaseCellPaged(a3, (unsigned int *)&v16);
  }
  if ( v10 )
  {
    if ( (*v5 & 1) != 0 )
      HvpReleaseCellFlat(a3, &v16);
    else
      HvpReleaseCellPaged(a3, (unsigned int *)&v16);
  }
  return SubKeyByNumber >= 0;
}
