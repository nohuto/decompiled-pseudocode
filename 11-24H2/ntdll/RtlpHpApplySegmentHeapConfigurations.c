/*
 * XREFs of RtlpHpApplySegmentHeapConfigurations @ 0x180101134
 * Callers:
 *     RtlSetLowFragHeapGlobalFlags @ 0x1800A5060 (RtlSetLowFragHeapGlobalFlags.c)
 * Callees:
 *     NtClose @ 0x180160230 (NtClose.c)
 *     NtOpenKey @ 0x180160290 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180160330 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180163D80 (__security_check_cookie.c)
 */

int RtlpHpApplySegmentHeapConfigurations()
{
  int result; // eax
  ULONG ResultLength; // [rsp+30h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-1h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+70h] [rbp+37h] BYREF
  int v5; // [rsp+80h] [rbp+47h]

  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ResultLength = 0;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  v5 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)&unk_180172FA8;
  KeyValueInformation = 0LL;
  ObjectAttributes.Attributes = 64;
  result = NtOpenKey(&KeyHandle, 1u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = NtQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_180173B50,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 && DWORD2(KeyValueInformation) == 4 )
    {
      if ( HIDWORD(KeyValueInformation) )
      {
        result = RtlpLowFragHeapGlobalFlags | 0x10;
        RtlpLowFragHeapGlobalFlags |= 0x10u;
        if ( (BYTE12(KeyValueInformation) & 2) != 0 )
        {
          result |= 0x20u;
          RtlpLowFragHeapGlobalFlags = result;
        }
      }
      else
      {
        RtlpLowFragHeapGlobalFlags |= 8u;
      }
    }
  }
  if ( KeyHandle )
    return NtClose(KeyHandle);
  return result;
}
