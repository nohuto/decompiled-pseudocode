/*
 * XREFs of CmKeyBodyReplicateToVirtual @ 0x140863588
 * Callers:
 *     NtRenameKey @ 0x1407C0DC0 (NtRenameKey.c)
 *     NtSetInformationKey @ 0x140862E30 (NtSetInformationKey.c)
 *     NtSetValueKey @ 0x140869680 (NtSetValueKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     CmpDrainDelayDerefContext @ 0x14041D8F0 (CmpDrainDelayDerefContext.c)
 *     CmpInitializeDelayDerefContext @ 0x14042A740 (CmpInitializeDelayDerefContext.c)
 *     KCBNeedsVirtualImage @ 0x14042EE34 (KCBNeedsVirtualImage.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpReparseToVirtualPath @ 0x1407CC3A8 (CmpReparseToVirtualPath.c)
 *     CmpReplicateKeyToVirtual @ 0x1407CC44C (CmpReplicateKeyToVirtual.c)
 *     CmpExamineSaclForAuditEvent @ 0x1407CD700 (CmpExamineSaclForAuditEvent.c)
 *     CmpReportAuditVirtualizationEvent @ 0x1407CE0A8 (CmpReportAuditVirtualizationEvent.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     CmpLockKcbExclusive @ 0x140874380 (CmpLockKcbExclusive.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     CmpInitializeParseContext @ 0x140913DE0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x140913E90 (CmpCleanupParseContext.c)
 *     CmpCheckAdminAccess @ 0x14099970C (CmpCheckAdminAccess.c)
 *     CmpSearchKeyControlBlockTreeEx @ 0x140A5691C (CmpSearchKeyControlBlockTreeEx.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140A72B68 (SeCreateAccessStateFromSubjectContext.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByName @ 0x140BA9D80 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall CmKeyBodyReplicateToVirtual(_QWORD **a1, char a2, ACCESS_MASK a3, __int64 a4)
{
  _QWORD *v7; // r14
  ULONG_PTR v8; // rdi
  __int64 v9; // rdx
  int AccessStateFromSubjectContext; // ebx
  __int64 v11; // rcx
  int v12; // r9d
  int v13; // eax
  __int64 v14; // rcx
  char v16; // [rsp+41h] [rbp-BFh]
  char v17; // [rsp+42h] [rbp-BEh]
  UNICODE_STRING DestinationString; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v19; // [rsp+58h] [rbp-A8h]
  __int64 v20; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD *v21; // [rsp+68h] [rbp-98h]
  __int128 v22; // [rsp+70h] [rbp-90h] BYREF
  __int128 v23; // [rsp+80h] [rbp-80h] BYREF
  __int128 v24; // [rsp+90h] [rbp-70h]
  __int128 v25; // [rsp+A0h] [rbp-60h]
  _DWORD v26[18]; // [rsp+B0h] [rbp-50h] BYREF
  __int64 v27; // [rsp+F8h] [rbp-8h]
  struct _KAPC_STATE ApcState; // [rsp+280h] [rbp+180h] BYREF
  _BYTE v29[160]; // [rsp+2B0h] [rbp+1B0h] BYREF
  _BYTE v30[224]; // [rsp+350h] [rbp+250h] BYREF

  v17 = a2;
  v21 = a1;
  v19 = 0LL;
  v16 = 0;
  DestinationString = 0LL;
  memset_0(v26, 0, 0x1D0uLL);
  memset(&ApcState, 0, sizeof(ApcState));
  v22 = 0LL;
  memset_0(v29, 0, sizeof(v29));
  memset_0(v30, 0, sizeof(v30));
  *(_QWORD *)&v25 = 0LL;
  DWORD2(v25) = 0;
  v23 = 0LL;
  v24 = 0LL;
  RtlInitUnicodeString(&DestinationString, 0LL);
  v7 = *a1;
  CmpInitializeParseContext(v26);
  v20 = 0LL;
  CmpInitializeDelayDerefContext(&v22);
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry();
  v8 = v7[1];
  CmpLockKcbExclusive(v8);
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
    CmpUnlockKcb(v8);
    CmpUnlockRegistry(v14);
    goto LABEL_15;
  }
  if ( !CmpReparseToVirtualPath(v8, v9, a4, &DestinationString) )
  {
    if ( (*(_DWORD *)(v8 + 184) & 0x20) == 0 )
    {
      AccessStateFromSubjectContext = CmpCheckAdminAccess(a3, (PSECURITY_DESCRIPTOR)(*(_QWORD *)(v8 + 88) + 32LL));
      if ( AccessStateFromSubjectContext < 0 )
        goto LABEL_14;
    }
    goto LABEL_13;
  }
  CmpUnlockKcb(v8);
  CmpDrainDelayDerefContext((_QWORD **)&v22);
  CmpUnlockRegistry(v11);
  v26[0] = 8;
  v27 = v7[7];
  AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                    a4,
                                    (unsigned int)v29,
                                    (unsigned int)v30,
                                    a3,
                                    (__int64)CmKeyObjectType + 76);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    *((_QWORD *)&v23 + 1) = 0LL;
    v13 = 1600;
    LODWORD(v23) = 48;
    if ( v17 != 1 )
      v13 = 576;
    DWORD2(v24) = v13;
    *(_QWORD *)&v24 = &DestinationString;
    v25 = 0LL;
    AccessStateFromSubjectContext = CmObReferenceObjectByName(
                                      (unsigned int)&v23,
                                      (unsigned int)v29,
                                      a3,
                                      v12,
                                      0,
                                      (__int64)v26,
                                      (__int64)&v20);
    if ( AccessStateFromSubjectContext >= 0 )
    {
      *v21 = v20;
      ObfDereferenceObject(v7);
      AccessStateFromSubjectContext = 0;
    }
    SeDeleteAccessState((__int64)v29);
  }
LABEL_15:
  CmpCleanupParseContext(v26, 0LL);
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpDetachFromRegistryProcess(&ApcState);
  return (unsigned int)AccessStateFromSubjectContext;
}
