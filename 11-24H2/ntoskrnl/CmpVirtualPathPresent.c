/*
 * XREFs of CmpVirtualPathPresent @ 0x1407DC414
 * Callers:
 *     CmpReparseToVirtualPath @ 0x1407DC0B8 (CmpReparseToVirtualPath.c)
 * Callees:
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpGetCmHiveFromVirtualPath @ 0x1408E1EAC (CmpGetCmHiveFromVirtualPath.c)
 *     CmpUnblockTwoHiveWrites @ 0x1408E20F0 (CmpUnblockTwoHiveWrites.c)
 *     CmpBlockTwoHiveWrites @ 0x1408E2704 (CmpBlockTwoHiveWrites.c)
 *     CmpFindPathByNameEx @ 0x1408E289C (CmpFindPathByNameEx.c)
 */

bool __fastcall CmpVirtualPathPresent(__int64 a1)
{
  ULONG_PTR v1; // r14
  __int64 v2; // rsi
  __int64 v4; // r8
  char PathByName; // al
  ULONG_PTR v6; // rdi
  bool v7; // bl
  __int64 CellFlat; // rax
  ULONG_PTR BugCheckParameter3[2]; // [rsp+30h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+78h] [rbp+38h] BYREF
  int v12; // [rsp+80h] [rbp+40h] BYREF
  int v13; // [rsp+84h] [rbp+44h]
  __int64 v14; // [rsp+88h] [rbp+48h] BYREF

  v12 = -1;
  v1 = CmpMasterHive;
  v2 = 0LL;
  v13 = 0;
  BugCheckParameter3[0] = 0LL;
  LODWORD(BugCheckParameter4) = 0;
  v14 = 0LL;
  if ( (int)CmpGetCmHiveFromVirtualPath(a1, &v14) >= 0 )
  {
    LOBYTE(v4) = 1;
    if ( (int)CmpBlockTwoHiveWrites(v1, v14, v4) >= 0 )
    {
      PathByName = CmpFindPathByNameEx(0LL, a1, 0LL, 0LL, &BugCheckParameter4, BugCheckParameter3);
      v6 = BugCheckParameter3[0];
      v7 = PathByName;
      if ( BugCheckParameter3[0] )
      {
        if ( (*(_BYTE *)(BugCheckParameter3[0] + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(BugCheckParameter3[0], (unsigned int)BugCheckParameter4);
        else
          CellFlat = HvpGetCellPaged(BugCheckParameter3[0]);
        v2 = CellFlat;
      }
      if ( v7 )
      {
        if ( v2 )
        {
          v7 = CmpVEEnabled && _bittest16((const signed __int16 *)(v2 + 2), 8u);
          goto LABEL_16;
        }
        v7 = 0;
      }
      else if ( v2 )
      {
LABEL_16:
        if ( (*(_BYTE *)(v6 + 140) & 1) != 0 )
          HvpReleaseCellFlat(v6, &v12);
        else
          HvpReleaseCellPaged(v6, &v12);
      }
      CmpUnblockTwoHiveWrites(v1, v14);
      return v7;
    }
  }
  return 0;
}
