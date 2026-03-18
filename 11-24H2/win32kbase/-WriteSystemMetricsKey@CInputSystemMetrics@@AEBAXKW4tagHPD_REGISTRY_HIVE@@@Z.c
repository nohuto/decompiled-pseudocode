/*
 * XREFs of ?WriteSystemMetricsKey@CInputSystemMetrics@@AEBAXKW4tagHPD_REGISTRY_HIVE@@@Z @ 0x140220320
 * Callers:
 *     ?WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z @ 0x14014E0D8 (-WriteSystemMetricsKeyToAllHives@CInputSystemMetrics@@AEBAXK@Z.c)
 * Callees:
 *     MicrosoftTelemetryAssertTriggeredArgsKM @ 0x14019C14C (MicrosoftTelemetryAssertTriggeredArgsKM.c)
 */

void __fastcall CInputSystemMetrics::WriteSystemMetricsKey(__int64 a1, int a2, int a3)
{
  int v4; // r8d
  const WCHAR *v5; // rdx
  NTSTATUS v6; // ebx
  struct _UNICODE_STRING DestinationString; // [rsp+40h] [rbp-9h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+50h] [rbp+7h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+60h] [rbp+17h] BYREF
  int Data; // [rsp+B8h] [rbp+6Fh] BYREF
  void *KeyHandle; // [rsp+C8h] [rbp+7Fh] BYREF

  Data = a2;
  if ( *(_WORD *)(W32GetUserSessionState(a1) + 69008) != 0xFFFF )
  {
    if ( a3 )
    {
      if ( a3 != 1 )
      {
        v4 = 202;
LABEL_10:
        MicrosoftTelemetryAssertTriggeredArgsKM("IXPTelAssert", 0x20000, v4);
        return;
      }
      v5 = L"\\Registry\\Machine\\Software\\Wow6432Node\\Microsoft\\Windows\\Tablet PC";
    }
    else
    {
      v5 = L"\\Registry\\Machine\\Software\\Microsoft\\Windows\\Tablet PC";
    }
    DestinationString = 0LL;
    RtlInitUnicodeString(&DestinationString, v5);
    ObjectAttributes.ObjectName = &DestinationString;
    *(_QWORD *)&ObjectAttributes.Length = 48LL;
    *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
    ObjectAttributes.RootDirectory = 0LL;
    *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
    KeyHandle = 0LL;
    if ( ZwCreateKey(&KeyHandle, 0x20006u, &ObjectAttributes, 0, 0LL, 1u, 0LL) < 0
      || (ValueName = 0LL,
          RtlInitUnicodeString(&ValueName, L"IsTabletPC"),
          v6 = ZwSetValueKey(KeyHandle, &ValueName, 0, 4u, &Data, 4u),
          ZwClose(KeyHandle),
          v6 < 0) )
    {
      v4 = 245;
      goto LABEL_10;
    }
  }
}
