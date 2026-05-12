/*
 * XREFs of StorpTelemetryEnumUnitNvmeLogPages @ 0x1400B34B8
 * Callers:
 *     StorpDeviceLogPagesWorkItemRoutine @ 0x1400AF970 (StorpDeviceLogPagesWorkItemRoutine.c)
 *     StorpTelemetryFindUnitNvmeLogPages @ 0x1400B3684 (StorpTelemetryFindUnitNvmeLogPages.c)
 * Callees:
 *     RaidAllocatePool @ 0x14000E820 (RaidAllocatePool.c)
 *     StorpTelemetrySendUnitNvmeLogPage @ 0x1400BBC30 (StorpTelemetrySendUnitNvmeLogPage.c)
 */

int __fastcall StorpTelemetryEnumUnitNvmeLogPages(__int64 a1, const WCHAR *a2)
{
  int result; // eax
  ULONG Length; // esi
  __int64 Pool; // rbx
  ULONG v6; // edi
  NTSTATUS v7; // eax
  void *KeyHandle; // [rsp+30h] [rbp-19h] BYREF
  UNICODE_STRING String; // [rsp+38h] [rbp-11h] BYREF
  struct _UNICODE_STRING DestinationString; // [rsp+48h] [rbp-1h] BYREF
  struct _OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+58h] [rbp+Fh] BYREF
  ULONG ResultLength; // [rsp+C0h] [rbp+77h] BYREF
  ULONG Value; // [rsp+C8h] [rbp+7Fh] BYREF

  *(&ObjectAttributes.Attributes + 1) = 0;
  KeyHandle = 0LL;
  ResultLength = 0;
  Value = 0;
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  String = 0LL;
  RtlInitUnicodeString(&DestinationString, a2);
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  result = ZwOpenKey(&KeyHandle, 0x20019u, &ObjectAttributes);
  if ( result >= 0 )
  {
    Length = 20;
    Pool = RaidAllocatePool(256LL, 20LL, 1700028754LL, *(_QWORD *)(a1 + 8));
    if ( Pool )
    {
      v6 = 0;
      while ( 1 )
      {
        while ( 1 )
        {
          v7 = ZwEnumerateValueKey(KeyHandle, v6, KeyValueFullInformation, (PVOID)Pool, Length, &ResultLength);
          if ( v7 < 0 )
            break;
          if ( *(_DWORD *)(Pool + 4) == 4 && *(_DWORD *)(Pool + 12) == 4 )
          {
            String.Length = *(_WORD *)(Pool + 16);
            String.MaximumLength = *(_WORD *)(Pool + 16);
            String.Buffer = (wchar_t *)(Pool + 20);
            if ( RtlUnicodeStringToInteger(&String, 0, &Value) >= 0 )
              StorpTelemetrySendUnitNvmeLogPage(a1, Value, *(unsigned int *)(*(unsigned int *)(Pool + 8) + Pool));
          }
          ++v6;
        }
        if ( v7 != -2147483643 && v7 != -1073741789 )
          break;
        Length = ResultLength;
        ExFreePoolWithTag((PVOID)Pool, 0x65546152u);
        Pool = RaidAllocatePool(256LL, Length, 1700028754LL, *(_QWORD *)(a1 + 8));
        if ( !Pool )
          return ZwClose(KeyHandle);
      }
      ExFreePoolWithTag((PVOID)Pool, 0x65546152u);
    }
    return ZwClose(KeyHandle);
  }
  return result;
}
