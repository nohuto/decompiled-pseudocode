/*
 * XREFs of RtlLockBootStatusData @ 0x140A76500
 * Callers:
 *     PoClearTransitionMarker @ 0x1407472C8 (PoClearTransitionMarker.c)
 *     CmCompleteRegistryInitialization @ 0x1407CF6FC (CmCompleteRegistryInitialization.c)
 *     PopBootStatCheckIntegrity @ 0x140AB00C0 (PopBootStatCheckIntegrity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     RtlpAcquireBootStatusLock @ 0x1404A2FAC (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1404B0F74 (RtlpReleaseBootStatusLock.c)
 *     RtlInitializeBootStatDataCache @ 0x1405E6BA0 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPath @ 0x1405E6CBC (RtlpGetBootStatusPath.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __cdecl RtlLockBootStatusData(PHANDLE FileHandle)
{
  WCHAR *v1; // rdi
  int v3; // esi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v8; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE FileHandlea; // [rsp+B0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+38h] BYREF

  FileHandlea = 0LL;
  v1 = 0LL;
  memset(&ObjectAttributes, 0, 44);
  v3 = 0;
  DestinationString = 0LL;
  SourceString = 0LL;
  IoStatusBlock = 0LL;
  v8 = 0;
  RtlpAcquireBootStatusLock();
  ++BootStatReferenceCount;
  if ( BootStatFileHandleAcquired )
  {
    if ( !FileHandle )
    {
LABEL_3:
      BootStatKeepHandleOpen = 1;
      goto LABEL_4;
    }
    *FileHandle = BootStatFileHandle;
  }
  else
  {
    RtlpGetBootStatusPath(&SourceString, &v8);
    v1 = (WCHAR *)SourceString;
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 704;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v3 = ZwOpenFile(&FileHandlea, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
    if ( v3 < 0 )
    {
      BootStatFileHandle = 0LL;
      BootStatReferenceCount = 0;
      BootStatFileHandleAcquired = 0;
      if ( FileHandle )
        *FileHandle = 0LL;
    }
    else
    {
      BootStatFileHandle = FileHandlea;
      BootStatFileHandleAcquired = 1;
      RtlInitializeBootStatDataCache();
      if ( !FileHandle )
        goto LABEL_3;
      *FileHandle = FileHandlea;
    }
  }
LABEL_4:
  RtlpReleaseBootStatusLock();
  if ( v8 )
    ExFreePoolWithTag(v1, 0);
  return v3;
}
