/*
 * XREFs of CmpInitCmRM @ 0x140AE6674
 * Callers:
 *     CmpLoadKeyCommon @ 0x14045ABA8 (CmpLoadKeyCommon.c)
 *     CmpFinishSystemHivesLoad @ 0x1407CA720 (CmpFinishSystemHivesLoad.c)
 *     CmpMountPreloadedHives @ 0x1407CC328 (CmpMountPreloadedHives.c)
 * Callees:
 *     KeLeaveCriticalRegion @ 0x140288450 (KeLeaveCriticalRegion.c)
 *     ExReleaseFastMutexUnsafe @ 0x1402C5B00 (ExReleaseFastMutexUnsafe.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     ExDeleteResourceLite @ 0x1402E55A0 (ExDeleteResourceLite.c)
 *     ExInitializeResourceLite @ 0x1403EAC90 (ExInitializeResourceLite.c)
 *     RtlAppendUnicodeStringToString @ 0x140404080 (RtlAppendUnicodeStringToString.c)
 *     Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline @ 0x140666C84 (Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateResourceManager @ 0x1406A8C50 (ZwCreateResourceManager.c)
 *     ZwCreateTransactionManager @ 0x1406A8DB0 (ZwCreateTransactionManager.c)
 *     ZwOpenResourceManager @ 0x1406A9A50 (ZwOpenResourceManager.c)
 *     ZwRecoverResourceManager @ 0x1406AA2D0 (ZwRecoverResourceManager.c)
 *     ZwRecoverTransactionManager @ 0x1406AA2F0 (ZwRecoverTransactionManager.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 *     CmpIsFileInSystemConfig @ 0x1407E2160 (CmpIsFileInSystemConfig.c)
 *     CmpDeleteCorruptedLogfile @ 0x1407E6BF0 (CmpDeleteCorruptedLogfile.c)
 *     ObReferenceObjectByHandle @ 0x140847200 (ObReferenceObjectByHandle.c)
 *     HvUnlockHiveFlusherShared @ 0x14086E934 (HvUnlockHiveFlusherShared.c)
 *     HvLockHiveFlusherShared @ 0x140881BD8 (HvLockHiveFlusherShared.c)
 *     HvLockHiveWriter @ 0x1408868E8 (HvLockHiveWriter.c)
 *     HvUnlockHiveWriter @ 0x140886CD8 (HvUnlockHiveWriter.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     CmpQueryFileSecurityDescriptor @ 0x140932BA0 (CmpQueryFileSecurityDescriptor.c)
 *     HvMarkBaseBlockDirty @ 0x1409335C8 (HvMarkBaseBlockDirty.c)
 *     CmpQueryNameString @ 0x14096C1C4 (CmpQueryNameString.c)
 *     RtlStringFromGUIDEx @ 0x1409A3470 (RtlStringFromGUIDEx.c)
 *     LOCK_CM_RM_LIST @ 0x140A01674 (LOCK_CM_RM_LIST.c)
 *     CmpUuidCreate @ 0x140A9C598 (CmpUuidCreate.c)
 *     CmpLogTxrInitEvent @ 0x140AAD264 (CmpLogTxrInitEvent.c)
 *     CmpStartRMLog @ 0x140AE7164 (CmpStartRMLog.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpLockRegistry @ 0x140BBBE60 (CmpLockRegistry.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 */

__int64 __fastcall CmpInitCmRM(__int64 a1, char a2)
{
  __int64 v2; // r12
  char v3; // r15
  ULONG fLogOptionFlag; // r13d
  __int64 v5; // rbx
  __int64 v6; // rcx
  int IsFileInSystemConfig; // edi
  _QWORD *Pool2; // rsi
  struct _ERESOURCE *v10; // rdx
  char v11; // di
  __int64 v12; // rax
  __int64 v13; // rcx
  UUID v14; // xmm6
  __int128 v15; // xmm7
  __int64 v16; // rdx
  UUID *v17; // rax
  __int64 v18; // rax
  GUID *v19; // rcx
  __int64 v20; // rcx
  int IsEnabledDeviceUsageNoInline; // eax
  int v22; // ecx
  char v23; // r15
  const UNICODE_STRING *v24; // rdi
  __int64 v25; // rcx
  __int64 v26; // rax
  struct _CLFS_MGMT_POLICY *v27; // r15
  int v28; // ecx
  HANDLE *v29; // r12
  NTSTATUS v30; // eax
  __int64 v31; // rax
  __int64 v32; // rcx
  HANDLE v33; // rcx
  HANDLE *v34; // r15
  GUID v35; // xmm0
  HANDLE v36; // rcx
  __int64 v37; // rdx
  __int64 *v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // rax
  _QWORD *v42; // rax
  void *v43; // rcx
  void *v44; // rcx
  void *v45; // rcx
  int v47; // [rsp+6Ch] [rbp-9Ch] BYREF
  int v48; // [rsp+70h] [rbp-98h]
  ULONG CreateOptions; // [rsp+74h] [rbp-94h]
  __int64 v50; // [rsp+78h] [rbp-90h]
  PSECURITY_DESCRIPTOR P; // [rsp+80h] [rbp-88h] BYREF
  UNICODE_STRING Destination; // [rsp+88h] [rbp-80h] BYREF
  FILE_OBJECT *pplfoLog; // [rsp+98h] [rbp-70h] BYREF
  PVOID ClientCookie; // [rsp+A0h] [rbp-68h] BYREF
  UNICODE_STRING GuidString; // [rsp+A8h] [rbp-60h] BYREF
  UNICODE_STRING UnicodeString; // [rsp+B8h] [rbp-50h] BYREF
  __int64 v57; // [rsp+C8h] [rbp-40h]
  UNICODE_STRING LogFileName; // [rsp+D0h] [rbp-38h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+E0h] [rbp-28h] BYREF
  PERESOURCE Resource; // [rsp+110h] [rbp+8h]
  _CLFS_MGMT_CLIENT_REGISTRATION RegistrationData; // [rsp+118h] [rbp+10h] BYREF
  PCUNICODE_STRING Source[2]; // [rsp+150h] [rbp+48h] BYREF
  UUID Uuid; // [rsp+160h] [rbp+58h] BYREF
  GUID ResourceManagerGuid; // [rsp+170h] [rbp+68h] BYREF
  __int128 v65; // [rsp+180h] [rbp+78h]

  v57 = a1;
  *(_QWORD *)&GuidString.Length = 0LL;
  v2 = a1;
  GuidString.Buffer = 0LL;
  v65 = 0LL;
  v3 = 0;
  ResourceManagerGuid = 0LL;
  fLogOptionFlag = 512;
  Uuid = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  *(_OWORD *)Source = 0LL;
  UnicodeString.Buffer = 0LL;
  memset(&ObjectAttributes, 0, 44);
  *(_QWORD *)&Destination.Length = 0LL;
  Destination.Buffer = 0LL;
  pplfoLog = 0LL;
  *(_QWORD *)&LogFileName.Length = 0LL;
  LogFileName.Buffer = 0LL;
  CreateOptions = 0;
  P = 0LL;
  ClientCookie = 0LL;
  memset(&RegistrationData, 0, 52);
  v48 = 0;
  LOBYTE(v47) = 0;
  if ( BYTE6(NlsMbOemCodePageTag) )
    return 0LL;
  v5 = qword_140E09AE0;
  if ( a1 )
    v5 = a1;
  if ( (*(_DWORD *)(v5 + 160) & 0x8001) != 0 )
    return 0LL;
  IsFileInSystemConfig = CmpUuidCreate(&Uuid);
  if ( IsFileInSystemConfig < 0 || (IsFileInSystemConfig = CmpUuidCreate((UUID *)Source), IsFileInSystemConfig < 0) )
  {
    *(_DWORD *)(v5 + 4160) = 1;
LABEL_7:
    *(_DWORD *)(v5 + 4164) = IsFileInSystemConfig;
    CmpLogTxrInitEvent(v6, v5, IsFileInSystemConfig);
    return (unsigned int)IsFileInSystemConfig;
  }
  Pool2 = (_QWORD *)ExAllocatePool2(0x100uLL, 0x88uLL, 0x6D524D43u);
  if ( !Pool2 )
  {
    *(_DWORD *)(v5 + 4160) = 1;
LABEL_12:
    IsFileInSystemConfig = -1073741670;
    goto LABEL_7;
  }
  Resource = (PERESOURCE)ExAllocatePool2(0x40uLL, 0x68uLL, 0x6C724D43u);
  v10 = Resource;
  if ( !Resource )
  {
    ExFreePoolWithTag(Pool2, 0x6D524D43u);
    *(_DWORD *)(v5 + 4160) = 2;
    goto LABEL_12;
  }
  v11 = a2;
  Pool2[3] = Pool2 + 2;
  Pool2[2] = Pool2 + 2;
  Pool2[11] = 0LL;
  Pool2[12] = 0LL;
  *((_DWORD *)Pool2 + 26) = a2 != 0 ? 4 : 0;
  *(_QWORD *)((char *)Pool2 + 108) = 0LL;
  *((_DWORD *)Pool2 + 17) = 0;
  Pool2[9] = 0LL;
  Pool2[16] = v10;
  ExInitializeResourceLite(v10);
  v12 = *(_QWORD *)(v5 + 64);
  v13 = 1836346738LL;
  v14 = Uuid;
  v15 = *(_OWORD *)Source;
  if ( *(_DWORD *)(v12 + 164) == 1836346738 )
  {
    v13 = *((_QWORD *)&v65 + 1);
    v16 = v65;
    if ( v65 == *(_OWORD *)(v12 + 148) )
    {
      v48 = 1;
      v3 = 1;
      *(_OWORD *)(v12 + 148) = *(_OWORD *)Source;
    }
    v17 = *(UUID **)(v5 + 64);
    if ( v16 == *(_QWORD *)&v17[7].Data1 && v13 == *(_QWORD *)v17[7].Data4 )
    {
      v3 = 1;
      v17[7] = v14;
    }
    v18 = *(_QWORD *)(v5 + 64);
    if ( v16 == *(_QWORD *)(v18 + 128) && v13 == *(_QWORD *)(v18 + 136) )
    {
      v3 = 1;
      *(_OWORD *)(v18 + 128) = *(_OWORD *)(v18 + 112);
    }
    CreateOptions = 0;
    if ( v3 )
      goto LABEL_64;
    goto LABEL_26;
  }
  *(_DWORD *)(v12 + 164) = 1836346738;
  while ( 1 )
  {
    v31 = *(_QWORD *)(v5 + 64);
    if ( !v2 )
      v11 = 1;
    v48 = 1;
    a2 = v11;
    *(_OWORD *)(v31 + 148) = v15;
    *(UUID *)(*(_QWORD *)(v5 + 64) + 112LL) = v14;
    *(UUID *)(*(_QWORD *)(v5 + 64) + 128LL) = v14;
LABEL_64:
    CmpLockRegistry(v13);
    HvLockHiveFlusherShared(v5);
    HvLockHiveWriter(v5);
    HvMarkBaseBlockDirty(v5);
    HvUnlockHiveWriter(v5);
    HvUnlockHiveFlusherShared(v5);
    CmpUnlockRegistry(v32);
LABEL_26:
    v19 = (GUID *)(*(_QWORD *)(v5 + 64) + 148LL);
    *(_QWORD *)&Uuid.Data1 = *(_QWORD *)(v5 + 1544);
    IsFileInSystemConfig = RtlStringFromGUIDEx(v19, &GuidString, 1u);
    if ( IsFileInSystemConfig < 0 )
    {
      *(_DWORD *)(v5 + 4160) = 3;
      goto LABEL_109;
    }
    if ( !v2 )
    {
      CreateOptions = 52;
      Source[0] = &CmpLogPath;
      IsEnabledDeviceUsageNoInline = Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline();
      v22 = fLogOptionFlag | 0x1000000;
      if ( !IsEnabledDeviceUsageNoInline )
        v22 = fLogOptionFlag;
      fLogOptionFlag = v22;
LABEL_31:
      v23 = a2;
      goto LABEL_32;
    }
    IsFileInSystemConfig = CmpQueryNameString(*(void **)(v2 + 1544), &UnicodeString);
    if ( IsFileInSystemConfig < 0 )
    {
      *(_DWORD *)(v5 + 4160) = 4;
      goto LABEL_109;
    }
    Source[0] = &UnicodeString;
    if ( !(unsigned int)Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline() )
      goto LABEL_31;
    IsFileInSystemConfig = CmpIsFileInSystemConfig(&UnicodeString, (BOOLEAN *)&v47);
    if ( IsFileInSystemConfig < 0 )
    {
      *(_DWORD *)(v5 + 4160) = 16;
      goto LABEL_109;
    }
    v23 = a2;
    if ( (_BYTE)v47 )
      fLogOptionFlag |= 0x1000000u;
    else
      fLogOptionFlag &= ~0x1000000u;
LABEL_32:
    v24 = Source[0];
    LODWORD(v50) = v48;
    Destination.MaximumLength = GuidString.Length + CmpClfsLogPrefix.Length + TmLogExt.Length + Source[0]->Length;
    Destination.Buffer = (wchar_t *)ExAllocatePool2(0x100uLL, Destination.MaximumLength, 0x67727453u);
    if ( !Destination.Buffer )
    {
      IsFileInSystemConfig = -1073741670;
      *(_DWORD *)(v5 + 4160) = 5;
      goto LABEL_109;
    }
    RtlAppendUnicodeStringToString(&Destination, &CmpClfsLogPrefix);
    RtlAppendUnicodeStringToString(&Destination, v24);
    RtlAppendUnicodeStringToString(&Destination, &GuidString);
    RtlAppendUnicodeStringToString(&Destination, &TmLogExt);
    IsFileInSystemConfig = CmpQueryFileSecurityDescriptor(*(HANDLE *)&Uuid.Data1, (struct _PRIVILEGE_SET **)&P);
    if ( IsFileInSystemConfig < 0 )
    {
      *(_DWORD *)(v5 + 4160) = 6;
      goto LABEL_109;
    }
    IsFileInSystemConfig = ClfsCreateLogFile(
                             &pplfoLog,
                             &Destination,
                             0xC0000000,
                             7u,
                             P,
                             3u,
                             8u,
                             0,
                             fLogOptionFlag,
                             0LL,
                             0);
    if ( (unsigned int)Feature_CLFS_Signing__private_IsEnabledDeviceUsageNoInline() )
    {
      v48 = v50;
      a2 = v23;
      if ( IsFileInSystemConfig == -1072037875 )
      {
        CmpDeleteCorruptedLogfile(
          Source[0],
          &GuidString,
          &TmLogExt,
          (const UNICODE_STRING *)&TmContainerExt,
          1u,
          (const wchar_t *)L"Container%020d",
          0x46u);
        v48 = v50;
        a2 = v23;
      }
    }
    RtlFreeAnsiString(&GuidString);
    if ( v2 )
      RtlFreeAnsiString(&UnicodeString);
    ExFreePoolWithTag(P, 0);
    if ( IsFileInSystemConfig >= 0 )
      break;
    if ( v48 )
    {
      *(_DWORD *)(v5 + 4160) = 7;
      goto LABEL_109;
    }
    RtlFreeAnsiString(&Destination);
    CmpLogTxrInitEvent(v25, v5, IsFileInSystemConfig);
LABEL_60:
    v11 = a2;
  }
  memset(&RegistrationData, 0, sizeof(RegistrationData));
  RegistrationData.Version = 1;
  IsFileInSystemConfig = ClfsMgmtRegisterManagedClient(pplfoLog, &RegistrationData, &ClientCookie);
  if ( IsFileInSystemConfig < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 8;
    goto LABEL_109;
  }
  v26 = ExAllocatePool2(0x100uLL, (unsigned __int16)TmContainerExt + 24LL, 0x6D524D43u);
  v27 = (struct _CLFS_MGMT_POLICY *)v26;
  if ( !v26 )
  {
    *(_DWORD *)(v5 + 4160) = 9;
    goto LABEL_109;
  }
  *(_DWORD *)v26 = 1;
  v28 = (unsigned __int16)TmContainerExt + 24;
  *(_DWORD *)(v26 + 12) = 9;
  *(_DWORD *)(v26 + 4) = v28;
  *(_WORD *)(v26 + 16) = TmContainerExt;
  memmove((void *)(v26 + 18), off_140E0A048, (unsigned __int16)TmContainerExt);
  IsFileInSystemConfig = ClfsMgmtInstallPolicy(pplfoLog, v27, (unsigned __int16)TmContainerExt + 24);
  ExFreePoolWithTag(v27, 0);
  if ( IsFileInSystemConfig < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 10;
LABEL_109:
    CmpLogTxrInitEvent(v20, v5, IsFileInSystemConfig);
    if ( ClientCookie )
    {
      ClfsMgmtDeregisterManagedClient(ClientCookie);
      ClientCookie = 0LL;
    }
    if ( pplfoLog )
      ClfsCloseLogFileObject(pplfoLog);
    if ( GuidString.Buffer )
      RtlFreeAnsiString(&GuidString);
    if ( UnicodeString.Buffer )
      RtlFreeAnsiString(&UnicodeString);
    if ( Destination.Buffer )
      RtlFreeAnsiString(&Destination);
    v43 = (void *)Pool2[6];
    if ( v43 )
      ZwClose(v43);
    v44 = (void *)Pool2[5];
    if ( v44 )
      ObfDereferenceObject(v44);
    v45 = (void *)Pool2[4];
    if ( v45 )
      ZwClose(v45);
    ExFreePoolWithTag(Pool2, 0x6D524D43u);
    ExDeleteResourceLite(Resource);
    ExFreePoolWithTag(Resource, 0);
    *(_DWORD *)(v5 + 4164) = IsFileInSystemConfig;
    return (unsigned int)IsFileInSystemConfig;
  }
  v29 = (HANDLE *)(Pool2 + 4);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  LogFileName.Length = Destination.Length - CmpClfsLogPrefix.Length;
  ObjectAttributes.Length = 48;
  LogFileName.MaximumLength = Destination.MaximumLength - CmpClfsLogPrefix.Length;
  LogFileName.Buffer = (wchar_t *)((char *)Destination.Buffer + CmpClfsLogPrefix.Length);
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v30 = ZwCreateTransactionManager((PHANDLE)Pool2 + 4, 0xF003Fu, &ObjectAttributes, &LogFileName, CreateOptions, 0);
  IsFileInSystemConfig = v30;
  if ( v30 == -1073741771 )
  {
    if ( Destination.Buffer )
      RtlFreeAnsiString(&Destination);
    if ( pplfoLog )
    {
      ClfsCloseLogFileObject(pplfoLog);
      pplfoLog = 0LL;
    }
    v13 = (__int64)ClientCookie;
    if ( ClientCookie )
    {
      ClfsMgmtDeregisterManagedClient(ClientCookie);
      ClientCookie = 0LL;
    }
    if ( v48 )
      goto LABEL_69;
    v2 = v57;
    goto LABEL_60;
  }
  if ( v30 >= 0 )
    IsFileInSystemConfig = ZwRecoverTransactionManager(*v29);
LABEL_69:
  RtlFreeAnsiString(&Destination);
  if ( IsFileInSystemConfig < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 11;
    goto LABEL_109;
  }
  if ( pplfoLog )
  {
    ClfsCloseLogFileObject(pplfoLog);
    pplfoLog = 0LL;
  }
  if ( ClientCookie )
  {
    ClfsMgmtDeregisterManagedClient(ClientCookie);
    ClientCookie = 0LL;
  }
  v33 = *v29;
  P = 0LL;
  IsFileInSystemConfig = ObReferenceObjectByHandle(
                           v33,
                           0xF003Fu,
                           (POBJECT_TYPE)TmTransactionManagerObjectType,
                           0,
                           &P,
                           0LL);
  Pool2[5] = P;
  if ( IsFileInSystemConfig < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 12;
    goto LABEL_109;
  }
  v34 = (HANDLE *)(Pool2 + 6);
  v35 = *(GUID *)(*(_QWORD *)(v5 + 64) + 112LL);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = 0LL;
  ResourceManagerGuid = v35;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IsFileInSystemConfig = ZwCreateResourceManager(
                           (PHANDLE)Pool2 + 6,
                           0x1F007Fu,
                           *v29,
                           &ResourceManagerGuid,
                           &ObjectAttributes,
                           0,
                           0LL);
  if ( IsFileInSystemConfig == -1073741771 )
    IsFileInSystemConfig = ZwOpenResourceManager(
                             (PHANDLE)Pool2 + 6,
                             0x1F007Fu,
                             *v29,
                             &ResourceManagerGuid,
                             &ObjectAttributes);
  if ( IsFileInSystemConfig < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 13;
    goto LABEL_109;
  }
  IsFileInSystemConfig = ZwRecoverResourceManager(*v34);
  if ( IsFileInSystemConfig < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 14;
    goto LABEL_109;
  }
  v36 = *v34;
  P = 0LL;
  IsFileInSystemConfig = ObReferenceObjectByHandle(
                           v36,
                           0x1F007Fu,
                           (POBJECT_TYPE)TmResourceManagerObjectType,
                           0,
                           &P,
                           0LL);
  Pool2[7] = P;
  if ( IsFileInSystemConfig < 0 )
  {
    *(_DWORD *)(v5 + 4160) = 15;
    goto LABEL_109;
  }
  v37 = v57;
  if ( !v57 )
  {
    CmRmSystem = Pool2;
    v38 = &qword_140E098B8;
    v39 = 7LL;
    while ( 1 )
    {
      v40 = v38[3];
      if ( !v40 || (*(_DWORD *)(v40 + 160) & 2) != 0 )
      {
        if ( !*v38 || (*(_DWORD *)(*v38 + 160) & 2) != 0 )
          goto LABEL_94;
        ++*((_DWORD *)Pool2 + 16);
        v41 = *v38;
      }
      else
      {
        ++*((_DWORD *)Pool2 + 16);
        v41 = v38[3];
      }
      *(_QWORD *)(v41 + 4152) = Pool2;
LABEL_94:
      v38 += 23;
      if ( !--v39 )
      {
        v37 = v57;
        *(_QWORD *)(CmpMasterHive + 4152) = Pool2;
        ++*((_DWORD *)Pool2 + 16);
        goto LABEL_97;
      }
    }
  }
  *(_QWORD *)(v57 + 4152) = Pool2;
  *((_DWORD *)Pool2 + 16) = 1;
LABEL_97:
  Pool2[10] = v37;
  LOCK_CM_RM_LIST();
  v42 = (_QWORD *)qword_140EF5528;
  if ( *(__int64 **)qword_140EF5528 != &CmpRmListHead )
    __fastfail(3u);
  *Pool2 = &CmpRmListHead;
  Pool2[1] = v42;
  *v42 = Pool2;
  qword_140EF5528 = (__int64)Pool2;
  ExReleaseFastMutexUnsafe(&CmpRmListLock);
  KeLeaveCriticalRegion();
  if ( a2 )
    CmpStartRMLog(Pool2, 0LL);
  return 0LL;
}
