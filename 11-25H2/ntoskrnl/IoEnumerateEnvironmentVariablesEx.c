/*
 * XREFs of IoEnumerateEnvironmentVariablesEx @ 0x140821D28
 * Callers:
 *     NtEnumerateDriverEntries @ 0x1407AE400 (NtEnumerateDriverEntries.c)
 *     NtEnumerateSystemEnvironmentValuesEx @ 0x1407AE860 (NtEnumerateSystemEnvironmentValuesEx.c)
 *     NtEnumerateBootEntries @ 0x140820970 (NtEnumerateBootEntries.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgKeywordOn @ 0x14042F500 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IopOpenSystemVariableDevice @ 0x140822688 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoEnumerateEnvironmentVariablesEx(int a1, __int64 a2, __int64 a3, _DWORD *a4)
{
  int v7; // ebx
  PVOID v8; // rdi
  bool v10; // [rsp+40h] [rbp-69h] BYREF
  PVOID Object; // [rsp+48h] [rbp-61h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-59h] BYREF
  __int64 v13; // [rsp+58h] [rbp-51h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v14; // [rsp+60h] [rbp-49h] BYREF
  PVOID *p_Object; // [rsp+80h] [rbp-29h]
  int v16; // [rsp+88h] [rbp-21h]
  int v17; // [rsp+8Ch] [rbp-1Dh]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+90h] [rbp-19h]
  int v19; // [rsp+98h] [rbp-11h]
  int v20; // [rsp+9Ch] [rbp-Dh]
  __int64 *v21; // [rsp+A0h] [rbp-9h]
  int v22; // [rsp+A8h] [rbp-1h]
  int v23; // [rsp+ACh] [rbp+3h]
  bool *v24; // [rsp+B0h] [rbp+7h]
  int v25; // [rsp+B8h] [rbp+Fh]
  int v26; // [rsp+BCh] [rbp+13h]

  DeviceObject = 0LL;
  Object = 0LL;
  v13 = 0LL;
  v7 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v7 >= 0 )
  {
    v8 = Object;
    v7 = guard_dispatch_icall_no_overrides(Object);
    if ( v8 )
      ObfDereferenceObject(v8);
  }
  if ( (unsigned int)dword_140E06EB8 > 5 && tlgKeywordOn((__int64)&dword_140E06EB8, 0x200000000000LL) )
  {
    v17 = 0;
    v20 = 0;
    v23 = 0;
    p_Object = &Object;
    LODWORD(DeviceObject) = *a4;
    v10 = a2 != 0;
    v26 = 0;
    p_DeviceObject = &DeviceObject;
    v16 = 4;
    v21 = &v13;
    v19 = 4;
    v24 = &v10;
    v22 = 4;
    LODWORD(Object) = a1;
    LODWORD(v13) = v7;
    v25 = 1;
    tlgWriteTransfer_EtwWriteTransfer(
      (__int64)&dword_140E06EB8,
      (unsigned __int8 *)&dword_140045C0C,
      0LL,
      0LL,
      6u,
      &v14);
  }
  return (unsigned int)v7;
}
