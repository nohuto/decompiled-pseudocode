/*
 * XREFs of CmSaveMergedKeys @ 0x1407CE550
 * Callers:
 *     NtSaveMergedKeys @ 0x1407D1580 (NtSaveMergedKeys.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     CmpCreateTemporaryHive @ 0x1407CEA38 (CmpCreateTemporaryHive.c)
 *     CmpCopySyncTree @ 0x1407E2380 (CmpCopySyncTree.c)
 *     CmpMergeKeyValues @ 0x1407E24E4 (CmpMergeKeyValues.c)
 *     HvpGetCellFlat @ 0x1408787A0 (HvpGetCellFlat.c)
 *     HvpGetCellPaged @ 0x1408787F0 (HvpGetCellPaged.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     CmpCopyKeyPartial @ 0x140884DC0 (CmpCopyKeyPartial.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     CmpBlockTwoHiveWrites @ 0x1408E2704 (CmpBlockTwoHiveWrites.c)
 *     CmpLogUnsupportedOperation @ 0x140963320 (CmpLogUnsupportedOperation.c)
 *     CmpDestroyHive @ 0x14096495C (CmpDestroyHive.c)
 *     CmpLockTwoKcbsShared @ 0x1409E8950 (CmpLockTwoKcbsShared.c)
 *     CmpUnlockTwoKcbs @ 0x1409EA714 (CmpUnlockTwoKcbs.c)
 *     HvWriteExternal @ 0x140A66710 (HvWriteExternal.c)
 *     CmpUuidCreate @ 0x140A9C598 (CmpUuidCreate.c)
 *     CmpIsKeyDeletedForKeyBody @ 0x140BBB480 (CmpIsKeyDeletedForKeyBody.c)
 *     CmLockHiveSecurityShared @ 0x140BBB96C (CmLockHiveSecurityShared.c)
 *     CmUnlockHiveSecurity @ 0x140BBB9C8 (CmUnlockHiveSecurity.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BBBA98 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BBBAB4 (HvLockHiveFlusherExclusive.c)
 *     CmpDoAccessCheckOnSubtree @ 0x140BBBB34 (CmpDoAccessCheckOnSubtree.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmSaveMergedKeys(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v5; // rax
  __int64 v6; // r13
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // r15
  ULONG_PTR v9; // r14
  int v10; // ebx
  char v11; // si
  unsigned int v12; // r12d
  int v13; // r9d
  int v14; // edx
  __int64 CellFlat; // rax
  __int64 CellPaged; // rax
  __int64 v17; // r12
  __int64 v18; // rcx
  __int64 v19; // rcx
  ULONG_PTR v21; // [rsp+28h] [rbp-91h]
  unsigned int BugCheckParameter4; // [rsp+44h] [rbp-75h] BYREF
  unsigned int BugCheckParameter4_4; // [rsp+48h] [rbp-71h]
  _DWORD v24[2]; // [rsp+50h] [rbp-69h] BYREF
  _DWORD v25[2]; // [rsp+58h] [rbp-61h] BYREF
  int v26; // [rsp+60h] [rbp-59h]
  __int64 v27; // [rsp+68h] [rbp-51h]
  __int64 v28; // [rsp+70h] [rbp-49h]
  __int64 v29; // [rsp+78h] [rbp-41h] BYREF
  UUID v30; // [rsp+80h] [rbp-39h] BYREF
  UUID Uuid; // [rsp+90h] [rbp-29h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v32; // [rsp+A0h] [rbp-19h] BYREF
  __int64 *v33; // [rsp+C0h] [rbp+7h]
  __int64 v34; // [rsp+C8h] [rbp+Fh]

  v29 = a3;
  BugCheckParameter4 = 0;
  v25[1] = 0;
  v5 = *(_QWORD *)(a1 + 8);
  Uuid = 0LL;
  v6 = *(_QWORD *)(a2 + 8);
  v7 = 0LL;
  v28 = v5;
  v30 = 0LL;
  v8 = *(_QWORD *)(v5 + 32);
  v9 = *(_QWORD *)(v6 + 32);
  v26 = *(_DWORD *)(v5 + 40);
  LODWORD(v5) = *(_DWORD *)(v6 + 40);
  v24[1] = 0;
  BugCheckParameter4_4 = v5;
  v25[0] = -1;
  v24[0] = -1;
  v27 = v6;
  v10 = CmpUuidCreate(&Uuid);
  if ( v10 >= 0 )
  {
    v10 = CmpUuidCreate(&v30);
    if ( v10 >= 0 )
    {
      if ( v9 != CmpMasterHive && v8 != CmpMasterHive )
      {
        if ( v9 == v8 )
          return (unsigned int)-1073741811;
        CmpLockRegistry();
        CmpLockTwoKcbsShared(v28, v6);
        if ( *(_WORD *)(v28 + 66) || *(_WORD *)(v27 + 66) )
        {
          CmpLogUnsupportedOperation(19LL);
          v10 = -1073741822;
          goto LABEL_56;
        }
        if ( (unsigned __int8)CmpIsKeyDeletedForKeyBody(a1, 0LL) || (unsigned __int8)CmpIsKeyDeletedForKeyBody(a2, 0LL) )
        {
          v10 = -1073741444;
          goto LABEL_56;
        }
        if ( (*(_DWORD *)(v8 + 160) & 2) != 0 && *(_DWORD *)(v8 + 104)
          || (*(_DWORD *)(v9 + 160) & 2) != 0 && *(_DWORD *)(v9 + 104) )
        {
          v10 = -1073741811;
          goto LABEL_56;
        }
        v7 = CmpCreateTemporaryHive(&Uuid, &v30);
        if ( !v7 )
        {
          v10 = -1073741670;
          goto LABEL_56;
        }
        v10 = CmpBlockTwoHiveWrites(v9, v8, 0LL);
        if ( v10 < 0 )
        {
LABEL_56:
          CmpUnlockTwoKcbs(v28, v27);
          CmpUnlockRegistry(v19);
          if ( !v7 )
            return (unsigned int)v10;
LABEL_57:
          CmpDestroyHive(v7);
          return (unsigned int)v10;
        }
        v11 = 6;
        CmLockHiveSecurityShared(v8);
        v10 = CmpDoAccessCheckOnSubtree(v8, 3);
        CmUnlockHiveSecurity(v8);
        if ( v10 >= 0 )
        {
          CmLockHiveSecurityShared(v9);
          v10 = CmpDoAccessCheckOnSubtree(v9, 3);
          CmUnlockHiveSecurity(v9);
          if ( v10 >= 0 )
          {
            HvLockHiveFlusherExclusive(v7);
            v11 = 7;
            v10 = CmpCopyKeyPartial(v8, 6, v21, 0, (__int64)&BugCheckParameter4);
            if ( v10 >= 0 )
            {
              v12 = BugCheckParameter4;
              v13 = BugCheckParameter4;
              v14 = v26;
              *(_DWORD *)(*(_QWORD *)(v7 + 64) + 36LL) = BugCheckParameter4;
              v10 = CmpCopySyncTree(v8, v14, v7, v13, 2, 0);
              if ( v10 >= 0 )
              {
                HvUnlockHiveFlusherExclusive(v8);
                v11 = 5;
                if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
                  CellFlat = HvpGetCellFlat(v9, BugCheckParameter4_4);
                else
                  CellFlat = HvpGetCellPaged(v9);
                if ( CellFlat )
                {
                  if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
                    CellPaged = HvpGetCellFlat(v7, v12);
                  else
                    CellPaged = HvpGetCellPaged(v7);
                  v17 = CellPaged;
                  if ( CellPaged )
                  {
                    v10 = CmpMergeKeyValues(v9, BugCheckParameter4, CellPaged);
                    if ( v10 >= 0 )
                    {
                      if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v9, v24);
                      else
                        HvpReleaseCellPaged(v9, v24);
                      if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
                        HvpReleaseCellFlat(v7, v25);
                      else
                        HvpReleaseCellPaged(v7, v25);
                      v10 = CmpCopySyncTree(v9, BugCheckParameter4_4, v7, BugCheckParameter4, 2, 2);
                      if ( v10 >= 0 )
                      {
                        HvUnlockHiveFlusherExclusive(v9);
                        HvUnlockHiveFlusherExclusive(v7);
                        CmpUnlockTwoKcbs(v28, v27);
                        CmpUnlockRegistry(v18);
                        *(_QWORD *)(v7 + 1560) = v29;
                        v10 = HvWriteExternal(v7);
                        *(_QWORD *)(v7 + 1560) = 0LL;
                        goto LABEL_57;
                      }
                      goto LABEL_49;
                    }
                  }
                  else
                  {
                    v10 = -1073741670;
                  }
                  if ( (*(_BYTE *)(v9 + 140) & 1) != 0 )
                    HvpReleaseCellFlat(v9, v24);
                  else
                    HvpReleaseCellPaged(v9, v24);
                  if ( v17 )
                  {
                    if ( (*(_BYTE *)(v7 + 140) & 1) != 0 )
                      HvpReleaseCellFlat(v7, v25);
                    else
                      HvpReleaseCellPaged(v7, v25);
                  }
                }
                else
                {
                  v10 = -1073741670;
                }
              }
            }
          }
        }
LABEL_49:
        HvUnlockHiveFlusherExclusive(v9);
        if ( (v11 & 2) != 0 )
          HvUnlockHiveFlusherExclusive(v8);
        if ( (v11 & 1) != 0 )
          HvUnlockHiveFlusherExclusive(v7);
        goto LABEL_56;
      }
      if ( (unsigned int)dword_140E09F58 > 5 && tlgKeywordOn((__int64)&dword_140E09F58, 0x400000000000LL) )
      {
        v29 = 0x1000000LL;
        v33 = &v29;
        v34 = 8LL;
        tlgWriteTransfer_EtwWriteTransfer(
          (__int64)&dword_140E09F58,
          (unsigned __int8 *)&word_140054FD6,
          0LL,
          0LL,
          3u,
          &v32);
      }
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)v10;
}
