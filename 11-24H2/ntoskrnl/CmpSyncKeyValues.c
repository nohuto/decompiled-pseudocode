/*
 * XREFs of CmpSyncKeyValues @ 0x1407E2FD4
 * Callers:
 *     CmpMergeKeyValues @ 0x1407E24E4 (CmpMergeKeyValues.c)
 *     CmpCopySyncTree2 @ 0x1408877A4 (CmpCopySyncTree2.c)
 * Callees:
 *     CmpFindSecurityCellCacheIndex @ 0x140415340 (CmpFindSecurityCellCacheIndex.c)
 *     CmpDereferenceSecurityNode @ 0x140496BD8 (CmpDereferenceSecurityNode.c)
 *     CmpFreeKeyValueList @ 0x1407E2430 (CmpFreeKeyValueList.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088452C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpUnlockTwoSecurityCaches @ 0x140884764 (CmpUnlockTwoSecurityCaches.c)
 *     CmpLockTwoSecurityCachesExclusiveShared @ 0x140884794 (CmpLockTwoSecurityCachesExclusiveShared.c)
 *     CmpFreeValue @ 0x1408847DC (CmpFreeValue.c)
 *     CmpAddValueToListEx @ 0x14088522C (CmpAddValueToListEx.c)
 *     CmpCopyValue @ 0x140885564 (CmpCopyValue.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     CmpCopyCell @ 0x140885DE0 (CmpCopyCell.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpFreeSecurityDescriptor @ 0x140A34100 (CmpFreeSecurityDescriptor.c)
 *     CmpFreeKeyValues @ 0x140A6F904 (CmpFreeKeyValues.c)
 */

__int64 __fastcall CmpSyncKeyValues(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        __int64 a3,
        ULONG_PTR a4,
        ULONG_PTR BugCheckParameter4,
        __int64 a6,
        __int16 a7)
{
  unsigned int v9; // r15d
  int v11; // r8d
  char v12; // r12
  int SecurityDescriptorNode; // esi
  int v14; // edx
  unsigned int v15; // esi
  _BYTE *v16; // r14
  __int64 CellFlat; // rax
  unsigned int v18; // r12d
  __int64 v19; // r12
  unsigned __int64 v20; // rax
  int v21; // eax
  _DWORD v23[2]; // [rsp+40h] [rbp-28h] BYREF
  unsigned __int64 v24; // [rsp+48h] [rbp-20h] BYREF
  __int64 v25; // [rsp+50h] [rbp-18h] BYREF
  __int64 v26; // [rsp+58h] [rbp-10h]
  __int64 v27; // [rsp+B0h] [rbp+48h] BYREF
  ULONG_PTR v28; // [rsp+B8h] [rbp+50h]
  __int64 v29; // [rsp+C0h] [rbp+58h] BYREF
  __int64 v30; // [rsp+C8h] [rbp+60h] BYREF

  v25 = 0LL;
  v23[0] = 0;
  LODWORD(v28) = -1;
  LODWORD(v29) = -1;
  v9 = -1;
  LODWORD(v30) = -1;
  LODWORD(v27) = -1;
  a7 = 0;
  v24 = 0xFFFFFFFF00000000uLL;
  v26 = 0LL;
  HvpGetCellContextInitialize(&v25);
  v12 = 0;
  v23[1] = (unsigned int)BugCheckParameter4 >> 31;
  if ( *(_WORD *)(a3 + 74) && *(_DWORD *)(a3 + 48) != v11 )
  {
    SecurityDescriptorNode = CmpCopyCell(BugCheckParameter3, (__int64)&v29);
    if ( SecurityDescriptorNode < 0 )
    {
      LODWORD(v28) = v29;
      goto LABEL_27;
    }
    a7 = *(_WORD *)(a3 + 74);
    LODWORD(v28) = v29;
  }
  CmpLockTwoSecurityCachesExclusiveShared(a4, BugCheckParameter3);
  v14 = *(_DWORD *)(a3 + 44);
  v12 = 1;
  LODWORD(v29) = 1;
  if ( CmpFindSecurityCellCacheIndex(BugCheckParameter3, v14, v23) )
  {
    SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                               a4,
                               (unsigned int)BugCheckParameter4,
                               (void *)(*(_QWORD *)(*(_QWORD *)(BugCheckParameter3 + 1888) + 16LL * v23[0] + 8) + 32LL),
                               0,
                               (__int64)&v30);
    if ( SecurityDescriptorNode >= 0 )
    {
      v15 = *(_DWORD *)(a3 + 36);
      v16 = (_BYTE *)(BugCheckParameter3 + 140);
      v23[0] = v15;
      if ( v15 )
      {
        if ( (*v16 & 1) != 0 )
          CellFlat = HvpGetCellFlat(BugCheckParameter3, *(unsigned int *)(a3 + 40));
        else
          CellFlat = HvpGetCellPaged(BugCheckParameter3);
        v26 = CellFlat;
        v18 = 0;
        while ( v18 < v15 )
        {
          SecurityDescriptorNode = CmpCopyValue(BugCheckParameter3, (__int64)&v27);
          if ( SecurityDescriptorNode < 0 )
          {
            v9 = v27;
            goto LABEL_21;
          }
          v9 = v27;
          SecurityDescriptorNode = CmpAddValueToListEx(a4, (__int64)&v24, v29);
          if ( SecurityDescriptorNode < 0 )
            goto LABEL_21;
          v15 = v23[0];
          v9 = -1;
          v18 += v29;
          LODWORD(v27) = -1;
        }
      }
      v19 = a6;
      SecurityDescriptorNode = CmpFreeKeyValues(a4);
      if ( SecurityDescriptorNode >= 0 )
      {
        *(_DWORD *)(v19 + 48) = v28;
        *(_WORD *)(v19 + 74) = a7;
        v20 = v24;
        LODWORD(v24) = 0;
        *(_QWORD *)(v19 + 36) = v20;
        *(_DWORD *)(v19 + 60) = *(_DWORD *)(a3 + 60);
        *(_DWORD *)(v19 + 64) = *(_DWORD *)(a3 + 64);
        LODWORD(v28) = -1;
        HIDWORD(v24) = -1;
        CmpFreeSecurityDescriptor(a4);
        v21 = v30;
        LODWORD(v30) = -1;
        SecurityDescriptorNode = 0;
        *(_DWORD *)(v19 + 44) = v21;
      }
LABEL_21:
      v12 = v29;
      if ( v26 )
      {
        if ( ((unsigned __int8)v29 & *v16) != 0 )
          HvpReleaseCellFlat(BugCheckParameter3, &v25);
        else
          HvpReleaseCellPaged(BugCheckParameter3, &v25);
      }
      if ( v9 != -1 )
        CmpFreeValue(a4, v9);
    }
  }
  else
  {
    SecurityDescriptorNode = -1073741492;
  }
LABEL_27:
  CmpFreeKeyValueList(a4, &v24);
  if ( (_DWORD)v28 != -1 )
    HvFreeCell(a4, (unsigned int)v28);
  if ( (_DWORD)v30 != -1 )
    CmpDereferenceSecurityNode(a4, v30);
  if ( v12 )
    CmpUnlockTwoSecurityCaches(a4, BugCheckParameter3);
  return (unsigned int)SecurityDescriptorNode;
}
