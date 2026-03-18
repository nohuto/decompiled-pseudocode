/*
 * XREFs of CmKeyBodyRemapToVirtual @ 0x140AAC100
 * Callers:
 *     NtDeleteValueKey @ 0x14086CE00 (NtDeleteValueKey.c)
 *     NtDeleteKey @ 0x140A0A070 (NtDeleteKey.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     KCBNeedsVirtualImage @ 0x14042EE34 (KCBNeedsVirtualImage.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpReparseToVirtualPath @ 0x1407CC3A8 (CmpReparseToVirtualPath.c)
 *     SeDeleteAccessState @ 0x140844A10 (SeDeleteAccessState.c)
 *     RtlFreeAnsiString @ 0x1408F1D50 (RtlFreeAnsiString.c)
 *     CmpInitializeParseContext @ 0x140913DE0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x140913E90 (CmpCleanupParseContext.c)
 *     SeCreateAccessStateFromSubjectContext @ 0x140A72B68 (SeCreateAccessStateFromSubjectContext.c)
 *     CmpUnlockKcb @ 0x140BA92B0 (CmpUnlockKcb.c)
 *     CmpLockKcbShared @ 0x140BA9340 (CmpLockKcbShared.c)
 *     CmpLockRegistry @ 0x140BA9570 (CmpLockRegistry.c)
 *     CmpPerformKeyBodyDeletionCheck @ 0x140BA9880 (CmpPerformKeyBodyDeletionCheck.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     CmObReferenceObjectByName @ 0x140BA9D80 (CmObReferenceObjectByName.c)
 */

__int64 __fastcall CmKeyBodyRemapToVirtual(__int64 *a1, char a2, int a3, __int64 a4, _DWORD *a5)
{
  __int64 v8; // rsi
  ULONG_PTR v9; // rdi
  int AccessStateFromSubjectContext; // ebx
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v16; // rcx
  int v17; // r9d
  int v18; // eax
  __int64 v20; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  _DWORD v22[2]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v23; // [rsp+68h] [rbp-98h]
  UNICODE_STRING *p_DestinationString; // [rsp+70h] [rbp-90h]
  int v25; // [rsp+78h] [rbp-88h]
  int v26; // [rsp+7Ch] [rbp-84h]
  __int128 v27; // [rsp+80h] [rbp-80h]
  _DWORD v28[18]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v29; // [rsp+D8h] [rbp-28h]
  struct _KAPC_STATE ApcState; // [rsp+260h] [rbp+160h] BYREF
  _QWORD v31[20]; // [rsp+290h] [rbp+190h] BYREF
  _QWORD v32[28]; // [rsp+330h] [rbp+230h] BYREF

  memset_0(v28, 0, 0x1D0uLL);
  DestinationString = 0LL;
  memset_0(v31, 0, sizeof(v31));
  memset_0(v32, 0, sizeof(v32));
  v22[1] = 0;
  v26 = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  memset(&ApcState, 0, sizeof(ApcState));
  CmpInitializeParseContext((__int64)v28);
  v8 = *a1;
  v20 = 0LL;
  v9 = *(_QWORD *)(v8 + 8);
  if ( *(_WORD *)(v9 + 66)
    || (*(_DWORD *)(v8 + 48) & 0x10) != 0
    || !KCBNeedsVirtualImage()
    || (v11 = *(_DWORD *)(v9 + 184), (v11 & 0x800000) == 0)
    || (v11 & 0x20) != 0 )
  {
    AccessStateFromSubjectContext = -1073741790;
    goto LABEL_12;
  }
  CmpAttachToRegistryProcess(&ApcState);
  CmpLockRegistry(v12);
  CmpLockKcbShared(v9);
  AccessStateFromSubjectContext = CmpPerformKeyBodyDeletionCheck(v8, 0LL);
  if ( AccessStateFromSubjectContext >= 0 )
  {
    if ( CmpReparseToVirtualPath(v9, v13, a4, &DestinationString) )
    {
      CmpUnlockKcb(*(_QWORD *)(*a1 + 8));
      CmpUnlockRegistry(v16);
      v28[4] = *a5;
      v28[0] = 8;
      v29 = *(_QWORD *)(v8 + 56);
      AccessStateFromSubjectContext = SeCreateAccessStateFromSubjectContext(
                                        a4,
                                        v31,
                                        v32,
                                        a3,
                                        (_DWORD *)CmKeyObjectType + 19);
      if ( AccessStateFromSubjectContext >= 0 )
      {
        v23 = 0LL;
        v18 = 1600;
        v22[0] = 48;
        if ( a2 != 1 )
          v18 = 576;
        v25 = v18;
        p_DestinationString = &DestinationString;
        v27 = 0LL;
        if ( (int)CmObReferenceObjectByName(
                    (unsigned int)v22,
                    (unsigned int)v31,
                    a3,
                    v17,
                    0,
                    (__int64)v28,
                    (__int64)&v20) >= 0 )
        {
          *a1 = v20;
          ObfDereferenceObject((PVOID)v8);
          AccessStateFromSubjectContext = 0;
        }
        else
        {
          AccessStateFromSubjectContext = -1073741790;
        }
        SeDeleteAccessState((__int64)v31);
      }
      goto LABEL_11;
    }
    AccessStateFromSubjectContext = 0;
  }
  CmpUnlockKcb(v9);
  CmpUnlockRegistry(v14);
LABEL_11:
  CmpDetachFromRegistryProcess(&ApcState);
LABEL_12:
  if ( DestinationString.Buffer )
    RtlFreeAnsiString(&DestinationString);
  CmpCleanupParseContext((__int64)v28, 0);
  return (unsigned int)AccessStateFromSubjectContext;
}
