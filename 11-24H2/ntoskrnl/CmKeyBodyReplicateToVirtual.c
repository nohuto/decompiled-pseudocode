/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x140978D18
 * Callers:
 *     NtRenameKey @ 0x1407D04D0 (NtRenameKey.c)
 *     NtSetValueKey @ 0x14086A810 (NtSetValueKey.c)
 *     NtSetInformationKey @ 0x1409785A0 (NtSetInformationKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     CmpDrainDelayDerefContext @ 0x14041AEB0 (CmpDrainDelayDerefContext.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     CmpInitializeDelayDerefContext @ 0x140424470 (CmpInitializeDelayDerefContext.c)
 *     KCBNeedsVirtualImage @ 0x140426A4C (KCBNeedsVirtualImage.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpReparseToVirtualPath @ 0x1407DBB68 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1407DBC0C (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x1407DCEC0 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407DD868 (CmpReportAuditVirtualizationEvent.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     CmpLockKcbExclusive @ 0x140870470 (CmpLockKcbExclusive.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     CmpInitializeParseContext @ 0x14092D400 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092D4B0 (CmpCleanupParseContext.c)
 *     CmpCheckAdminAccess @ 0x1409A7658 (CmpCheckAdminAccess.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A4F298 (CmpSearchKeyControlBlockTreeEx.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140A74EC8 (SeCreateAccessStateFromSubjectContext.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BB97D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByName @ 0x140BB9CF8 (CmObReferenceObjectByName.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(_QWORD **a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  _QWORD *v7; // r14
  __int64 v8; // rcx
  ULONG_PTR v9; // rdi
  __int64 v10; // rdx
  int AccessStateFromSubjectContext; // ebx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rcx
  char v21; // [rsp+41h] [rbp-BFh]
  char v22; // [rsp+42h] [rbp-BEh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v24; // [rsp+58h] [rbp-A8h]
  __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v26; // [rsp+68h] [rbp-98h]
  __int128 v27; // [rsp+70h] [rbp-90h] BYREF
  __int128 v28; // [rsp+80h] [rbp-80h] BYREF
  __int128 v29; // [rsp+90h] [rbp-70h]
  __int128 v30; // [rsp+A0h] [rbp-60h]
  _DWORD v31[18]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-8h]
  struct _KAPC_STATE ApcState; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v34[160]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v35[224]; // [rsp+350h] [rbp+250h] BYREF

  v22 = a2;
  v26 = a1;
  v24 = 0LL;
  v21 = 0;
  DestinationString = 0LL;
  memset_0(v31, 0, 0x1D0uLL);
  memset(&ApcState, 0, sizeof(ApcState));
  v27 = 0LL;
  memset_0(v34, 0, sizeof(v34));
  memset_0(v35, 0, sizeof(v35));
  *(_QWORD *)&v30 = 0LL;
  DWORD2(v30) = 0;
  v28 = 0LL;
  v29 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = *a1;
  CmpInitializeParseContext((__int64)v31);
  v25 = 0LL;
  CmpInitializeDelayDerefContext(&v27);
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
    CmpUnlockRegistry(v19);
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
  CmpDrainDelayDerefContext((_QWORD **)&v27);
  CmpUnlockRegistry(v12);
  v31[0] = 8;
  v32 = v7[7];
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a4,
                                    (unsigned int)v34,
                                    (unsigned int)v35,
                                    a3,
                                    (__int64)CmKeyObjectType + 76);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    *((_QWORD *)&v28 + 1) = 0LL;
    v15 = 1600;
    LODWORD(v28) = 48;
    if ( v22 != 1 )
      v15 = 576;
    DWORD2(v29) = v15;
    *(_QWORD *)&v29 = &DestinationString;
    v30 = 0LL;
    AccessStateFromSubjectContext = CmObReferenceObjectByName(
                                      (unsigned int)&v28,
                                      (unsigned int)v34,
                                      a3,
                                      v14,
                                      0,
                                      (__int64)v31,
                                      (__int64)&v25);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v26 = v25;
      ObfDereferenceObject(v7);
      AccessStateFromSubjectContext = 0;
    }
    SeDeleteAccessState((__int64)v34, v16, v17, v18);
  }
LABEL_15:
  CmpCleanupParseContext((__int64)v31, 0, v13, v14);
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)AccessStateFromSubjectContext;
}
