/*
 * XREFs of SiGetDriveLayoutInformation @ 0x140816014
 * Callers:
 *     SiFindSystemPartition @ 0x140815E34 (SiFindSystemPartition.c)
 *     SiGetEfiSystemDevice @ 0x140816348 (SiGetEfiSystemDevice.c)
 *     SiGetBiosSystemPartition @ 0x140816DA0 (SiGetBiosSystemPartition.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1406A64F0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     SiOpenDevice @ 0x140A51A9C (SiOpenDevice.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiGetDriveLayoutInformation(const WCHAR *a1, _QWORD *a2)
{
  int v3; // ebx
  ULONG OutputBufferLength; // esi
  void *OutputBuffer; // rdi
  NTSTATUS v6; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF
  HANDLE FileHandle; // [rsp+90h] [rbp+18h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v3 = SiOpenDevice(a1, &FileHandle);
  if ( v3 >= 0 )
  {
    for ( OutputBufferLength = 18480; ; OutputBufferLength += 9216 )
    {
      OutputBuffer = (void *)ExAllocatePool2(0x100uLL);
      if ( !OutputBuffer )
      {
        v3 = -1073741670;
        goto LABEL_10;
      }
      v6 = ZwDeviceIoControlFile(
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
      v3 = v6;
      if ( v6 != -1073741789 )
        break;
      ExFreePoolWithTag(OutputBuffer, 0);
    }
    if ( v6 < 0 )
      ExFreePoolWithTag(OutputBuffer, 0);
    else
      *a2 = OutputBuffer;
  }
LABEL_10:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v3;
}
