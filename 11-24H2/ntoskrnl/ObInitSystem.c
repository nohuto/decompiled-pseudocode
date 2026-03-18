/*
 * XREFs of ObInitSystem @ 0x140C612B4
 * Callers:
 *     InitBootProcessor @ 0x140C0AC88 (InitBootProcessor.c)
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 *     Phase1InitializationIoReady @ 0x140C5FB78 (Phase1InitializationIoReady.c)
 * Callees:
 *     ObpReleaseLookupContext @ 0x14025E7E0 (ObpReleaseLookupContext.c)
 *     RtlGetAce @ 0x14040BC40 (RtlGetAce.c)
 *     ExGenRandom @ 0x14041A540 (ExGenRandom.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ExInitializeNPagedLookasideListInternal @ 0x14045FB10 (ExInitializeNPagedLookasideListInternal.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ObCreateObjectType @ 0x1406FBAA0 (ObCreateObjectType.c)
 *     ObInitServerSilo @ 0x14074301C (ObInitServerSilo.c)
 *     ObInitializeProcessor @ 0x1407431B8 (ObInitializeProcessor.c)
 *     ObpInitializeRootNamespace @ 0x140743CA8 (ObpInitializeRootNamespace.c)
 *     ObpInitObjectTypeSD @ 0x1407444C8 (ObpInitObjectTypeSD.c)
 *     RtlAddAuditAccessAce @ 0x14077FD80 (RtlAddAuditAccessAce.c)
 *     ObpLookupDirectoryEntry @ 0x140842540 (ObpLookupDirectoryEntry.c)
 *     NtClose @ 0x14084AA00 (NtClose.c)
 *     ObReferenceObjectByHandle @ 0x14084AF40 (ObReferenceObjectByHandle.c)
 *     RtlCreateAcl @ 0x14085CAA0 (RtlCreateAcl.c)
 *     ExCreateHandleTable @ 0x14093BEF4 (ExCreateHandleTable.c)
 *     ObpLockDirectoryExclusive @ 0x1409E4E58 (ObpLockDirectoryExclusive.c)
 *     RtlSetDaclSecurityDescriptor @ 0x1409E56A0 (RtlSetDaclSecurityDescriptor.c)
 *     RtlCreateSecurityDescriptor @ 0x1409E6710 (RtlCreateSecurityDescriptor.c)
 *     ObpInsertDirectoryEntry @ 0x140A078AC (ObpInsertDirectoryEntry.c)
 *     RtlSetSaclSecurityDescriptor @ 0x140A07B00 (RtlSetSaclSecurityDescriptor.c)
 *     NtCreateDirectoryObject @ 0x140A456D0 (NtCreateDirectoryObject.c)
 *     TraceLoggingRegisterEx_EtwRegister_EtwSetInformation @ 0x140A57414 (TraceLoggingRegisterEx_EtwRegister_EtwSetInformation.c)
 *     ExInitializeSystemLookasideList @ 0x140B6E3BC (ExInitializeSystemLookasideList.c)
 *     ObpInitInfoBlockOffsets @ 0x140C2C5CC (ObpInitInfoBlockOffsets.c)
 *     ObpInitStackTrace @ 0x140C2C6BC (ObpInitStackTrace.c)
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
  __int64 v12; // rdx
  _BYTE *v13; // rax
  void *v14; // rdi
  NTSTATUS v15; // eax
  char *v16; // r15
  char *j; // rdi
  char *v18; // rax
  unsigned __int16 *v19; // rcx
  PVOID Object; // [rsp+48h] [rbp-C0h] BYREF
  PVOID Ace; // [rsp+50h] [rbp-B8h] BYREF
  __m256i Handle; // [rsp+58h] [rbp-B0h] BYREF
  __int128 v24; // [rsp+78h] [rbp-90h] BYREF
  __int128 v25; // [rsp+88h] [rbp-80h]
  _OWORD *v26; // [rsp+98h] [rbp-70h]
  __int64 v27; // [rsp+A0h] [rbp-68h]
  UNICODE_STRING DestinationString; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING v29; // [rsp+B8h] [rbp-50h] BYREF
  UNICODE_STRING v30; // [rsp+C8h] [rbp-40h] BYREF
  _OWORD SecurityDescriptor[2]; // [rsp+D8h] [rbp-30h] BYREF
  __int64 v32; // [rsp+F8h] [rbp-10h]
  __int16 v33; // [rsp+108h] [rbp+0h] BYREF
  char v34; // [rsp+10Ah] [rbp+2h]
  char v35; // [rsp+10Bh] [rbp+3h]
  int v36; // [rsp+110h] [rbp+8h]
  __int128 v37; // [rsp+114h] [rbp+Ch]
  int v38; // [rsp+124h] [rbp+1Ch]
  int v39; // [rsp+12Ch] [rbp+24h]
  int v40; // [rsp+134h] [rbp+2Ch]
  __int64 (__fastcall *v41)(__int64, unsigned int *, __int64, __int64); // [rsp+148h] [rbp+40h]
  void *v42; // [rsp+150h] [rbp+48h]
  __int64 (__fastcall *v43)(unsigned __int16 *, POBJECT_TYPE, struct _SECURITY_SUBJECT_CONTEXT *, KPROCESSOR_MODE, int, __int64, unsigned __int16 *, int, int, __int64, unsigned __int16 **); // [rsp+158h] [rbp+50h]
  ACL Acl; // [rsp+188h] [rbp+80h] BYREF

  Ace = 0LL;
  memset(SecurityDescriptor, 0, sizeof(SecurityDescriptor));
  v32 = 0LL;
  v26 = 0LL;
  LODWORD(v27) = 0;
  v29 = 0LL;
  Handle.m256i_i64[0] = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v30 = 0LL;
  DestinationString = 0LL;
  if ( (_BYTE)dword_140FC421C )
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
        && (int)RtlAddAuditAccessAce((int)&Acl, v12, 1610612736) >= 0
        && RtlGetAce(&Acl, 0, &Ace) >= 0 )
      {
        v13 = Ace;
        if ( ObpAuditBaseDirectories )
          *((_BYTE *)Ace + 1) |= 0xAu;
        if ( ObpAuditBaseObjects )
          v13[1] |= 9u;
        v10 = SecurityDescriptor;
        if ( RtlCreateSecurityDescriptor(SecurityDescriptor, 1u) >= 0
          && RtlSetDaclSecurityDescriptor(SecurityDescriptor, 1u, SePublicDefaultUnrestrictedDacl, 0) >= 0
          && (int)RtlSetSaclSecurityDescriptor((__int64)SecurityDescriptor, 1, (__int64)&Acl, 0) >= 0 )
        {
LABEL_38:
          LODWORD(v24) = 48;
          *(_QWORD *)&v25 = &ObpRootDirectoryName;
          *((_QWORD *)&v24 + 1) = 0LL;
          DWORD2(v25) = 80;
          v26 = v10;
          v27 = 0LL;
          if ( (int)NtCreateDirectoryObject((__int64)&Handle, 983055LL, (__int64)&v24) >= 0 )
          {
            v14 = (void *)Handle.m256i_i64[0];
            Object = 0LL;
            v15 = ObReferenceObjectByHandle((HANDLE)Handle.m256i_i64[0], 0, ObpDirectoryObjectType, 0, &Object, 0LL);
            ObpRootDirectoryObject = Object;
            if ( v15 >= 0 && (int)ObpInitializeRootNamespace(0LL, v14, 0LL, 0LL) >= 0 && NtClose(v14) >= 0 )
            {
              memset(&Handle.m256i_u64[1], 0, 24);
              ObpLockDirectoryExclusive((__int64)&Handle.m256i_i64[1], (__int64)ObpTypeDirectoryObject);
              v16 = (char *)ObpTypeObjectType;
              for ( j = *(char **)ObpTypeObjectType; j != v16; j = *(char **)j )
              {
                if ( (j[58] & 2) != 0 )
                {
                  v18 = (char *)ObpInfoMaskToOffset[j[58] & 3];
                  v19 = (unsigned __int16 *)(j + 32 - v18);
                  if ( j + 32 != v18
                    && !*(_QWORD *)v19
                    && !ObpLookupDirectoryEntry(v19 + 4, 64, (__int64)&Handle.m256i_i64[1])
                    && (!*((_QWORD *)j + 9) && (int)ObpInitObjectTypeSD((__int64)(j + 80), 0LL) < 0
                     || !ObpInsertDirectoryEntry((char *)ObpTypeDirectoryObject, j + 80, (__int64)&Handle.m256i_i64[1])) )
                  {
                    return 0;
                  }
                }
              }
              ObpReleaseLookupContext((__int64)&Handle.m256i_i64[1]);
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
  v5 = &unk_140FCFEC8;
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
  qword_140F0EFD0 = (__int64)&qword_140F0EFC8;
  qword_140F0EFC8 = (__int64)&qword_140F0EFC8;
  byte_140F0EFC2 = 6;
  dword_140F0EFC4 = 1;
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
  qword_140FC67E8 = (__int64)MmBadPointer;
  memset_0(&v33, 0, 0x78uLL);
  v33 = 120;
  v36 = 256;
  v39 = 512;
  RtlInitUnicodeString(&DestinationString, L"Type");
  v34 |= 0x24u;
  v38 = 983041;
  v40 = 224;
  v37 = ObpTypeMapping;
  if ( (int)ObCreateObjectType(&DestinationString, &v33, 0LL, (__int64)&ObpTypeObjectType) < 0 )
    return 0;
  v39 = 1;
  RtlInitUnicodeString(&v29, L"Directory");
  v40 = 344;
  v38 = 983055;
  v34 = v34 & 0xD2 | 0xD;
  v41 = ObpCloseDirectoryObject;
  v42 = ObpDeleteDirectoryObject;
  v37 = ObpDirectoryMapping;
  if ( (int)ObCreateObjectType(&v29, &v33, 0LL, (__int64)&ObpDirectoryObjectType) < 0 )
    return 0;
  v41 = 0LL;
  ObpDirectoryObjectType->TypeInfo.ValidAccessMask &= ~0x100000u;
  RtlInitUnicodeString(&v30, L"SymbolicLink");
  v35 |= 1u;
  v42 = ObpDeleteSymbolicLink;
  v40 = 40;
  v43 = ObpParseSymbolicLinkEx;
  v39 = 1;
  v38 = 0xFFFFF;
  v34 = v34 & 0xF6 | 1;
  v37 = ObpSymbolicLinkMapping;
  if ( (int)ObCreateObjectType(&v30, &v33, 0LL, (__int64)&ObpSymbolicLinkObjectType) < 0 )
    return 0;
  *((_DWORD *)ObpSymbolicLinkObjectType + 23) &= ~0x100000u;
  ObpInitStackTrace();
  return 1;
}
