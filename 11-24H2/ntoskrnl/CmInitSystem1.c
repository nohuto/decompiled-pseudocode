/*
 * XREFs of CmInitSystem1 @ 0x140C44EC0
 * Callers:
 *     Phase1InitializationDiscard @ 0x140C0C048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x140365350 (ExInitializeResourceLite2.c)
 *     CmpInitializeThreadInfo @ 0x1403FA250 (CmpInitializeThreadInfo.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ExInitializeLookasideListExInternal @ 0x14045FC80 (ExInitializeLookasideListExInternal.c)
 *     ExAllocateCacheAwarePushLock @ 0x1404BB520 (ExAllocateCacheAwarePushLock.c)
 *     KeBugCheckEx @ 0x1404FB990 (KeBugCheckEx.c)
 *     CmpInitializeLoadOptions @ 0x1406676C8 (CmpInitializeLoadOptions.c)
 *     Feature_Servicing_CmpRegistryLockToCacheAwarePushlock__private_IsEnabledDeviceUsageNoInline @ 0x140667834 (Feature_Servicing_CmpRegistryLockToCacheAwarePushlock__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A67B0 (ZwCreateKey.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     CmpMarkCurrentProfileDirty @ 0x1407CBBCC (CmpMarkCurrentProfileDirty.c)
 *     CmpInitCallbacks @ 0x1407D19C0 (CmpInitCallbacks.c)
 *     CmpInitializeMachineHiveLoadedCallbacks @ 0x1407D1EC0 (CmpInitializeMachineHiveLoadedCallbacks.c)
 *     CmpInitSiloSupport @ 0x1407D5BB4 (CmpInitSiloSupport.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x1407D801C (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitializeRegistryProcess @ 0x1407D8250 (CmpInitializeRegistryProcess.c)
 *     CmpInitializeFreezeThaw @ 0x1407D8788 (CmpInitializeFreezeThaw.c)
 *     CmpVolumeManagerInitialize @ 0x1407D8C54 (CmpVolumeManagerInitialize.c)
 *     CmpInitializeNameCache @ 0x1407DAF2C (CmpInitializeNameCache.c)
 *     CmpInitSIDToHiveMapping @ 0x1407DBB4C (CmpInitSIDToHiveMapping.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407DBFE8 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407DD214 (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407DDB44 (CmpInitializeDelayedCloseTable.c)
 *     HvInitializeHashLibrary @ 0x1407DDD54 (HvInitializeHashLibrary.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x1407DDF60 (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpInitializeLightWeightTransactionType @ 0x1407DE434 (CmpInitializeLightWeightTransactionType.c)
 *     CmpHashUnicodeComponent @ 0x1408733F0 (CmpHashUnicodeComponent.c)
 *     CmpLockRegistryExclusive @ 0x14087DD80 (CmpLockRegistryExclusive.c)
 *     ObOpenObjectByName @ 0x14089B210 (ObOpenObjectByName.c)
 *     CmpInitializeKcbCache @ 0x14092C134 (CmpInitializeKcbCache.c)
 *     CmpLinkHiveToMaster @ 0x14092C240 (CmpLinkHiveToMaster.c)
 *     CmpInitializeParseContext @ 0x14092D400 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x14092D4B0 (CmpCleanupParseContext.c)
 *     CmpCreateHive @ 0x14092F538 (CmpCreateHive.c)
 *     CmpAddToHiveFileList @ 0x140A6A4C4 (CmpAddToHiveFileList.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     CmpAttachToRegistryProcess @ 0x140BB98E0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BB9920 (CmpDetachFromRegistryProcess.c)
 *     CmpUnlockRegistry @ 0x140BB9F50 (CmpUnlockRegistry.c)
 *     CmpCreateControlSet @ 0x140C45E04 (CmpCreateControlSet.c)
 *     CmpCreateExtendedControlSets @ 0x140C4632C (CmpCreateExtendedControlSets.c)
 *     CmpCreateHardwareProfiles @ 0x140C463E8 (CmpCreateHardwareProfiles.c)
 *     CmpCreateObjectTypes @ 0x140C46C74 (CmpCreateObjectTypes.c)
 *     CmpCreateRegistryRoot @ 0x140C46D74 (CmpCreateRegistryRoot.c)
 *     CmpInitializeDriverStores @ 0x140C471E0 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHives @ 0x140C479C4 (CmpInitializePreloadedHives.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140C47E90 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetNetworkValue @ 0x140C47FB4 (CmpSetNetworkValue.c)
 *     CmpSetSystemValues @ 0x140C480A0 (CmpSetSystemValues.c)
 *     CmpUpdateStateSeparationHiveOptions @ 0x140C48378 (CmpUpdateStateSeparationHiveOptions.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140C48FDC (CmpInitGlobalQuotaAllowed.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C4953C (CmpInitializeMachineDependentConfiguration.c)
 *     CmFcInitSystem2 @ 0x140C4A21C (CmFcInitSystem2.c)
 *     CmpInitializeRegistryNames @ 0x140C4A3D8 (CmpInitializeRegistryNames.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140C4A618 (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitializeTransactions @ 0x140C4A69C (CmpInitializeTransactions.c)
 *     CmpInitializeHardwareConfiguration @ 0x140C4A9E0 (CmpInitializeHardwareConfiguration.c)
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
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  int Hive; // eax
  int v13; // eax
  int inited; // eax
  ACL *v15; // rdi
  NTSTATUS v16; // eax
  ULONG_PTR v17; // rsi
  NTSTATUS v18; // eax
  ULONG_PTR v19; // rsi
  int v20; // eax
  __int64 v21; // r8
  __int64 v22; // r9
  ULONG_PTR v23; // rsi
  NTSTATUS v24; // eax
  ULONG_PTR v25; // rsi
  int v26; // eax
  int ControlSet; // eax
  int v28; // eax
  ULONG_PTR v29; // rsi
  int v30; // eax
  int v31; // eax
  int v32; // eax
  int ExtendedControlSets; // eax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  __int64 v37; // rcx
  int v38; // eax
  int v39; // eax
  __int64 v41; // r8
  __int64 v42; // r9
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  int v45[2]; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  _KAFFINITY_EX v47; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v48[116]; // [rsp+2C8h] [rbp+1C0h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)v45 = 0LL;
  memset(&v47, 0, 56);
  memset_0(v48, 0, sizeof(v48));
  DestinationString = 0LL;
  memset_0(&v47.StaticBitmap[9], 0, 0x1B0uLL);
  *(_OWORD *)&v47.StaticBitmap[6] = 0LL;
  CmpInitializeThreadInfo(&v47);
  CmpInitializeParseContext((__int64)v48);
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
    v2 = &unk_140E09850;
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
  qword_140EF55B8 = (__int64)&CmpAppHiveLoadList;
  CmpAppHiveLoadList = (__int64)&CmpAppHiveLoadList;
  qword_140FD8D08 = (__int64)&CmpHiveListHead;
  CmpHiveListHead = (__int64)&CmpHiveListHead;
  CmpLoadHiveLock = 0LL;
  CmpShutdownRundown.Count = 0LL;
  CmpHiveLoadUnloadRundown.Count = 0LL;
  CmpActiveHiveRundownEvent = 0LL;
  CmpActiveAppHiveUnloadEvent = 0LL;
  CmpAppHiveLoadListLock = 0LL;
  if ( (unsigned int)Feature_Servicing_CmpRegistryLockToCacheAwarePushlock__private_IsEnabledDeviceUsageNoInline() )
  {
    dword_140EF6D28 = 1;
    CmpRegistryLockDescriptor[0] = (__int64)ExAllocateCacheAwarePushLock(1);
    CmpRegistryLock = (PERESOURCE)CmpRegistryLockDescriptor[0];
  }
  else
  {
    dword_140EF6D28 = 0;
    ExInitializeResourceLite2(CmpRegistryLockDescriptor, -1);
    CmpRegistryLock = (PERESOURCE)CmpRegistryLockDescriptor;
  }
  CmpPostLock.Count = 1;
  CmpPostLock.Event.Header.WaitListHead.Blink = &CmpPostLock.Event.Header.WaitListHead;
  CmpPostLock.Event.Header.WaitListHead.Flink = &CmpPostLock.Event.Header.WaitListHead;
  qword_140FD75C8 = (__int64)&CmpAsyncKernelPostList;
  CmpAsyncKernelPostList = (__int64)&CmpAsyncKernelPostList;
  CmpPostLock.Owner = 0LL;
  CmpPostLock.Contention = 0;
  LOWORD(CmpPostLock.Event.Header.Lock) = 1;
  CmpPostLock.Event.Header.Size = 6;
  CmpPostLock.Event.Header.SignalState = 0;
  CmpInitializeNameCache();
  ExInitializeLookasideListExInternal(
    &CmpKcbLookaside.L.ListHead,
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
  v4 = dword_140E09DFC;
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
  CmpAttachToRegistryProcess((PRKAPC_STATE)&v47.StaticBitmap[2]);
  CmpLockRegistryExclusive(v10, v9, v11);
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
           (__int64)&v47.StaticBitmap[9]);
  if ( Hive < 0 )
    KeBugCheckEx(0x67u, 1uLL, 2uLL, Hive, (ULONG_PTR)&v47.StaticBitmap[9]);
  v13 = CmpInitializeKcbCache(CmpMasterHive, 0x80u);
  if ( v13 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 3uLL, v13, 0LL);
  if ( (int)CmpCreateRegistryRoot() < 0 )
    KeBugCheckEx(0x67u, 1uLL, 4uLL, 0LL, 0LL);
  inited = CmpInitSiloSupport();
  if ( inited < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, inited, 0LL);
  v15 = CmpHiveRootSecurityDescriptor();
  ObjectAttributes.ObjectName = &CmRegistryMachineName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v15;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v16 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v17 = v16;
  if ( v16 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v17, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryUserName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v15;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v18 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v19 = v18;
  if ( v18 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v19, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryAppName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v15;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v48[0] = 65;
  v20 = ObOpenObjectByName(
          (int)&ObjectAttributes,
          (int)CmKeyObjectType,
          0,
          0,
          131103,
          (__int64)v48,
          (__int64)&KeyHandle);
  v23 = v20;
  if ( v20 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    CmpCleanupParseContext((__int64)v48, 0, v41, v42);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v23, 0LL);
  }
  CmpCleanupParseContext((__int64)v48, 0, v21, v22);
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryContainersName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v15;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v24 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v25 = v24;
  if ( v24 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v25, 0LL);
  }
  ZwClose(KeyHandle);
  CmpNoMasterCreates = 1;
  CmpInitializeLoadOptions(BugCheckParameter3);
  v26 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v26 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x14uLL, v26, 0LL);
  ControlSet = CmpCreateControlSet(L"SYSTEM", 0LL);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( CmpLKGEnabled )
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x10u;
  if ( CmStateSeparationEnabled )
    CmpUpdateStateSeparationHiveOptions();
  memset_0(&v47.StaticBitmap[9], 0, 0x1B0uLL);
  v28 = CmpCreateHive(
          (ULONG_PTR *)v45,
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
          (__int64)&v47.StaticBitmap[9]);
  v29 = v28;
  if ( v28 < 0 )
  {
    ExFreePoolWithTag(v15, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v29, (ULONG_PTR)&v47.StaticBitmap[9]);
  }
  v30 = CmpLinkHiveToMaster(
          &CmRegistryMachineHardwareName.Length,
          0LL,
          *(__int64 *)v45,
          1,
          dword_140E09858,
          0,
          0LL,
          (__int64)v15,
          0LL,
          0LL,
          1,
          &v47.StaticBitmap[9]);
  if ( v30 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v30, 0LL);
  CmpAddToHiveFileList(*(__int64 *)v45);
  ExFreePoolWithTag(v15, 0);
  qword_140E09848 = *(_QWORD *)v45;
  v31 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v31 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v31, 0LL);
  v32 = CmpInitializeDriverStores(BugCheckParameter3);
  if ( v32 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v32, 0LL);
  ExtendedControlSets = CmpCreateExtendedControlSets(BugCheckParameter3);
  if ( ExtendedControlSets < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1BuLL, ExtendedControlSets, 0LL);
  CmpCreateHardwareProfiles(BugCheckParameter3);
  CmSetInitMachineConfig(BugCheckParameter3);
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty(v34);
  v35 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v35 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v35, 0LL);
  v36 = CmpSetSystemValues(BugCheckParameter3);
  if ( v36 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v36, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v37 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v37 >= 0x68u )
  {
    if ( *(_QWORD *)(v37 + 96) )
    {
      v38 = CmpSetNetworkValue();
      if ( v38 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v38, 0LL);
    }
  }
  v39 = CmFcInitSystem2();
  if ( v39 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, v39, 0LL);
  CmpDetachFromRegistryProcess((__int64)&v47.StaticBitmap[2]);
  KeGetCurrentThread()[1].UserAffinity = *(_KAFFINITY_EX **)&v47.Count;
  return 1;
}
