/*
 * XREFs of ObInitSystem @ 0x140C4FF98
 * Callers:
 *     InitBootProcessor @ 0x140BF9C88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140C4E7F4 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x1402BC6D0 (ObpReleaseLookupContext.c)
 *     RtlGetAce @ 0x1404044D0 (RtlGetAce.c)
 *     ExGenRandom @ 0x14041CDD0 (ExGenRandom.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x140460B30 (ExInitializeNPagedLookasideListInternal.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406EFC30 (ObCreateObjectType.c)
 *     ObInitServerSilo @ 0x140736FFC (ObInitServerSilo.c)
 *     ObInitializeProcessor @ 0x140737198 (ObInitializeProcessor.c)
 *     ObpInitializeRootNamespace @ 0x140737C88 (ObpInitializeRootNamespace.c)
 *     ObpInitObjectTypeSD @ 0x1407384A8 (ObpInitObjectTypeSD.c)
 *     RtlAddAuditAccessAce @ 0x140770B30 (RtlAddAuditAccessAce.c)
 *     ObpLookupDirectoryEntry @ 0x140846000 (ObpLookupDirectoryEntry.c)
 *     NtClose @ 0x14084EC50 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x14084F190 (ObReferenceObjectByHandle.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1408B73B4 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     RtlCreateAcl @ 0x140968260 (RtlCreateAcl.c)
 *     ExCreateHandleTable @ 0x1409718A8 (ExCreateHandleTable.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409EC1D0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409EC7E0 (RtlCreateSecurityDescriptor.c)
 *     ObpInsertDirectoryEntry @ 0x140A057B0 (ObpInsertDirectoryEntry.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A061E0 (RtlSetSaclSecurityDescriptor.c)
 *     ObpLockDirectoryExclusive @ 0x140A08AA0 (ObpLockDirectoryExclusive.c)
 *     NtCreateDirectoryObject @ 0x140A41AE0 (NtCreateDirectoryObject.c)
 *     ExInitializeSystemLookasideList @ 0x140B5F310 (ExInitializeSystemLookasideList.c)
 *     ObpInitInfoBlockOffsets @ 0x140C1B4CC (ObpInitInfoBlockOffsets.c)
 *     ObpInitStackTrace @ 0x140C1B5BC (ObpInitStackTrace.c)
 */

char __fastcall ObInitSystem(int a1)
{
  __int16 v1; // di
  __int16 v2; // bx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v4; // rcx
  _QWORD *v5; // rax
  unsigned int i; // edi
  unsigned int v7; // edi
  char *v8; // rsi
  unsigned int v9; // eax
  _OWORD *v10; // rdi
  ULONG v11; // edx
  ULONG v12; // edx
  void *v13; // r9
  _BYTE *v14; // rax
  HANDLE v15; // rdi
  NTSTATUS v16; // eax
  char *v17; // r15
  char *j; // rdi
  char *v19; // rax
  unsigned __int16 *v20; // rcx
  BOOLEAN AuditSuccess; // [rsp+28h] [rbp-E0h]
  BOOLEAN AuditFailure; // [rsp+30h] [rbp-D8h]
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Ace; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE DirectoryHandle[3]; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  __int64 v28; // [rsp+A0h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v30; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING v31; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v33; // [rsp+F8h] [rbp-10h]
  __int16 v34; // [rsp+108h] [rbp+0h] BYREF
  char v35; // [rsp+10Ah] [rbp+2h]
  char v36; // [rsp+10Bh] [rbp+3h]
  int v37; // [rsp+110h] [rbp+8h]
  __int128 v38; // [rsp+114h] [rbp+Ch]
  int v39; // [rsp+124h] [rbp+1Ch]
  int v40; // [rsp+12Ch] [rbp+24h]
  int v41; // [rsp+134h] [rbp+2Ch]
  __int64 (__fastcall *v42)(__int64, unsigned int *, __int64, __int64); // [rsp+148h] [rbp+40h]
  void *v43; // [rsp+150h] [rbp+48h]
  __int64 (__fastcall *v44)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **); // [rsp+158h] [rbp+50h]
  ACL Acl; // [rsp+188h] [rbp+80h] BYREF

  Ace = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v33 = 0LL;
  LODWORD(v28) = 0;
  v30 = 0LL;
  DirectoryHandle[0] = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  v31 = 0LL;
  DestinationString = 0LL;
  if ( (_BYTE)dword_140FC420C )
  {
    v1 = 64;
    v2 = 32;
  }
  else
  {
    v1 = 32;
    v2 = 16;
  }
  if ( a1 )
  {
    if ( a1 != 1 )
    {
      if ( a1 == 2 )
        TraceLoggingRegisterEx_EtwRegister_EtwSetInformation((__int64)&dword_140E07480, 0LL, 0LL);
      return 1;
    }
    if ( ObInitServerSilo(0LL) >= 0 )
    {
      for ( i = 0; i < (unsigned int)KeNumberProcessors_0; ++i )
      {
        if ( (int)ObInitializeProcessor((_QWORD *)KiProcessorBlock[i]) < 0 )
          return 0;
      }
      v7 = 0;
      v8 = (char *)&ObpWaitBlockLookaside;
      do
      {
        v9 = 14 * v7 + 24;
        if ( v9 >= 0x40 )
          v9 = 64;
        ExInitializeNPagedLookasideListInternal((__int64)v8, 0LL, 0LL, 512, 48 * v9, 1834443343, 0, 0);
        ++v7;
        v8 += 128;
      }
      while ( v7 < 4 );
      v10 = (_OWORD *)SePublicDefaultUnrestrictedSd;
      if ( !ObpAuditBaseDirectories && !ObpAuditBaseObjects )
        goto LABEL_38;
      v11 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 28;
      if ( v11 < 0xFA
        && RtlCreateAcl(&Acl, v11, 2u) >= 0
        && RtlAddAuditAccessAce(&Acl, v12, 0x60000000u, v13, AuditSuccess, AuditFailure) >= 0
        && RtlGetAce(&Acl, 0, &Ace) >= 0 )
      {
        v14 = Ace;
        if ( ObpAuditBaseDirectories )
          *((_BYTE *)Ace + 1) |= 0xAu;
        if ( ObpAuditBaseObjects )
          v14[1] |= 9u;
        v10 = SecurityDescriptor;
        if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
          && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, SePublicDefaultUnrestrictedDacl, 0) >= 0
          && RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0) >= 0 )
        {
LABEL_38:
          LODWORD(ObjectAttributes.RootDirectory) = 48;
          *(_QWORD *)&ObjectAttributes.Attributes = &ObpRootDirectoryName;
          ObjectAttributes.ObjectName = 0LL;
          LODWORD(ObjectAttributes.SecurityDescriptor) = 80;
          ObjectAttributes.SecurityQualityOfService = v10;
          v28 = 0LL;
          if ( NtCreateDirectoryObject(DirectoryHandle, 0xF000Fu, (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory) >= 0 )
          {
            v15 = DirectoryHandle[0];
            Object = 0LL;
            v16 = ObReferenceObjectByHandle(DirectoryHandle[0], 0, ObpDirectoryObjectType, 0, &Object, 0LL);
            ObpRootDirectoryObject = Object;
            if ( v16 >= 0 && (int)ObpInitializeRootNamespace(0LL, v15, 0LL, 0LL) >= 0 && NtClose(v15) >= 0 )
            {
              *(_OWORD *)&DirectoryHandle[1] = 0LL;
              *(_QWORD *)&ObjectAttributes.Length = 0LL;
              ObpLockDirectoryExclusive((__int64)&DirectoryHandle[1], (__int64)ObpTypeDirectoryObject);
              v17 = (char *)ObpTypeObjectType;
              for ( j = *(char **)ObpTypeObjectType; j != v17; j = *(char **)j )
              {
                if ( (j[58] & 2) != 0 )
                {
                  v19 = (char *)ObpInfoMaskToOffset[j[58] & 3];
                  v20 = (unsigned __int16 *)(j + 32 - v19);
                  if ( j + 32 != v19
                    && !*(_QWORD *)v20
                    && !ObpLookupDirectoryEntry(v20 + 4, 64, (__int64)&DirectoryHandle[1])
                    && (!*((_QWORD *)j + 9) && (int)ObpInitObjectTypeSD((__int64)(j + 80), 0LL) < 0
                     || !ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, j + 80, (__int64)&DirectoryHandle[1])) )
                  {
                    return 0;
                  }
                }
              }
              ObpReleaseLookupContext((__int64)&DirectoryHandle[1]);
              Object = &ObpLUIDDeviceMapsEnabled;
              return 1;
            }
          }
        }
      }
    }
    return 0;
  }
  ObHeaderCookie = ExGenRandom(0);
  ExInitializeSystemLookasideList(
    (__int64)&ObpCreateInfoLookasideList,
    512,
    64,
    1766023759,
    v1,
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&ObpNameBufferLookasideList,
    1,
    248,
    1833853519,
    v2,
    (__int64)&ExSystemLookasideListHead);
  CurrentPrcb = KeGetCurrentPrcb();
  v4 = 256LL;
  CurrentPrcb->PPLookasideList[4].L = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
  CurrentPrcb->PPLookasideList[4].P = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
  CurrentPrcb->PPLookasideList[5].L = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
  CurrentPrcb->PPLookasideList[5].P = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
  v5 = &unk_140FCFF48;
  ObpRemoveObjectList = 0LL;
  ObpRemoveObjectWait = 0LL;
  do
  {
    *(v5 - 1) = 0LL;
    *v5 = 0LL;
    v5 += 2;
    --v4;
  }
  while ( v4 );
  ObpDefaultObject = 0;
  qword_140F0E950 = (__int64)&qword_140F0E948;
  qword_140F0E948 = (__int64)&qword_140F0E948;
  byte_140F0E942 = 6;
  dword_140F0E944 = 1;
  ObpKernelHandleTable = ExCreateHandleTable(0LL, 1);
  KeGetCurrentThread()->ApcState.Process[1].KernelTime = ObpKernelHandleTable;
  if ( !ObpKernelHandleTable )
    return 0;
  ObpRemoveObjectWorkItem.Parameter = 0LL;
  ObpRemoveObjectWorkItem.WorkerRoutine = (void (__fastcall *)(void *))ObpProcessRemoveObjectQueue;
  ObpRemoveObjectDpc.DeferredRoutine = (PKDEFERRED_ROUTINE)ObpProcessRemoveObjectDpcWorker;
  ObpRemoveObjectWorkItem.List.Flink = 0LL;
  ObpRemoveObjectDpc.TargetInfoAsUlong = 275;
  ObpRemoveObjectDpc.DeferredContext = 0LL;
  ObpRemoveObjectDpc.DpcData = 0LL;
  ObpRemoveObjectDpc.ProcessorHistory = 0LL;
  ObpInitInfoBlockOffsets();
  qword_140FC6808 = (__int64)MmBadPointer;
  memset_0(&v34, 0, 0x78uLL);
  v34 = 120;
  v37 = 256;
  v40 = 512;
  RtlInitUnicodeString(&DestinationString, L"Type");
  v35 |= 0x24u;
  v39 = 983041;
  v41 = 224;
  v38 = ObpTypeMapping;
  if ( (int)ObCreateObjectType(&DestinationString, &v34, 0LL, (__int64)&ObpTypeObjectType) < 0 )
    return 0;
  v40 = 1;
  RtlInitUnicodeString(&v30, L"Directory");
  v41 = 344;
  v39 = 983055;
  v35 = v35 & 0xD2 | 0xD;
  v42 = ObpCloseDirectoryObject;
  v43 = ObpDeleteDirectoryObject;
  v38 = ObpDirectoryMapping;
  if ( (int)ObCreateObjectType(&v30, &v34, 0LL, (__int64)&ObpDirectoryObjectType) < 0 )
    return 0;
  v42 = 0LL;
  ObpDirectoryObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
  RtlInitUnicodeString(&v31, L"SymbolicLink");
  v36 |= 1u;
  v43 = ObpDeleteSymbolicLink;
  v41 = 40;
  v44 = ObpParseSymbolicLinkEx;
  v40 = 1;
  v39 = 0xFFFFF;
  v35 = v35 & 0xF6 | 1;
  v38 = ObpSymbolicLinkMapping;
  if ( (int)ObCreateObjectType(&v31, &v34, 0LL, (__int64)&ObpSymbolicLinkObjectType) < 0 )
    return 0;
  *((_DWORD *)ObpSymbolicLinkObjectType + 23) &= ~0x100000u;
  ObpInitStackTrace();
  return 1;
}
