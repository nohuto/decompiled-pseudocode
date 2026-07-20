/*
 * XREFs of SmpLoadPnPSerializeSettings @ 0x140003930
 * Callers:
 *     wmain @ 0x140001510 (wmain.c)
 * Callees:
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 SmpLoadPnPSerializeSettings()
{
  NTSTATUS v0; // eax
  unsigned int v1; // ebx
  NTSTATUS v2; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-29h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-21h] BYREF
  _QWORD v6[2]; // [rsp+40h] [rbp-19h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp-9h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+7h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp+37h] BYREF
  int v10; // [rsp+94h] [rbp+3Bh]
  int v11; // [rsp+9Ch] [rbp+43h]

  v6[0] = 7209068LL;
  ResultLength = 0;
  v6[1] = L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\PnP";
  ObjectAttributes.RootDirectory = 0LL;
  ValueName.Buffer = L"BootOptions";
  KeyHandle = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)v6;
  *(_QWORD *)&ValueName.Length = 1572886LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 64LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v0 = NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  v1 = v0;
  if ( v0 < 0 )
  {
    SmpInitProgressByLine = 1391;
    SmpInitReturnStatus = v0;
    SmpInitLastCall = (__int64)NtOpenKey;
  }
  else
  {
    v2 = NtQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, KeyValueInformation, 0x14u, &ResultLength);
    v1 = v2;
    if ( v2 >= 0 )
    {
      if ( v10 == 4 )
        SmpSerializeBoot = v11;
    }
    else
    {
      SmpInitProgressByLine = 1409;
      SmpInitReturnStatus = v2;
      SmpInitLastCall = (__int64)NtQueryValueKey;
    }
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v1;
}
