/*
 * XREFs of CmpCreateHiveRootCell @ 0x140AA2078
 * Callers:
 *     CmpDoParseKey @ 0x140872AE0 (CmpDoParseKey.c)
 * Callees:
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpGenerateAppHiveSecurityDescriptor @ 0x1407DD50C (CmpGenerateAppHiveSecurityDescriptor.c)
 *     CmpRecordParseFailure @ 0x140841F00 (CmpRecordParseFailure.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     HvpGetCellContextInitialize @ 0x140879A60 (HvpGetCellContextInitialize.c)
 *     HvpReleaseCellPaged @ 0x140879A90 (HvpReleaseCellPaged.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     CmLockHiveSecurityExclusive @ 0x14088427C (CmLockHiveSecurityExclusive.c)
 *     CmpGetSecurityDescriptorNodeEx @ 0x14088452C (CmpGetSecurityDescriptorNodeEx.c)
 *     CmpNameSize @ 0x140885A7C (CmpNameSize.c)
 *     HvFreeCell @ 0x140885AB4 (HvFreeCell.c)
 *     HvAllocateCell @ 0x140886188 (HvAllocateCell.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     CmpCopyName @ 0x1408870F8 (CmpCopyName.c)
 *     HvpReleaseCellFlat @ 0x140888A60 (HvpReleaseCellFlat.c)
 *     SeAssignSecurity @ 0x14090C530 (SeAssignSecurity.c)
 *     HvMarkBaseBlockDirty @ 0x1409335C8 (HvMarkBaseBlockDirty.c)
 *     SeDeassignSecurity @ 0x140A1B040 (SeDeassignSecurity.c)
 *     HvCheckAndUpdateHiveBackupTimeStamp @ 0x140A4CD78 (HvCheckAndUpdateHiveBackupTimeStamp.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmUnlockHiveSecurity @ 0x140BBB9C8 (CmUnlockHiveSecurity.c)
 */

__int64 __fastcall CmpCreateHiveRootCell(
        ULONG_PTR BugCheckParameter3,
        __int64 a2,
        unsigned __int16 *a3,
        __int64 a4,
        unsigned int *a5)
{
  unsigned int v9; // r14d
  int v10; // eax
  int SecurityDescriptorNode; // ebx
  _DWORD *v12; // r15
  unsigned int v13; // r14d
  _DWORD *v14; // rbx
  unsigned __int16 v15; // ax
  int v16; // edx
  int v17; // r8d
  NTSTATUS v18; // eax
  int v19; // edx
  PSECURITY_DESCRIPTOR v20; // r12
  __int64 v21; // rsi
  void *v22; // rcx
  PSECURITY_DESCRIPTOR NewDescriptor; // [rsp+40h] [rbp-20h] BYREF
  void *v25; // [rsp+48h] [rbp-18h] BYREF
  __int64 v26[2]; // [rsp+50h] [rbp-10h] BYREF
  ULONG_PTR BugCheckParameter4; // [rsp+90h] [rbp+30h] BYREF

  LODWORD(BugCheckParameter4) = -1;
  v26[0] = 0LL;
  v25 = 0LL;
  HvpGetCellContextInitialize(v26);
  NewDescriptor = 0LL;
  HvLockHiveFlusherShared(BugCheckParameter3);
  v9 = (unsigned __int16)CmpNameSize(a3) + 76;
  v10 = HvAllocateCell(BugCheckParameter3, v9, 0, (unsigned int *)&BugCheckParameter4, &v25, (__int64)v26);
  SecurityDescriptorNode = v10;
  if ( v10 < 0 )
  {
    CmpRecordParseFailure(a4, 196864, v10);
    v12 = v25;
LABEL_3:
    v13 = BugCheckParameter4;
    goto LABEL_18;
  }
  v14 = v25;
  memset_0(v25, 0, v9);
  *v14 = 813934;
  v12 = v25;
  *(_QWORD *)((char *)v25 + 4) = MEMORY[0xFFFFF78000000014];
  v12[4] = -1;
  v12[7] = -1;
  v12[8] = -1;
  v12[10] = -1;
  v12[11] = -1;
  v12[12] = -1;
  v15 = CmpCopyName((_BYTE *)v12 + 76, (const void **)a3);
  *((_WORD *)v12 + 36) = v15;
  if ( v15 < *a3 )
    *((_WORD *)v12 + 1) |= 0x20u;
  if ( (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) != 0 )
  {
    NewDescriptor = CmpGenerateAppHiveSecurityDescriptor(a2 + 32);
    if ( !NewDescriptor )
    {
      SecurityDescriptorNode = -1073741670;
      v16 = 197120;
      v17 = -1073741670;
LABEL_9:
      CmpRecordParseFailure(a4, v16, v17);
      goto LABEL_3;
    }
  }
  else
  {
    v18 = SeAssignSecurity(
            0LL,
            *(PSECURITY_DESCRIPTOR *)(a2 + 64),
            &NewDescriptor,
            1u,
            (PSECURITY_SUBJECT_CONTEXT)(a2 + 32),
            (PGENERIC_MAPPING)((char *)CmKeyObjectType + 76),
            *((POOL_TYPE *)CmKeyObjectType + 25));
    SecurityDescriptorNode = v18;
    if ( v18 < 0 )
    {
      v17 = v18;
      v16 = 197376;
      goto LABEL_9;
    }
  }
  CmLockHiveSecurityExclusive(BugCheckParameter3);
  v13 = BugCheckParameter4;
  SecurityDescriptorNode = CmpGetSecurityDescriptorNodeEx(
                             BugCheckParameter3,
                             (unsigned int)BugCheckParameter4,
                             (__int64)v12,
                             (unsigned int)BugCheckParameter4 >> 31,
                             NewDescriptor,
                             0,
                             v12 + 11);
  CmUnlockHiveSecurity(BugCheckParameter3);
  if ( SecurityDescriptorNode < 0 )
  {
    v19 = 197632;
LABEL_14:
    CmpRecordParseFailure(a4, v19, SecurityDescriptorNode);
    goto LABEL_18;
  }
  HvLockHiveWriter(*(_QWORD *)(a4 + 48));
  HvMarkBaseBlockDirty(*(_QWORD *)(a4 + 48));
  SecurityDescriptorNode = HvCheckAndUpdateHiveBackupTimeStamp(*(_QWORD *)(a4 + 48));
  HvUnlockHiveWriter(*(_QWORD *)(a4 + 48));
  if ( SecurityDescriptorNode < 0 )
  {
    v19 = 197888;
    goto LABEL_14;
  }
  *(_DWORD *)(*(_QWORD *)(BugCheckParameter3 + 64) + 36LL) = v13;
  *a5 = v13;
  v13 = -1;
  SecurityDescriptorNode = 0;
LABEL_18:
  v20 = NewDescriptor;
  if ( NewDescriptor )
  {
    if ( (*(_DWORD *)(BugCheckParameter3 + 4112) & 0x20) != 0 )
    {
      ExFreePoolWithTag(NewDescriptor, 0);
    }
    else if ( (*(_DWORD *)a4 & 1) != 0 && (*(_DWORD *)(a4 + 24) & 4) != 0 )
    {
      SeDeassignSecurity(&NewDescriptor);
    }
    else
    {
      v21 = *(_QWORD *)(a2 + 72);
      if ( (*(_DWORD *)(a2 + 12) & 0x4000000) == 0 )
      {
        v22 = *(void **)(v21 + 48);
        if ( v22 )
          ExFreePoolWithTag(v22, 0);
      }
      *(_DWORD *)(a2 + 12) &= ~0x4000000u;
      *(_QWORD *)(v21 + 48) = v20;
    }
  }
  if ( v12 )
  {
    if ( (*(_BYTE *)(BugCheckParameter3 + 140) & 1) != 0 )
      HvpReleaseCellFlat(BugCheckParameter3, (__int64)v26);
    else
      HvpReleaseCellPaged(BugCheckParameter3, (unsigned int *)v26);
  }
  if ( v13 != -1 )
    HvFreeCell(BugCheckParameter3, v13);
  HvUnlockHiveFlusherShared(BugCheckParameter3);
  return (unsigned int)SecurityDescriptorNode;
}
