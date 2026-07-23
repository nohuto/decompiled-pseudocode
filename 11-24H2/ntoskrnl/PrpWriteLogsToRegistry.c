/*
 * XREFs of PrpWriteLogsToRegistry @ 0x1404BBC04
 * Callers:
 *     MicrocodeLogRegistry @ 0x1406630C8 (MicrocodeLogRegistry.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x140418050 (RtlInitUnicodeString.c)
 *     wcslen @ 0x1404FD790 (wcslen.c)
 *     ZwClose @ 0x1406A7590 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A75F0 (ZwOpenKey.c)
 *     ZwSetValueKey @ 0x1406A7FB0 (ZwSetValueKey.c)
 */

NTSTATUS __fastcall PrpWriteLogsToRegistry(__int64 a1, UNICODE_STRING *a2)
{
  NTSTATUS result; // eax
  size_t v3; // rax
  size_t v4; // rax
  size_t v5; // rax
  size_t v6; // rax
  size_t v7; // rax
  size_t v8; // rax
  size_t v9; // rax
  size_t v10; // rax
  size_t v11; // rax
  size_t v12; // rax
  size_t v13; // rax
  size_t v14; // rax
  size_t v15; // rax
  size_t v16; // rax
  NTSTATUS v17; // ebx
  UNICODE_STRING DestinationString; // [rsp+30h] [rbp-40h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+40h] [rbp-30h] BYREF
  HANDLE KeyHandle; // [rsp+A0h] [rbp+30h] BYREF

  ObjectAttributes.ObjectName = a2;
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  KeyHandle = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  DestinationString = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x2001Fu, &ObjectAttributes);
  if ( result >= 0 )
  {
    if ( MicrocodeLatencyTime )
    {
      RtlInitUnicodeString(&DestinationString, L"Microcode Runtime Update Latency (x100s ns)");
      ZwSetValueKey(KeyHandle, &DestinationString, 0, 0xBu, &MicrocodeLatencyTime, 8u);
      MicrocodeLatencyTime = 0LL;
    }
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = (wchar_t *)L"Patch Source";
    v3 = 2 * wcslen(L"Patch Source");
    if ( v3 >= 0xFFFE )
      LOWORD(v3) = -4;
    DestinationString.Length = v3;
    DestinationString.MaximumLength = v3 + 2;
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &MCUpdateRegistryData, 4u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = (wchar_t *)L"Record Type";
    v4 = 2 * wcslen(L"Record Type");
    if ( v4 >= 0xFFFE )
      LOWORD(v4) = -4;
    DestinationString.Length = v4;
    DestinationString.MaximumLength = v4 + 2;
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)&MCUpdateRegistryData + 4, 4u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = (wchar_t *)L"CPU Family Model Stepping";
    v5 = 2 * wcslen(L"CPU Family Model Stepping");
    if ( v5 >= 0xFFFE )
      LOWORD(v5) = -4;
    DestinationString.Length = v5;
    DestinationString.MaximumLength = v5 + 2;
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)&MCUpdateRegistryData + 8, 4u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = (wchar_t *)L"CPU Meta Data";
    v6 = 2 * wcslen(L"CPU Meta Data");
    if ( v6 >= 0xFFFE )
      LOWORD(v6) = -4;
    DestinationString.Length = v6;
    DestinationString.MaximumLength = v6 + 2;
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)&MCUpdateRegistryData + 12, 4u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = (wchar_t *)L"Firmware Record Version";
    v7 = 2 * wcslen(L"Firmware Record Version");
    if ( v7 >= 0xFFFE )
      LOWORD(v7) = -4;
    DestinationString.Length = v7;
    DestinationString.MaximumLength = v7 + 2;
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &xmmword_140EF7AF0, 4u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = (wchar_t *)L"Previous Record Version";
    v8 = 2 * wcslen(L"Previous Record Version");
    if ( v8 >= 0xFFFE )
      LOWORD(v8) = -4;
    DestinationString.Length = v8;
    DestinationString.MaximumLength = v8 + 2;
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)&xmmword_140EF7AF0 + 4, 4u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = (wchar_t *)L"Current Record Version";
    v9 = 2 * wcslen(L"Current Record Version");
    if ( v9 >= 0xFFFE )
      LOWORD(v9) = -4;
    DestinationString.Length = v9;
    DestinationString.MaximumLength = v9 + 2;
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)&xmmword_140EF7AF0 + 8, 4u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = (wchar_t *)L"Preferred Record Version";
    v10 = 2 * wcslen(L"Preferred Record Version");
    if ( v10 >= 0xFFFE )
      LOWORD(v10) = -4;
    DestinationString.Length = v10;
    DestinationString.MaximumLength = v10 + 2;
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)&xmmword_140EF7AF0 + 12, 4u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = (wchar_t *)L"Patch Configuration Used";
    v11 = 2 * wcslen(L"Patch Configuration Used");
    if ( v11 >= 0xFFFE )
      LOWORD(v11) = -4;
    DestinationString.Length = v11;
    DestinationString.MaximumLength = v11 + 2;
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &qword_140EF7B00, 1u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = (wchar_t *)L"Update Status";
    v12 = 2 * wcslen(L"Update Status");
    if ( v12 >= 0xFFFE )
      LOWORD(v12) = -4;
    DestinationString.Length = v12;
    DestinationString.MaximumLength = v12 + 2;
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)&qword_140EF7B00 + 4, 4u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = (wchar_t *)L"Update Environment";
    v13 = 2 * wcslen(L"Update Environment");
    if ( v13 >= 0xFFFE )
      LOWORD(v13) = -4;
    DestinationString.Length = v13;
    DestinationString.MaximumLength = v13 + 2;
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, &dword_140EF7B08, 4u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = (wchar_t *)L"Update Revision";
    v14 = 2 * wcslen(L"Update Revision");
    if ( v14 >= 0xFFFE )
      LOWORD(v14) = -4;
    DestinationString.Length = v14;
    DestinationString.MaximumLength = v14 + 2;
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, (char *)&xmmword_140EF7AF0 + 8, 4u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = (wchar_t *)L"Previous Update Revision";
    v15 = 2 * wcslen(L"Previous Update Revision");
    if ( v15 >= 0xFFFE )
      LOWORD(v15) = -4;
    DestinationString.Length = v15;
    DestinationString.MaximumLength = v15 + 2;
    ZwSetValueKey(KeyHandle, &DestinationString, 0, 3u, (char *)&xmmword_140EF7AF0 + 4, 4u);
    *(_QWORD *)&DestinationString.Length = 0LL;
    DestinationString.Buffer = (wchar_t *)L"Platform Specific Field 1";
    v16 = 2 * wcslen(L"Platform Specific Field 1");
    if ( v16 >= 0xFFFE )
      LOWORD(v16) = -4;
    DestinationString.Length = v16;
    DestinationString.MaximumLength = v16 + 2;
    v17 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 4u, (char *)&MCUpdateRegistryData + 12, 4u);
    ZwClose(KeyHandle);
    return v17;
  }
  return result;
}
