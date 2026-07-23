/*
 * XREFs of RtlOsDeploymentState @ 0x180148AD0
 * Callers:
 *     <none>
 * Callees:
 *     RtlInitUnicodeString @ 0x1800A8A00 (RtlInitUnicodeString.c)
 *     NtClose @ 0x180163400 (NtClose.c)
 *     NtOpenKey @ 0x180163460 (NtOpenKey.c)
 *     NtQueryValueKey @ 0x180163500 (NtQueryValueKey.c)
 *     __security_check_cookie @ 0x180166F50 (__security_check_cookie.c)
 */

OS_DEPLOYEMENT_STATE_VALUES __cdecl RtlOsDeploymentState(DWORD Flags)
{
  OS_DEPLOYEMENT_STATE_VALUES v1; // ebx
  HANDLE KeyHandle; // [rsp+30h] [rbp-88h] BYREF
  ULONG ResultLength; // [rsp+38h] [rbp-80h] BYREF
  _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-78h] BYREF
  _UNICODE_STRING v6; // [rsp+70h] [rbp-48h] BYREF
  _UNICODE_STRING DestinationString; // [rsp+80h] [rbp-38h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp-28h] BYREF
  int v9; // [rsp+94h] [rbp-24h]
  int v10; // [rsp+98h] [rbp-20h]
  int v11; // [rsp+9Ch] [rbp-1Ch]

  KeyHandle = 0LL;
  v1 = OS_DEPLOYMENT_STANDARD;
  ResultLength = 0;
  memset(&ObjectAttributes.Length + 1, 0, 44);
  v6 = 0LL;
  DestinationString = 0LL;
  RtlInitUnicodeString(&v6, L"\\Registry\\Machine\\System\\Setup");
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  ObjectAttributes.ObjectName = &v6;
  if ( NtOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"Compact");
    if ( NtQueryValueKey(
           KeyHandle,
           &DestinationString,
           KeyValuePartialInformation,
           KeyValueInformation,
           0x14u,
           &ResultLength) >= 0
      && v9 == 4
      && v10 == 4
      && v11 )
    {
      v1 = OS_DEPLOYMENT_COMPACT;
    }
  }
  if ( KeyHandle )
    NtClose(KeyHandle);
  return v1;
}
