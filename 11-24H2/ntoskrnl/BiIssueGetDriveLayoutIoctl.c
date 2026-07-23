/*
 * XREFs of BiIssueGetDriveLayoutIoctl @ 0x140A856F4
 * Callers:
 *     BiGetDriveLayoutInformation @ 0x140A85628 (BiGetDriveLayoutInformation.c)
 * Callees:
 *     ZwDeviceIoControlFile @ 0x1406A7490 (ZwDeviceIoControlFile.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

__int64 __fastcall BiIssueGetDriveLayoutIoctl(HANDLE FileHandle, _QWORD *a2)
{
  ULONG OutputBufferLength; // ebp
  ULONG_PTR v5; // rdx
  unsigned int *Pool2; // rsi
  _DWORD *OutputBuffer; // rdi
  int v8; // ebx
  NTSTATUS v9; // eax
  ULONG v10; // ebp
  ULONG_PTR i; // rdx
  NTSTATUS v12; // eax
  ULONG_PTR v13; // rbp
  _DWORD *v14; // rax
  _QWORD *v15; // rdx
  _DWORD *v16; // rcx
  unsigned int v17; // r8d
  __int64 v18; // rax
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+50h] [rbp-28h] BYREF

  OutputBufferLength = 18480;
  IoStatusBlock = 0LL;
  v5 = 18480LL;
  Pool2 = 0LL;
  while ( 1 )
  {
    OutputBuffer = (_DWORD *)ExAllocatePool2(0x102uLL, v5, 0x4B444342u);
    if ( !OutputBuffer )
      return (unsigned int)-1073741670;
    v9 = ZwDeviceIoControlFile(
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
    v8 = v9;
    if ( v9 != -1073741789 )
      break;
    ExFreePoolWithTag(OutputBuffer, 0x4B444342u);
    OutputBufferLength += 9216;
    v5 = OutputBufferLength;
  }
  if ( v9 < 0 )
  {
    v10 = 2056;
    for ( i = 2056LL; ; i = v10 )
    {
      Pool2 = (unsigned int *)ExAllocatePool2(0x102uLL, i, 0x4B444342u);
      if ( !Pool2 )
      {
        v8 = -1073741670;
        goto LABEL_21;
      }
      v12 = ZwDeviceIoControlFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, 0x7400Cu, 0LL, 0, Pool2, v10);
      v8 = v12;
      if ( v12 != -1073741789 )
        break;
      ExFreePoolWithTag(Pool2, 0x4B444342u);
      v10 += 2048;
    }
    if ( v12 < 0 )
      goto LABEL_18;
    ExFreePoolWithTag(OutputBuffer, 0x4B444342u);
    v13 = 144 * *Pool2 + 48;
    v14 = (_DWORD *)ExAllocatePool2(0x102uLL, v13, 0x4B444342u);
    OutputBuffer = v14;
    if ( !v14 )
    {
      v8 = -1073741670;
      goto LABEL_18;
    }
    memset_0(v14, 0, v13);
    *OutputBuffer = 0;
    v15 = Pool2 + 2;
    v16 = OutputBuffer + 12;
    OutputBuffer[1] = *Pool2;
    v17 = 0;
    for ( OutputBuffer[2] = Pool2[1]; v17 < *Pool2; *(v16 - 27) = *((_DWORD *)v15 - 4) )
    {
      *v16 = 0;
      ++v17;
      v18 = *v15;
      v15 += 4;
      *((_QWORD *)v16 + 1) = v18;
      v16 += 36;
      *((_QWORD *)v16 - 16) = *(v15 - 3);
      *(v16 - 30) = *((_DWORD *)v15 - 3);
      *((_BYTE *)v16 - 116) = *((_BYTE *)v15 - 5);
      *((_BYTE *)v16 - 112) = *((_BYTE *)v15 - 8);
      *((_BYTE *)v16 - 111) = *((_BYTE *)v15 - 7);
      *((_BYTE *)v16 - 110) = *((_BYTE *)v15 - 6);
    }
  }
  *a2 = OutputBuffer;
LABEL_18:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x4B444342u);
  if ( v8 < 0 )
  {
LABEL_21:
    if ( OutputBuffer )
      ExFreePoolWithTag(OutputBuffer, 0x4B444342u);
  }
  return (unsigned int)v8;
}
