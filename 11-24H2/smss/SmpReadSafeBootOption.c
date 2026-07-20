/*
 * XREFs of SmpReadSafeBootOption @ 0x14000E7B8
 * Callers:
 *     SmpLoadDataFromRegistry @ 0x140015DF4 (SmpLoadDataFromRegistry.c)
 * Callees:
 *     __security_check_cookie @ 0x14001EFC0 (__security_check_cookie.c)
 */

__int64 SmpReadSafeBootOption()
{
  NTSTATUS v0; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-D0h] BYREF
  void *KeyHandle; // [rsp+38h] [rbp-C8h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-C0h] BYREF
  _BYTE KeyValueInformation[12]; // [rsp+70h] [rbp-90h] BYREF
  int v6; // [rsp+7Ch] [rbp-84h]

  KeyHandle = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ResultLength = 0;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&SmpSafebootOptionKey;
  ObjectAttributes.Attributes = 64;
  v0 = NtOpenKey(&KeyHandle, 0xF003Fu, &ObjectAttributes);
  if ( v0 >= 0 )
  {
    v0 = NtQueryValueKey(
           KeyHandle,
           (PUNICODE_STRING)&SmpSafebootOptionValue,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x200u,
           &ResultLength);
    NtClose(KeyHandle);
    if ( v0 >= 0 )
      SmpSafeBootOption = v6;
  }
  return (unsigned int)v0;
}
