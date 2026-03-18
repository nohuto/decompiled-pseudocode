/*
 * XREFs of ?LoadFileContent@@YAJPEAXIIPEAPEAXPEAI@Z @ 0x14010E2CC
 * Callers:
 *     ?ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z @ 0x14010D16C (-ReadLayoutFile@@YAPEAUtagKbdLayer@@PEAUtagKBDFILE@@PEAXII@Z.c)
 * Callees:
 *     ?Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z @ 0x1400185D0 (-Win32AllocPoolZInitImpl@@YAPEAX_K0K@Z.c)
 *     GreDeleteFastMutex @ 0x14001BF40 (GreDeleteFastMutex.c)
 *     __security_check_cookie @ 0x14023F3B0 (__security_check_cookie.c)
 */

__int64 __fastcall LoadFileContent(HANDLE FileHandle, __int64 a2, __int64 a3, void **a4, unsigned int *a5)
{
  NTSTATUS v7; // eax
  ULONG Length; // edi
  unsigned int Status; // ebx
  void *Buffer; // rsi
  union _LARGE_INTEGER ByteOffset; // [rsp+50h] [rbp-11h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-9h] BYREF
  __int128 FileInformation; // [rsp+68h] [rbp+7h] BYREF
  __int64 v15; // [rsp+78h] [rbp+17h]

  v15 = 0LL;
  IoStatusBlock = 0LL;
  FileInformation = 0LL;
  v7 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
  Length = DWORD2(FileInformation);
  Status = v7;
  if ( v7 >= 0 )
  {
    if ( !HIDWORD(FileInformation) && (unsigned int)(DWORD2(FileInformation) - 64) <= 0x3FFC0 )
    {
      Buffer = (void *)Win32AllocPoolZInitImpl(256LL, DWORD2(FileInformation), 0x746B7355u);
      if ( !Buffer )
        return (unsigned int)-1073741801;
      ByteOffset.QuadPart = 0LL;
      Status = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Buffer, Length, &ByteOffset, 0LL);
      if ( (Status & 0x80000000) == 0 )
      {
        if ( IoStatusBlock.Status < 0 )
        {
          Status = IoStatusBlock.Status;
        }
        else
        {
          if ( LODWORD(IoStatusBlock.Information) == Length )
          {
            *a4 = Buffer;
            *a5 = Length;
            return Status;
          }
          Status = -1073741762;
        }
      }
      GreDeleteFastMutex((char *)Buffer);
      return Status;
    }
    return (unsigned int)-1073741672;
  }
  return Status;
}
