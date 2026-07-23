/*
 * XREFs of CmInitSystem1 @ 0x140C33C44
 * Callers:
 *     Phase1InitializationDiscard @ 0x140BFB048 (Phase1InitializationDiscard.c)
 * Callees:
 *     ExInitializeResourceLite2 @ 0x1402D6940 (ExInitializeResourceLite2.c)
 *     CmpInitializeThreadInfo @ 0x1403F5C00 (CmpInitializeThreadInfo.c)
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ExInitializeLookasideListExInternal @ 0x140460CA0 (ExInitializeLookasideListExInternal.c)
 *     KeBugCheckEx @ 0x1404F9280 (KeBugCheckEx.c)
 *     CmpInitializeLoadOptions @ 0x14065BBE8 (CmpInitializeLoadOptions.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwCreateKey @ 0x14069B4E0 (ZwCreateKey.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     CmpMarkCurrentProfileDirty @ 0x1407BC3B4 (CmpMarkCurrentProfileDirty.c)
 *     CmpInitCallbacks @ 0x1407C2288 (CmpInitCallbacks.c)
 *     CmpInitializeMachineHiveLoadedCallbacks @ 0x1407C2780 (CmpInitializeMachineHiveLoadedCallbacks.c)
 *     CmpInitSiloSupport @ 0x1407C6460 (CmpInitSiloSupport.c)
 *     CmpValidateGlobalFlushControlFlags @ 0x1407C8884 (CmpValidateGlobalFlushControlFlags.c)
 *     CmpInitializeRegistryProcess @ 0x1407C8AB0 (CmpInitializeRegistryProcess.c)
 *     CmpInitializeFreezeThaw @ 0x1407C8FE4 (CmpInitializeFreezeThaw.c)
 *     CmpVolumeManagerInitialize @ 0x1407C9464 (CmpVolumeManagerInitialize.c)
 *     CmpInitializeNameCache @ 0x1407CB768 (CmpInitializeNameCache.c)
 *     CmpInitSIDToHiveMapping @ 0x1407CC38C (CmpInitSIDToHiveMapping.c)
 *     CmpAdminSystemSecurityDescriptor @ 0x1407CC828 (CmpAdminSystemSecurityDescriptor.c)
 *     CmpHiveRootSecurityDescriptor @ 0x1407CDA54 (CmpHiveRootSecurityDescriptor.c)
 *     CmpInitializeDelayedCloseTable @ 0x1407CE384 (CmpInitializeDelayedCloseTable.c)
 *     HvInitializeHashLibrary @ 0x1407CE594 (HvInitializeHashLibrary.c)
 *     CmpInitializeGlobalKeyLockTracker @ 0x1407CE7A0 (CmpInitializeGlobalKeyLockTracker.c)
 *     CmpInitializeLightWeightTransactionType @ 0x1407CEB4C (CmpInitializeLightWeightTransactionType.c)
 *     CmpHashUnicodeComponent @ 0x140848190 (CmpHashUnicodeComponent.c)
 *     ObOpenObjectByName @ 0x14085AA70 (ObOpenObjectByName.c)
 *     CmpLockRegistryExclusive @ 0x14087DA6C (CmpLockRegistryExclusive.c)
 *     CmpCreateHive @ 0x14090EE00 (CmpCreateHive.c)
 *     CmpInitializeKcbCache @ 0x140911C24 (CmpInitializeKcbCache.c)
 *     CmpLinkHiveToMaster @ 0x140911D30 (CmpLinkHiveToMaster.c)
 *     CmpInitializeParseContext @ 0x140913DE0 (CmpInitializeParseContext.c)
 *     CmpCleanupParseContext @ 0x140913E90 (CmpCleanupParseContext.c)
 *     CmpAddToHiveFileList @ 0x140A678B4 (CmpAddToHiveFileList.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 *     CmpUnlockRegistry @ 0x140BA9920 (CmpUnlockRegistry.c)
 *     CmpAttachToRegistryProcess @ 0x140BA99D0 (CmpAttachToRegistryProcess.c)
 *     CmpDetachFromRegistryProcess @ 0x140BA9A10 (CmpDetachFromRegistryProcess.c)
 *     CmpCreateControlSet @ 0x140C34B48 (CmpCreateControlSet.c)
 *     CmpCreateExtendedControlSets @ 0x140C35070 (CmpCreateExtendedControlSets.c)
 *     CmpCreateHardwareProfiles @ 0x140C3512C (CmpCreateHardwareProfiles.c)
 *     CmpCreateObjectTypes @ 0x140C359B8 (CmpCreateObjectTypes.c)
 *     CmpCreateRegistryRoot @ 0x140C35AB8 (CmpCreateRegistryRoot.c)
 *     CmpInitializeDriverStores @ 0x140C35F30 (CmpInitializeDriverStores.c)
 *     CmpInitializePreloadedHives @ 0x140C36714 (CmpInitializePreloadedHives.c)
 *     CmpMigrateOOBELanguageToInstallationLanguage @ 0x140C36BE0 (CmpMigrateOOBELanguageToInstallationLanguage.c)
 *     CmpSetNetworkValue @ 0x140C36D04 (CmpSetNetworkValue.c)
 *     CmpSetSystemValues @ 0x140C36DF0 (CmpSetSystemValues.c)
 *     CmpInitGlobalQuotaAllowed @ 0x140C37CD4 (CmpInitGlobalQuotaAllowed.c)
 *     CmpInitializeMachineDependentConfiguration @ 0x140C38240 (CmpInitializeMachineDependentConfiguration.c)
 *     CmFcInitSystem2 @ 0x140C38F20 (CmFcInitSystem2.c)
 *     CmpInitializeRegistryNames @ 0x140C390DC (CmpInitializeRegistryNames.c)
 *     CmpInitializeTrustedInstallerSid @ 0x140C3931C (CmpInitializeTrustedInstallerSid.c)
 *     CmpInitializeTransactions @ 0x140C393A0 (CmpInitializeTransactions.c)
 *     CmpInitializeHardwareConfiguration @ 0x140C396E4 (CmpInitializeHardwareConfiguration.c)
 */

char __fastcall CmInitSystem1(ULONG_PTR BugCheckParameter3)
{
  _DWORD *v2; // rsi
  __int64 v3; // r14
  _DWORD *v4; // rax
  __int64 v5; // rcx
  int *v6; // rdi
  __int64 v7; // r15
  int ObjectTypes; // eax
  int v9; // eax
  int v10; // eax
  int Hive; // eax
  int v12; // eax
  int inited; // eax
  ACL *v14; // rdi
  NTSTATUS v15; // eax
  ULONG_PTR v16; // r15
  NTSTATUS v17; // eax
  ULONG_PTR v18; // r15
  int v19; // eax
  ULONG_PTR v20; // r15
  NTSTATUS v21; // eax
  ULONG_PTR v22; // r15
  int v23; // eax
  int ControlSet; // eax
  int v25; // eax
  ULONG_PTR v26; // rsi
  int v27; // eax
  int v28; // eax
  int v29; // eax
  int ExtendedControlSets; // eax
  __int64 v31; // rcx
  int v32; // eax
  int v33; // eax
  __int64 v34; // rcx
  int v35; // eax
  int v36; // eax
  HANDLE KeyHandle; // [rsp+78h] [rbp-90h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-88h] BYREF
  int v40[2]; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING DestinationString; // [rsp+B8h] [rbp-50h] BYREF
  _KAFFINITY_EX BugCheckParameter4; // [rsp+C8h] [rbp-40h] BYREF
  _DWORD v43[116]; // [rsp+2B8h] [rbp+1B0h] BYREF

  KeyHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(_QWORD *)v40 = 0LL;
  memset(&BugCheckParameter4, 0, 64);
  memset_0(v43, 0, sizeof(v43));
  DestinationString = 0LL;
  memset_0(&BugCheckParameter4.StaticBitmap[7], 0, 0x1B0uLL);
  CmpInitializeThreadInfo(&BugCheckParameter4);
  CmpInitializeParseContext((__int64)v43);
  CmIoFileObjectType = (__int64)&IoFileObjectType;
  if ( InitIsWinPEMode )
  {
    BYTE5(NlsMbOemCodePageTag) = InitIsWinPEMode;
    BYTE4(NlsMbOemCodePageTag) = 1;
    CmpForceSynchronousMachineHiveLoad = 1;
  }
  if ( CmpVolatileBoot )
    BYTE4(NlsMbOemCodePageTag) = 1;
  v2 = &unk_140E09770;
  v3 = 7LL;
  if ( BYTE4(NlsMbOemCodePageTag) )
  {
    v4 = &unk_140E09770;
    v5 = 7LL;
    do
    {
      if ( *((_QWORD *)v4 - 4) )
        *v4 |= 0x8000u;
      v4 += 46;
      --v5;
    }
    while ( v5 );
  }
  CmpInitializeRegistryNames();
  CmpInitGlobalQuotaAllowed();
  CmpHiveListHeadLock = 0LL;
  qword_140FD8D38 = (__int64)&CmpHiveListHead;
  CmpHiveListHead = (__int64)&CmpHiveListHead;
  CmpLoadHiveLock = 0LL;
  qword_140EF52B8 = (__int64)&CmpAppHiveLoadList;
  CmpAppHiveLoadList = (__int64)&CmpAppHiveLoadList;
  CmpShutdownRundown.Count = 0LL;
  CmpHiveLoadUnloadRundown.Count = 0LL;
  CmpActiveHiveRundownEvent = 0LL;
  CmpActiveAppHiveUnloadEvent = 0LL;
  CmpAppHiveLoadListLock = 0LL;
  ExInitializeResourceLite2(&CmpRegistryLock, -1);
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
  v6 = dword_140E09D1C;
  v7 = 8LL;
  do
  {
    RtlInitUnicodeString(&DestinationString, *(PCWSTR *)(v6 - 3));
    *v6 = CmpHashUnicodeComponent((__int128 *)&DestinationString);
    v6 += 6;
    --v7;
  }
  while ( v7 );
  ObjectTypes = CmpCreateObjectTypes();
  if ( ObjectTypes < 0 )
    KeBugCheckEx(0x67u, 1uLL, 1uLL, ObjectTypes, 0LL);
  v9 = CmpInitializeLightWeightTransactionType();
  if ( v9 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x18uLL, v9, 0LL);
  v10 = CmpInitializeRegistryProcess();
  if ( v10 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x19uLL, v10, 0LL);
  CmpAttachToRegistryProcess((PRKAPC_STATE)&BugCheckParameter4.StaticBitmap[1]);
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
           (__int64)&BugCheckParameter4.StaticBitmap[7]);
  if ( Hive < 0 )
    KeBugCheckEx(0x67u, 1uLL, 2uLL, Hive, (ULONG_PTR)&BugCheckParameter4.StaticBitmap[7]);
  v12 = CmpInitializeKcbCache(CmpMasterHive, 0x80u);
  if ( v12 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 3uLL, v12, 0LL);
  if ( (int)CmpCreateRegistryRoot() < 0 )
    KeBugCheckEx(0x67u, 1uLL, 4uLL, 0LL, 0LL);
  inited = CmpInitSiloSupport();
  if ( inited < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, inited, 0LL);
  v14 = CmpHiveRootSecurityDescriptor();
  ObjectAttributes.ObjectName = &CmRegistryMachineName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v14;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v15 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v16 = v15;
  if ( v15 < 0 )
  {
    ExFreePoolWithTag(v14, 0);
    KeBugCheckEx(0x67u, 1uLL, 5uLL, v16, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryUserName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v14;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v17 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v18 = v17;
  if ( v17 < 0 )
  {
    ExFreePoolWithTag(v14, 0);
    KeBugCheckEx(0x67u, 1uLL, 6uLL, v18, 0LL);
  }
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryAppName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v14;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v43[0] = 65;
  v19 = ObOpenObjectByName(
          (__int64)&ObjectAttributes,
          (__int64)CmKeyObjectType,
          0,
          0LL,
          131103,
          (__int64)v43,
          (__int64)&KeyHandle);
  v20 = v19;
  if ( v19 < 0 )
  {
    ExFreePoolWithTag(v14, 0);
    CmpCleanupParseContext((__int64)v43, 0);
    KeBugCheckEx(0x67u, 1uLL, 7uLL, v20, 0LL);
  }
  CmpCleanupParseContext((__int64)v43, 0);
  ZwClose(KeyHandle);
  ObjectAttributes.ObjectName = &CmRegistryContainersName;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.SecurityDescriptor = v14;
  ObjectAttributes.SecurityQualityOfService = 0LL;
  v21 = ZwCreateKey(&KeyHandle, 0x2001Fu, &ObjectAttributes, 0, (PUNICODE_STRING)&nullclass, 0, 0LL);
  v22 = v21;
  if ( v21 < 0 )
  {
    ExFreePoolWithTag(v14, 0);
    KeBugCheckEx(0x67u, 1uLL, 8uLL, v22, 0LL);
  }
  ZwClose(KeyHandle);
  CmpNoMasterCreates = 1;
  CmpInitializeLoadOptions(BugCheckParameter3);
  v23 = CmpInitializePreloadedHives(BugCheckParameter3, 1LL);
  if ( v23 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x14uLL, v23, 0LL);
  ControlSet = CmpCreateControlSet(L"SYSTEM", 0LL);
  if ( ControlSet < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0xDuLL, ControlSet, 0LL);
  if ( CmpLKGEnabled )
    *(_DWORD *)(MmWriteableSharedUserData + 752) |= 0x10u;
  if ( CmStateSeparationEnabled )
  {
    if ( CmStateSeparationAllHivesVolatile )
    {
      do
      {
        *v2 |= 0x8000u;
        v2 += 46;
        --v3;
      }
      while ( v3 );
    }
    else
    {
      byte_140E09844 = 0;
      if ( !CmStateSeparationDevMode )
      {
        dword_140E098E0 |= 0x8000u;
        dword_140E09998 |= 0x8000u;
      }
      byte_140E09B24 = 0;
      byte_140E09BDB = 1;
    }
  }
  memset_0(&BugCheckParameter4.StaticBitmap[7], 0, 0x1B0uLL);
  v25 = CmpCreateHive(
          (ULONG_PTR *)v40,
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
          (__int64)&BugCheckParameter4.StaticBitmap[7]);
  v26 = v25;
  if ( v25 < 0 )
  {
    ExFreePoolWithTag(v14, 0);
    KeBugCheckEx(0x67u, 1uLL, 0x10uLL, v26, (ULONG_PTR)&BugCheckParameter4.StaticBitmap[7]);
  }
  v27 = CmpLinkHiveToMaster(
          &CmRegistryMachineHardwareName.Length,
          0LL,
          *(__int64 *)v40,
          1,
          dword_140E09778,
          0,
          0LL,
          (__int64)v14,
          0LL,
          0LL,
          1,
          &BugCheckParameter4.StaticBitmap[7]);
  if ( v27 )
    KeBugCheckEx(0x67u, 1uLL, 0x11uLL, v27, 0LL);
  CmpAddToHiveFileList(*(__int64 *)v40);
  ExFreePoolWithTag(v14, 0);
  qword_140E09768 = *(_QWORD *)v40;
  v28 = CmpInitializeHardwareConfiguration(BugCheckParameter3);
  if ( v28 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x12uLL, v28, 0LL);
  v29 = CmpInitializeDriverStores(BugCheckParameter3);
  if ( v29 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x13uLL, v29, 0LL);
  ExtendedControlSets = CmpCreateExtendedControlSets(BugCheckParameter3);
  if ( ExtendedControlSets < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1BuLL, ExtendedControlSets, 0LL);
  CmpCreateHardwareProfiles(BugCheckParameter3);
  CmSetInitMachineConfig(BugCheckParameter3);
  CmpUnlockRegistry();
  CmpMarkCurrentProfileDirty(v31);
  v32 = CmpInitializeMachineDependentConfiguration(BugCheckParameter3);
  if ( v32 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x15uLL, v32, 0LL);
  v33 = CmpSetSystemValues(BugCheckParameter3);
  if ( v33 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x16uLL, v33, 0LL);
  CmpMigrateOOBELanguageToInstallationLanguage();
  ExFreePoolWithTag(CmpLoadOptions.Buffer, 0);
  v34 = *(_QWORD *)(BugCheckParameter3 + 240);
  if ( *(_DWORD *)v34 >= 0x68u )
  {
    if ( *(_QWORD *)(v34 + 96) )
    {
      v35 = CmpSetNetworkValue();
      if ( v35 < 0 )
        KeBugCheckEx(0x67u, 1uLL, 0x17uLL, v35, 0LL);
    }
  }
  v36 = CmFcInitSystem2();
  if ( v36 < 0 )
    KeBugCheckEx(0x67u, 1uLL, 0x1AuLL, v36, 0LL);
  CmpDetachFromRegistryProcess((__int64)&BugCheckParameter4.StaticBitmap[1]);
  KeGetCurrentThread()[1].UserAffinity = *(_KAFFINITY_EX **)&BugCheckParameter4.Count;
  return 1;
}
