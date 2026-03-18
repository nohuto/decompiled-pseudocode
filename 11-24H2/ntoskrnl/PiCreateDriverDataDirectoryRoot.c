/*
 * XREFs of PiCreateDriverDataDirectoryRoot @ 0x140C22798
 * Callers:
 *     IopInitializeBootDrivers @ 0x140C1E4C4 (IopInitializeBootDrivers.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x14033BC60 (KeDelayExecutionThread.c)
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateFile @ 0x1406A6EB0 (ZwCreateFile.c)
 *     ZwCreateSymbolicLinkObject @ 0x1406A7D10 (ZwCreateSymbolicLinkObject.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     PiGetStateRootPath @ 0x1409CB310 (PiGetStateRootPath.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 *     PiAuGetDriverDataDirectorySecurityObject @ 0x140C24CDC (PiAuGetDriverDataDirectorySecurityObject.c)
 */

__int64 PiCreateDriverDataDirectoryRoot()
{
  void *v0; // rdi
  int StateRootPath; // ebx
  unsigned int v2; // esi
  NTSTATUS v3; // eax
  UNICODE_STRING UnicodeString; // [rsp+60h] [rbp-29h] BYREF
  UNICODE_STRING DestinationString; // [rsp+70h] [rbp-19h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+80h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+90h] [rbp+7h] BYREF
  void *v9; // [rsp+F0h] [rbp+67h] BYREF
  HANDLE FileHandle; // [rsp+F8h] [rbp+6Fh] BYREF
  HANDLE Handle; // [rsp+100h] [rbp+77h] BYREF
  LARGE_INTEGER Interval; // [rsp+108h] [rbp+7Fh] BYREF

  Interval.QuadPart = -1000000LL;
  FileHandle = 0LL;
  Handle = 0LL;
  *(_QWORD *)&UnicodeString.Length = 0LL;
  UnicodeString.Buffer = 0LL;
  v0 = 0LL;
  IoStatusBlock = 0LL;
  v9 = 0LL;
  DestinationString = 0LL;
  memset(&ObjectAttributes, 0, 44);
  StateRootPath = PiGetStateRootPath(
                    L"DriverData",
                    (__int64)L"\\SystemRoot\\System32\\Drivers\\DriverData",
                    1LL,
                    &UnicodeString);
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
      ObjectAttributes.ObjectName = &UnicodeString;
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
        StateRootPath = ZwCreateSymbolicLinkObject((__int64)&Handle, 983041LL);
      }
    }
  }
  RtlFreeAnsiString(&UnicodeString);
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( Handle )
    ZwClose(Handle);
  if ( v0 )
    ExFreePoolWithTag(v0, 0);
  return (unsigned int)StateRootPath;
}
