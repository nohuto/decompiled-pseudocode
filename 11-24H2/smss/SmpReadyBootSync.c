/*
 * XREFs of SmpReadyBootSync @ 0x14000DFA8
 * Callers:
 *     wmain @ 0x140001510 (wmain.c)
 * Callees:
 *     SmpGetControlDeviceHandle @ 0x14000E03C (SmpGetControlDeviceHandle.c)
 */

__int64 SmpReadyBootSync()
{
  NTSTATUS ControlDeviceHandle; // ebx
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-18h] BYREF
  int InputBuffer; // [rsp+70h] [rbp+8h] BYREF
  HANDLE FileHandle; // [rsp+78h] [rbp+10h] BYREF

  FileHandle = 0LL;
  InputBuffer = 16;
  IoStatusBlock = 0LL;
  ControlDeviceHandle = SmpGetControlDeviceHandle(&FileHandle);
  if ( ControlDeviceHandle >= 0 )
  {
    ControlDeviceHandle = NtDeviceIoControlFile(
                            FileHandle,
                            0LL,
                            0LL,
                            0LL,
                            &IoStatusBlock,
                            0x2281DCu,
                            &InputBuffer,
                            4u,
                            0LL,
                            0);
    NtClose(FileHandle);
  }
  return (unsigned int)ControlDeviceHandle;
}
