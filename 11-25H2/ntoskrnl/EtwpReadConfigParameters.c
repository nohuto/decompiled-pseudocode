/*
 * XREFs of EtwpReadConfigParameters @ 0x140C2C548
 * Callers:
 *     EtwpInitialize @ 0x140C2BE1C (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x14043FFA0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     ZwClose @ 0x14069B320 (ZwClose.c)
 *     ZwOpenKey @ 0x14069B380 (ZwOpenKey.c)
 *     memset_0 @ 0x1406B4D40 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x1409B3F70 (RtlQueryRegistryValuesEx.c)
 */

NTSTATUS EtwpReadConfigParameters()
{
  NTSTATUS result; // eax
  int v1; // ecx
  unsigned int v2; // [rsp+30h] [rbp-D0h] BYREF
  _DWORD v3[3]; // [rsp+34h] [rbp-CCh] BYREF
  UNICODE_STRING DestinationString; // [rsp+40h] [rbp-C0h] BYREF
  OBJECT_ATTRIBUTES ObjectAttributes; // [rsp+50h] [rbp-B0h] BYREF
  int v6; // [rsp+80h] [rbp-80h] BYREF
  unsigned int *v7; // [rsp+88h] [rbp-78h]
  int v8; // [rsp+90h] [rbp-70h] BYREF
  _DWORD *v9; // [rsp+98h] [rbp-68h]
  _RTL_QUERY_REGISTRY_TABLE QueryTable; // [rsp+B0h] [rbp-50h] BYREF
  __int64 (__fastcall *v11)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+E8h] [rbp-18h]
  const wchar_t *v12; // [rsp+F8h] [rbp-8h]
  int *v13; // [rsp+100h] [rbp+0h]
  int v14; // [rsp+108h] [rbp+8h]

  v2 = 10;
  *(&ObjectAttributes.Attributes + 1) = 0;
  memset(v3, 0, sizeof(v3));
  *(&ObjectAttributes.Length + 1) = 0;
  DestinationString = 0LL;
  RtlInitUnicodeString(&DestinationString, L"\\Registry\\Machine\\System\\CurrentControlSet\\Control\\WMI");
  ObjectAttributes.RootDirectory = 0LL;
  ObjectAttributes.ObjectName = &DestinationString;
  ObjectAttributes.Length = 48;
  ObjectAttributes.Attributes = 576;
  *(_OWORD *)&ObjectAttributes.SecurityDescriptor = 0LL;
  if ( ZwOpenKey((PHANDLE)&v3[1], 0x20019u, &ObjectAttributes) < 0 )
    goto LABEL_10;
  memset_0(&QueryTable, 0, 0xA8uLL);
  QueryTable.QueryRoutine = (int (__fastcall *)(wchar_t *, unsigned int, void *, unsigned int, void *, void *))EtwpQueryRegistryCallback;
  QueryTable.DefaultType = 4;
  QueryTable.EntryContext = &v6;
  v6 = 4;
  QueryTable.Name = L"MaxNonPagedPoolUsage";
  v11 = EtwpQueryRegistryCallback;
  v7 = &v2;
  v14 = 4;
  v13 = &v8;
  v12 = L"StackCaptureTimeout";
  v8 = 4;
  v9 = v3;
  if ( RtlQueryRegistryValuesEx(0x40000000u, *(PCWSTR *)&v3[1], &QueryTable, 0LL, 0LL) < 0 )
  {
LABEL_10:
    result = v2;
    v1 = v3[0];
    goto LABEL_11;
  }
  result = v2;
  if ( v2 <= 0x32 )
  {
    if ( v2 >= 0xA )
      goto LABEL_8;
    result = 10;
  }
  else
  {
    result = 50;
  }
  v2 = result;
LABEL_8:
  v1 = v3[0];
  if ( v3[0] > 0x2BF20u )
  {
    v1 = 180000;
    v3[0] = 180000;
  }
LABEL_11:
  EtwpMaxNonPagedPoolUsage = result;
  if ( v1 )
    EtwpStackCaptureTimeout = v1;
  if ( *(_QWORD *)&v3[1] )
    return ZwClose(*(HANDLE *)&v3[1]);
  return result;
}
