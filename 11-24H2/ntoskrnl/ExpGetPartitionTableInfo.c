/*
 * XREFs of ExpGetPartitionTableInfo @ 0x140A5C9EC
 * Callers:
 *     ExpDiskEnumCallback @ 0x1404F7B08 (ExpDiskEnumCallback.c)
 *     ExpFindDiskSignature @ 0x140A5C820 (ExpFindDiskSignature.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x1406A7490 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

NTSTATUS __fastcall ExpGetPartitionTableInfo(PCWSTR SourceString, _QWORD *a2)
{
  NTSTATUS result; // eax
  ULONG OutputBufferLength; // ebx
  void *OutputBuffer; // rax
  void *v6; // rsi
  NTSTATUS v7; // edi
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-9h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+60h] [rbp+7h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp+17h] BYREF
  HANDLE FileHandle; // [rsp+D0h] [rbp+77h] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  IoStatusBlock = 0LL;
  RtlInitUnicodeString(&DestinationString, SourceString);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100080u, &ObjectAttributes, &IoStatusBlock, 3u, 0x60u);
  if ( result >= 0 )
  {
    for ( OutputBufferLength = 2352; ; OutputBufferLength *= 2 )
    {
      OutputBuffer = (void *)ExAllocatePool2(0x40uLL, OutputBufferLength, 0x72766E45u);
      v6 = OutputBuffer;
      if ( !OutputBuffer )
        break;
      v7 = ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x70050u,
             0LL,
             0,
             OutputBuffer,
             OutputBufferLength);
      if ( v7 >= 0 )
      {
        *a2 = v6;
LABEL_6:
        ZwClose(FileHandle);
        return v7;
      }
      ExFreePoolWithTag(v6, 0);
      if ( v7 != -1073741789 )
        goto LABEL_6;
    }
    ZwClose(FileHandle);
    return -1073741670;
  }
  return result;
}
