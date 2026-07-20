/*
 * XREFs of SmpCreatePagingFiles @ 0x1400100F4
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x14000F110 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     SmpSaveOldPageFiles @ 0x140009FD0 (SmpSaveOldPageFiles.c)
 *     SmpProcessPagefileDescriptor @ 0x14000D0D4 (SmpProcessPagefileDescriptor.c)
 *     SmpEnableSwapOnPagingFiles @ 0x14000D11C (SmpEnableSwapOnPagingFiles.c)
 *     SmpFreeSavedRegistryEntry @ 0x14000D6BC (SmpFreeSavedRegistryEntry.c)
 *     SmpBuildFilesStringFromList @ 0x14000D6E8 (SmpBuildFilesStringFromList.c)
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     SmpAdjustPagefileSizeforLowStorage @ 0x14000EFA8 (SmpAdjustPagefileSizeforLowStorage.c)
 *     SmpCleanupStalePageFiles @ 0x14000F3F0 (SmpCleanupStalePageFiles.c)
 *     SmpCreateDedicatedMemoryPagefile @ 0x14000F870 (SmpCreateDedicatedMemoryPagefile.c)
 *     SmpCreateEmergencyPagingFile @ 0x14000F94C (SmpCreateEmergencyPagingFile.c)
 *     SmpCreatePagingFileDescriptor @ 0x14000FE40 (SmpCreatePagingFileDescriptor.c)
 *     SmpCreateVolumeDescriptors @ 0x140010624 (SmpCreateVolumeDescriptors.c)
 *     SmpCreateWorkingSetSwapPagingFile @ 0x14001078C (SmpCreateWorkingSetSwapPagingFile.c)
 *     SmpRecordCreatedPageFiles @ 0x1400116E4 (SmpRecordCreatedPageFiles.c)
 *     SmpCheckForCrashDump @ 0x1400119EC (SmpCheckForCrashDump.c)
 */

void SmpCreatePagingFiles()
{
  int VolumeDescriptors; // eax
  int v1; // edx
  __int64 *i; // rbx
  NTSTATUS v3; // eax
  __int64 v4; // rcx
  __int64 *v5; // rdi
  struct _UNICODE_STRING *v6; // rbx
  PVOID *v7; // rdi
  char v8; // bl
  int v9; // eax
  int v10; // eax
  __int16 v11; // dx
  __int64 v12; // rcx
  struct _UNICODE_STRING v13[2]; // [rsp+20h] [rbp-28h] BYREF
  int SystemInformation; // [rsp+58h] [rbp+10h] BYREF
  __int64 v15; // [rsp+60h] [rbp+18h] BYREF

  v15 = 0LL;
  SystemInformation = 0;
  v13[0] = 0LL;
  SmpCreateDedicatedMemoryPagefile();
  VolumeDescriptors = SmpBuildFilesStringFromList((const UNICODE_STRING *)&SmpExistingPageFilesList, v13);
  if ( VolumeDescriptors < 0 )
  {
    v1 = 2770;
LABEL_3:
    SmpLogFailure((__int64)"SmpCreatePagingFiles", v1, VolumeDescriptors);
    goto LABEL_31;
  }
  SmpSaveOldPageFiles();
  for ( i = (__int64 *)SmpExistingPageFilesList; i != &SmpExistingPageFilesList; i = (__int64 *)*i )
    SmpCheckForCrashDump(i + 2);
  SystemInformation = 2;
  v3 = NtSetSystemInformation(SystemCrashDumpStateInformation, &SystemInformation, 4u);
  if ( v3 < 0 )
    SmpLogFailure((__int64)"SmpCreatePagingFiles", 2794, v3);
  v5 = (__int64 *)SmpPagingFileList;
  while ( v5 != &SmpPagingFileList )
  {
    v6 = (struct _UNICODE_STRING *)v5;
    SmpCreatePagingFileDescriptor((__int64)(v5 + 2));
    v5 = (__int64 *)*v5;
    SmpFreeSavedRegistryEntry(v6);
  }
  if ( !SmpNumberOfPagefileDescriptors && !SmpRegistrySpecifierPresent )
  {
    SmpCleanupStalePageFiles();
    goto LABEL_31;
  }
  VolumeDescriptors = SmpCreateVolumeDescriptors(v4);
  if ( VolumeDescriptors < 0 )
  {
    v1 = 2843;
    goto LABEL_3;
  }
  SmpAdjustPagefileSizeforLowStorage();
  v7 = (PVOID *)SmpPagingFileDescriptorList;
  v8 = 0;
  if ( SmpPagingFileDescriptorList != &SmpPagingFileDescriptorList )
  {
    do
    {
      v9 = SmpProcessPagefileDescriptor((__int64)v7);
      v7 = (PVOID *)*v7;
      if ( v9 >= 0 )
        v8 = 1;
    }
    while ( v7 != &SmpPagingFileDescriptorList );
    if ( v8 )
      goto LABEL_23;
  }
  if ( (int)SmpCreateEmergencyPagingFile() >= 0 )
  {
LABEL_23:
    v10 = SmpCreateWorkingSetSwapPagingFile(&v15);
    if ( v10 < 0 )
    {
      if ( v10 != -1073741710 || SmpNumberOfPagefilesCreated != 1 )
        goto LABEL_30;
      v11 = 63;
      goto LABEL_29;
    }
    if ( (*(_BYTE *)(v15 + 16) & 0x10) != 0 )
    {
      v11 = *(_WORD *)(v15 + 28);
LABEL_29:
      SmpEnableSwapOnPagingFiles((__int64 **)&SmpPagingFileDescriptorList, v11);
    }
  }
LABEL_30:
  SmpCleanupStalePageFiles();
  LOBYTE(v12) = v8 == 0;
  SmpRecordCreatedPageFiles(v12, v13);
LABEL_31:
  if ( v13[0].Buffer )
    RtlFreeHeap(*(PVOID *)(*(_QWORD *)&KeGetPcr()->MajorVersion + 48LL), 0, v13[0].Buffer);
}
