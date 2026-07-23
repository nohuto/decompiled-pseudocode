/*
 * XREFs of SiIssueSynchronousIoctl @ 0x140816854
 * Callers:
 *     SiValidateSystemPartition @ 0x14048BC80 (SiValidateSystemPartition.c)
 *     SiGetEfiSystemDevice @ 0x140816A88 (SiGetEfiSystemDevice.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140817628 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1406A7490 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     SiOpenDevice @ 0x140A48B6C (SiOpenDevice.c)
 */

__int64 __fastcall SiIssueSynchronousIoctl(
        const WCHAR *a1,
        ULONG a2,
        void *a3,
        ULONG a4,
        PVOID OutputBuffer,
        ULONG OutputBufferLength)
{
  NTSTATUS v9; // ebx
  HANDLE FileHandle; // [rsp+50h] [rbp-28h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-20h] BYREF

  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  v9 = SiOpenDevice(a1, &FileHandle);
  if ( v9 >= 0 )
    v9 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a2, a3, a4, OutputBuffer, OutputBufferLength);
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v9;
}
