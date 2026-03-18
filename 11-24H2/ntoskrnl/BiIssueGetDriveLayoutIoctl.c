/*
 * XREFs of BiIssueGetDriveLayoutIoctl @ 0x140A892F4
 * Callers:
 *     BiGetDriveLayoutInformation @ 0x140A89228 (BiGetDriveLayoutInformation.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1406A64F0 (ZwDeviceIoControlFile.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B720F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B72CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiIssueGetDriveLayoutIoctl(HANDLE FileHandle, _QWORD *a2)
{
  ULONG OutputBufferLength; // ebp
  unsigned int *Pool2; // rsi
  _DWORD *OutputBuffer; // rdi
  int v7; // ebx
  NTSTATUS v8; // eax
  ULONG i; // ebp
  NTSTATUS v10; // eax
  size_t v11; // rbp
  _DWORD *v12; // rax
  _QWORD *v13; // rdx
  _DWORD *v14; // rcx
  unsigned int v15; // r8d
  __int64 v16; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF

  OutputBufferLength = 18480;
  IoStatusBlock = 0LL;
  Pool2 = 0LL;
  while ( 1 )
  {
    OutputBuffer = (_DWORD *)ExAllocatePool2(0x102uLL);
    if ( !OutputBuffer )
      return (unsigned int)-1073741670;
    v8 = ZwDeviceIoControlFile(
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
    v7 = v8;
    if ( v8 != -1073741789 )
      break;
    ExFreePoolWithTag(OutputBuffer, 0x4B444342u);
    OutputBufferLength += 9216;
  }
  if ( v8 < 0 )
  {
    for ( i = 2056; ; i += 2048 )
    {
      Pool2 = (unsigned int *)ExAllocatePool2(0x102uLL);
      if ( !Pool2 )
      {
        v7 = -1073741670;
        goto LABEL_21;
      }
      v10 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x7400Cu, 0LL, 0, Pool2, i);
      v7 = v10;
      if ( v10 != -1073741789 )
        break;
      ExFreePoolWithTag(Pool2, 0x4B444342u);
    }
    if ( v10 < 0 )
      goto LABEL_18;
    ExFreePoolWithTag(OutputBuffer, 0x4B444342u);
    v11 = 144 * *Pool2 + 48;
    v12 = (_DWORD *)ExAllocatePool2(0x102uLL);
    OutputBuffer = v12;
    if ( !v12 )
    {
      v7 = -1073741670;
      goto LABEL_18;
    }
    memset_0(v12, 0, v11);
    *OutputBuffer = 0;
    v13 = Pool2 + 2;
    v14 = OutputBuffer + 12;
    OutputBuffer[1] = *Pool2;
    v15 = 0;
    for ( OutputBuffer[2] = Pool2[1]; v15 < *Pool2; *(v14 - 27) = *((_DWORD *)v13 - 4) )
    {
      *v14 = 0;
      ++v15;
      v16 = *v13;
      v13 += 4;
      *((_QWORD *)v14 + 1) = v16;
      v14 += 36;
      *((_QWORD *)v14 - 16) = *(v13 - 3);
      *(v14 - 30) = *((_DWORD *)v13 - 3);
      *((_BYTE *)v14 - 116) = *((_BYTE *)v13 - 5);
      *((_BYTE *)v14 - 112) = *((_BYTE *)v13 - 8);
      *((_BYTE *)v14 - 111) = *((_BYTE *)v13 - 7);
      *((_BYTE *)v14 - 110) = *((_BYTE *)v13 - 6);
    }
  }
  *a2 = OutputBuffer;
LABEL_18:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  if ( v7 < 0 )
  {
LABEL_21:
    if ( OutputBuffer )
      ExFreePoolWithTag(OutputBuffer, 0x4B444342u);
  }
  return (unsigned int)v7;
}
