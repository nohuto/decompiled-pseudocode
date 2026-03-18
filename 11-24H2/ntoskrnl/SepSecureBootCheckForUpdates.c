/*
 * XREFs of SepSecureBootCheckForUpdates @ 0x140C3ABBC
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x140C3A930 (SeSecureBootRegisterPolicy.c)
 * Callees:
 *     Feature_Servicing_DbxRaceCondition__private_IsEnabledDeviceUsageNoInline @ 0x140609200 (Feature_Servicing_DbxRaceCondition__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A66F0 (ZwQueryValueKey.c)
 *     NtUpdateWnfStateData @ 0x1408AC540 (NtUpdateWnfStateData.c)
 */

NTSTATUS SepSecureBootCheckForUpdates()
{
  NTSTATUS result; // eax
  ULONG ResultLength; // [rsp+40h] [rbp-9h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-1h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+37h] BYREF
  int v6; // [rsp+90h] [rbp+47h]

  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  v6 = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)L"z|";
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  ObjectAttributes.RootDirectory = 0LL;
  KeyValueInformation = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    result = ZwQueryValueKey(
               KeyHandle,
               (PUNICODE_STRING)&stru_14000B550,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      result = Feature_Servicing_DbxRaceCondition__private_IsEnabledDeviceUsageNoInline();
      if ( !(result ? (BYTE12(KeyValueInformation) & 2) == 0 : HIDWORD(KeyValueInformation) == 0) )
        result = NtUpdateWnfStateData(&WNF_SBS_UPDATE_AVAILABLE, 0LL, 0LL, 0LL, 0LL, 0, 0);
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
