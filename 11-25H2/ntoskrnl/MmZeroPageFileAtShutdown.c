/*
 * XREFs of MmZeroPageFileAtShutdown @ 0x1407D8444
 * Callers:
 *     PopEnableHiberFile @ 0x140AAE964 (PopEnableHiberFile.c)
 *     PopGracefulShutdown @ 0x140B4BB18 (PopGracefulShutdown.c)
 *     PopTransitionSystemPowerStateEx @ 0x140B569AC (PopTransitionSystemPowerStateEx.c)
 * Callees:
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x14069B420 (ZwQueryValueKey.c)
 *     ObCloseHandle @ 0x1408EFEC0 (ObCloseHandle.c)
 */

__int64 MmZeroPageFileAtShutdown()
{
  int v0; // ebx
  ULONG ResultLength; // [rsp+30h] [rbp-19h] BYREF
  HANDLE KeyHandle; // [rsp+38h] [rbp-11h] BYREF
  UNICODE_STRING ValueName; // [rsp+40h] [rbp-9h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp+7h] BYREF
  __int128 KeyValueInformation; // [rsp+80h] [rbp+37h] BYREF
  int v7; // [rsp+90h] [rbp+47h]

  KeyHandle = 0LL;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  ResultLength = 0;
  v0 = 0;
  ObjectAttributes.RootDirectory = 0LL;
  v7 = 0;
  ValueName.Buffer = L"ClearPageFileAtShutdown";
  ObjectAttributes.ObjectName = &CmRegistryMachineSystemCurrentControlSetControlSessionManagerMemoryManagement;
  KeyValueInformation = 0LL;
  *(_QWORD *)&ValueName.Length = 3145774LL;
  ObjectAttributes.Attributes = 576;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) < 0 )
    return 0LL;
  if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, &KeyValueInformation, 0x14u, &ResultLength) >= 0
    && DWORD1(KeyValueInformation) == 4 )
  {
    v0 = HIDWORD(KeyValueInformation);
  }
  ObCloseHandle(KeyHandle, 0);
  if ( !v0 )
    return 0LL;
  byte_140E2FE02 = 1;
  return 1LL;
}
