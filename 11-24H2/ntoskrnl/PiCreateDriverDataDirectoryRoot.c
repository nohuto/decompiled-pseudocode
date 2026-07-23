/*
 * XREFs of PiCreateDriverDataDirectoryRoot @ 0x140C247C8
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C20504 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14031B140 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwCreateFile @ 0x1406A7E50 (ZwCreateFile.c)
 *     ZwCreateSymbolicLinkObject @ 0x1406A8CB0 (ZwCreateSymbolicLinkObject.c)
 *     RtlFreeAnsiString @ 0x1408B69C0 (RtlFreeAnsiString.c)
 *     PiGetStateRootPath @ 0x1409B55E8 (PiGetStateRootPath.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140C26D0C (PiAuGetDriverDataDirectorySecurityObject.c)
 */

__int64 PiCreateDriverDataDirectoryRoot()
{
  void *v0; // rdi
  NTSTATUS StateRootPath; // ebx
  unsigned int v2; // esi
  NTSTATUS v3; // eax
  UNICODE_STRING LinkTarget; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+7h] BYREF
  void *v9; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE LinkHandle; // [rsp+100h] [rbp+77h] BYREF
  LARGE_INTEGER Interval; // [rsp+108h] [rbp+7Fh] BYREF

  Interval.QuadPart = -1000000LL;
  FileHandle = 0LL;
  LinkHandle = 0LL;
  *(_QWORD *)&LinkTarget.Length = 0LL;
  LinkTarget.Buffer = 0LL;
  v0 = 0LL;
  IoStatusBlock = 0LL;
  v9 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  StateRootPath = PiGetStateRootPath(
                    L"DriverData",
                    L"\\SystemRoot\\System32\\Drivers\\DriverData",
                    LocationTypeFileSystem,
                    &LinkTarget);
  if ( StateRootPath >= 0 )
  {
    StateRootPath = PiAuGetDriverDataDirectorySecurityObject(&v9);
    if ( StateRootPath < 0 )
    {
      v0 = v9;
    }
    else
    {
      ObjectAttributes.RootDirectory = 0LL;
      v0 = v9;
      ObjectAttributes.SecurityQualityOfService = 0LL;
      ObjectAttributes.SecurityDescriptor = v9;
      v2 = 0;
      ObjectAttributes.Length = 48;
      ObjectAttributes.Attributes = 576;
      ObjectAttributes.ObjectName = &LinkTarget;
      do
      {
        v3 = ZwCreateFile(&FileHandle, 0x100001u, &ObjectAttributes, &IoStatusBlock, 0LL, 0x80u, 3u, 3u, 0x21u, 0LL, 0);
        StateRootPath = v3;
        if ( v3 != -1073741810 && (unsigned int)(v3 + 2147483632) > 1 && v3 != -1073741766 )
          break;
        KeDelayExecutionThread(0, 0, &Interval);
        ++v2;
      }
      while ( v2 < 0x12C );
      if ( StateRootPath >= 0 )
      {
        RtlInitUnicodeString(&DestinationString, L"\\DriverData");
        ObjectAttributes.RootDirectory = 0LL;
        ObjectAttributes.SecurityQualityOfService = 0LL;
        ObjectAttributes.ObjectName = &DestinationString;
        ObjectAttributes.SecurityDescriptor = (PVOID)SePublicDefaultUnrestrictedSd;
        ObjectAttributes.Length = 48;
        ObjectAttributes.Attributes = 80;
        StateRootPath = ZwCreateSymbolicLinkObject(&LinkHandle, 0xF0001u, &ObjectAttributes, &LinkTarget);
      }
    }
  }
  RtlFreeAnsiString(&LinkTarget);
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( LinkHandle )
    ZwClose(LinkHandle);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  return (unsigned int)StateRootPath;
}
