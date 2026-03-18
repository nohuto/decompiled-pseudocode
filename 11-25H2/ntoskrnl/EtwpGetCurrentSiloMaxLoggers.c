/*
 * XREFs of EtwpGetCurrentSiloMaxLoggers @ 0x1406407EC
 * Callers:
 *     EtwpGetPmcSessions @ 0x140640A88 (EtwpGetPmcSessions.c)
 *     PspInitializeServerSiloDeferred @ 0x1407632B0 (PspInitializeServerSiloDeferred.c)
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x1409B3F70 (RtlQueryRegistryValuesEx.c)
 */

__int64 EtwpGetCurrentSiloMaxLoggers()
{
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-79h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-69h] BYREF
  int v3; // [rsp+70h] [rbp-39h] BYREF
  unsigned int *v4; // [rsp+78h] [rbp-31h]
  _QWORD v5[4]; // [rsp+90h] [rbp-19h] BYREF
  int v6; // [rsp+B0h] [rbp+7h]
  unsigned int v7; // [rsp+110h] [rbp+67h] BYREF
  HANDLE KeyHandle; // [rsp+118h] [rbp+6Fh] BYREF

  KeyHandle = 0LL;
  v7 = 80;
  *(&ObjectAttributes.Attributes + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    memset_0(v5, 0, 0x70uLL);
    v5[0] = &EtwpQueryRegistryCallback;
    v5[3] = &v3;
    v5[2] = L"EtwMaxLoggers";
    v6 = 4;
    v3 = 4;
    v4 = &v7;
    RtlQueryRegistryValuesEx(0x40000000LL, KeyHandle, v5, 0LL, 0LL);
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v7;
}
