/*
 * XREFs of IopCreateRootDirectories @ 0x140C0B324
 * Callers:
 *     IoInitSystemPreDrivers @ 0x140C0996C (IoInitSystemPreDrivers.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 *     NtCreateDirectoryObject @ 0x140A41AE0 (NtCreateDirectoryObject.c)
 *     IopCreateUmdfDirectory @ 0x140C0B414 (IopCreateUmdfDirectory.c)
 */

bool IopCreateRootDirectories()
{
  UNICODE_STRING DestinationString; // [rsp+20h] [rbp-40h] BYREF
  _QWORD v2[3]; // [rsp+30h] [rbp-30h] BYREF
  int v3; // [rsp+48h] [rbp-18h]
  int v4; // [rsp+4Ch] [rbp-14h]
  __int128 v5; // [rsp+50h] [rbp-10h]
  HANDLE Handle; // [rsp+70h] [rbp+10h] BYREF

  Handle = 0LL;
  v4 = 0;
  v2[0] = 48LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Driver");
  v2[1] = 0LL;
  v2[2] = &DestinationString;
  v3 = 528;
  v5 = 0LL;
  if ( (int)NtCreateDirectoryObject((__int64)&Handle, 983055LL, (__int64)v2) < 0 )
    return 0;
  ObCloseHandle(Handle, 0);
  RtlInitUnicodeString(&DestinationString, L"\\FileSystem");
  if ( (int)NtCreateDirectoryObject((__int64)&Handle, 983055LL, (__int64)v2) < 0 )
    return 0;
  ObCloseHandle(Handle, 0);
  RtlInitUnicodeString(&DestinationString, L"\\FileSystem\\Filters");
  if ( (int)NtCreateDirectoryObject((__int64)&Handle, 983055LL, (__int64)v2) < 0 )
    return 0;
  ObCloseHandle(Handle, 0);
  return (int)IopCreateUmdfDirectory() >= 0;
}
