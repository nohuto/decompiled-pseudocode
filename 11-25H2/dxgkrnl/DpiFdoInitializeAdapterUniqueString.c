/*
 * XREFs of DpiFdoInitializeAdapterUniqueString @ 0x1403ED95C
 * Callers:
 *     DpiFdoInitializeFdo @ 0x14023C19C (DpiFdoInitializeFdo.c)
 * Callees:
 *     ?RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ @ 0x14005319C (-RtlStringCbPrintfW@@YAJPEAG_KPEBGZZ.c)
 *     ?MonitorUnifyCCDMonitorString@@YAXPEAU_UNICODE_STRING@@@Z @ 0x140268B80 (-MonitorUnifyCCDMonitorString@@YAXPEAU_UNICODE_STRING@@@Z.c)
 *     DpiGetDevicePropertyString @ 0x1403F11AC (DpiGetDevicePropertyString.c)
 */

__int64 __fastcall DpiFdoInitializeAdapterUniqueString(__int64 a1)
{
  __int64 v1; // rsi
  WCHAR *Pool2; // r12
  WCHAR *v3; // r13
  NTSTATUS v4; // eax
  unsigned __int64 v5; // rdi
  __int64 v6; // r9
  NTSTATUS v7; // eax
  NTSTATUS v8; // eax
  NTSTATUS v9; // eax
  NTSTATUS v10; // eax
  NTSTATUS v11; // eax
  __int64 v12; // r9
  NTSTATUS v13; // eax
  __int64 v14; // r9
  NTSTATUS v15; // eax
  NTSTATUS v16; // eax
  struct _DEVICE_OBJECT *v17; // rcx
  int DevicePropertyString; // eax
  __int64 v19; // r9
  __int64 v20; // rax
  unsigned __int16 *v21; // r14
  unsigned __int16 *v23; // rax
  ULONG Length[2]; // [rsp+20h] [rbp-89h]
  ULONG Lengtha[2]; // [rsp+20h] [rbp-89h]
  PULONG ResultLength; // [rsp+28h] [rbp-81h]
  UNICODE_STRING SourceString; // [rsp+48h] [rbp-61h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+58h] [rbp-51h] BYREF
  struct _UNICODE_STRING ValueName; // [rsp+68h] [rbp-41h] BYREF
  UNICODE_STRING GuidString; // [rsp+78h] [rbp-31h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+88h] [rbp-21h] BYREF
  ULONG v32; // [rsp+110h] [rbp+67h] BYREF
  ULONG v33; // [rsp+118h] [rbp+6Fh] BYREF
  __int64 v34; // [rsp+120h] [rbp+77h] BYREF
  void *KeyHandle; // [rsp+128h] [rbp+7Fh] BYREF

  v1 = *(_QWORD *)(a1 + 64);
  *(_QWORD *)&ObjectAttributes.Length = 48LL;
  *(_QWORD *)&ObjectAttributes.Attributes = 576LL;
  KeyHandle = 0LL;
  v32 = 0;
  ObjectAttributes.ObjectName = (PUNICODE_STRING)(v1 + 512);
  DestinationString = 0LL;
  Pool2 = 0LL;
  v33 = 0;
  v3 = 0LL;
  ObjectAttributes.RootDirectory = 0LL;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  v4 = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  LODWORD(v5) = v4;
  if ( v4 >= 0 )
  {
    RtlInitUnicodeString(&DestinationString, L"VideoID");
    if ( ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, 0LL, 0, &v32) == -1073741789 )
    {
      WdLogSingleEntry1(4LL, -1073741789LL);
      WdLogGlobalForLineNumber = 10545;
      Pool2 = (WCHAR *)ExAllocatePool2(256LL, v32, 1953656900LL, v6);
      if ( !Pool2 )
      {
        LODWORD(v5) = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 10564;
        goto LABEL_42;
      }
      v7 = ZwQueryValueKey(KeyHandle, &DestinationString, KeyValuePartialInformation, Pool2, v32, &v32);
      LODWORD(v5) = v7;
      if ( v7 < 0 )
      {
        WdLogSingleEntry1(2LL, v7);
        WdLogGlobalForLineNumber = 10580;
        goto LABEL_42;
      }
      if ( !RtlCreateUnicodeString((PUNICODE_STRING)(v1 + 4896), Pool2 + 6) )
      {
        LODWORD(v5) = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 10592;
        goto LABEL_42;
      }
      v8 = RtlGUIDFromString((PCUNICODE_STRING)(v1 + 4896), (GUID *)(v1 + 4928));
      LODWORD(v5) = v8;
      if ( v8 < 0 )
      {
        WdLogSingleEntry1(2LL, v8);
        WdLogGlobalForLineNumber = 10603;
        goto LABEL_42;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, 0LL);
      WdLogGlobalForLineNumber = 10611;
      v9 = ExUuidCreate((UUID *)(v1 + 4928));
      LODWORD(v5) = v9;
      if ( v9 < 0 )
      {
        WdLogSingleEntry1(2LL, v9);
        WdLogGlobalForLineNumber = 10625;
        goto LABEL_42;
      }
      v10 = RtlStringFromGUID((const GUID *const)(v1 + 4928), (PUNICODE_STRING)(v1 + 4896));
      LODWORD(v5) = v10;
      if ( v10 < 0 )
      {
        WdLogSingleEntry1(2LL, v10);
        WdLogGlobalForLineNumber = 10640;
        goto LABEL_42;
      }
      RtlUpcaseUnicodeString((PUNICODE_STRING)(v1 + 4896), (PCUNICODE_STRING)(v1 + 4896), 0);
      v11 = ZwSetValueKey(KeyHandle, &DestinationString, 0, 1u, *(PVOID *)(v1 + 4904), *(unsigned __int16 *)(v1 + 4898));
      LODWORD(v5) = v11;
      if ( v11 < 0 )
      {
        WdLogSingleEntry1(2LL, v11);
        WdLogGlobalForLineNumber = 10668;
        goto LABEL_42;
      }
    }
    ValueName = 0LL;
    RtlInitUnicodeString(&ValueName, L"AOCID");
    if ( ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, 0LL, 0, &v33) == -1073741789 )
    {
      WdLogSingleEntry1(4LL, -1073741789LL);
      WdLogGlobalForLineNumber = 10691;
      v3 = (WCHAR *)ExAllocatePool2(256LL, v33, 1953656900LL, v12);
      if ( !v3 )
      {
        LODWORD(v5) = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 10710;
        goto LABEL_42;
      }
      v13 = ZwQueryValueKey(KeyHandle, &ValueName, KeyValuePartialInformation, v3, v33, &v33);
      LODWORD(v5) = v13;
      if ( v13 < 0 )
      {
        WdLogSingleEntry1(2LL, v13);
        WdLogGlobalForLineNumber = 10726;
        goto LABEL_42;
      }
      GuidString = 0LL;
      if ( !RtlCreateUnicodeString(&GuidString, v3 + 6) )
      {
        LODWORD(v5) = -1073741801;
        WdLogSingleEntry1(6LL, -1073741801LL);
        WdLogGlobalForLineNumber = 10740;
        goto LABEL_42;
      }
      v5 = RtlGUIDFromString(&GuidString, (GUID *)(v1 + 4944));
      RtlFreeUnicodeString(&GuidString);
      if ( (v5 & 0x80000000) != 0LL )
      {
        WdLogSingleEntry1(2LL, v5);
        WdLogGlobalForLineNumber = 10754;
        goto LABEL_42;
      }
    }
    else
    {
      WdLogSingleEntry1(4LL, 0LL);
      WdLogGlobalForLineNumber = 10762;
      v15 = ExUuidCreate((UUID *)(v1 + 4944));
      LODWORD(v5) = v15;
      if ( v15 < 0 )
      {
        WdLogSingleEntry1(2LL, v15);
        WdLogGlobalForLineNumber = 10776;
        goto LABEL_42;
      }
      SourceString = 0LL;
      v16 = RtlStringFromGUID((const GUID *const)(v1 + 4944), &SourceString);
      LODWORD(v5) = v16;
      if ( v16 < 0 )
      {
        WdLogSingleEntry1(2LL, v16);
        WdLogGlobalForLineNumber = 10791;
        goto LABEL_42;
      }
      RtlUpcaseUnicodeString(&SourceString, &SourceString, 0);
      v5 = ZwSetValueKey(KeyHandle, &ValueName, 0, 1u, SourceString.Buffer, SourceString.MaximumLength);
      RtlFreeUnicodeString(&SourceString);
      if ( (v5 & 0x80000000) != 0LL )
      {
        WdLogSingleEntry1(2LL, v5);
        WdLogGlobalForLineNumber = 10821;
        goto LABEL_42;
      }
    }
    if ( *(_BYTE *)(v1 + 1159) )
    {
      v17 = *(struct _DEVICE_OBJECT **)(v1 + 152);
      LODWORD(v34) = 0;
      DevicePropertyString = DpiGetDevicePropertyString(v17, DevicePropertyHardwareID, (__int64)&v34);
      LODWORD(v5) = DevicePropertyString;
      if ( DevicePropertyString < 0 )
      {
        WdLogSingleEntry1(2LL, DevicePropertyString);
        WdLogGlobalForLineNumber = 10854;
        goto LABEL_42;
      }
      v20 = -1LL;
      do
        ++v20;
      while ( *(_WORD *)(2 * v20) );
      v5 = (unsigned int)(2 * v20 + 40);
      v21 = (unsigned __int16 *)ExAllocatePool2(256LL, v5, 1953656900LL, v19);
      if ( !v21 )
      {
        LODWORD(v5) = -1073741801;
        WdLogSingleEntry1(2LL, -1073741801LL);
        WdLogGlobalForLineNumber = 10871;
        goto LABEL_42;
      }
      LODWORD(ResultLength) = *(_DWORD *)(v1 + 1144);
      Lengtha[0] = *(_DWORD *)(v1 + 1128);
      LODWORD(v5) = RtlStringCbPrintfW(
                      v21,
                      v5,
                      (size_t *)L"%04X_%04X_%08X_%ls",
                      *(unsigned int *)(v1 + 1124),
                      *(_QWORD *)Lengtha,
                      ResultLength,
                      0LL);
    }
    else
    {
      v23 = (unsigned __int16 *)ExAllocatePool2(256LL, 74LL, 1953656900LL, v14);
      v21 = v23;
      if ( !v23 )
      {
        LODWORD(v5) = -1073741801;
        WdLogSingleEntry1(2LL, -1073741801LL);
        WdLogGlobalForLineNumber = 10904;
        goto LABEL_42;
      }
      LODWORD(ResultLength) = *(_DWORD *)(v1 + 1144);
      Length[0] = *(_DWORD *)(v1 + 1128);
      LODWORD(v5) = RtlStringCbPrintfW(
                      v23,
                      0x4AuLL,
                      (size_t *)L"%04X_%04X_%08X_%08X",
                      *(unsigned int *)(v1 + 1124),
                      *(_QWORD *)Length,
                      ResultLength,
                      *(_DWORD *)(v1 + 1148));
    }
    RtlInitUnicodeString((PUNICODE_STRING)(v1 + 4912), v21);
    MonitorUnifyCCDMonitorString((struct _UNICODE_STRING *)(v1 + 4912));
    if ( (v5 & 0x80000000) == 0LL )
      goto LABEL_46;
    goto LABEL_42;
  }
  WdLogSingleEntry1(2LL, v4);
  WdLogGlobalForLineNumber = 10523;
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
