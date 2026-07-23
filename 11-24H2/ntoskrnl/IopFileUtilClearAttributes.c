/*
 * XREFs of IopFileUtilClearAttributes @ 0x1407336FC
 * Callers:
 *     PpLastGoodDeleteFilesCallback @ 0x140720420 (PpLastGoodDeleteFilesCallback.c)
 *     PiLastGoodRevertLastKnownDirectory @ 0x140C257A0 (PiLastGoodRevertLastKnownDirectory.c)
 *     IopFileUtilRename @ 0x140C2845C (IopFileUtilRename.c)
 * Callees:
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwQueryInformationFile @ 0x1406A75D0 (ZwQueryInformationFile.c)
 *     ZwSetInformationFile @ 0x1406A7890 (ZwSetInformationFile.c)
 *     ZwOpenFile @ 0x1406A7A10 (ZwOpenFile.c)
 */

NTSTATUS __fastcall IopFileUtilClearAttributes(UNICODE_STRING *a1)
{
  NTSTATUS result; // eax
  NTSTATUS v2; // ebx
  unsigned int v3; // eax
  HANDLE FileHandle; // [rsp+30h] [rbp-29h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+38h] [rbp-21h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+48h] [rbp-11h] BYREF
  __int128 FileInformation; // [rsp+78h] [rbp+1Fh] BYREF
  __int128 v8; // [rsp+88h] [rbp+2Fh]
  __int64 v9; // [rsp+98h] [rbp+3Fh]

  FileHandle = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.ObjectName = a1;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.RootDirectory = 0LL;
  IoStatusBlock = 0LL;
  v9 = 0LL;
  FileInformation = 0LL;
  ObjectAttributes.Attributes = 576;
  v8 = 0LL;
  result = ZwOpenFile(&FileHandle, 0x100180u, &ObjectAttributes, &IoStatusBlock, 3u, 0x204022u);
  if ( result >= 0 )
  {
    v2 = ZwQueryInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
    if ( v2 >= 0 && (v9 & 7) != 0 )
    {
      v3 = v9 & 0xFFFFFFF8;
      if ( (v9 & 0xFFFFFFF8) == 0 )
        v3 = 128;
      FileInformation = 0LL;
      v9 = v3;
      v8 = 0LL;
      v2 = ZwSetInformationFile(FileHandle, &IoStatusBlock, &FileInformation, 0x28u, FileBasicInformation);
    }
    ZwClose(FileHandle);
    return v2;
  }
  return result;
}
