/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x14097A7E4
 * Callers:
 *     NtDeleteKey @ 0x1408697B0 (NtDeleteKey.c)
 *     NtDeleteValueKey @ 0x140979A90 (NtDeleteValueKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     KCBNeedsVirtualImage @ 0x140426A4C (KCBNeedsVirtualImage.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpReparseToVirtualPath @ 0x1407DBB68 (CmpReparseToVirtualPath.c)
 *     SeDeleteAccessState @ 0x140840F80 (SeDeleteAccessState.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     CmpInitializeParseContext @ 0x14092D400 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092D4B0 (CmpCleanupParseContext.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140A74EC8 (SeCreateAccessStateFromSubjectContext.c)
 *     CmpUnlockKcb @ 0x140BB92C0 (CmpUnlockKcb.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BB97D0 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmpLockKcbShared @ 0x140BB9A1C (CmpLockKcbShared.c)
 *     CmObReferenceObjectByName @ 0x140BB9CF8 (CmObReferenceObjectByName.c)
 *     CmpLockRegistry @ 0x140BB9E60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1, char a2, int a3, __int64 a4, _DWORD *a5)
{
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rsi
  ULONG_PTR v11; // rdi
  int AccessStateFromSubjectContext; // ebx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v18; // rcx
  int v19; // r9d
  int v20; // eax
  __int64 v21; // rdx
  __int64 v22; // r8
  __int64 v23; // r9
  __int64 v25; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v27[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v28; // [rsp+68h] [rbp-98h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-90h]
  int v30; // [rsp+78h] [rbp-88h]
  int v31; // [rsp+7Ch] [rbp-84h]
  __int128 v32; // [rsp+80h] [rbp-80h]
  _DWORD v33[18]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v34; // [rsp+D8h] [rbp-28h]
  struct _KAPC_STATE ApcState; // [rsp+260h] [rbp+160h] BYREF
  _BYTE v36[160]; // [rsp+290h] [rbp+190h] BYREF
  _BYTE v37[224]; // [rsp+330h] [rbp+230h] BYREF

  memset_0(v33, 0, 0x1D0uLL);
  DestinationString = 0LL;
  memset_0(v36, 0, sizeof(v36));
  memset_0(v37, 0, sizeof(v37));
  v27[1] = 0;
  v31 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeParseContext((__int64)v33);
  v10 = *a1;
  v25 = 0LL;
  v11 = *(_QWORD *)(v10 + 8);
  if ( *(_WORD *)(v11 + 66)
    || (*(_DWORD *)(v10 + 48) & 0x10) != 0
    || !KCBNeedsVirtualImage()
    || (v13 = *(_DWORD *)(v11 + 184), (v13 & 0x800000) == 0)
    || (v13 & 0x20) != 0 )
  {
    AccessStateFromSubjectContext = -1073741790;
    goto LABEL_12;
  }
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v14);
  CmpLockKcbShared(v11);
  AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v10, 0LL);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    if ( CmpReparseToVirtualPath(v11, v15, a4, &DestinationString) )
    {
      CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
      CmpUnlockRegistry(v18);
      v33[4] = *a5;
      v33[0] = 8;
      v34 = *(_QWORD *)(v10 + 56);
      AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                        a4,
                                        (unsigned int)v36,
                                        (unsigned int)v37,
                                        a3,
                                        (__int64)CmKeyObjectType + 76);
      if ( AccessStateFromSubjectContext >= 0 )
      {
        v28 = 0LL;
        v20 = 1600;
        v27[0] = 48;
        if ( a2 != 1 )
          v20 = 576;
        v30 = v20;
        p_DestinationString = &DestinationString;
        v32 = 0LL;
        if ( (int)CmObReferenceObjectByName(
                    (unsigned int)v27,
                    (unsigned int)v36,
                    a3,
                    v19,
                    0,
                    (__int64)v33,
                    (__int64)&v25) >= 0 )
        {
          *a1 = v25;
          ObfDereferenceObject((PVOID)v10);
          AccessStateFromSubjectContext = 0;
        }
        else
        {
          AccessStateFromSubjectContext = -1073741790;
        }
        SeDeleteAccessState((__int64)v36, v21, v22, v23);
      }
      goto LABEL_11;
    }
    AccessStateFromSubjectContext = 0;
  }
  CmpUnlockKcb(v11);
  CmpUnlockRegistry(v16);
LABEL_11:
  CmpDetachFromRegistryProcess(&ApcState);
LABEL_12:
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpCleanupParseContext((__int64)v33, 0, v8, v9);
  return (unsigned int)AccessStateFromSubjectContext;
}
