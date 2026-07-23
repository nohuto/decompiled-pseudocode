/*
 * XREFs of ObInitSystem @ 0x140C63408
 * Callers:
 *     InitBootProcessor @ 0x140C0CC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140C61CC8 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14028EDF0 (ObpReleaseLookupContext.c)
 *     RtlGetAce @ 0x140404120 (RtlGetAce.c)
 *     ExGenRandom @ 0x14040A540 (ExGenRandom.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x1404549D0 (ExInitializeNPagedLookasideListInternal.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ObCreateObjectType @ 0x1406F96E0 (ObCreateObjectType.c)
 *     ObInitServerSilo @ 0x140740F4C (ObInitServerSilo.c)
 *     ObInitializeProcessor @ 0x1407410E8 (ObInitializeProcessor.c)
 *     ObpInitializeRootNamespace @ 0x140741BD8 (ObpInitializeRootNamespace.c)
 *     ObpInitObjectTypeSD @ 0x1407427B8 (ObpInitObjectTypeSD.c)
 *     RtlAddAuditAccessAce @ 0x14077FCB0 (RtlAddAuditAccessAce.c)
 *     ObpLookupDirectoryEntry @ 0x14083E800 (ObpLookupDirectoryEntry.c)
 *     NtClose @ 0x140846CC0 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     RtlCreateAcl @ 0x140858810 (RtlCreateAcl.c)
 *     ExCreateHandleTable @ 0x14094D1CC (ExCreateHandleTable.c)
 *     ObpLockDirectoryExclusive @ 0x1409DF8B8 (ObpLockDirectoryExclusive.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409DFF30 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E16D0 (RtlCreateSecurityDescriptor.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x1409EA0B8 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ObpInsertDirectoryEntry @ 0x140A03DDC (ObpInsertDirectoryEntry.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A04030 (RtlSetSaclSecurityDescriptor.c)
 *     NtCreateDirectoryObject @ 0x140A3B280 (NtCreateDirectoryObject.c)
 *     ExInitializeSystemLookasideList @ 0x140B6FF6C (ExInitializeSystemLookasideList.c)
 *     ObpInitInfoBlockOffsets @ 0x140C2E6EC (ObpInitInfoBlockOffsets.c)
 *     ObpInitStackTrace @ 0x140C2E7DC (ObpInitStackTrace.c)
 */

char __fastcall ObInitSystem(int a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int16 v4; // di
  __int16 v5; // bx
  struct _KPRCB *CurrentPrcb; // rax
  __int64 v7; // rcx
  _QWORD *v8; // rax
  unsigned int i; // edi
  unsigned int v10; // edi
  char *v11; // rsi
  unsigned int v12; // eax
  _OWORD *v13; // rdi
  ULONG v14; // edx
  ULONG v15; // edx
  void *v16; // r9
  _BYTE *v17; // rax
  HANDLE v18; // rdi
  NTSTATUS v19; // eax
  char *v20; // r15
  char *j; // rdi
  char *v22; // rax
  unsigned __int16 *v23; // rcx
  BOOLEAN AuditSuccess; // [rsp+28h] [rbp-E0h]
  BOOLEAN AuditFailure; // [rsp+30h] [rbp-D8h]
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Ace; // [rsp+50h] [rbp-B8h] BYREF
  HANDLE DirectoryHandle[3]; // [rsp+58h] [rbp-B0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  __int64 v31; // [rsp+A0h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v33; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING v34; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v36; // [rsp+F8h] [rbp-10h]
  __int16 v37; // [rsp+108h] [rbp+0h] BYREF
  char v38; // [rsp+10Ah] [rbp+2h]
  char v39; // [rsp+10Bh] [rbp+3h]
  int v40; // [rsp+110h] [rbp+8h]
  __int128 v41; // [rsp+114h] [rbp+Ch]
  int v42; // [rsp+124h] [rbp+1Ch]
  int v43; // [rsp+12Ch] [rbp+24h]
  int v44; // [rsp+134h] [rbp+2Ch]
  __int64 (__fastcall *v45)(__int64, unsigned int *, __int64, __int64); // [rsp+148h] [rbp+40h]
  void *v46; // [rsp+150h] [rbp+48h]
  __int64 (__fastcall *v47)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **); // [rsp+158h] [rbp+50h]
  ACL Acl; // [rsp+188h] [rbp+80h] BYREF

  Ace = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v36 = 0LL;
  LODWORD(v31) = 0;
  v33 = 0LL;
  DirectoryHandle[0] = 0LL;
  memset(&ObjectAttributes.RootDirectory, 0, 40);
  v34 = 0LL;
  DestinationString = 0LL;
  if ( (_BYTE)dword_140FC521C )
  {
    v4 = 64;
    v5 = 32;
  }
  else
  {
    v4 = 32;
    v5 = 16;
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
      v10 = 0;
      v11 = (char *)&ObpWaitBlockLookaside;
      do
      {
        v12 = 14 * v10 + 24;
        if ( v12 >= 0x40 )
          v12 = 64;
        ExInitializeNPagedLookasideListInternal((__int64)v11, 0LL, 0LL, 512, 48 * v12, 1834443343, 0, 0);
        ++v10;
        v11 += 128;
      }
      while ( v10 < 4 );
      v13 = (_OWORD *)SePublicDefaultUnrestrictedSd;
      if ( !ObpAuditBaseDirectories && !ObpAuditBaseObjects )
        goto LABEL_38;
      v14 = 4 * *((unsigned __int8 *)SeWorldSid + 1) + 28;
      if ( v14 < 0xFA
        && RtlCreateAcl(&Acl, v14, 2u) >= 0
        && RtlAddAuditAccessAce(&Acl, v15, 0x60000000u, v16, AuditSuccess, AuditFailure) >= 0
        && RtlGetAce(&Acl, 0, &Ace) >= 0 )
      {
        v17 = Ace;
        if ( ObpAuditBaseDirectories )
          *((_BYTE *)Ace + 1) |= 0xAu;
        if ( ObpAuditBaseObjects )
          v17[1] |= 9u;
        v13 = SecurityDescriptor;
        if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
          && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, SePublicDefaultUnrestrictedDacl, 0) >= 0
          && RtlSetSaclSecurityDescriptor(SecurityDescriptor, 1u, &Acl, 0) >= 0 )
        {
LABEL_38:
          LODWORD(ObjectAttributes.RootDirectory) = 48;
          *(_QWORD *)&ObjectAttributes.Attributes = &ObpRootDirectoryName;
          ObjectAttributes.ObjectName = 0LL;
          LODWORD(ObjectAttributes.SecurityDescriptor) = 80;
          ObjectAttributes.SecurityQualityOfService = v13;
          v31 = 0LL;
          if ( NtCreateDirectoryObject(DirectoryHandle, 0xF000Fu, (POBJECT_ATTRIBUTES)&ObjectAttributes.RootDirectory) >= 0 )
          {
            v18 = DirectoryHandle[0];
            Object = 0LL;
            v19 = ObReferenceObjectByHandle(DirectoryHandle[0], 0, ObpDirectoryObjectType, 0, &Object, 0LL);
            ObpRootDirectoryObject = Object;
            if ( v19 >= 0 && (int)ObpInitializeRootNamespace(0LL, v18, 0LL, 0LL) >= 0 && NtClose(v18) >= 0 )
            {
              *(_OWORD *)&DirectoryHandle[1] = 0LL;
              *(_QWORD *)&ObjectAttributes.Length = 0LL;
              ObpLockDirectoryExclusive((__int64)&DirectoryHandle[1], (__int64)ObpTypeDirectoryObject);
              v20 = (char *)ObpTypeObjectType;
              for ( j = *(char **)ObpTypeObjectType; j != v20; j = *(char **)j )
              {
                if ( (j[58] & 2) != 0 )
                {
                  v22 = (char *)ObpInfoMaskToOffset[j[58] & 3];
                  v23 = (unsigned __int16 *)(j + 32 - v22);
                  if ( j + 32 != v22
                    && !*(_QWORD *)v23
                    && !ObpLookupDirectoryEntry(v23 + 4, 64, (__int64)&DirectoryHandle[1])
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
  ObHeaderCookie = ExGenRandom(0, a2, a3, a4);
  ExInitializeSystemLookasideList(
    (__int64)&ObpCreateInfoLookasideList,
    512,
    64,
    1766023759,
    v4,
    (__int64)&ExSystemLookasideListHead);
  ExInitializeSystemLookasideList(
    (__int64)&ObpNameBufferLookasideList,
    1,
    248,
    1833853519,
    v5,
    (__int64)&ExSystemLookasideListHead);
  CurrentPrcb = KeGetCurrentPrcb();
  v7 = 256LL;
  CurrentPrcb->PPLookasideList[4].L = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
  CurrentPrcb->PPLookasideList[4].P = (_GENERAL_LOOKASIDE *)&ObpCreateInfoLookasideList;
  CurrentPrcb->PPLookasideList[5].L = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
  CurrentPrcb->PPLookasideList[5].P = (_GENERAL_LOOKASIDE *)&ObpNameBufferLookasideList;
  v8 = &unk_140FD0EC8;
  ObpRemoveObjectList = 0LL;
  ObpRemoveObjectWait = 0LL;
  do
  {
    *(v8 - 1) = 0LL;
    *v8 = 0LL;
    v8 += 2;
    --v7;
  }
  while ( v7 );
  ObpDefaultObject = 0;
  qword_140F0F310 = (__int64)&qword_140F0F308;
  qword_140F0F308 = (__int64)&qword_140F0F308;
  byte_140F0F302 = 6;
  dword_140F0F304 = 1;
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
  qword_140FC7848 = (__int64)MmBadPointer;
  memset_0(&v37, 0, 0x78uLL);
  v37 = 120;
  v40 = 256;
  v43 = 512;
  RtlInitUnicodeString(&DestinationString, L"Type");
  v38 |= 0x24u;
  v42 = 983041;
  v44 = 224;
  v41 = ObpTypeMapping;
  if ( (int)ObCreateObjectType(&DestinationString, &v37, 0LL, (__int64)&ObpTypeObjectType) < 0 )
    return 0;
  v43 = 1;
  RtlInitUnicodeString(&v33, L"Directory");
  v44 = 344;
  v42 = 983055;
  v38 = v38 & 0xD2 | 0xD;
  v45 = ObpCloseDirectoryObject;
  v46 = ObpDeleteDirectoryObject;
  v41 = ObpDirectoryMapping;
  if ( (int)ObCreateObjectType(&v33, &v37, 0LL, (__int64)&ObpDirectoryObjectType) < 0 )
    return 0;
  v45 = 0LL;
  ObpDirectoryObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
  RtlInitUnicodeString(&v34, L"SymbolicLink");
  v39 |= 1u;
  v46 = ObpDeleteSymbolicLink;
  v44 = 40;
  v47 = ObpParseSymbolicLinkEx;
  v43 = 1;
  v42 = 0xFFFFF;
  v38 = v38 & 0xF6 | 1;
  v41 = ObpSymbolicLinkMapping;
  if ( (int)ObCreateObjectType(&v34, &v37, 0LL, (__int64)&ObpSymbolicLinkObjectType) < 0 )
    return 0;
  *((_DWORD *)ObpSymbolicLinkObjectType + 23) &= ~0x100000u;
  ObpInitStackTrace();
  return 1;
}
