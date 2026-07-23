/*
 * XREFs of CmpVirtualBranchIsReplicated @ 0x1408E2144
 * Callers:
 *     CmpVEExecuteRealStoreParseLogic @ 0x1408E2B94 (CmpVEExecuteRealStoreParseLogic.c)
 *     CmpVEExecuteVirtualStoreParseLogic @ 0x140A57370 (CmpVEExecuteVirtualStoreParseLogic.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpUnblockTwoHiveWrites @ 0x1408E20F0 (CmpUnblockTwoHiveWrites.c)
 *     CmpGetMappingHiveForString @ 0x1408E232C (CmpGetMappingHiveForString.c)
 *     CmpGetVirtualizationIDFromFullVirtualPath @ 0x1408E24B0 (CmpGetVirtualizationIDFromFullVirtualPath.c)
 *     CmpBlockTwoHiveWrites @ 0x1408E2704 (CmpBlockTwoHiveWrites.c)
 *     CmpFindPathByNameEx @ 0x1408E289C (CmpFindPathByNameEx.c)
 */

bool __fastcall CmpVirtualBranchIsReplicated(__int64 a1, _WORD *a2, char *a3)
{
  char *v3; // r12
  volatile signed __int32 *v6; // r15
  volatile signed __int32 *v7; // r14
  char PathByName; // al
  ULONG_PTR v9; // rdi
  char v10; // si
  __int64 CellPaged; // rax
  unsigned __int8 v12; // cf
  char v13; // al
  unsigned __int16 v14; // cx
  __int64 v15; // r8
  unsigned __int16 v16; // dx
  ULONG_PTR BugCheckParameter3; // [rsp+30h] [rbp-30h] BYREF
  __int128 v20; // [rsp+38h] [rbp-28h] BYREF
  __int128 v21; // [rsp+48h] [rbp-18h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+A0h] [rbp+40h] BYREF
  unsigned int v23; // [rsp+B0h] [rbp+50h] BYREF
  int v24; // [rsp+B4h] [rbp+54h]
  volatile signed __int32 *v25; // [rsp+B8h] [rbp+58h] BYREF

  v23 = -1;
  v24 = 0;
  LODWORD(BugCheckParameter4) = 0;
  v3 = a3;
  BugCheckParameter3 = 0LL;
  v25 = 0LL;
  *a3 = 0;
  v6 = 0LL;
  v20 = 0LL;
  if ( a1 )
  {
    if ( !*a2 )
      return CmpVEEnabled && (*(_DWORD *)(a1 + 184) & 0x1000000) != 0;
    v7 = *(volatile signed __int32 **)(a1 + 32);
  }
  else
  {
    v21 = 0LL;
    if ( (int)CmpGetVirtualizationIDFromFullVirtualPath(a2, &v21) < 0 || (int)CmpGetMappingHiveForString(&v21, &v25) < 0 )
      return 0;
    v6 = (volatile signed __int32 *)CmpMasterHive;
    v7 = v25;
  }
  LOBYTE(a3) = 1;
  if ( (int)CmpBlockTwoHiveWrites(v6, v7, a3) < 0 )
    return 0;
  PathByName = CmpFindPathByNameEx(a1, a2, &v20, 0LL, &BugCheckParameter4, &BugCheckParameter3);
  v9 = BugCheckParameter3;
  v10 = PathByName;
  if ( BugCheckParameter3
    && ((*(_BYTE *)(BugCheckParameter3 + 140) & 1) == 0
      ? (CellPaged = HvpGetCellPaged(BugCheckParameter3, BugCheckParameter4, &v23))
      : (CellPaged = HvpGetCellFlat(BugCheckParameter3, (unsigned int)BugCheckParameter4, &v23)),
        CellPaged) )
  {
    if ( v10 )
    {
      if ( !CmpVEEnabled || !_bittest16((const signed __int16 *)(CellPaged + 2), 8u) )
        v10 = 0;
    }
    else
    {
      if ( !CmpVEEnabled || (v12 = _bittest16((const signed __int16 *)(CellPaged + 2), 8u), v13 = 1, !v12) )
        v13 = 0;
      v14 = 0;
      v15 = *((_QWORD *)&v20 + 1);
      v16 = (unsigned __int16)v20 >> 1;
      *v3 = v13;
      while ( v14 < v16 )
      {
        if ( *(_WORD *)(v15 + 2LL * v14) == 92 )
        {
          *v3 = 0;
          break;
        }
        ++v14;
      }
    }
    if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
      HvpReleaseCellFlat(v9, (__int64)&v23);
    else
      HvpReleaseCellPaged(v9, &v23);
  }
  else
  {
    v10 = 0;
  }
  CmpUnblockTwoHiveWrites(v6, v7);
  return v10;
}
