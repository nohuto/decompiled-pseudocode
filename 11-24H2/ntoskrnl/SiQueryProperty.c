/*
 * XREFs of SiQueryProperty @ 0x140A48990
 * Callers:
 *     SyspartGetPhysicalPartitions @ 0x140816418 (SyspartGetPhysicalPartitions.c)
 *     SyspartIsSpace @ 0x140816518 (SyspartIsSpace.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwDeviceIoControlFile @ 0x1406A7490 (ZwDeviceIoControlFile.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     SiOpenDevice @ 0x140A48B6C (SiOpenDevice.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall SiQueryProperty(const WCHAR *a1, unsigned int a2, unsigned int a3, _QWORD *a4)
{
  NTSTATUS v7; // esi
  ULONG OutputBufferLength; // ebx
  _DWORD *OutputBuffer; // rax
  _DWORD *v10; // rdi
  HANDLE FileHandle; // [rsp+50h] [rbp-58h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-50h] BYREF
  __int64 InputBuffer; // [rsp+68h] [rbp-40h] BYREF
  int v15; // [rsp+70h] [rbp-38h]

  FileHandle = 0LL;
  *a4 = 0LL;
  IoStatusBlock = 0LL;
  InputBuffer = 0LL;
  v15 = 0;
  v7 = SiOpenDevice(a1, &FileHandle);
  if ( v7 >= 0 )
  {
    InputBuffer = a2;
    OutputBufferLength = 8;
    if ( a3 >= 8 )
      OutputBufferLength = a3;
    while ( 1 )
    {
      OutputBuffer = (_DWORD *)ExAllocatePool2(0x100uLL, OutputBufferLength, 0x4B505953u);
      v10 = OutputBuffer;
      if ( !OutputBuffer )
        break;
      v7 = ZwDeviceIoControlFile(
             FileHandle,
             0LL,
             0LL,
             0LL,
             &IoStatusBlock,
             0x2D1400u,
             &InputBuffer,
             0xCu,
             OutputBuffer,
             OutputBufferLength);
      if ( ((v7 + 0x80000000) & 0x80000000) == 0 && v7 != -2147483643 )
      {
        ExFreePoolWithTag(v10, 0);
        goto LABEL_8;
      }
      v7 = 0;
      if ( v10[1] <= OutputBufferLength )
      {
        v10[1] = OutputBufferLength;
        *a4 = v10;
        goto LABEL_8;
      }
      OutputBufferLength = v10[1];
      ExFreePoolWithTag(v10, 0);
    }
    v7 = -1073741670;
  }
LABEL_8:
  if ( FileHandle )
    ZwClose(FileHandle);
  return (unsigned int)v7;
}
