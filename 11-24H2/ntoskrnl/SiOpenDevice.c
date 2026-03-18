/*
 * XREFs of SiOpenDevice @ 0x140A51A9C
 * Callers:
 *     SiGetDeviceNumberInformation @ 0x140815F38 (SiGetDeviceNumberInformation.c)
 *     SiGetDriveLayoutInformation @ 0x140816014 (SiGetDriveLayoutInformation.c)
 *     SiIssueSynchronousIoctl @ 0x140816114 (SiIssueSynchronousIoctl.c)
 *     SiQueryProperty @ 0x140A518C0 (SiQueryProperty.c)
 *     SiGetDiskPartitionInformation @ 0x140A51A08 (SiGetDiskPartitionInformation.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     ZwOpenFile @ 0x1406A6A70 (ZwOpenFile.c)
 */

NTSTATUS __fastcall SiOpenDevice(PCWSTR SourceString, PHANDLE FileHandle)
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-50h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF

  *FileHandle = 0LL;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  IoStatusBlock = 0LL;
  return ZwOpenFile(FileHandle, 0x80100000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u);
}
