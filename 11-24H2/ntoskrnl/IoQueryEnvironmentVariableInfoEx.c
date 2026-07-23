/*
 * XREFs of IoQueryEnvironmentVariableInfoEx @ 0x140716468
 * Callers:
 *     NtQueryEnvironmentVariableInfoEx @ 0x1407BE950 (NtQueryEnvironmentVariableInfoEx.c)
 * Callees:
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     _tlgKeywordOn @ 0x14041A970 (_tlgKeywordOn.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IopOpenSystemVariableDevice @ 0x14094FBB0 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoQueryEnvironmentVariableInfoEx(int a1, PDEVICE_OBJECT *a2, __int64 *a3, __int64 *a4)
{
  int v8; // ebx
  PVOID Object; // [rsp+40h] [rbp-89h] BYREF
  __int64 v11; // [rsp+48h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-79h] BYREF
  __int64 v13; // [rsp+58h] [rbp-71h] BYREF
  __int64 v14; // [rsp+60h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+70h] [rbp-59h] BYREF
  __int64 *v16; // [rsp+90h] [rbp-39h]
  int v17; // [rsp+98h] [rbp-31h]
  int v18; // [rsp+9Ch] [rbp-2Dh]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+A0h] [rbp-29h]
  int v20; // [rsp+A8h] [rbp-21h]
  int v21; // [rsp+ACh] [rbp-1Dh]
  __int64 *v22; // [rsp+B0h] [rbp-19h]
  int v23; // [rsp+B8h] [rbp-11h]
  int v24; // [rsp+BCh] [rbp-Dh]
  __int64 *v25; // [rsp+C0h] [rbp-9h]
  int v26; // [rsp+C8h] [rbp-1h]
  int v27; // [rsp+CCh] [rbp+3h]
  PVOID *p_Object; // [rsp+D0h] [rbp+7h]
  int v29; // [rsp+D8h] [rbp+Fh]
  int v30; // [rsp+DCh] [rbp+13h]

  DeviceObject = 0LL;
  Object = 0LL;
  v11 = 0LL;
  v8 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v8 >= 0 )
  {
    v8 = guard_dispatch_icall_no_overrides(Object, DeviceObject);
    if ( Object )
      ObfDereferenceObject(Object);
  }
  if ( (unsigned int)dword_140E06EB8 > 5 && tlgKeywordOn((__int64)&dword_140E06EB8, 0x200000000000LL) )
  {
    v18 = 0;
    v21 = 0;
    v24 = 0;
    v27 = 0;
    v30 = 0;
    v16 = &v11;
    DeviceObject = *a2;
    p_DeviceObject = &DeviceObject;
    v13 = *a3;
    v22 = &v13;
    v14 = *a4;
    v25 = &v14;
    p_Object = &Object;
    v17 = 4;
    v20 = 8;
    v23 = 8;
    v26 = 8;
    v29 = 4;
    LODWORD(v11) = a1;
    LODWORD(Object) = v8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06EB8, (unsigned __int8 *)byte_1400465D3, 0LL, 0LL, 7u, &v15);
  }
  return (unsigned int)v8;
}
