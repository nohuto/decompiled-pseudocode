/*
 * XREFs of EtwpReadConfigParameters @ 0x140C3D828
 * Callers:
 *     EtwpInitialize @ 0x140C3D0FC (EtwpInitialize.c)
 * Callees:
 *     RtlInitUnicodeString @ 0x1404241A0 (RtlInitUnicodeString.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     ZwClose @ 0x1406A65F0 (ZwClose.c)
 *     ZwOpenKey @ 0x1406A6650 (ZwOpenKey.c)
 *     memset_0 @ 0x1406C0040 (memset_0.c)
 *     RtlQueryRegistryValuesEx @ 0x1409CC2F0 (RtlQueryRegistryValuesEx.c)
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
  _QWORD v10[4]; // [rsp+B0h] [rbp-50h] BYREF
  int v11; // [rsp+D0h] [rbp-30h]
  __int64 (__fastcall *v12)(__int64, int, const WCHAR *, unsigned int, __int64, __int64); // [rsp+E8h] [rbp-18h]
  const wchar_t *v13; // [rsp+F8h] [rbp-8h]
  int *v14; // [rsp+100h] [rbp+0h]
  int v15; // [rsp+108h] [rbp+8h]

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
  memset_0(v10, 0, 0xA8uLL);
  v10[0] = EtwpQueryRegistryCallback;
  v11 = 4;
  v10[3] = &v6;
  v6 = 4;
  v10[2] = L"MaxNonPagedPoolUsage";
  v12 = EtwpQueryRegistryCallback;
  v7 = &v2;
  v15 = 4;
  v14 = &v8;
  v13 = L"StackCaptureTimeout";
  v8 = 4;
  v9 = v3;
  if ( (int)RtlQueryRegistryValuesEx(0x40000000, v3[1], (int)v10, 0) < 0 )
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
