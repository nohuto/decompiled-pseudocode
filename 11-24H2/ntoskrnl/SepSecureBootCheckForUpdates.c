/*
 * XREFs of SepSecureBootCheckForUpdates @ 0x140C3CD14
 * Callers:
 *     SeSecureBootRegisterPolicy @ 0x140C3CA88 (SeSecureBootRegisterPolicy.c)
 * Callees:
 *     Feature_Servicing_DbxRaceCondition__private_IsEnabledDeviceUsageNoInline @ 0x1406076A8 (Feature_Servicing_DbxRaceCondition__private_IsEnabledDeviceUsageNoInline.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     NtUpdateWnfStateData @ 0x1409027A0 (NtUpdateWnfStateData.c)
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
               (PUNICODE_STRING)&stru_14000B830,
               KeyValuePartialInformation,
               &KeyValueInformation,
               0x14u,
               &ResultLength);
    if ( result >= 0 && *(_QWORD *)((char *)&KeyValueInformation + 4) == 0x400000004LL )
    {
      result = Feature_Servicing_DbxRaceCondition__private_IsEnabledDeviceUsageNoInline();
      if ( !(result ? (BYTE12(KeyValueInformation) & 2) == 0 : HIDWORD(KeyValueInformation) == 0) )
        result = NtUpdateWnfStateData(&WNF_SBS_UPDATE_AVAILABLE, 0LL, 0, 0LL, 0LL, 0, 0);
    }
  }
  if ( KeyHandle )
    return ZwClose(KeyHandle);
  return result;
}
