/*
 * XREFs of RtlpQueryDiskSpacePolicy @ 0x18009CF70
 * Callers:
 *     RtlQueryResourcePolicy @ 0x18006FC18 (RtlQueryResourcePolicy.c)
 * Callees:
 *     StringCbPrintfW @ 0x18002D818 (StringCbPrintfW.c)
 *     NtClose_0 @ 0x180073208 (NtClose_0.c)
 *     RtlpQueryDiskSpacePolicyByHandle @ 0x18009D0D0 (RtlpQueryDiskSpacePolicyByHandle.c)
 *     __security_check_cookie @ 0x1800A7B40 (__security_check_cookie.c)
 */

__int64 __fastcall RtlpQueryDiskSpacePolicy(__int64 a1, __int64 a2)
{
  wchar_t *v3; // rcx
  __int64 v4; // rdx
  NTSTATUS DiskSpacePolicyByHandle; // ebx
  void *FileHandle; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v8; // [rsp+68h] [rbp-98h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+78h] [rbp-88h] BYREF
  struct _IO_STATUS_BLOCK IoStatusBlock; // [rsp+A8h] [rbp-58h] BYREF
  wchar_t pszDest[264]; // [rsp+C0h] [rbp-40h] BYREF

  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  FileHandle = 0LL;
  IoStatusBlock = 0LL;
  StringCbPrintfW(pszDest, 0x208uLL, L"\\??\\%s", a1);
  v3 = pszDest;
  v8 = 0LL;
  v4 = 0x7FFFLL;
  while ( *v3 )
  {
    ++v3;
    if ( !--v4 )
      goto LABEL_6;
  }
  LOWORD(v8) = 2 * (0x7FFF - v4);
  WORD1(v8) = v8 + 2;
  *((_QWORD *)&v8 + 1) = pszDest;
LABEL_6:
  ObjectAttributes.Length = 48;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&v8;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  DiskSpacePolicyByHandle = NtCreateFile(
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
    NtClose_0(FileHandle);
  return (unsigned int)DiskSpacePolicyByHandle;
}
