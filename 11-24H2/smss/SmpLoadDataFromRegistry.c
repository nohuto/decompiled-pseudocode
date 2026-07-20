/*
 * XREFs of SmpLoadDataFromRegistry @ 0x140015DF4
 * Callers:
 *     SmpInit @ 0x1400150FC (SmpInit.c)
 * Callees:
 *     SmpLogFailureString @ 0x1400010B8 (SmpLogFailureString.c)
 *     SmpExecuteCommand @ 0x140003F30 (SmpExecuteCommand.c)
 *     RtlStringCbPrintfW @ 0x1400058D0 (RtlStringCbPrintfW.c)
 *     SmpConfigureSharedSessionData @ 0x14000A3D0 (SmpConfigureSharedSessionData.c)
 *     SmpCreateProtectedPrefixes @ 0x14000AC10 (SmpCreateProtectedPrefixes.c)
 *     SmpTranslateSystemPartitionInformation @ 0x14000D19C (SmpTranslateSystemPartitionInformation.c)
 *     SmpNtSerializeBoot @ 0x14000D628 (SmpNtSerializeBoot.c)
 *     SmpEventWrite @ 0x14000D668 (SmpEventWrite.c)
 *     SmpFreeSavedRegistryEntry @ 0x14000D6BC (SmpFreeSavedRegistryEntry.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpFinalizePathStrings @ 0x14000E600 (SmpFinalizePathStrings.c)
 *     SmpReadSafeBootOption @ 0x14000E7B8 (SmpReadSafeBootOption.c)
 *     SmpPlatformBinaryTableExists @ 0x14000EB40 (SmpPlatformBinaryTableExists.c)
 *     SmpInitializeSessionManagement @ 0x14000EBC0 (SmpInitializeSessionManagement.c)
 *     SmpCreateDynamicEnvironmentVariables @ 0x1400143B0 (SmpCreateDynamicEnvironmentVariables.c)
 *     SmpGetPlatformBinary @ 0x140014DA0 (SmpGetPlatformBinary.c)
 *     SmpInitializeDosDevices @ 0x140015700 (SmpInitializeDosDevices.c)
 *     SmpInitializeKnownDlls @ 0x1400158F0 (SmpInitializeKnownDlls.c)
 *     SmpInitializeKnownDllsAsync @ 0x140015AF0 (SmpInitializeKnownDllsAsync.c)
 *     SmpOpenKnownDllsHandles @ 0x140017200 (SmpOpenKnownDllsHandles.c)
 *     SmpProcessFileRenames @ 0x1400176FC (SmpProcessFileRenames.c)
 *     SmpReplaceSystemHiveOnSoftReboot @ 0x140017C5C (SmpReplaceSystemHiveOnSoftReboot.c)
 *     SmpRunSecureKernelTrustlets @ 0x140017E00 (SmpRunSecureKernelTrustlets.c)
 *     SmpSendPlatformBinaryStatus @ 0x1400182B0 (SmpSendPlatformBinaryStatus.c)
 *     SmpSuffixUnicodeString @ 0x140018844 (SmpSuffixUnicodeString.c)
 *     memset_0 @ 0x14001EF9F (memset_0.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpLoadDataFromRegistry(HANDLE EventHandle)
{
  __int64 v2; // r13
  unsigned __int16 *Heap; // r14
  __int64 NtSystemRoot; // rax
  int Environment; // ebx
  void *v6; // rax
  int v7; // edx
  __int64 v8; // r9
  __int64 v9; // rdx
  unsigned __int8 *v10; // rcx
  int v11; // eax
  __int64 v12; // rax
  void *v13; // rax
  unsigned int v14; // edx
  PWSTR Buffer; // r8
  char v16; // al
  int v17; // eax
  __int64 v18; // r15
  int v19; // esi
  int PlatformBinary; // eax
  __int64 *v21; // rax
  __int64 **v22; // rdi
  const UNICODE_STRING *v23; // rbx
  int v24; // eax
  int v25; // eax
  char v26; // bl
  __int64 v27; // r8
  __int64 *v28; // rbx
  struct _UNICODE_STRING *v29; // rdi
  __int64 v30; // r8
  __int64 *v31; // rdi
  struct _UNICODE_STRING *v32; // rbx
  __int64 v33; // r8
  __int64 *v34; // rdi
  struct _UNICODE_STRING *v35; // rbx
  __int64 v36; // r8
  unsigned int v37; // ebx
  __int64 v38; // rcx
  unsigned int v39; // ebx
  int RegistryValues; // eax
  int DynamicEnvironmentVariables; // eax
  __int64 v42; // r8
  __int64 *v43; // rdi
  struct _UNICODE_STRING *v44; // rbx
  __int64 v45; // r8
  __int64 *v46; // rdi
  struct _UNICODE_STRING *v47; // rbx
  char Size; // [rsp+38h] [rbp-D0h] BYREF
  unsigned int Size_4; // [rsp+3Ch] [rbp-CCh] BYREF
  void *KeyHandle; // [rsp+40h] [rbp-C8h] BYREF
  __int64 v52; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v53; // [rsp+50h] [rbp-B8h] BYREF
  __int64 v54; // [rsp+58h] [rbp-B0h] BYREF
  PWSTR ObjectAttributes[7]; // [rsp+60h] [rbp-A8h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+98h] [rbp-70h] BYREF
  __int64 v57; // [rsp+A8h] [rbp-60h] BYREF
  __int64 v58; // [rsp+B0h] [rbp-58h] BYREF
  __int64 v59; // [rsp+B8h] [rbp-50h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+C0h] [rbp-48h] BYREF
  __int64 v61; // [rsp+D0h] [rbp-38h] BYREF
  const wchar_t *v62; // [rsp+D8h] [rbp-30h]
  _QWORD v63[2]; // [rsp+E0h] [rbp-28h] BYREF
  _QWORD v64[3]; // [rsp+F0h] [rbp-18h] BYREF
  __int128 v65; // [rsp+108h] [rbp+0h] BYREF
  HANDLE ThreadHandle; // [rsp+118h] [rbp+10h]
  char v67; // [rsp+15Eh] [rbp+56h]
  wchar_t pszDest[256]; // [rsp+178h] [rbp+70h] BYREF

  v54 = 0LL;
  v59 = 0LL;
  v58 = 0LL;
  DWORD1(v65) = 0;
  DestinationString = 0LL;
  memset_0(&v65, 0, 0x64uLL);
  v63[0] = 7602290LL;
  v63[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\MiniNT";
  v61 = 1310738LL;
  v62 = L"\\Sessions";
  v64[0] = 10354844LL;
  v64[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Environment";
  v2 = 0LL;
  *(_QWORD *)&ValueName.Length = 2752552LL;
  ValueName.Buffer = L"NUMBER_OF_PROCESSORS";
  Heap = 0LL;
  Size_4 = 0;
  qword_140032A48 = (__int64)&SmpBootExecuteList;
  SmpBootExecuteList = (__int64)&SmpBootExecuteList;
  qword_140032A58 = (__int64)&SmpBootExecuteNoPnpSyncList;
  SmpBootExecuteNoPnpSyncList = (__int64)&SmpBootExecuteNoPnpSyncList;
  qword_140032A68 = (__int64)&SmpPlatformExecuteList;
  SmpPlatformExecuteList = (__int64)&SmpPlatformExecuteList;
  qword_140032A78 = (__int64)&SmpSetupExecuteList;
  SmpSetupExecuteList = (__int64)&SmpSetupExecuteList;
  qword_140032A88 = (__int64)&SmpSetupExecuteNoPnpSyncList;
  SmpSetupExecuteNoPnpSyncList = (__int64)&SmpSetupExecuteNoPnpSyncList;
  qword_140032BA8 = (__int64)&SmpPagingFileList;
  SmpPagingFileList = (__int64)&SmpPagingFileList;
  qword_140032A98 = (__int64)&SmpDosDevicesList;
  SmpDosDevicesList = (__int64)&SmpDosDevicesList;
  qword_140032AA8 = (__int64)&SmpFileRenameList;
  SmpFileRenameList = (__int64)&SmpFileRenameList;
  qword_140032AB8 = (__int64)&SmpKnownDllsList;
  SmpKnownDllsList = (__int64)&SmpKnownDllsList;
  qword_140032AC8 = (__int64)&SmpExcludeKnownDllsList;
  SmpExcludeKnownDllsList = (__int64)&SmpExcludeKnownDllsList;
  qword_140032AD8 = (__int64)&SmpSubSystemsRequired;
  SmpSubSystemsRequired = (__int64)&SmpSubSystemsRequired;
  qword_140032AE8 = (__int64)&SmpSubSystemsToDefer;
  SmpSubSystemsToDefer = (__int64)&SmpSubSystemsToDefer;
  qword_140032B98 = (__int64)&SmpExistingPageFilesList;
  SmpExistingPageFilesList = (__int64)&SmpExistingPageFilesList;
  LODWORD(v52) = 0;
  SmpClearTempFiles = 0;
  v53 = 0LL;
  KeyHandle = 0LL;
  memset(ObjectAttributes, 0, 52);
  Size = 0;
  RtlInitUnicodeString(&DestinationString, 0LL);
  NtSystemRoot = RtlGetNtSystemRoot();
  RtlStringCbPrintfW(SmpTempDirNameBuffer, 0x20AuLL, L"\\??\\%s", NtSystemRoot);
  RtlInitUnicodeString(&SmpTempFilesDir, SmpTempDirNameBuffer);
  Environment = RtlCreateEnvironment(1u, &SmpDefaultEnvironment);
  if ( Environment < 0 )
  {
    v6 = RtlCreateEnvironment;
    v7 = 2341;
    SmpInitProgressByLine = 2339;
LABEL_3:
    SmpInitReturnStatus = Environment;
    SmpInitLastCall = (__int64)v6;
    SmpLogFailure((__int64)"SmpLoadDataFromRegistry", v7, Environment);
    goto LABEL_130;
  }
  LODWORD(ObjectAttributes[1]) = 48;
  ObjectAttributes[2] = 0LL;
  ObjectAttributes[3] = (PWSTR)v63;
  LODWORD(ObjectAttributes[4]) = 64;
  *(_OWORD *)&ObjectAttributes[5] = 0LL;
  if ( NtOpenKey(&KeyHandle, 0xF003Fu, (POBJECT_ATTRIBUTES)&ObjectAttributes[1]) >= 0 )
  {
    NtClose(KeyHandle);
    KeyHandle = 0LL;
    SmpMiniNTBoot = 1;
  }
  SmpReadSafeBootOption();
  LODWORD(ObjectAttributes[1]) = 48;
  ObjectAttributes[3] = (PWSTR)v64;
  ObjectAttributes[2] = 0LL;
  LODWORD(ObjectAttributes[4]) = 64;
  *(_OWORD *)&ObjectAttributes[5] = 0LL;
  Environment = NtOpenKey(&KeyHandle, 0xF003Fu, (POBJECT_ATTRIBUTES)&ObjectAttributes[1]);
  if ( Environment < 0 )
  {
    v6 = NtOpenKey;
    v7 = 2389;
    SmpInitProgressByLine = 2387;
    goto LABEL_3;
  }
  NtDeleteValueKey(KeyHandle, (PUNICODE_STRING)&SmpSafeBootEnvironmentValue);
  LODWORD(v52) = 4;
  Environment = NtQuerySystemInformationEx(107LL, &v52, 4LL);
  if ( Environment != -1073741820 )
  {
    v6 = NtQuerySystemInformationEx;
    v7 = 2423;
    SmpInitProgressByLine = 2421;
    goto LABEL_3;
  }
  Heap = (unsigned __int16 *)RtlAllocateHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Size_4);
  if ( !Heap )
  {
    v6 = RtlAllocateHeap;
    Environment = -1073741670;
    SmpInitProgressByLine = 2432;
    v7 = 2434;
    goto LABEL_3;
  }
  Environment = NtQuerySystemInformationEx(107LL, &v52, 4LL);
  if ( Environment < 0 )
  {
    v6 = NtQuerySystemInformationEx;
    v7 = 2450;
    SmpInitProgressByLine = 2448;
    goto LABEL_3;
  }
  v8 = 0LL;
  if ( Heap[5] )
  {
    v9 = Heap[5];
    v10 = (unsigned __int8 *)Heap + 33;
    do
    {
      v11 = *v10;
      v10 += 48;
      v8 = (unsigned int)(v11 + v8);
      --v9;
    }
    while ( v9 );
  }
  RtlStringCbPrintfW(pszDest, 0x200uLL, L"%u", v8, Size_4, &Size_4);
  v12 = -1LL;
  do
    ++v12;
  while ( pszDest[v12] );
  Environment = NtSetValueKey(KeyHandle, &ValueName, 0, 1u, pszDest, 2 * v12 + 2);
  if ( Environment < 0 )
  {
    v13 = NtSetValueKey;
    v14 = 2481;
    Buffer = ValueName.Buffer;
    SmpInitProgressByLine = 2479;
LABEL_21:
    SmpInitReturnStatus = Environment;
    SmpInitLastCall = (__int64)v13;
    SmpLogFailureString((__int64)"SmpLoadDataFromRegistry", v14, (__int64)Buffer, Environment);
    goto LABEL_130;
  }
  RtlSetCurrentEnvironment(SmpDefaultEnvironment, ObjectAttributes);
  Environment = RtlQueryRegistryValuesEx(2LL, L"Session Manager", &SmpRegistryConfigurationTable, 0LL, 0LL);
  if ( Environment < 0 )
  {
    v6 = RtlQueryRegistryValuesEx;
    v7 = 2505;
    SmpInitProgressByLine = 2503;
    goto LABEL_3;
  }
  Environment = SmpFinalizePathStrings();
  if ( Environment < 0 )
  {
    SmpInitProgressByLine = 2514;
    v6 = SmpFinalizePathStrings;
    v7 = 2516;
    goto LABEL_3;
  }
  SmpEventWrite(&SmssEvt_InitializeKnownDlls_Start);
  Environment = SmpOpenKnownDllsHandles(
                  &SmpKnownDllsObjectDirectoryName,
                  &SmpKnownDllsPathSuffix,
                  1LL,
                  &SmpKnownDllsObjectDirectory,
                  &SmpKnownDllsFileDirectory);
  if ( Environment < 0 )
  {
    SmpInitProgressByLine = 2535;
    v6 = SmpOpenKnownDllsHandles;
    v7 = 2537;
    goto LABEL_3;
  }
  v16 = SmpLoadKnownDllsFlags;
  if ( SmpSoftBoot && (SmpLoadKnownDllsFlags & 2) != 0 )
  {
    v16 = SmpLoadKnownDllsFlags | 1;
    SmpLoadKnownDllsFlags |= 1u;
  }
  if ( (v16 & 1) != 0 )
  {
    Environment = SmpInitializeKnownDlls(1u);
    if ( Environment < 0 )
    {
LABEL_36:
      SmpInitProgressByLine = 2566;
      v6 = SmpInitializeKnownDlls;
      v7 = 2568;
      goto LABEL_3;
    }
    v17 = SmpInitializeKnownDllsAsync();
  }
  else
  {
    v17 = SmpInitializeKnownDlls(0);
  }
  Environment = v17;
  if ( v17 < 0 )
    goto LABEL_36;
  Environment = SmpInitializeSessionManagement();
  if ( Environment < 0 )
  {
    SmpInitProgressByLine = 2576;
    v6 = SmpInitializeSessionManagement;
    v7 = 2578;
    goto LABEL_3;
  }
  RtlSetCurrentEnvironment(ObjectAttributes[0], &SmpDefaultEnvironment);
  ObjectAttributes[0] = 0LL;
  Environment = SmpInitializeDosDevices();
  if ( Environment < 0 )
  {
    SmpInitProgressByLine = 2595;
    v6 = SmpInitializeDosDevices;
    v7 = 2597;
    goto LABEL_3;
  }
  LODWORD(ObjectAttributes[1]) = 48;
  ObjectAttributes[3] = (PWSTR)&v61;
  ObjectAttributes[5] = (PWSTR)SmpPrimarySecurityDescriptor;
  ObjectAttributes[2] = 0LL;
  LODWORD(ObjectAttributes[4]) = 208;
  ObjectAttributes[6] = 0LL;
  Environment = NtCreateDirectoryObject(&SmpSessionsObjectDirectory, 0xF000Fu, (POBJECT_ATTRIBUTES)&ObjectAttributes[1]);
  if ( Environment < 0 )
  {
    v13 = NtCreateDirectoryObject;
    v14 = 2625;
    Buffer = (PWSTR)v62;
    SmpInitProgressByLine = 2623;
    goto LABEL_21;
  }
  Environment = SmpCreateProtectedPrefixes();
  if ( Environment < 0 )
  {
    SmpInitProgressByLine = 2638;
    v6 = SmpCreateProtectedPrefixes;
    v7 = 2640;
    goto LABEL_3;
  }
  v18 = 0LL;
  v57 = 0LL;
  if ( SmpHostSmss )
  {
    if ( SmpMiniNTBoot || SmpSafeBootOption != -1 || SmpDisableWpbtExecution )
    {
      v19 = -1073741823;
      if ( SmpPlatformBinaryTableExists() )
        SmpSendPlatformBinaryStatus(2LL, 0LL, 0LL, 0LL);
    }
    else
    {
      PlatformBinary = SmpGetPlatformBinary(&DestinationString, &v57);
      v18 = v57;
      v19 = PlatformBinary;
    }
  }
  else
  {
    v19 = -1073741823;
  }
  v21 = (__int64 *)SmpSetupExecuteList;
  v22 = (__int64 **)SmpSetupExecuteList;
  if ( (__int64 *)SmpBootExecuteList != &SmpBootExecuteList )
  {
    if ( *(__int64 **)SmpBootExecuteList != &SmpBootExecuteList )
      goto LABEL_64;
    v23 = (const UNICODE_STRING *)(SmpBootExecuteList + 16);
    if ( !RtlEqualUnicodeString(&SmpAutoChkDefaultCommand, (PCUNICODE_STRING)(SmpBootExecuteList + 16), 1u)
      && (!SmpSoftBoot || !RtlPrefixUnicodeString(&SmpAutoChkKeyword, v23, 1u)) )
    {
      goto LABEL_64;
    }
    v21 = (__int64 *)SmpSetupExecuteList;
  }
  if ( v21 != &SmpSetupExecuteList
    && (*v22 != &SmpSetupExecuteList
     || !SmpSoftBoot
     || !(unsigned __int8)SmpSuffixUnicodeString(&SmpSetupExecuteList, v22 + 2))
    || v19 >= 0 )
  {
LABEL_64:
    v24 = SmpNtSerializeBoot();
    if ( v24 < 0 )
    {
      SmpInitProgressByLine = 2732;
      SmpInitReturnStatus = v24;
      SmpInitLastCall = (__int64)NtSerializeBoot;
      SmpLogFailure((__int64)"SmpLoadDataFromRegistry", 2734, v24);
    }
  }
  SmpEventWrite(&SmssEvt_RunSecureKernelTrustlets_Start);
  if ( SmpHostSmss && (v25 = SmpRunSecureKernelTrustlets(&Size), v25 < 0) )
  {
    v26 = Size;
    if ( Size )
    {
      SmpInitProgressByLine = 2749;
      SmpInitReturnStatus = v25;
      SmpInitLastCall = (__int64)SmpRunSecureKernelTrustlets;
      SmpLogFailure((__int64)"SmpLoadDataFromRegistry", 2751, v25);
    }
  }
  else
  {
    v26 = Size;
  }
  SmpEventWrite(&SmssEvt_RunSecureKernelTrustlets_Stop);
  if ( !v26 && (__int64 *)SmpPlatformExecuteList != &SmpPlatformExecuteList )
  {
    SmpEventWrite(&SmssEvt_PlatformExecuteList_Start);
    v28 = (__int64 *)SmpPlatformExecuteList;
    do
    {
      v29 = (struct _UNICODE_STRING *)v28;
      if ( SmpHostSmss )
        SmpExecuteCommand((__int64)(v28 + 2), 0, v27, 0, 0LL);
      v28 = (__int64 *)*v28;
      SmpFreeSavedRegistryEntry(v29);
    }
    while ( v28 != &SmpPlatformExecuteList );
    SmpEventWrite(&SmssEvt_PlatformExecuteList_Stop);
  }
  if ( (__int64 *)SmpBootExecuteList != &SmpBootExecuteList )
  {
    SmpEventWrite(&SmssEvt_BootExecuteList_Start);
    v31 = (__int64 *)SmpBootExecuteList;
    do
    {
      v32 = (struct _UNICODE_STRING *)v31;
      SmpExecuteCommand((__int64)(v31 + 2), 0, v30, 0, 0LL);
      v31 = (__int64 *)*v31;
      SmpFreeSavedRegistryEntry(v32);
    }
    while ( v31 != &SmpBootExecuteList );
    SmpEventWrite(&SmssEvt_BootExecuteList_Stop);
    v2 = v53;
  }
  if ( (__int64 *)SmpBootExecuteNoPnpSyncList != &SmpBootExecuteNoPnpSyncList )
  {
    SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Start);
    v34 = (__int64 *)SmpBootExecuteNoPnpSyncList;
    do
    {
      v35 = (struct _UNICODE_STRING *)v34;
      SmpExecuteCommand((__int64)(v34 + 2), 0, v33, 0, 0LL);
      v34 = (__int64 *)*v34;
      SmpFreeSavedRegistryEntry(v35);
    }
    while ( v34 != &SmpBootExecuteNoPnpSyncList );
    SmpEventWrite(&SmssEvt_BootExecuteNoPnpSyncList_Stop);
    v2 = v53;
  }
  if ( EventHandle )
    NtSetEvent(EventHandle, 0LL);
  SmpEventWrite(&SmssEvt_InitializeRegistry_Start);
  if ( SmpSoftBootSystemHiveReady )
    SmpReplaceSystemHiveOnSoftReboot();
  NtInitializeRegistry(0);
  SmpEventWrite(&SmssEvt_InitializeRegistry_Stop);
  if ( v19 >= 0 )
  {
    if ( !(unsigned int)RtlQueryPerformanceFrequency(&v54) )
      v54 = 0LL;
    if ( !(unsigned int)RtlQueryPerformanceCounter(&v59) )
      v54 = 0LL;
    if ( (int)SmpExecuteCommand((__int64)&DestinationString, 0, v36, 32, &v65) < 0 )
    {
      v37 = 1;
    }
    else
    {
      if ( v67 >= 0 )
      {
        v37 = 3;
        NtTerminateProcess(*((HANDLE *)&v65 + 1), -1073740760);
      }
      else
      {
        v37 = 0;
        NtResumeThread(ThreadHandle, 0LL);
        NtWaitForSingleObject(*((HANDLE *)&v65 + 1), 0, 0LL);
      }
      NtClose(*((HANDLE *)&v65 + 1));
      NtClose(ThreadHandle);
    }
    if ( (unsigned int)RtlQueryPerformanceCounter(&v58) )
    {
      v38 = v54;
    }
    else
    {
      v38 = 0LL;
      v54 = 0LL;
    }
    if ( v38 > 0 )
      v2 = 1000 * (v58 - v59) / v38;
    SmpSendPlatformBinaryStatus(v37, v18, v2, &DestinationString);
  }
  v39 = 0;
  if ( (unsigned __int8)RtlIsStateSeparationEnabled() )
  {
    RegistryValues = RtlQueryRegistryValuesEx(
                       0LL,
                       L"\\REGISTRY\\MACHINE\\OSDATA\\Session Manager",
                       &SmpRegistryConfigurationTable2,
                       0LL,
                       0LL);
    if ( RegistryValues >= 0 )
      v39 = 1;
    else
      SmpLogFailure((__int64)"SmpLoadDataFromRegistry", 2951, RegistryValues);
  }
  if ( !SmpMiniNTBoot )
    SmpProcessFileRenames(v39);
  v53 = 0LL;
  Environment = TpAllocWork(&v53, SmpAsyncMemoryConfiguration, 0LL, &SmpCallbackEnviron);
  if ( Environment < 0 )
  {
    v6 = TpAllocWork;
    v7 = 2988;
    SmpInitProgressByLine = 2986;
    goto LABEL_3;
  }
  TpPostWork(v53);
  if ( SmpWaitForPagingFiles )
    TpWaitForWork(v53, 0LL);
  TpReleaseWork(v53);
  DynamicEnvironmentVariables = SmpCreateDynamicEnvironmentVariables(KeyHandle);
  Environment = DynamicEnvironmentVariables;
  if ( DynamicEnvironmentVariables >= 0 )
  {
    if ( (__int64 *)SmpSetupExecuteList != &SmpSetupExecuteList )
    {
      SmpEventWrite(&SmssEvt_SetupExecuteList_Start);
      v43 = (__int64 *)SmpSetupExecuteList;
      do
      {
        v44 = (struct _UNICODE_STRING *)v43;
        SmpExecuteCommand((__int64)(v43 + 2), 0, v42, 0, 0LL);
        v43 = (__int64 *)*v43;
        SmpFreeSavedRegistryEntry(v44);
      }
      while ( v43 != &SmpSetupExecuteList );
      SmpEventWrite(&SmssEvt_SetupExecuteList_Stop);
    }
    if ( (__int64 *)SmpSetupExecuteNoPnpSyncList != &SmpSetupExecuteNoPnpSyncList )
    {
      SmpEventWrite(&SmssEvt_SetupExecuteNoPnpSyncList_Start);
      v46 = (__int64 *)SmpSetupExecuteNoPnpSyncList;
      do
      {
        v47 = (struct _UNICODE_STRING *)v46;
        SmpExecuteCommand((__int64)(v46 + 2), 0, v45, 0, 0LL);
        v46 = (__int64 *)*v46;
        SmpFreeSavedRegistryEntry(v47);
      }
      while ( v46 != &SmpSetupExecuteNoPnpSyncList );
      SmpEventWrite(&SmssEvt_SetupExecuteNoPnpSyncList_Stop);
    }
    Environment = SmpConfigureSharedSessionData();
    if ( Environment < 0 )
    {
      SmpInitProgressByLine = 3065;
      v6 = SmpConfigureSharedSessionData;
      v7 = 3067;
      goto LABEL_3;
    }
    SmpTranslateSystemPartitionInformation();
    Environment = 0;
  }
  else
  {
    SmpInitProgressByLine = 3009;
    SmpInitReturnStatus = DynamicEnvironmentVariables;
    SmpInitLastCall = (__int64)SmpCreateDynamicEnvironmentVariables;
  }
LABEL_130:
  if ( DestinationString.Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, DestinationString.Buffer);
  if ( KeyHandle )
    NtClose(KeyHandle);
  if ( Heap )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, Heap);
  if ( ObjectAttributes[0] )
    RtlSetCurrentEnvironment(ObjectAttributes[0], &SmpDefaultEnvironment);
  return (unsigned int)Environment;
}
