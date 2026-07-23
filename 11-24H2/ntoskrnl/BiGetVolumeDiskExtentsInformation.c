/*
 * XREFs of BiGetVolumeDiskExtentsInformation @ 0x140814878
 * Callers:
 *     BiGetPhysicalDriveName @ 0x140AAF94C (BiGetPhysicalDriveName.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1406A7490 (ZwDeviceIoControlFile.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiGetVolumeDiskExtentsInformation(HANDLE FileHandle, _QWORD *a2)
{
  int v2; // ebx
  unsigned int v5; // ebp
  ULONG OutputBufferLength; // esi
  _DWORD *v7; // rdi
  _DWORD *OutputBuffer; // rax
  NTSTATUS v9; // eax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF

  v2 = 0;
  IoStatusBlock = 0LL;
  v5 = 0;
  OutputBufferLength = 32;
  while ( 1 )
  {
    v7 = 0LL;
    if ( v5 >= 2 )
      break;
    OutputBuffer = (_DWORD *)ExAllocatePool2(0x102uLL, OutputBufferLength, 0x4B444342u);
    v7 = OutputBuffer;
    if ( !OutputBuffer )
      return (unsigned int)-1073741670;
    v9 = ZwDeviceIoControlFile(
           FileHandle,
           0LL,
           0LL,
           0LL,
           &IoStatusBlock,
           0x560000u,
           0LL,
           0,
           OutputBuffer,
           OutputBufferLength);
    v2 = v9;
    if ( v9 != -1073741789 && v9 != -2147483643 )
      break;
    OutputBufferLength += 24 * *v7;
    ExFreePoolWithTag(v7, 0x4B444342u);
    ++v5;
  }
  if ( v2 < 0 )
  {
    if ( v7 )
      ExFreePoolWithTag(v7, 0x4B444342u);
  }
  else
  {
    *a2 = v7;
  }
  return (unsigned int)v2;
}
