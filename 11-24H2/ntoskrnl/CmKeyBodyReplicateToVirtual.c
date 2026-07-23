/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x140961528
 * Callers:
 *     NtRenameKey @ 0x1407D09C0 (NtRenameKey.c)
 *     NtSetValueKey @ 0x14086EB40 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x140960DB0 (NtSetInformationKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     CmpDrainDelayDerefContext @ 0x14040AEB0 (CmpDrainDelayDerefContext.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     CmpInitializeDelayDerefContext @ 0x140418320 (CmpInitializeDelayDerefContext.c)
 *     KCBNeedsVirtualImage @ 0x14041A8FC (KCBNeedsVirtualImage.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpReparseToVirtualPath @ 0x1407DC0B8 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1407DC15C (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x1407DD410 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407DDDB8 (CmpReportAuditVirtualizationEvent.c)
 *     SeDeleteAccessState @ 0x14083D240 (SeDeleteAccessState.c)
 *     CmpLockKcbExclusive @ 0x1408747A0 (CmpLockKcbExclusive.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     CmpInitializeParseContext @ 0x14092F540 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092F5F0 (CmpCleanupParseContext.c)
 *     CmpCheckAdminAccess @ 0x140990AA8 (CmpCheckAdminAccess.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A46048 (CmpSearchKeyControlBlockTreeEx.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140A6F1E8 (SeCreateAccessStateFromSubjectContext.c)
 *     CmpUnlockKcb @ 0x140BBB2C0 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BBB7D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByName @ 0x140BBBCF8 (CmObReferenceObjectByName.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(_QWORD **a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  _QWORD *v7; // r14
  __int64 v8; // rcx
  ULONG_PTR v9; // rdi
  __int64 v10; // rdx
  int AccessStateFromSubjectContext; // ebx
  __int64 v12; // rcx
  int v13; // r9d
  int v14; // eax
  __int64 v15; // rcx
  char v17; // [rsp+41h] [rbp-BFh]
  char v18; // [rsp+42h] [rbp-BEh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h]
  __int64 v21; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v22; // [rsp+68h] [rbp-98h]
  __int128 v23; // [rsp+70h] [rbp-90h] BYREF
  __int128 v24; // [rsp+80h] [rbp-80h] BYREF
  __int128 v25; // [rsp+90h] [rbp-70h]
  __int128 v26; // [rsp+A0h] [rbp-60h]
  _DWORD v27[18]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v28; // [rsp+F8h] [rbp-8h]
  struct _KAPC_STATE ApcState; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v30[160]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v31[224]; // [rsp+350h] [rbp+250h] BYREF

  v18 = a2;
  v22 = a1;
  v20 = 0LL;
  v17 = 0;
  DestinationString = 0LL;
  memset_0(v27, 0, 0x1D0uLL);
  memset(&ApcState, 0, sizeof(ApcState));
  v23 = 0LL;
  memset_0(v30, 0, sizeof(v30));
  memset_0(v31, 0, sizeof(v31));
  *(_QWORD *)&v26 = 0LL;
  DWORD2(v26) = 0;
  v24 = 0LL;
  v25 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = *a1;
  CmpInitializeParseContext((__int64)v27);
  v21 = 0LL;
  CmpInitializeDelayDerefContext(&v23);
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v8);
  v9 = v7[1];
  CmpLockKcbExclusive(v9);
  if ( !KCBNeedsVirtualImage() )
  {
LABEL_13:
    AccessStateFromSubjectContext = -1073741790;
    goto LABEL_14;
  }
  AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v7, 0LL);
  if ( AccessStateFromSubjectContext < 0 )
  {
LABEL_14:
    CmpUnlockKcb(v9);
    CmpUnlockRegistry(v15);
    goto LABEL_15;
  }
  if ( !CmpReparseToVirtualPath(v9, v10, a4, &DestinationString) )
  {
    if ( (*(_DWORD *)(v9 + 184) & 0x20) == 0 )
    {
      AccessStateFromSubjectContext = CmpCheckAdminAccess(a3, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v9 + 88) + 32LL));
      if ( AccessStateFromSubjectContext < 0 )
        goto LABEL_14;
    }
    goto LABEL_13;
  }
  CmpUnlockKcb(v9);
  CmpDrainDelayDerefContext((_QWORD **)&v23);
  CmpUnlockRegistry(v12);
  v27[0] = 8;
  v28 = v7[7];
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a4,
                                    (unsigned int)v30,
                                    (unsigned int)v31,
                                    a3,
                                    (__int64)CmKeyObjectType + 76);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    *((_QWORD *)&v24 + 1) = 0LL;
    v14 = 1600;
    LODWORD(v24) = 48;
    if ( v18 != 1 )
      v14 = 576;
    DWORD2(v25) = v14;
    *(_QWORD *)&v25 = &DestinationString;
    v26 = 0LL;
    AccessStateFromSubjectContext = CmObReferenceObjectByName(
                                      (unsigned int)&v24,
                                      (unsigned int)v30,
                                      a3,
                                      v13,
                                      0,
                                      (__int64)v27,
                                      (__int64)&v21);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v22 = v21;
      ObfDereferenceObject(v7);
      AccessStateFromSubjectContext = 0;
    }
    SeDeleteAccessState((__int64)v30);
  }
LABEL_15:
  CmpCleanupParseContext((__int64)v27, 0);
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)AccessStateFromSubjectContext;
}
