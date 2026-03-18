/*
 * XREFs of SepSecureBootSetRegistryKey @ 0x140C3ACCC
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x140C3A930 (SeSecureBootRegisterPolicy.c)
 * Callees:
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwCreateKey @ 0x1406A67B0 (ZwCreateKey.c)
 *     ZwSetValueKey @ 0x1406A7010 (ZwSetValueKey.c)
 *     RtlFreeAnsiString @ 0x1408A4990 (RtlFreeAnsiString.c)
 *     RtlStringFromGUID @ 0x1409BC5B0 (RtlStringFromGUID.c)
 */

__int64 __fastcall SepSecureBootSetRegistryKey(__int64 a1)
{
  NTSTATUS v2; // ebx
  UNICODE_STRING GuidString; // [rsp+40h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-30h] BYREF
  int Data; // [rsp+A8h] [rbp+28h] BYREF
  HANDLE Handle; // [rsp+B0h] [rbp+30h] BYREF
  HANDLE KeyHandle; // [rsp+B8h] [rbp+38h] BYREF

  KeyHandle = 0LL;
  Data = 0;
  Handle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  GuidString = 0LL;
  if ( (dword_140E67B4C & 8) == 0 && !a1 )
  {
    v2 = 0;
    goto LABEL_14;
  }
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"z|";
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v2 = ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 0, 0LL);
  if ( v2 >= 0 )
  {
    ObjectAttributes.RootDirectory = KeyHandle;
    ObjectAttributes.ObjectName = (PUNICODE_STRING)&qword_14000B590;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    v2 = ZwCreateKey(&Handle, 0x20006u, &ObjectAttributes, 0, 0LL, 1u, 0LL);
    if ( v2 >= 0 )
    {
      if ( (dword_140E67B4C & 8) != 0 )
      {
        Data = dword_140E67B4C & 1;
        v2 = ZwSetValueKey(Handle, (PUNICODE_STRING)&stru_14000B580, 0, 4u, &Data, 4u);
        if ( v2 < 0 )
          goto LABEL_14;
        if ( Data )
          _interlockedbittestandset((volatile signed __int32 *)(MmWriteableSharedUserData + 752), 7u);
      }
      if ( a1 )
      {
        v2 = RtlStringFromGUID((const GUID *const)(a1 + 4), &GuidString);
        if ( v2 >= 0 )
        {
          v2 = ZwSetValueKey(Handle, (PUNICODE_STRING)&stru_14000B570, 0, 1u, GuidString.Buffer, GuidString.Length + 2);
          if ( v2 >= 0 )
            v2 = ZwSetValueKey(Handle, (PUNICODE_STRING)&stru_14000B560, 0, 4u, (PVOID)(a1 + 20), 4u);
        }
      }
    }
  }
LABEL_14:
  RtlFreeAnsiString(&GuidString);
  if ( Handle )
    ZwClose(Handle);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v2;
}
