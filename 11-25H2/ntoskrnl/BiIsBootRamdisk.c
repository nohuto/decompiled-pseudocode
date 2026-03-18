/*
 * XREFs of BiIsBootRamdisk @ 0x1408046B8
 * Callers:
 *     BiConvertBootEnvironmentDeviceToNt @ 0x140802C54 (BiConvertBootEnvironmentDeviceToNt.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwDeviceIoControlFile @ 0x14069B220 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenFile @ 0x14069B7A0 (ZwOpenFile.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 */

bool __fastcall BiIsBootRamdisk(_QWORD *a1)
{
  char v1; // di
  NTSTATUS v3; // ebx
  UNICODE_STRING DestinationString; // [rsp+58h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp-29h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-19h] BYREF
  _BYTE OutputBuffer[20]; // [rsp+A8h] [rbp+17h] BYREF
  int v9; // [rsp+BCh] [rbp+2Bh]
  __int64 v10; // [rsp+C8h] [rbp+37h]
  __int64 v11; // [rsp+D8h] [rbp+47h]
  HANDLE FileHandle; // [rsp+100h] [rbp+6Fh] BYREF

  v1 = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  IoStatusBlock = 0LL;
  memset_0(OutputBuffer, 0, 0x40uLL);
  FileHandle = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Device\\Ramdisk{d9b257fc-684e-4dcb-ab79-03cfa2f6b750}");
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenFile(&FileHandle, 0xC0000000, &ObjectAttributes, &IoStatusBlock, 3u, 0x20u) >= 0 )
  {
    v3 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x240008u, 0LL, 0, OutputBuffer, 0x40u);
    ZwClose(FileHandle);
    if ( v3 >= 0 && (v9 == 3 || *a1 == v11 << 12) )
      return a1[1] == v10;
  }
  return v1;
}
