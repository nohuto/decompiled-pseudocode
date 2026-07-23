/*
 * XREFs of SiGetDriveLayoutInformation @ 0x140816754
 * Callers:
 *     SiFindSystemPartition @ 0x140816574 (SiFindSystemPartition.c)
 *     SiGetEfiSystemDevice @ 0x140816A88 (SiGetEfiSystemDevice.c)
 *     SiGetBiosSystemPartition @ 0x1408174E0 (SiGetBiosSystemPartition.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1406A7490 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     SiOpenDevice @ 0x140A48B6C (SiOpenDevice.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetDriveLayoutInformation(const WCHAR *a1, _QWORD *a2)
{
  int v3; // ebx
  ULONG OutputBufferLength; // esi
  ULONG_PTR i; // rdx
  void *OutputBuffer; // rdi
  NTSTATUS v7; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp+18h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v3 = SiOpenDevice(a1, &FileHandle);
  if ( v3 >= 0 )
  {
    OutputBufferLength = 18480;
    for ( i = 18480LL; ; i = OutputBufferLength )
    {
      OutputBuffer = (void *)ExAllocatePool2(0x100uLL, i, 0x4B505953u);
      if ( !OutputBuffer )
      {
        v3 = -1073741670;
        goto LABEL_10;
      }
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
      v3 = v7;
      if ( v7 != -1073741789 )
        break;
      ExFreePoolWithTag(OutputBuffer, 0);
      OutputBufferLength += 9216;
    }
    if ( v7 < 0 )
      ExFreePoolWithTag(OutputBuffer, 0);
    else
      *a2 = OutputBuffer;
  }
LABEL_10:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
