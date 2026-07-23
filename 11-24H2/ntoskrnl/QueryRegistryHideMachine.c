/*
 * XREFs of QueryRegistryHideMachine @ 0x140C614F4
 * Callers:
 *     StartFirstUserProcess @ 0x140C620B8 (StartFirstUserProcess.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     wcslen @ 0x1404FD790 (wcslen.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwQueryValueKey @ 0x1406A7690 (ZwQueryValueKey.c)
 *     ExAllocatePool2 @ 0x140B740F0 (ExAllocatePool2.c)
 *     ExFreePoolWithTag @ 0x140B74870 (ExFreePoolWithTag.c)
 */

bool QueryRegistryHideMachine()
{
  int v0; // edi
  size_t v1; // rax
  _DWORD *Pool2; // rbx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  ULONG ResultLength; // [rsp+90h] [rbp+20h] BYREF
  HANDLE KeyHandle; // [rsp+98h] [rbp+28h] BYREF

  ResultLength = 0;
  v0 = 0;
  KeyHandle = 0LL;
  *(_DWORD *)(&DestinationString.MaximumLength + 1) = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString.Buffer = (wchar_t *)L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\WMI\\Restrictions";
  v1 = 2 * wcslen(L"\\Registry\\Machine\\SYSTEM\\CurrentControlSet\\Control\\WMI\\Restrictions");
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  if ( v1 >= 0xFFFE )
    LOWORD(v1) = -4;
  *(&ObjectAttributes.Length + 1) = 0;
  memset(&ObjectAttributes.Attributes + 1, 0, 20);
  ObjectAttributes.RootDirectory = 0LL;
  DestinationString.Length = v1;
  DestinationString.MaximumLength = v1 + 2;
  ObjectAttributes.ObjectName = &DestinationString;
  if ( ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes) >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"HideMachine");
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &ResultLength) == -1073741789 )
    {
      Pool2 = (_DWORD *)ExAllocatePool2(0x100uLL, ResultLength, 0x74696E49uLL);
      if ( Pool2 )
      {
        if ( ZwQueryValueKey(
               KeyHandle,
               &DestinationString,
               KeyValuePartialInformation,
               Pool2,
               ResultLength,
               &ResultLength) >= 0
          && Pool2[1] == 4
          && Pool2[2] == 4 )
        {
          v0 = Pool2[3];
        }
        ExFreePoolWithTag(Pool2, 0);
      }
    }
  }
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return v0 != 0;
}
