/*
 * XREFs of SiIssueSynchronousIoctl @ 0x140816114
 * Callers:
 *     SiValidateSystemPartition @ 0x1404911B0 (SiValidateSystemPartition.c)
 *     SiGetEfiSystemDevice @ 0x140816348 (SiGetEfiSystemDevice.c)
 *     SiIsWinPeHardDiskZeroUfdBoot @ 0x140816EE8 (SiIsWinPeHardDiskZeroUfdBoot.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1406A64F0 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     SiOpenDevice @ 0x140A51A9C (SiOpenDevice.c)
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
