/*
 * XREFs of SmpIsRamdiskBoot @ 0x140011184
 * Callers:
 *     SmpAsyncMemoryConfiguration @ 0x14000F110 (SmpAsyncMemoryConfiguration.c)
 * Callees:
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 __fastcall SmpIsRamdiskBoot(BOOLEAN *a1)
{
  NTSTATUS v2; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-C0h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING String1; // [rsp+60h] [rbp-A0h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+70h] [rbp-90h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v12; // [rsp+B4h] [rbp-4Ch]
  WCHAR SourceString[258]; // [rsp+BCh] [rbp-44h] BYREF

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  KeyHandle = 0LL;
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  v6[1] = L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control";
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ValueName.Buffer = L"SystemBootDevice";
  String1.Buffer = L"ramdisk";
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v6;
  v6[0] = 6684772LL;
  *(_QWORD *)&ValueName.Length = 2228256LL;
  *(_QWORD *)&String1.Length = 1048590LL;
  DestinationString = 0LL;
  ObjectAttributes.Attributes = 64;
  v2 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( v2 >= 0 )
  {
    ResultLength = 528;
    v2 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x210u, &ResultLength);
    if ( v2 >= 0 )
    {
      if ( v12 == 1 )
      {
        RtlInitUnicodeString(&DestinationString, SourceString);
        *a1 = RtlPrefixUnicodeString(&String1, &DestinationString, 1u);
        v2 = 0;
      }
      else
      {
        v2 = -1073741275;
      }
    }
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return (unsigned int)v2;
}
