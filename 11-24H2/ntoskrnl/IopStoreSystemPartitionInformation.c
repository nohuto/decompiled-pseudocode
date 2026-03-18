/*
 * XREFs of IopStoreSystemPartitionInformation @ 0x140C1D550
 * Callers:
 *     IopMarkBootPartition @ 0x140C1CD70 (IopMarkBootPartition.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     RtlStringCchCopyW @ 0x14043FE9C (RtlStringCchCopyW.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwOpenSymbolicLinkObject @ 0x1406A8B10 (ZwOpenSymbolicLinkObject.c)
 *     NtSetValueKey @ 0x14086A810 (NtSetValueKey.c)
 *     ObCloseHandle @ 0x1408A2B10 (ObCloseHandle.c)
 *     NtQuerySymbolicLinkObject @ 0x1409E41F0 (NtQuerySymbolicLinkObject.c)
 *     IopOpenRegistryKeyEx @ 0x140A43B04 (IopOpenRegistryKeyEx.c)
 *     IopCreateRegistryKeyEx @ 0x140A71C1C (IopCreateRegistryKeyEx.c)
 */

int __fastcall IopStoreSystemPartitionInformation(__int64 a1, unsigned __int16 *a2)
{
  int result; // eax
  int SymbolicLinkObject; // ebx
  int v5; // ebx
  HANDLE v6; // rbx
  __int64 v7; // rcx
  __int64 v8; // rdx
  unsigned __int16 v9; // cx
  size_t Size; // [rsp+28h] [rbp-D8h]
  _WORD v11[2]; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh]
  __int64 v13; // [rsp+38h] [rbp-C8h]
  HANDLE LinkHandle; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE Handle; // [rsp+48h] [rbp-B8h] BYREF
  UNICODE_STRING DestinationString; // [rsp+50h] [rbp-B0h] BYREF
  HANDLE v17; // [rsp+60h] [rbp-A0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+68h] [rbp-98h] BYREF
  wchar_t pszDest[256]; // [rsp+A0h] [rbp-60h] BYREF

  LinkHandle = 0LL;
  *(&ObjectAttributes.Length + 1) = 0;
  *(&ObjectAttributes.Attributes + 1) = 0;
  Handle = 0LL;
  v17 = 0LL;
  DestinationString = 0LL;
  v12 = 0;
  RtlStringCchCopyW(pszDest, 0x100uLL, IoArcHalDeviceName.Buffer);
  v13 = (__int64)pszDest;
  v11[0] = IoArcHalDeviceName.Length;
  if ( IoArcHalDeviceName.Length > 0x200u )
    v11[0] = 512;
  v11[1] = 510;
  while ( 1 )
  {
    ObjectAttributes.Length = 48;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)v11;
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    result = ZwOpenSymbolicLinkObject(&LinkHandle, 1u, &ObjectAttributes);
    if ( result < 0 )
      break;
    SymbolicLinkObject = NtQuerySymbolicLinkObject(LinkHandle, (unsigned __int64)v11, 0LL);
    result = ObCloseHandle(LinkHandle, 0);
    if ( SymbolicLinkObject < 0 )
      return result;
    *(_WORD *)(v13 + 2 * ((unsigned __int64)v11[0] >> 1)) = 0;
  }
  if ( result == -1073741788 )
  {
    result = IopOpenRegistryKeyEx(&Handle, 0LL, &CmRegistryMachineSystemName, 0xF003Fu);
    if ( result >= 0 )
    {
      RtlInitUnicodeString(&DestinationString, L"Setup");
      v5 = IopCreateRegistryKeyEx(&v17, Handle, &DestinationString, 0xF003Fu, 0, 0LL);
      result = ObCloseHandle(Handle, 0);
      if ( v5 >= 0 )
      {
        v6 = v17;
        if ( !InitIsWinPEMode )
        {
          RtlInitUnicodeString(&DestinationString, L"SystemPartition");
          LODWORD(Size) = v11[0] + 2;
          NtSetValueKey((__int64)v6, &DestinationString, 0, 1, (void *)v13, Size);
        }
        RtlInitUnicodeString(&DestinationString, L"OsLoaderPath");
        v7 = *a2;
        if ( (unsigned __int16)v7 > 2u )
        {
          v8 = *((_QWORD *)a2 + 1);
          if ( *(_WORD *)(v7 + v8 - 2) == 92 )
          {
            v9 = v7 - 2;
            *a2 = v9;
            *(_WORD *)(v9 + v8) = 0;
          }
        }
        LODWORD(Size) = *a2 + 2;
        NtSetValueKey((__int64)v6, &DestinationString, 0, 1, *((void **)a2 + 1), Size);
        return ObCloseHandle(v6, 0);
      }
    }
  }
  return result;
}
