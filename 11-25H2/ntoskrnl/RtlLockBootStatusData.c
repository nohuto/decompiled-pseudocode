/*
 * XREFs of RtlLockBootStatusData @ 0x140A7A490
 * Callers:
 *     PoClearTransitionMarker @ 0x14073CF8C (PoClearTransitionMarker.c)
 *     CmCompleteRegistryInitialization @ 0x1407BF9FC (CmCompleteRegistryInitialization.c)
 *     PopBootStatCheckIntegrity @ 0x140AB0F30 (PopBootStatCheckIntegrity.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     RtlpAcquireBootStatusLock @ 0x1404A7CE0 (RtlpAcquireBootStatusLock.c)
 *     RtlpReleaseBootStatusLock @ 0x1404B6CA4 (RtlpReleaseBootStatusLock.c)
 *     RtlInitializeBootStatDataCache @ 0x1405DD500 (RtlInitializeBootStatDataCache.c)
 *     RtlpGetBootStatusPath @ 0x1405DD61C (RtlpGetBootStatusPath.c)
 *     ZwOpenFile @ 0x14069B7A0 (ZwOpenFile.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall RtlLockBootStatusData(HANDLE *a1)
{
  WCHAR *v1; // rdi
  NTSTATUS v3; // esi
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  char v8; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE FileHandle; // [rsp+B0h] [rbp+30h] BYREF
  PCWSTR SourceString; // [rsp+B8h] [rbp+38h] BYREF

  FileHandle = 0LL;
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
    if ( !a1 )
    {
LABEL_3:
      BootStatKeepHandleOpen = 1;
      goto LABEL_4;
    }
    *a1 = BootStatFileHandle;
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
    v3 = ZwOpenFile(&FileHandle, 0x12019Fu, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
    if ( v3 < 0 )
    {
      BootStatFileHandle = 0LL;
      BootStatReferenceCount = 0;
      BootStatFileHandleAcquired = 0;
      if ( a1 )
        *a1 = 0LL;
    }
    else
    {
      BootStatFileHandle = FileHandle;
      BootStatFileHandleAcquired = 1;
      RtlInitializeBootStatDataCache();
      if ( !a1 )
        goto LABEL_3;
      *a1 = FileHandle;
    }
  }
LABEL_4:
  RtlpReleaseBootStatusLock();
  if ( v8 )
    ExFreePoolWithTag(v1, 0);
  return (unsigned int)v3;
}
