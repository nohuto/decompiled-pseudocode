/*
 * XREFs of ExpUuidLoadSequenceNumber @ 0x1407C0FB8
 * Callers:
 *     ExpAllocateUuids @ 0x14085A6EC (ExpAllocateUuids.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     memset_0 @ 0x1406C0F40 (memset_0.c)
 *     RtlGetPersistedStateLocation @ 0x1409B4B60 (RtlGetPersistedStateLocation.c)
 */

__int64 ExpUuidLoadSequenceNumber()
{
  NTSTATUS PersistedStateLocation; // ebx
  ULONG ResultLength; // [rsp+40h] [rbp-C0h] BYREF
  HANDLE KeyHandle; // [rsp+48h] [rbp-B8h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  UNICODE_STRING DestinationString; // [rsp+80h] [rbp-80h] BYREF
  _BYTE KeyValueInformation[4]; // [rsp+90h] [rbp-70h] BYREF
  int v7; // [rsp+94h] [rbp-6Ch]
  int v8; // [rsp+98h] [rbp-68h]
  int v9; // [rsp+9Ch] [rbp-64h]
  WCHAR SourceString[256]; // [rsp+B0h] [rbp-50h] BYREF

  ResultLength = 0;
  KeyHandle = 0LL;
  memset(&ObjectAttributes, 0, 44);
  DestinationString = 0LL;
  memset_0(SourceString, 0, 0x1FEuLL);
  PersistedStateLocation = RtlGetPersistedStateLocation(
                             L"KernelExecutive",
                             0LL,
                             L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\Session Manager\\Executive",
                             LocationTypeRegistry,
                             SourceString,
                             0x1FEu,
                             0LL);
  if ( PersistedStateLocation >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, SourceString);
    ObjectAttributes.RootDirectory = 0LL;
    ObjectAttributes.ObjectName = &DestinationString;
    ObjectAttributes.Length = 48;
    ObjectAttributes.Attributes = 576;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    PersistedStateLocation = ZwOpenKey(&KeyHandle, 0x80000000, &ObjectAttributes);
    if ( PersistedStateLocation >= 0 )
    {
      PersistedStateLocation = ZwQueryValueKey(
                                 KeyHandle,
                                 (PUNICODE_STRING)&ExpUuidSequenceNumberRegName,
                                 KeyValuePartialInformation,
                                 KeyValueInformation,
                                 0x14u,
                                 &ResultLength);
      if ( PersistedStateLocation >= 0 )
      {
        if ( v7 == 4 && v8 == 4 )
          ExpUuidSequenceNumber = v9;
        else
          PersistedStateLocation = -1073741823;
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)PersistedStateLocation;
}
