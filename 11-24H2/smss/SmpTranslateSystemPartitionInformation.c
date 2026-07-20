/*
 * XREFs of SmpTranslateSystemPartitionInformation @ 0x14000D19C
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     SmpLogFailure @ 0x14000D7F0 (SmpLogFailure.c)
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

NTSTATUS SmpTranslateSystemPartitionInformation()
{
  NTSTATUS i; // eax
  __int64 v1; // rdx
  NTSTATUS v2; // ebx
  __int64 v3; // r8
  NTSTATUS v4; // ebx
  __int64 NtSystemRoot; // rax
  _BYTE *v6; // r8
  __int64 v7; // rdx
  NTSTATUS v8; // eax
  void *KeyHandle; // [rsp+48h] [rbp-C0h] BYREF
  ULONG Context[2]; // [rsp+50h] [rbp-B8h] BYREF
  void *SymbolicLinkHandle; // [rsp+58h] [rbp-B0h] BYREF
  struct _UNICODE_STRING LinkTarget; // [rsp+60h] [rbp-A8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+70h] [rbp-98h] BYREF
  _QWORD v15[2]; // [rsp+A0h] [rbp-68h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+B0h] [rbp-58h] BYREF
  UNICODE_STRING String2; // [rsp+C0h] [rbp-48h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+D0h] [rbp-38h] BYREF
  _QWORD v19[2]; // [rsp+E0h] [rbp-28h] BYREF
  struct _UNICODE_STRING v20; // [rsp+F0h] [rbp-18h] BYREF
  __int16 Buffer; // [rsp+108h] [rbp+0h] BYREF
  _BYTE *j; // [rsp+110h] [rbp+8h]
  UNICODE_STRING String1; // [rsp+118h] [rbp+10h] BYREF
  _BYTE v24[544]; // [rsp+128h] [rbp+20h] BYREF
  _DWORD Data[128]; // [rsp+348h] [rbp+240h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+548h] [rbp+440h] BYREF
  WCHAR SourceString[258]; // [rsp+554h] [rbp+44Ch] BYREF

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  KeyHandle = 0LL;
  v15[1] = L"\\Registry\\Machine\\System\\Setup";
  Context[1] = 0;
  ValueName.Buffer = L"SystemPartition";
  Context[0] = 0;
  String2.Buffer = L"SymbolicLink";
  SymbolicLinkHandle = 0LL;
  v19[1] = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\CurrentVersion\\Setup";
  v20.Buffer = L"BootDir";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v15;
  DestinationString = 0LL;
  *(_QWORD *)&LinkTarget.Length = 0LL;
  v15[0] = 4063292LL;
  *(_QWORD *)&ValueName.Length = 2097182LL;
  *(_QWORD *)&String2.Length = 1703960LL;
  v19[0] = 8650882LL;
  *(_QWORD *)&v20.Length = 1048590LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  i = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( i < 0 )
  {
    v1 = 11921LL;
LABEL_26:
    v3 = (unsigned int)i;
    return SmpLogFailure("SmpTranslateSystemPartitionInformation", v1, v3);
  }
  v2 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x210u, &Context[1]);
  NtClose(KeyHandle);
  if ( v2 < 0 )
  {
    v3 = (unsigned int)v2;
    v1 = 11939LL;
    return SmpLogFailure("SmpTranslateSystemPartitionInformation", v1, v3);
  }
  RtlInitUnicodeString(&DestinationString, SourceString);
  LinkTarget.Buffer = (PWSTR)Data;
  for ( i = NtQueryDirectoryObject(SmpDosDevicesObjectDirectory, &Buffer, 0x23Au, 1u, 1u, Context, 0LL);
        i >= 0;
        i = NtQueryDirectoryObject(SmpDosDevicesObjectDirectory, &Buffer, 0x23Au, 1u, 0, Context, 0LL) )
  {
    if ( RtlEqualUnicodeString(&String1, &String2, 1u) )
    {
      if ( Buffer == 4 && *((_WORD *)j + 1) == 58 )
      {
        ObjectAttributes.RootDirectory = SmpDosDevicesObjectDirectory;
        ObjectAttributes.Length = 48;
        ObjectAttributes.ObjectName = (PUNICODE_STRING)&Buffer;
        ObjectAttributes.Attributes = 64;
        *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
        if ( NtOpenSymbolicLinkObject(&SymbolicLinkHandle, 0xF0001u, &ObjectAttributes) >= 0 )
        {
          *(_DWORD *)&LinkTarget.Length = 0x2000000;
          v4 = NtQuerySymbolicLinkObject(SymbolicLinkHandle, &LinkTarget, 0LL);
          NtClose(SymbolicLinkHandle);
          if ( v4 >= 0
            && (RtlEqualUnicodeString(&DestinationString, &LinkTarget, 1u)
             || RtlPrefixUnicodeString(&DestinationString, &LinkTarget, 1u)
             && LinkTarget.Buffer[(unsigned __int64)DestinationString.Length >> 1] == 92) )
          {
            goto LABEL_20;
          }
        }
      }
    }
  }
  if ( i != -2147483622 )
  {
    v1 = 12042LL;
    goto LABEL_26;
  }
  NtSystemRoot = RtlGetNtSystemRoot();
  v6 = v24;
  v7 = 0LL;
  for ( j = v24; ; v6 = j )
  {
    *(_WORD *)&v6[v7] = *(_WORD *)(v7 + NtSystemRoot);
    v7 += 2LL;
    if ( v7 >= 4 )
      break;
  }
LABEL_20:
  ObjectAttributes.Length = 48;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v19;
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.Attributes = 64;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  i = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( i < 0 )
  {
    v1 = 12063LL;
    goto LABEL_26;
  }
  Data[0] = *(_DWORD *)j;
  Data[1] = 92;
  v8 = NtSetValueKey(KeyHandle, &v20, 0, 1u, Data, 8u);
  if ( v8 < 0 )
    SmpLogFailure("SmpTranslateSystemPartitionInformation", 12084LL, (unsigned int)v8);
  return NtClose(KeyHandle);
}
