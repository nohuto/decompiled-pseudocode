/*
 * XREFs of CmpFlushBackupHive @ 0x1407CCAF8
 * Callers:
 *     CmpSyncNextBackupHive @ 0x1407CD018 (CmpSyncNextBackupHive.c)
 * Callees:
 *     RtlAppendUnicodeToString @ 0x140404370 (RtlAppendUnicodeToString.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwSetInformationFile @ 0x14069B620 (ZwSetInformationFile.c)
 *     ZwSetInformationObject @ 0x14069BCC0 (ZwSetInformationObject.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpCmdRenameHive @ 0x1407C61E4 (CmpCmdRenameHive.c)
 *     CmpFreeOffsetArray @ 0x1407CCE90 (CmpFreeOffsetArray.c)
 *     CmpInitBackupHive @ 0x1407CCEE4 (CmpInitBackupHive.c)
 *     CmpWriteOffsetArrayToFile @ 0x1407CD17C (CmpWriteOffsetArrayToFile.c)
 *     HvAllocateOffsetArraysForHiveSnapshot @ 0x1407D3DD4 (HvAllocateOffsetArraysForHiveSnapshot.c)
 *     CmpCmdHiveOpen @ 0x140911900 (CmpCmdHiveOpen.c)
 *     CmpDestroyHive @ 0x1409F4BE0 (CmpDestroyHive.c)
 *     RtlAppendStringToString @ 0x140A7D0B0 (RtlAppendStringToString.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     HvSnapshotHiveToOffsetArray @ 0x140BA95C0 (HvSnapshotHiveToOffsetArray.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     HvUnlockHiveFlusherExclusive @ 0x140BA9B20 (HvUnlockHiveFlusherExclusive.c)
 *     HvLockHiveFlusherExclusive @ 0x140BA9B3C (HvLockHiveFlusherExclusive.c)
 */

__int64 __fastcall CmpFlushBackupHive(unsigned int a1)
{
  __int64 v1; // rbx
  __int64 v2; // r12
  char v3; // r13
  wchar_t *v4; // r14
  HANDLE *v5; // rsi
  void *v6; // r15
  NTSTATUS inited; // edi
  __int64 v8; // rdx
  __int64 v9; // r12
  __int64 v10; // rcx
  int v11; // ecx
  HANDLE v12; // rcx
  __int64 v13; // rbx
  __int64 v14; // rcx
  HANDLE v15; // rcx
  unsigned int ObjectInformation; // [rsp+58h] [rbp-B0h] BYREF
  char v18; // [rsp+5Ch] [rbp-ACh]
  char FileInformation[3]; // [rsp+5Dh] [rbp-ABh] BYREF
  int v20; // [rsp+60h] [rbp-A8h] BYREF
  STRING Destination; // [rsp+68h] [rbp-A0h] BYREF
  int v22[2]; // [rsp+78h] [rbp-90h] BYREF
  __int64 v23; // [rsp+80h] [rbp-88h]
  UNICODE_STRING DestinationString; // [rsp+88h] [rbp-80h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+98h] [rbp-70h] BYREF
  struct _KAPC_STATE ApcState; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v27[54]; // [rsp+D8h] [rbp-30h] BYREF
  char v28; // [rsp+288h] [rbp+180h] BYREF

  v1 = a1;
  FileInformation[0] = 1;
  *(_DWORD *)(&Destination.MaximumLength + 1) = 0;
  v23 = 0LL;
  ObjectInformation = 0;
  DestinationString = 0LL;
  *(_QWORD *)v22 = 0LL;
  v20 = 0;
  IoStatusBlock = 0LL;
  memset(&ApcState, 0, sizeof(ApcState));
  memset_0(v27, 0, sizeof(v27));
  v2 = 23 * v1;
  v3 = 0;
  v18 = 0;
  v4 = CmpMachineHiveList[23 * v1 + 6];
  if ( !CmpDoIdleProcessing )
    return (unsigned int)-1073741431;
  *(_DWORD *)&Destination.Length = 0x800000;
  Destination.Buffer = &v28;
  RtlInitUnicodeString(&DestinationString, L"\\SystemRoot\\System32\\Config\\RegBack\\");
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlInitUnicodeString(&DestinationString, CmpMachineHiveList[v2]);
  RtlAppendStringToString(&Destination, (const STRING *)&DestinationString);
  RtlAppendUnicodeToString((PUNICODE_STRING)&Destination, L".OLD");
  v5 = (HANDLE *)(v4 + 784);
  v6 = (void *)*((_QWORD *)v4 + 196);
  if ( v6 )
  {
    inited = CmpCmdRenameHive(v6, 0LL, (const void **)&Destination, 0, 1);
    if ( inited < 0 )
      goto LABEL_11;
    v18 = 1;
    Destination.Length -= 8;
    *v5 = 0LL;
    inited = CmpInitBackupHive(v4, CmpMachineHiveList[v2]);
    if ( inited < 0 )
      goto LABEL_11;
    CmpAttachToRegistryProcess(&ApcState);
    CmpLockRegistry();
    v3 = 1;
    HvLockHiveFlusherExclusive(v4);
    inited = HvAllocateOffsetArraysForHiveSnapshot(v4, &ObjectInformation, v22, &v20);
    if ( inited < 0 )
      goto LABEL_11;
    v9 = *(_QWORD *)v22;
    inited = HvSnapshotHiveToOffsetArray(v4, v8, *(_QWORD *)v22);
    if ( inited < 0 )
      goto LABEL_11;
    HvUnlockHiveFlusherExclusive(v4);
    CmpUnlockRegistry(v10);
    v3 = 0;
    CmpDetachFromRegistryProcess(&ApcState);
    inited = CmpWriteOffsetArrayToFile(v11, ObjectInformation, v9, v20, *v5);
    CmpFreeOffsetArray(ObjectInformation, v9);
    if ( inited < 0
      || (v12 = *v5,
          LOWORD(ObjectInformation) = 0,
          ZwSetInformationObject(v12, ObjectHandleFlagInformation, &ObjectInformation, 2u),
          ZwClose(*v5),
          *v5 = 0LL,
          LOBYTE(ObjectInformation) = 0,
          inited = CmpCmdHiveOpen((int)&Destination, 18415617, 0, 0LL, 0LL, (__int64)v27),
          inited < 0) )
    {
LABEL_11:
      if ( v3 )
      {
        HvUnlockHiveFlusherExclusive(v4);
        CmpUnlockRegistry(v14);
        CmpDetachFromRegistryProcess(&ApcState);
      }
      if ( v18 )
      {
        v15 = *v5;
        if ( *v5 )
        {
          LOWORD(ObjectInformation) = 0;
          ZwSetInformationObject(v15, ObjectHandleFlagInformation, &ObjectInformation, 2u);
          ZwClose(*v5);
          *v5 = 0LL;
        }
        inited = CmpCmdRenameHive(v6, 0LL, (const void **)&Destination, 0, 1);
        if ( inited >= 0 )
          *v5 = v6;
      }
    }
    else
    {
      v13 = v23;
      *v5 = *(HANDLE *)(v23 + 1544);
      *(_QWORD *)(v13 + 1544) = 0LL;
      CmpAttachToRegistryProcess(&ApcState);
      CmpDestroyHive(v13);
      CmpDetachFromRegistryProcess(&ApcState);
      ZwSetInformationFile(v6, &IoStatusBlock, FileInformation, 1u, FileDispositionInformation);
      LOWORD(ObjectInformation) = 0;
      ZwSetInformationObject(v6, ObjectHandleFlagInformation, &ObjectInformation, 2u);
      ZwClose(v6);
    }
  }
  else
  {
    return (unsigned int)-1073741431;
  }
  return (unsigned int)inited;
}
