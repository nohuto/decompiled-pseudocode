/*
 * XREFs of IoGetEnvironmentVariableEx @ 0x14094FA00
 * Callers:
 *     IopInitializeOfflineCrashDump @ 0x140591AF4 (IopInitializeOfflineCrashDump.c)
 *     ExpSetBootEntry @ 0x1407BC77C (ExpSetBootEntry.c)
 *     ExpSetDriverEntry @ 0x1407BCE74 (ExpSetDriverEntry.c)
 *     NtDeleteBootEntry @ 0x1407BDD00 (NtDeleteBootEntry.c)
 *     NtDeleteDriverEntry @ 0x1407BDE90 (NtDeleteDriverEntry.c)
 *     NtGetEnvironmentVariableEx @ 0x1407BE610 (NtGetEnvironmentVariableEx.c)
 *     NtQueryBootEntryOrder @ 0x14094E5C0 (NtQueryBootEntryOrder.c)
 *     NtQuerySystemEnvironmentValueEx @ 0x14094F250 (NtQuerySystemEnvironmentValueEx.c)
 *     ExpGetFirmwareEnvironmentVariable @ 0x14094F700 (ExpGetFirmwareEnvironmentVariable.c)
 *     NtQueryBootOptions @ 0x140A942B0 (NtQueryBootOptions.c)
 *     IopCachePreviousBootData @ 0x140C1C5A0 (IopCachePreviousBootData.c)
 * Callees:
 *     _tlgCreate1Sz_wchar_t @ 0x1402B92A8 (_tlgCreate1Sz_wchar_t.c)
 *     _tlgWriteTransfer_EtwWriteTransfer @ 0x1402B92F0 (_tlgWriteTransfer_EtwWriteTransfer.c)
 *     ObfDereferenceObject @ 0x1402CE210 (ObfDereferenceObject.c)
 *     __security_check_cookie @ 0x1406A6920 (__security_check_cookie.c)
 *     _guard_dispatch_icall_no_overrides @ 0x1406B4D90 (_guard_dispatch_icall_no_overrides.c)
 *     IopOpenSystemVariableDevice @ 0x14094FBB0 (IopOpenSystemVariableDevice.c)
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
    v8 = guard_dispatch_icall_no_overrides(Object, DeviceObject);
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
    tlgWriteTransfer_EtwWriteTransfer((__int64)&dword_140E06EB8, (unsigned __int8 *)&word_140046656, 0LL, 0LL, 7u, &v16);
  }
  return (unsigned int)v8;
}
