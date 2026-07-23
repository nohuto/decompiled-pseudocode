/*
 * XREFs of RtlpQueryDiskSpacePolicy @ 0x18015B614
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18010B000 (RtlQueryResourcePolicy.c)
 * Callees:
 *     StringCbPrintfW @ 0x1800813B8 (StringCbPrintfW.c)
 *     RtlStringLengthWorkerW @ 0x1800F1D78 (RtlStringLengthWorkerW.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x18015B764 (RtlpQueryDiskSpacePolicyByHandle.c)
 *     NtClose @ 0x180160230 (NtClose.c)
 *     ZwCreateFile @ 0x180160AF0 (ZwCreateFile.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicy(__int64 a1, __int64 a2)
{
  NTSTATUS DiskSpacePolicyByHandle; // ebx
  HANDLE FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v6; // [rsp+68h] [rbp-98h] BYREF
  __int128 v7; // [rsp+70h] [rbp-90h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _IO_STATUS_BLOCK IoStatusBlock; // [rsp+B0h] [rbp-50h] BYREF
  wchar_t pszDest[264]; // [rsp+C0h] [rbp-40h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  StringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%s", a1);
  v6 = 0LL;
  v7 = 0LL;
  if ( (int)RtlStringLengthWorkerW(pszDest, 0x7FFFLL, &v6) >= 0 )
  {
    LOWORD(v7) = 2 * v6;
    WORD1(v7) = 2 * v6 + 2;
    *((_QWORD *)&v7 + 1) = pszDest;
  }
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v7;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DiskSpacePolicyByHandle = ZwCreateFile(
                              &FileHandle,
                              0x100080u,
                              &ObjectAttributes,
                              &IoStatusBlock,
                              0LL,
                              0,
                              7u,
                              1u,
                              0x20u,
                              0LL,
                              0);
  if ( DiskSpacePolicyByHandle >= 0 )
  {
    DiskSpacePolicyByHandle = RtlpQueryDiskSpacePolicyByHandle(FileHandle, a2);
    if ( DiskSpacePolicyByHandle >= 0 )
      DiskSpacePolicyByHandle = 0;
  }
  if ( FileHandle )
    NtClose(FileHandle);
  return (unsigned int)DiskSpacePolicyByHandle;
}
