/*
 * XREFs of IoGetEnvironmentVariableEx @ 0x140966F70
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140594AD0 (IopInitializeOfflineCrashDump.c)
 *     ExpSetBootEntry @ 0x1407BC32C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCA24 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1407BD8B0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407BDA40 (NtDeleteDriverEntry.c)
 *     NtGetEnvironmentVariableEx @ 0x1407BE1C0 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x140965B30 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x1409667C0 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x140966C70 (ExpGetFirmwareEnvironmentVariable.c)
 *     NtQueryBootOptions @ 0x140A97A60 (NtQueryBootOptions.c)
 *     IopCachePreviousBootData @ 0x140C1A560 (IopCachePreviousBootData.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140325680 (ObfDereferenceObject.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140330A30 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x140330CB0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     __security_check_cookie @ 0x1406A5920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B3DF0 (_guard_dispatch_icall_no_overrides.c)
 *     IopOpenSystemVariableDevice @ 0x140967120 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoGetEnvironmentVariableEx(const wchar_t *a1, __int64 a2, __int64 a3, int *a4, _DWORD *a5)
{
  int v8; // edi
  PVOID v9; // rbx
  int v12; // eax
  PVOID Object; // [rsp+48h] [rbp-79h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+50h] [rbp-71h] BYREF
  __int64 v15; // [rsp+58h] [rbp-69h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v16; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v17[16]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v18; // [rsp+90h] [rbp-31h]
  int v19; // [rsp+98h] [rbp-29h]
  int v20; // [rsp+9Ch] [rbp-25h]
  PVOID *p_Object; // [rsp+A0h] [rbp-21h]
  int v22; // [rsp+A8h] [rbp-19h]
  int v23; // [rsp+ACh] [rbp-15h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+B0h] [rbp-11h]
  int v25; // [rsp+B8h] [rbp-9h]
  int v26; // [rsp+BCh] [rbp-5h]
  __int64 *v27; // [rsp+C0h] [rbp-1h]
  int v28; // [rsp+C8h] [rbp+7h]
  int v29; // [rsp+CCh] [rbp+Bh]

  DeviceObject = 0LL;
  Object = 0LL;
  v15 = 0LL;
  v8 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v8 >= 0 )
  {
    v9 = Object;
    v8 = guard_dispatch_icall_no_overrides(Object, DeviceObject, a1, a2);
    if ( a5 )
      *a5 = -559038737;
    if ( v9 )
      ObfDereferenceObject(v9);
  }
  if ( (unsigned int)dword_140E06EB8 > 5
    && (qword_140E06EC8 & 0x200000000000LL) != 0
    && (qword_140E06ED0 & 0x200000000000LL) == qword_140E06ED0 )
  {
    tlgCreate1Sz_wchar_t((__int64)v17, a1);
    v12 = *a4;
    v20 = 0;
    v23 = 0;
    v26 = 0;
    v29 = 0;
    LODWORD(Object) = v12;
    p_Object = &Object;
    LODWORD(DeviceObject) = -559038737;
    p_DeviceObject = &DeviceObject;
    v27 = &v15;
    v22 = 4;
    v25 = 4;
    v28 = 4;
    v18 = a2;
    v19 = 16;
    LODWORD(v15) = v8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06EB8, (unsigned __int8 *)&word_1400462AE, 0LL, 0LL, 7u, &v16);
  }
  return (unsigned int)v8;
}
