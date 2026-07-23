/*
 * XREFs of CmpFullPromoteSingleKeyFromKeyNodeStacks @ 0x140908550
 * Callers:
 *     CmSaveKey @ 0x1407CE0EC (CmSaveKey.c)
 *     CmpFullPromoteHiveRootFromKcbStack @ 0x1407E4170 (CmpFullPromoteHiveRootFromKcbStack.c)
 *     CmpPromoteSingleKeyFromParentKcbAndChildKeyNode @ 0x1407E444C (CmpPromoteSingleKeyFromParentKcbAndChildKeyNode.c)
 *     CmpPromoteSingleKeyFromKcbStacks @ 0x140907DA0 (CmpPromoteSingleKeyFromKcbStacks.c)
 *     CmpPromoteSubtree @ 0x140908398 (CmpPromoteSubtree.c)
 * Callees:
 *     CmpValueEnumStackStartFromKeyNodeStack @ 0x140458108 (CmpValueEnumStackStartFromKeyNodeStack.c)
 *     CmpValueEnumStackEntryInitialize @ 0x14048D244 (CmpValueEnumStackEntryInitialize.c)
 *     CmpValueEnumStackGetCurrentValueHive @ 0x140497C94 (CmpValueEnumStackGetCurrentValueHive.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpFreeKeyValueList @ 0x1407E2430 (CmpFreeKeyValueList.c)
 *     HvpMarkCellDirty @ 0x140875930 (HvpMarkCellDirty.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpAddValueToListEx @ 0x14088522C (CmpAddValueToListEx.c)
 *     CmpCopyValue @ 0x140885564 (CmpCopyValue.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     CmpCopyCell @ 0x140885DE0 (CmpCopyCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpValueEnumStackAdvance @ 0x1408E2E18 (CmpValueEnumStackAdvance.c)
 *     CmpConcatenateValueLists @ 0x140908178 (CmpConcatenateValueLists.c)
 *     CmpValueEnumStackCleanup @ 0x140908A14 (CmpValueEnumStackCleanup.c)
 *     CmpKeyNodeStackGetEntryAtLayerHeight @ 0x14090A728 (CmpKeyNodeStackGetEntryAtLayerHeight.c)
 */

__int64 __fastcall CmpFullPromoteSingleKeyFromKeyNodeStacks(__int64 a1, __int16 *a2)
{
  unsigned int v3; // r12d
  unsigned int v4; // r14d
  char *v6; // rdx
  __int64 v7; // rdx
  __int64 v8; // r8
  __int64 v9; // r11
  __int64 v10; // rdx
  __int64 EntryAtLayerHeight; // rdi
  __int16 v12; // r11
  __int64 v13; // r15
  __int64 v14; // rax
  ULONG_PTR v15; // rsi
  ULONG_PTR *v16; // rax
  __int64 v17; // r9
  __int16 v18; // r10
  ULONG_PTR v19; // rcx
  int v20; // ebx
  unsigned __int16 v21; // r13
  int v22; // eax
  ULONG_PTR CurrentValueHive; // rax
  int v24; // ebx
  __int64 CellFlat; // rax
  unsigned __int16 v26; // dx
  unsigned __int16 v27; // cx
  bool v28; // zf
  unsigned int v29; // eax
  unsigned int v30; // edx
  unsigned int v31; // ecx
  int v32; // eax
  int v33; // eax
  unsigned __int16 v34; // r13
  ULONG_PTR v35; // rdx
  __int64 v36; // rcx
  char v37; // al
  __int64 v38; // rax
  unsigned int v39; // edx
  __int64 v40; // rax
  __int64 v41; // rax
  int v43; // eax
  unsigned __int16 v44; // [rsp+30h] [rbp-89h]
  __int64 v45; // [rsp+34h] [rbp-85h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+3Ch] [rbp-7Dh] BYREF
  unsigned __int16 v47; // [rsp+44h] [rbp-75h]
  ULONG_PTR *v48; // [rsp+48h] [rbp-71h]
  unsigned int v49; // [rsp+50h] [rbp-69h]
  __int64 v50; // [rsp+58h] [rbp-61h] BYREF
  __int64 v51; // [rsp+60h] [rbp-59h] BYREF
  unsigned int v52; // [rsp+70h] [rbp-49h] BYREF
  _BYTE v53[2]; // [rsp+74h] [rbp-45h] BYREF
  __int16 v54; // [rsp+76h] [rbp-43h]
  char v55; // [rsp+80h] [rbp-39h] BYREF

  v50 = 0LL;
  v45 = 0xFFFFFFFFLL;
  v3 = -1;
  v44 = 0;
  BugCheckParameter4 = -1LL;
  v4 = -1;
  v51 = 0xFFFFFFFF00000000uLL;
  HvpGetCellContextInitialize(&v50);
  memset_0(v53, 0, 0x54uLL);
  v6 = &v55;
  v52 = -1;
  do
  {
    CmpValueEnumStackEntryInitialize(v6);
    v6 = (char *)(v7 + 32);
  }
  while ( v8 != v9 );
  v47 = *a2;
  EntryAtLayerHeight = CmpKeyNodeStackGetEntryAtLayerHeight(a2, v47);
  if ( a1 )
    v13 = CmpKeyNodeStackGetEntryAtLayerHeight(a1, v10);
  else
    v13 = 0LL;
  v14 = *(_QWORD *)(EntryAtLayerHeight + 16);
  v15 = *(_QWORD *)EntryAtLayerHeight;
  v49 = *(_DWORD *)(EntryAtLayerHeight + 8) >> 31;
  if ( *(char *)(v14 + 13) < 0 )
  {
    LOWORD(v10) = v10 - v12;
    while ( (v10 & 0x8000u) == 0LL )
    {
      v16 = (ULONG_PTR *)CmpKeyNodeStackGetEntryAtLayerHeight(a2, v10);
      v48 = v16;
      v19 = v16[2];
      if ( v19 && *(char *)(v19 + 13) >= (char)v18 )
      {
        if ( *(_WORD *)(v19 + 74) == v18 )
          break;
        v43 = CmpCopyCell(*v16, *(unsigned int *)(v19 + 48), v15, v17, &v45);
        v3 = v45;
        v20 = v43;
        if ( v43 >= 0 )
        {
          v44 = *(_WORD *)(v48[2] + 74);
          break;
        }
        goto LABEL_53;
      }
      LOWORD(v10) = v10 - 1;
    }
  }
  v20 = CmpValueEnumStackStartFromKeyNodeStack((__int64)&v52, a2);
  if ( v20 >= 0 )
  {
    v21 = v47;
    LODWORD(v45) = 0;
    LODWORD(v48) = 0;
    while ( 1 )
    {
      v22 = CmpValueEnumStackAdvance((__int64)&v52);
      v20 = v22;
      if ( v22 == -2147483622 )
        break;
      if ( v22 < 0 )
        goto LABEL_53;
      if ( v54 != v21 )
      {
        CurrentValueHive = CmpValueEnumStackGetCurrentValueHive((__int64)&v52);
        v20 = CmpCopyValue(CurrentValueHive, v52, v15, v49, (unsigned int *)&BugCheckParameter4 + 1);
        if ( v20 < 0 )
          goto LABEL_53;
        v24 = HIDWORD(BugCheckParameter4);
        if ( (*(_BYTE *)(v15 + 140) & 1) != 0 )
          CellFlat = HvpGetCellFlat(v15, HIDWORD(BugCheckParameter4), &v50);
        else
          CellFlat = HvpGetCellPaged(v15, HIDWORD(BugCheckParameter4), &v50);
        v26 = *(_WORD *)(CellFlat + 2);
        v27 = 2 * v26;
        v28 = (*(_BYTE *)(CellFlat + 16) & 1) == 0;
        v29 = *(_DWORD *)(CellFlat + 4);
        if ( v28 )
          v27 = v26;
        v30 = v27;
        v31 = v29 + 0x80000000;
        if ( v29 < 0x80000000 )
          v31 = v29;
        v32 = v45;
        if ( v31 > (unsigned int)v45 )
          v32 = v31;
        LODWORD(v45) = v32;
        if ( v30 <= (unsigned int)v48 )
          v30 = (unsigned int)v48;
        v28 = (*(_BYTE *)(v15 + 140) & 1) == 0;
        LODWORD(v48) = v30;
        if ( v28 )
          HvpReleaseCellPaged(v15, (unsigned int *)&v50);
        else
          HvpReleaseCellFlat(v15, (__int64)&v50);
        v20 = CmpAddValueToListEx(v15, v24, HIDWORD(v45), 1LL, (unsigned int *)&v45 + 1);
        if ( v20 < 0 )
          goto LABEL_53;
        HIDWORD(BugCheckParameter4) = -1;
      }
    }
    if ( !HIDWORD(v45)
      || (v33 = CmpConcatenateValueLists(
                  v15,
                  (unsigned int *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 36LL),
                  (unsigned int *)&v45 + 1,
                  v49,
                  (unsigned int *)&v51),
          v4 = HIDWORD(v51),
          v20 = v33,
          v33 >= 0) )
    {
      if ( *(char *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 13LL) >= 0 )
        goto LABEL_68;
      v20 = HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8), 0);
      if ( v20 < 0 )
        goto LABEL_53;
      if ( v13 )
      {
        v34 = v44;
        if ( *(_DWORD *)(*(_QWORD *)(v13 + 16) + 56LL) < (unsigned int)v44 )
        {
          v20 = HvpMarkCellDirty(*(_QWORD *)v13, *(unsigned int *)(v13 + 8), 0);
          if ( v20 < 0 )
            goto LABEL_53;
        }
      }
      else
      {
LABEL_68:
        v34 = v44;
      }
      if ( v4 == -1
        || (v20 = HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, *(unsigned int *)(EntryAtLayerHeight + 8), 0), v20 >= 0)
        && ((v35 = *(unsigned int *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 40LL), (_DWORD)v35 == -1)
         || (v20 = HvpMarkCellDirty(*(_QWORD *)EntryAtLayerHeight, v35, 0), v20 >= 0)) )
      {
        v36 = *(_QWORD *)(EntryAtLayerHeight + 16);
        v37 = *(_BYTE *)(v36 + 13);
        if ( v37 < 0 )
        {
          *(_BYTE *)(v36 + 13) = v37 & 0x7F;
          *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 48LL) = v3;
          v3 = -1;
          *(_WORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 74LL) = v34;
          if ( v13 )
          {
            v38 = *(_QWORD *)(v13 + 16);
            if ( *(_DWORD *)(v38 + 56) < (unsigned int)v34 )
              *(_DWORD *)(v38 + 56) = v34;
          }
        }
        if ( v4 != -1 )
        {
          v39 = *(_DWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 40LL);
          if ( v39 != -1 )
            HvFreeCell(*(_QWORD *)EntryAtLayerHeight, v39);
          v4 = -1;
          *(_QWORD *)(*(_QWORD *)(EntryAtLayerHeight + 16) + 36LL) = v51;
          v40 = *(_QWORD *)(EntryAtLayerHeight + 16);
          if ( *(_DWORD *)(v40 + 64) < (unsigned int)v45 )
            *(_DWORD *)(v40 + 64) = v45;
          v41 = *(_QWORD *)(EntryAtLayerHeight + 16);
          if ( *(_DWORD *)(v41 + 60) < (unsigned int)v48 )
            *(_DWORD *)(v41 + 60) = (_DWORD)v48;
          HvFreeCell(v15, BugCheckParameter4);
          HIDWORD(v45) = 0;
          LODWORD(BugCheckParameter4) = -1;
        }
        v20 = 0;
      }
    }
  }
LABEL_53:
  CmpValueEnumStackCleanup(&v52);
  if ( (_DWORD)BugCheckParameter4 != -1 )
    CmpFreeKeyValueList(v15, (_DWORD *)&v45 + 1);
  if ( v4 != -1 )
    HvFreeCell(v15, v4);
  if ( v3 != -1 )
    HvFreeCell(v15, v3);
  return (unsigned int)v20;
}
