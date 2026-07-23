/*
 * XREFs of RtlpGetSetBootStatusData @ 0x140A352C4
 * Callers:
 *     PopBootStatGet @ 0x140A348F8 (PopBootStatGet.c)
 *     RtlGetSetBootStatusData @ 0x140A35140 (RtlGetSetBootStatusData.c)
 * Callees:
 *     ZwReadFile @ 0x1406A7470 (ZwReadFile.c)
 *     ZwWriteFile @ 0x1406A74B0 (ZwWriteFile.c)
 *     ZwFlushBuffersFile @ 0x1406A7D10 (ZwFlushBuffersFile.c)
 *     ZwPowerInformation @ 0x1406A7F90 (ZwPowerInformation.c)
 *     memmove @ 0x1406C0B40 (memmove.c)
 */

NTSTATUS __fastcall RtlpGetSetBootStatusData(HANDLE FileHandle, char a2, int a3, void *a4, unsigned int a5, _DWORD *a6)
{
  unsigned __int64 v8; // rbx
  NTSTATUS result; // eax
  LARGE_INTEGER v11; // rdx
  __int64 v12; // rax
  __int64 Length; // rbx
  NTSTATUS v14; // edi
  unsigned int Buffer; // [rsp+58h] [rbp-9h] BYREF
  LARGE_INTEGER ByteOffset; // [rsp+60h] [rbp-1h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+68h] [rbp+7h] BYREF
  struct _IO_STATUS_BLOCK v18; // [rsp+78h] [rbp+17h] BYREF
  _QWORD InputBuffer[3]; // [rsp+88h] [rbp+27h] BYREF
  int v20; // [rsp+A0h] [rbp+3Fh]
  int v21; // [rsp+A4h] [rbp+43h]

  Buffer = 0;
  ByteOffset.QuadPart = 0LL;
  v8 = a3;
  IoStatusBlock = 0LL;
  v18 = 0LL;
  result = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, &Buffer, 4u, &ByteOffset, 0LL);
  if ( result >= 0 )
  {
    if ( (v8 & 0x80000000) != 0LL || v8 >= 0x13 )
      return -1073741811;
    ByteOffset.HighPart = 0;
    v11.QuadPart = LODWORD(RtlpBootStatusFields[v8]);
    v12 = HIDWORD(RtlpBootStatusFields[v8]);
    ByteOffset = v11;
    Length = (unsigned int)v12;
    if ( v12 + v11.QuadPart > (unsigned __int64)Buffer )
      return -1073741735;
    if ( a5 < (unsigned int)v12 )
      return -1073741789;
    if ( a2 )
    {
      if ( BootStatFileHandleAcquired && BootStatFileHandle == FileHandle && BootStatDataCache )
      {
        IoStatusBlock.Information = (unsigned int)v12;
        memmove(a4, (char *)BootStatDataCache + v11.QuadPart, (unsigned int)v12);
        v14 = 0;
        goto LABEL_15;
      }
      v14 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, v12, &ByteOffset, 0LL);
    }
    else
    {
      if ( BootStatFileHandleAcquired && BootStatFileHandle == FileHandle && BootStatDataCache )
        memmove((char *)BootStatDataCache + v11.QuadPart, a4, (unsigned int)v12);
      v14 = ZwWriteFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, a4, Length, &ByteOffset, 0LL);
      if ( v14 >= 0 && !BootStatDisableFlush )
        v14 = ZwFlushBuffersFile(FileHandle, &v18);
      InputBuffer[0] = a4;
      InputBuffer[1] = Length;
      v21 = 1;
      InputBuffer[2] = ByteOffset.QuadPart;
      v20 = 1;
      ZwPowerInformation(UpdateBlackBoxRecorder, InputBuffer, 0x20u, 0LL, 0);
    }
    if ( v14 < 0 )
      return v14;
    LODWORD(Length) = IoStatusBlock.Information;
LABEL_15:
    if ( a6 )
      *a6 = Length;
    return v14;
  }
  return result;
}
