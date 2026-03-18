/*
 * XREFs of PopLoadFileInMemory @ 0x14073D3E4
 * Callers:
 *     PopValidateWinresume @ 0x140746DC4 (PopValidateWinresume.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwReadFile @ 0x14069B200 (ZwReadFile.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x14069B360 (ZwQueryInformationFile.c)
 *     ZwOpenFile @ 0x14069B7A0 (ZwOpenFile.c)
 *     ExAllocatePool2 @ 0x140B620F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B62CD0 (ExFreePoolWithTag.c)
 */

__int64 __fastcall PopLoadFileInMemory(UNICODE_STRING *a1, _QWORD *a2, ULONG *a3)
{
  void *Pool2; // rdi
  NTSTATUS v6; // ebx
  ULONG Length; // esi
  HANDLE FileHandle; // [rsp+50h] [rbp-39h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+58h] [rbp-31h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-21h] BYREF
  __int128 FileInformation; // [rsp+98h] [rbp+Fh] BYREF
  __int64 v13; // [rsp+A8h] [rbp+1Fh]

  ObjectAttributes.ObjectName = a1;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  FileHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v13 = 0LL;
  FileInformation = 0LL;
  Pool2 = 0LL;
  ObjectAttributes.Attributes = 576;
  IoStatusBlock = 0LL;
  v6 = ZwOpenFile(&FileHandle, 0x80000000, &ObjectAttributes, &IoStatusBlock, 1u, 0x20u);
  if ( v6 >= 0 )
  {
    v6 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x18u, FileStandardInformation);
    if ( v6 >= 0 )
    {
      if ( HIDWORD(FileInformation) )
      {
        v6 = -1073741823;
      }
      else
      {
        Length = DWORD2(FileInformation);
        Pool2 = (void *)ExAllocatePool2(0x100uLL);
        if ( Pool2 )
        {
          v6 = ZwReadFile(FileHandle, 0LL, 0LL, 0LL, &IoStatusBlock, Pool2, Length, 0LL, 0LL);
          if ( v6 >= 0 )
          {
            *a2 = Pool2;
            *a3 = Length;
          }
        }
        else
        {
          v6 = -1073741670;
        }
      }
    }
  }
  if ( FileHandle )
    ZwClose(FileHandle);
  if ( v6 < 0 )
  {
    if ( Pool2 )
      ExFreePoolWithTag(Pool2, 0x206D654Du);
    *a2 = 0LL;
    *a3 = 0;
  }
  return (unsigned int)v6;
}
