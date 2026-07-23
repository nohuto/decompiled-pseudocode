/*
 * XREFs of CmInitSystem1 @ 0x140C47010
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0E048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1403EAA00 (ExInitializeResourceLite2.c)
 *     CmpInitializeThreadInfo @ 0x1403F0160 (CmpInitializeThreadInfo.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ExInitializeLookasideListExInternal @ 0x140454B40 (ExInitializeLookasideListExInternal.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404B6390 (ExAllocateCacheAwarePushLock.c)
 *     KeBugCheckEx @ 0x1404F9250 (KeBugCheckEx.c)
 *     CmpInitializeLoadOptions @ 0x140665FB8 (CmpInitializeLoadOptions.c)
 *     Feature_Servicing_CmpRegistryLockToCacheAwarePushlock__private_IsEnabledDeviceUsageNoInline @ 0x140666124 (Feature_Servicing_CmpRegistryLockToCacheAwarePushlock__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A7750 (ZwCreateKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     CmpMarkCurrentProfileDirty @ 0x1407CC0BC (CmpMarkCurrentProfileDirty.c)
 *     CmpInitCallbacks @ 0x1407D1EB0 (CmpInitCallbacks.c)
 *     CmpInitializeMachineHiveLoadedCallbacks @ 0x1407D23B0 (CmpInitializeMachineHiveLoadedCallbacks.c)
 *     CmpInitSiloSupport @ 0x1407D60A4 (CmpInitSiloSupport.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x1407D8570 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitializeRegistryProcess @ 0x1407D87A0 (CmpInitializeRegistryProcess.c)
 *     CmpInitializeFreezeThaw @ 0x1407D8CD8 (CmpInitializeFreezeThaw.c)
 *     CmpVolumeManagerInitialize @ 0x1407D91A4 (CmpVolumeManagerInitialize.c)
 *     CmpInitializeNameCache @ 0x1407DB47C (CmpInitializeNameCache.c)
 *     CmpInitSIDToHiveMapping @ 0x1407DC09C (CmpInitSIDToHiveMapping.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407DC538 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD764 (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407DE094 (CmpInitializeDelayedCloseTable.c)
 *     HvInitializeHashLibrary @ 0x1407DE2A4 (HvInitializeHashLibrary.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x1407DE4B0 (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpInitializeLightWeightTransactionType @ 0x1407DE984 (CmpInitializeLightWeightTransactionType.c)
 *     CmpHashUnicodeComponent @ 0x140877720 (CmpHashUnicodeComponent.c)
 *     CmpLockRegistryExclusive @ 0x140881C30 (CmpLockRegistryExclusive.c)
 *     ObOpenObjectByName @ 0x1408A38B0 (ObOpenObjectByName.c)
 *     CmpInitializeKcbCache @ 0x14092E274 (CmpInitializeKcbCache.c)
 *     CmpLinkHiveToMaster @ 0x14092E380 (CmpLinkHiveToMaster.c)
 *     CmpInitializeParseContext @ 0x14092F540 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092F5F0 (CmpCleanupParseContext.c)
 *     CmpCreateHive @ 0x140931678 (CmpCreateHive.c)
 *     CmpAddToHiveFileList @ 0x140A63874 (CmpAddToHiveFileList.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140BBB8E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BBB920 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140BBBF50 (CmpUnlockRegistry.c)
 *     CmpCreateControlSet @ 0x140C47F54 (CmpCreateControlSet.c)
 *     CmpCreateExtendedControlSets @ 0x140C4847C (CmpCreateExtendedControlSets.c)
 *     CmpCreateHardwareProfiles @ 0x140C48538 (CmpCreateHardwareProfiles.c)
 *     CmpCreateObjectTypes @ 0x140C48DC4 (CmpCreateObjectTypes.c)
 *     CmpCreateRegistryRoot @ 0x140C48EC4 (CmpCreateRegistryRoot.c)
 *     CmpInitializeDriverStores @ 0x140C49330 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHives @ 0x140C49B14 (CmpInitializePreloadedHives.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140C49FE0 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetNetworkValue @ 0x140C4A104 (CmpSetNetworkValue.c)
 *     CmpSetSystemValues @ 0x140C4A1F0 (CmpSetSystemValues.c)
 *     CmpUpdateStateSeparationHiveOptions @ 0x140C4A4C8 (CmpUpdateStateSeparationHiveOptions.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140C4B100 (CmpInitGlobalQuotaAllowed.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C4B660 (CmpInitializeMachineDependentConfiguration.c)
 *     CmFcInitSystem2 @ 0x140C4C3B8 (CmFcInitSystem2.c)
 *     CmpInitializeRegistryNames @ 0x140C4C574 (CmpInitializeRegistryNames.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140C4C7B4 (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitializeTransactions @ 0x140C4C838 (CmpInitializeTransactions.c)
 *     CmpInitializeHardwareConfiguration @ 0x140C4CB7C (CmpInitializeHardwareConfiguration.c)
 */

char __fastcall CmInitSystem1(ULONG_PTR BugCheckParameter3)
{
  _DWORD *v2; // rax
  __int64 v3; // rcx
  int *v4; // rdi
  __int64 v5; // rsi
  int ObjectTypes; // eax
  int v7; // eax
  int v8; // eax
  int Hive; // eax
  int v10; // eax
  int inited; // eax
  ACL *v12; // rdi
  NTSTATUS v13; // eax
  ULONG_PTR v14; // rsi
  NTSTATUS v15; // eax
  ULONG_PTR v16; // rsi
  int v17; // eax
  ULONG_PTR v18; // rsi
  NTSTATUS v19; // eax
  ULONG_PTR v20; // rsi
  int v21; // eax
  int ControlSet; // eax
  int v23; // eax
  ULONG_PTR v24; // rsi
  int v25; // eax
  int v26; // eax
  int v27; // eax
  int ExtendedControlSets; // eax
  __int64 v29; // rcx
  int v30; // eax
  int v31; // eax
  __int64 v32; // rcx
  int v33; // eax
  int v34; // eax
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  int v41[2]; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  _KAFFINITY_EX v43; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v44[116]; // [rsp+2C8h] [rbp+1C0h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)v41 = 0LL;
  memset(&v43, 0, 56);
  memset_0(v44, 0, sizeof(v44));
  DestinationString = 0LL;
  memset_0(&v43.StaticBitmap[9], 0, 0x1B0uLL);
  *(_OWORD *)&v43.StaticBitmap[6] = 0LL;
  CmpInitializeThreadInfo(&v43);
  CmpInitializeParseContext((__int64)v44);
  CmIoFileObjectType = (__int64)&IoFileObjectType;
  if ( InitIsWinPEMode )
  {
    BYTE6(NlsMbOemCodePageTag) = InitIsWinPEMode;
    BYTE4(NlsMbOemCodePageTag) = 1;
    CmpForceSynchronousMachineHiveLoad = 1;
  }
  if ( CmpVolatileBoot )
    BYTE4(NlsMbOemCodePageTag) = 1;
  if ( BYTE4(NlsMbOemCodePageTag) )
  {
    v2 = &unk_140E098C0;
    v3 = 7LL;
    do
    {
      if ( *((_QWORD *)v2 - 4) )
        *v2 |= 0x8000u;
      v2 += 46;
      --v3;
    }
    while ( v3 );
  }
  CmpInitializeRegistryNames();
  CmpInitGlobalQuotaAllowed();
  CmpHiveListHeadLock = 0LL;
  qword_140EF57F8 = (__int64)&CmpAppHiveLoadList;
  CmpAppHiveLoadList = (__int64)&CmpAppHiveLoadList;
  qword_140FD9D18 = (__int64)&CmpHiveListHead;
  CmpHiveListHead = (__int64)&CmpHiveListHead;
  CmpLoadHiveLock = 0LL;
  CmpShutdownRundown.Count = 0LL;
  CmpHiveLoadUnloadRundown.Count = 0LL;
  CmpActiveHiveRundownEvent = 0LL;
  CmpActiveAppHiveUnloadEvent = 0LL;
  CmpAppHiveLoadListLock = 0LL;
  if ( (unsigned int)Feature_Servicing_CmpRegistryLockToCacheAwarePushlock__private_IsEnabledDeviceUsageNoInline() )
  {
    dword_140EF6F68 = 1;
    CmpRegistryLockDescriptor[0] = (__int64)ExAllocateCacheAwarePushLock(1);
    CmpRegistryLock = (PERESOURCE)CmpRegistryLockDescriptor[0];
  }
  else
  {
    dword_140EF6F68 = 0;
    ExInitializeResourceLite2(CmpRegistryLockDescriptor, -1);
    CmpRegistryLock = (PERESOURCE)CmpRegistryLockDescriptor;
  }
  CmpPostLock.Count = 1;
  CmpPostLock.Event.Header.WaitListHead.Blink = &CmpPostLock.Event.Header.WaitListHead;
  CmpPostLock.Event.Header.WaitListHead.Flink = &CmpPostLock.Event.Header.WaitListHead;
  qword_140FD85E0 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  CmpPostLock.Owner = 0LL;
  CmpPostLock.Contention = 0;
  LOWORD(CmpPostLock.Event.Header.Lock) = 1;
  CmpPostLock.Event.Header.Size = 6;
  CmpPostLock.Event.Header.SignalState = 0;
  CmpInitializeNameCache();
  ExInitializeLookasideListExInternal(
    &CmpKcbLookaside,
    (PVOID (__fastcall *)(int, SIZE_T, ULONG))CmpAllocatePoolLookaside,
    CmSiFreeMemory,
    1,
    0,
    0x138uLL,
    1651199299,
    0,
    0);
  CmpInitSIDToHiveMapping();
  CmpAdminSystemFileSecurityDescriptor = CmpAdminSystemSecurityDescriptor();
  CmpInitializeTrustedInstallerSid();
  CmpInitializeDelayedCloseTable();
  CmpInitCallbacks();
  CmpInitializeMachineHiveLoadedCallbacks();
  CmpInitializeFreezeThaw();
  HvInitializeHashLibrary();
  CmpValidateGlobalFlushControlFlags();
  CmpInitializeGlobalKeyLockTracker();
  CmpInitializeTransactions();
  CmpVolumeManagerInitialize();
  v4 = dword_140E09E6C;
  v5 = 8LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v4 - 3));
    *v4 = CmpHashUnicodeComponent((__m128i *)&DestinationString);
    v4 += 6;
    --v5;
  }
  while ( v5 );
  ObjectTypes = CmpCreateObjectTypes();
  if ( ObjectTypes < 0 )
    KeBugCheckEx(0x67u, 1uLL, 1uLL, ObjectTypes, 0LL);
  v7 = CmpInitializeLightWeightTransactionType();
  if ( v7 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x18uLL, v7, 0LL);
  v8 = CmpInitializeRegistryProcess();
  if ( v8 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x19uLL, v8, 0LL);
  CmpAttachToRegistryProcess((PRKAPC_STATE)&v43.StaticBitmap[2]);
  CmpLockRegistryExclusive();
  CmpInitializePreloadedHives(BugCheckParameter3, 0LL);
  Hive = CmpCreateHive(
           &CmpMasterHive,
           0,
           1LL,
           0LL,
           0LL,
           0LL,
           0LL,
           0x20000,
           0LL,
           0LL,
           0LL,
           0LL,
           (__int64)&v43.StaticBitmap[9]);
  if ( Hive < 0 )
    KeBugCheckEx(0x67u, 1uLL, 2uLL, Hive, (ULONG_PTR)&v43.StaticBitmap[9]);
  v10 = CmpInitializeKcbCache(CmpMasterHive, 0x80u);
  if ( v10 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 3uLL, v10, 0LL);
  if ( (int)CmpCreateRegistryRoot() < 0 )
    KeBugCheckEx(0x67u, 1uLL, 4uLL, 0LL, 0LL);
  inited = CmpInitSiloSupport();
  if ( inited < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, inited, 0LL);
  v12 = CmpHiveRootSecurityDescriptor();
  ObjectAttributes.ObjectName = &CmRegistryMachineName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v12;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v13 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v14 = v13;
  if ( v13 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v14, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryUserName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v12;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v15 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v16 = v15;
  if ( v15 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v16, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryAppName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v12;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v44[0] = 65;
  v17 = ObOpenObjectByName(
          (int)&ObjectAttributes,
          (int)CmKeyObjectType,
          0,
          0,
          131103,
          (__int64)v44,
          (__int64)&KeyHandle);
  v18 = v17;
  if ( v17 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    CmpCleanupParseContext((__int64)v44, 0);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v18, 0LL);
  }
  CmpCleanupParseContext((__int64)v44, 0);
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryContainersName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v12;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v19 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v20 = v19;
  if ( v19 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v20, 0LL);
  }
  ZwClose(KeyHandle);
  CmpNoMasterCreates = 1;
  CmpInitializeLoadOptions(BugCheckParameter3);
  v21 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v21 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x14uLL, v21, 0LL);
  ControlSet = CmpCreateControlSet(L"SYSTEM", 0LL);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( CmpLKGEnabled )
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x10u;
  if ( CmStateSeparationEnabled )
    CmpUpdateStateSeparationHiveOptions();
  memset_0(&v43.StaticBitmap[9], 0, 0x1B0uLL);
  v23 = CmpCreateHive(
          (ULONG_PTR *)v41,
          0,
          1LL,
          0LL,
          0LL,
          0LL,
          0LL,
          0x20000,
          0LL,
          0LL,
          0LL,
          0LL,
          (__int64)&v43.StaticBitmap[9]);
  v24 = v23;
  if ( v23 < 0 )
  {
    ExFreePoolWithTag(v12, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v24, (ULONG_PTR)&v43.StaticBitmap[9]);
  }
  v25 = CmpLinkHiveToMaster(
          &CmRegistryMachineHardwareName.Length,
          0LL,
          *(__int64 *)v41,
          1,
          dword_140E098C8,
          0,
          0LL,
          (__int64)v12,
          0LL,
          0LL,
          1,
          &v43.StaticBitmap[9]);
  if ( v25 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v25, 0LL);
  CmpAddToHiveFileList(*(__int64 *)v41);
  ExFreePoolWithTag(v12, 0);
  qword_140E098B8 = *(_QWORD *)v41;
  v26 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v26 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v26, 0LL);
  v27 = CmpInitializeDriverStores(BugCheckParameter3);
  if ( v27 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v27, 0LL);
  ExtendedControlSets = CmpCreateExtendedControlSets(BugCheckParameter3);
  if ( ExtendedControlSets < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1BuLL, ExtendedControlSets, 0LL);
  CmpCreateHardwareProfiles(BugCheckParameter3);
  CmSetInitMachineConfig(BugCheckParameter3);
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty(v29);
  v30 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v30 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v30, 0LL);
  v31 = CmpSetSystemValues(BugCheckParameter3);
  if ( v31 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v31, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v32 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v32 >= 0x68u )
  {
    if ( *(_QWORD *)(v32 + 96) )
    {
      v33 = CmpSetNetworkValue();
      if ( v33 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v33, 0LL);
    }
  }
  v34 = CmFcInitSystem2();
  if ( v34 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, v34, 0LL);
  CmpDetachFromRegistryProcess((__int64)&v43.StaticBitmap[2], v35, v36, v37);
  KeGetCurrentThread()[1].UserAffinity = *(_KAFFINITY_EX **)&v43.Count;
  return 1;
}
