/*
 * XREFs of IoSetEnvironmentVariableEx @ 0x140821C20
 * Callers:
 *     IopInitializeInMemoryDumpData @ 0x14059108C (IopInitializeInMemoryDumpData.c)
 *     IopInitializeOfflineCrashDump @ 0x1405912D0 (IopInitializeOfflineCrashDump.c)
 *     ExpSetBootEntry @ 0x1407ACEAC (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407AD5A4 (ExpSetDriverEntry.c)
 *     ExpSetFirmwareEnvironmentVariable @ 0x1407ADB28 (ExpSetFirmwareEnvironmentVariable.c)
 *     NtDeleteBootEntry @ 0x1407AE0E0 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407AE270 (NtDeleteDriverEntry.c)
 *     NtSetBootOptions @ 0x1407AF0E0 (NtSetBootOptions.c)
 *     NtSetDriverEntryOrder @ 0x1407AF2C0 (NtSetDriverEntryOrder.c)
 *     NtSetBootEntryOrder @ 0x140820520 (NtSetBootEntryOrder.c)
 * Callees:
 *     ObfDereferenceObject @ 0x140309490 (ObfDereferenceObject.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1404265C0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     _tlgCreate1Sz_wchar_t @ 0x140426678 (_tlgCreate1Sz_wchar_t.c)
 *     __security_check_cookie @ 0x14069A6F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406A8B20 (_guard_dispatch_icall_no_overrides.c)
 *     IopOpenSystemVariableDevice @ 0x140822688 (IopOpenSystemVariableDevice.c)
 */

__int64 __fastcall IoSetEnvironmentVariableEx(const WCHAR *a1, __int64 a2, __int64 a3, int a4, int a5)
{
  int v8; // ebx
  PVOID v11; // rdi
  PVOID Object; // [rsp+40h] [rbp-81h] BYREF
  PDEVICE_OBJECT DeviceObject; // [rsp+48h] [rbp-79h] BYREF
  __int64 v14; // [rsp+50h] [rbp-71h] BYREF
  struct _EVENT_DATA_DESCRIPTOR v15; // [rsp+60h] [rbp-61h] BYREF
  _BYTE v16[16]; // [rsp+80h] [rbp-41h] BYREF
  __int64 v17; // [rsp+90h] [rbp-31h]
  int v18; // [rsp+98h] [rbp-29h]
  int v19; // [rsp+9Ch] [rbp-25h]
  PVOID *p_Object; // [rsp+A0h] [rbp-21h]
  int v21; // [rsp+A8h] [rbp-19h]
  int v22; // [rsp+ACh] [rbp-15h]
  PDEVICE_OBJECT *p_DeviceObject; // [rsp+B0h] [rbp-11h]
  int v24; // [rsp+B8h] [rbp-9h]
  int v25; // [rsp+BCh] [rbp-5h]
  __int64 *v26; // [rsp+C0h] [rbp-1h]
  int v27; // [rsp+C8h] [rbp+7h]
  int v28; // [rsp+CCh] [rbp+Bh]

  DeviceObject = 0LL;
  Object = 0LL;
  v14 = 0LL;
  v8 = IopOpenSystemVariableDevice((PFILE_OBJECT *)&Object, &DeviceObject);
  if ( v8 >= 0 )
  {
    v11 = Object;
    v8 = guard_dispatch_icall_no_overrides(Object);
    if ( v11 )
      ObfDereferenceObject(v11);
  }
  if ( (unsigned int)dword_140E06EB8 > 5
    && (qword_140E06EC8 & 0x200000000000LL) != 0
    && (qword_140E06ED0 & 0x200000000000LL) == qword_140E06ED0 )
  {
    tlgCreate1Sz_wchar_t((__int64)v16, a1);
    v19 = 0;
    v22 = 0;
    v25 = 0;
    v28 = 0;
    p_Object = &Object;
    v21 = 4;
    p_DeviceObject = &DeviceObject;
    v26 = &v14;
    v24 = 4;
    v27 = 4;
    v17 = a2;
    v18 = 16;
    LODWORD(Object) = a4;
    LODWORD(DeviceObject) = a5;
    LODWORD(v14) = v8;
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06EB8, (unsigned __int8 *)&word_140045D46, 0LL, 0LL, 7u, &v15);
  }
  return (unsigned int)v8;
}
