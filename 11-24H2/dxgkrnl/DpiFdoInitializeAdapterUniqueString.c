/*
 * XREFs of DpiFdoInitializeAdapterUniqueString @ 0x1403E7328
 * Callers:
 *     DpiFdoInitializeFdo @ 0x140242CBC (DpiFdoInitializeFdo.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x140052E4C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MonitorUnifyCCDMonitorString@@YAXPEAU_UNICODE_STRING@@@Z @ 0x14026FAE0 (-MonitorUnifyCCDMonitorString@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     DpiGetDevicePropertyString @ 0x1403EB254 (DpiGetDevicePropertyString.c)
 */

__int64 __fastcall DpiFdoInitializeAdapterUniqueString(__int64 a1)
{
  __int64 v1; // rsi
  WCHAR *Pool2; // r12
  WCHAR *v3; // r13
  NTSTATUS v4; // eax
  unsigned __int64 v5; // rdi
  NTSTATUS v6; // eax
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  NTSTATUS v12; // eax
  NTSTATUS v13; // eax
  struct _DEVICE_OBJECT *v14; // rcx
  int DevicePropertyString; // eax
  __int64 v16; // rax
  unsigned __int16 *v17; // r14
  unsigned __int16 *v19; // rax
  ULONG Length[2]; // [rsp+20h] [rbp-89h]
  ULONG Lengtha[2]; // [rsp+20h] [rbp-89h]
  PULONG ResultLength; // [rsp+28h] [rbp-81h]
  UNICODE_STRING SourceString; // [rsp+48h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-51h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING GuidString; // [rsp+78h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-21h] BYREF
  ULONG v28; // [rsp+110h] [rbp+67h] BYREF
  ULONG v29; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v30; // [rsp+120h] [rbp+77h] BYREF
  void *KeyHandle; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  v28 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
  DestinationString = 0LL;
  Pool2 = 0LL;
  v29 = 0;
  v3 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  LODWORD(v5) = v4;
  if ( v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"VideoID");
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &v28) == -1073741789 )
    {
      WdLogSingleEntry1(4LL, -1073741789LL);
      WdLogGlobalForLineNumber = 10677;
      Pool2 = (WCHAR *)ExAllocatePool2(256LL, v28, 1953656900LL);
      if ( !Pool2 )
      {
        LODWORD(v5) = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 10696;
        goto LABEL_42;
      }
      v6 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Pool2, v28, &v28);
      LODWORD(v5) = v6;
      if ( v6 < 0 )
      {
        WdLogSingleEntry1(2LL, v6);
        WdLogGlobalForLineNumber = 10712;
        goto LABEL_42;
      }
      if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4896), Pool2 + 6) )
      {
        LODWORD(v5) = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 10724;
        goto LABEL_42;
      }
      v7 = RtlGUIDFromString((PCUNICODE_STRING)(v1 + 4896), (GUID *)(v1 + 4928));
      LODWORD(v5) = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry1(2LL, v7);
        WdLogGlobalForLineNumber = 10735;
        goto LABEL_42;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, 0LL);
      WdLogGlobalForLineNumber = 10743;
      v8 = ExUuidCreate((UUID *)(v1 + 4928));
      LODWORD(v5) = v8;
      if ( v8 < 0 )
      {
        WdLogSingleEntry1(2LL, v8);
        WdLogGlobalForLineNumber = 10757;
        goto LABEL_42;
      }
      v9 = RtlStringFromGUID((const GUID *const)(v1 + 4928), (PUNICODE_STRING)(v1 + 4896));
      LODWORD(v5) = v9;
      if ( v9 < 0 )
      {
        WdLogSingleEntry1(2LL, v9);
        WdLogGlobalForLineNumber = 10772;
        goto LABEL_42;
      }
      RtlUpcaseUnicodeString((PUNICODE_STRING)(v1 + 4896), (PCUNICODE_STRING)(v1 + 4896), 0);
      v10 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, *(PVOID *)(v1 + 4904), *(unsigned __int16 *)(v1 + 4898));
      LODWORD(v5) = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry1(2LL, v10);
        WdLogGlobalForLineNumber = 10800;
        goto LABEL_42;
      }
    }
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"AOCID");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &v29) == -1073741789 )
    {
      WdLogSingleEntry1(4LL, -1073741789LL);
      WdLogGlobalForLineNumber = 10823;
      v3 = (WCHAR *)ExAllocatePool2(256LL, v29, 1953656900LL);
      if ( !v3 )
      {
        LODWORD(v5) = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 10842;
        goto LABEL_42;
      }
      v11 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v3, v29, &v29);
      LODWORD(v5) = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(2LL, v11);
        WdLogGlobalForLineNumber = 10858;
        goto LABEL_42;
      }
      GuidString = 0LL;
      if ( !RtlCreateUnicodeString(&GuidString, v3 + 6) )
      {
        LODWORD(v5) = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 10872;
        goto LABEL_42;
      }
      v5 = RtlGUIDFromString(&GuidString, (GUID *)(v1 + 4944));
      RtlFreeUnicodeString(&GuidString);
      if ( (v5 & 0x80000000) != 0LL )
      {
        WdLogSingleEntry1(2LL, v5);
        WdLogGlobalForLineNumber = 10886;
        goto LABEL_42;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, 0LL);
      WdLogGlobalForLineNumber = 10894;
      v12 = ExUuidCreate((UUID *)(v1 + 4944));
      LODWORD(v5) = v12;
      if ( v12 < 0 )
      {
        WdLogSingleEntry1(2LL, v12);
        WdLogGlobalForLineNumber = 10908;
        goto LABEL_42;
      }
      SourceString = 0LL;
      v13 = RtlStringFromGUID((const GUID *const)(v1 + 4944), &SourceString);
      LODWORD(v5) = v13;
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(2LL, v13);
        WdLogGlobalForLineNumber = 10923;
        goto LABEL_42;
      }
      RtlUpcaseUnicodeString(&SourceString, &SourceString, 0);
      v5 = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, SourceString.Buffer, SourceString.MaximumLength);
      RtlFreeUnicodeString(&SourceString);
      if ( (v5 & 0x80000000) != 0LL )
      {
        WdLogSingleEntry1(2LL, v5);
        WdLogGlobalForLineNumber = 10953;
        goto LABEL_42;
      }
    }
    if ( *(_BYTE *)(v1 + 1159) )
    {
      v14 = *(struct _DEVICE_OBJECT **)(v1 + 152);
      LODWORD(v30) = 0;
      DevicePropertyString = DpiGetDevicePropertyString(v14, DevicePropertyHardwareID, (__int64)&v30);
      LODWORD(v5) = DevicePropertyString;
      if ( DevicePropertyString < 0 )
      {
        WdLogSingleEntry1(2LL, DevicePropertyString);
        WdLogGlobalForLineNumber = 10986;
        goto LABEL_42;
      }
      v16 = -1LL;
      do
        ++v16;
      while ( *(_WORD *)(2 * v16) );
      v5 = (unsigned int)(2 * v16 + 40);
      v17 = (unsigned __int16 *)ExAllocatePool2(256LL, v5, 1953656900LL);
      if ( !v17 )
      {
        LODWORD(v5) = -1073741801;
        WdLogSingleEntry1(2LL, -1073741801LL);
        WdLogGlobalForLineNumber = 11003;
        goto LABEL_42;
      }
      LODWORD(ResultLength) = *(_DWORD *)(v1 + 1144);
      Lengtha[0] = *(_DWORD *)(v1 + 1128);
      LODWORD(v5) = RtlStringCbPrintfW(
                      v17,
                      v5,
                      (size_t *)L"%04X_%04X_%08X_%ls",
                      *(unsigned int *)(v1 + 1124),
                      *(_QWORD *)Lengtha,
                      ResultLength,
                      0LL);
    }
    else
    {
      v19 = (unsigned __int16 *)ExAllocatePool2(256LL, 74LL, 1953656900LL);
      v17 = v19;
      if ( !v19 )
      {
        LODWORD(v5) = -1073741801;
        WdLogSingleEntry1(2LL, -1073741801LL);
        WdLogGlobalForLineNumber = 11036;
        goto LABEL_42;
      }
      LODWORD(ResultLength) = *(_DWORD *)(v1 + 1144);
      Length[0] = *(_DWORD *)(v1 + 1128);
      LODWORD(v5) = RtlStringCbPrintfW(
                      v19,
                      0x4AuLL,
                      (size_t *)L"%04X_%04X_%08X_%08X",
                      *(unsigned int *)(v1 + 1124),
                      *(_QWORD *)Length,
                      ResultLength,
                      *(_DWORD *)(v1 + 1148));
    }
    RtlInitUnicodeString((PUNICODE_STRING)(v1 + 4912), v17);
    MonitorUnifyCCDMonitorString((struct _UNICODE_STRING *)(v1 + 4912));
    if ( (v5 & 0x80000000) == 0LL )
      goto LABEL_46;
    goto LABEL_42;
  }
  WdLogSingleEntry1(2LL, v4);
  WdLogGlobalForLineNumber = 10655;
LABEL_42:
  if ( *(_QWORD *)(v1 + 4920) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4912));
    *(_QWORD *)(v1 + 4920) = 0LL;
  }
  if ( *(_QWORD *)(v1 + 4904) )
  {
    RtlFreeUnicodeString((PUNICODE_STRING)(v1 + 4896));
    *(_QWORD *)(v1 + 4904) = 0LL;
  }
LABEL_46:
  if ( Pool2 )
    ExFreePoolWithTag(Pool2, 0x74727044u);
  if ( v3 )
    ExFreePoolWithTag(v3, 0x74727044u);
  if ( KeyHandle )
    ZwClose(KeyHandle);
  return (unsigned int)v5;
}
