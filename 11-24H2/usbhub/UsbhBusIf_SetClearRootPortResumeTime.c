/*
 * XREFs of UsbhBusIf_SetClearRootPortResumeTime @ 0x140056E20
 * Callers:
 *     UsbhUnlinkPdoDeviceHandle @ 0x140015900 (UsbhUnlinkPdoDeviceHandle.c)
 *     UsbhSetupDevice @ 0x1400280C8 (UsbhSetupDevice.c)
 * Callees:
 *     FdoExt @ 0x14000BE50 (FdoExt.c)
 *     Log @ 0x1400298B0 (Log.c)
 *     _guard_dispatch_icall @ 0x140060F80 (_guard_dispatch_icall.c)
 */

__int64 (__fastcall *__fastcall UsbhBusIf_SetClearRootPortResumeTime(
        __int64 a1,
        __int64 a2,
        char a3,
        char a4))(_QWORD, __int64, __int64, __int64)
{
  _DWORD *v8; // rax
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // r10
  __int64 (__fastcall *result)(_QWORD, __int64, __int64, __int64); // rax

  v8 = FdoExt(a1);
  Log(a1, 4, 1968390994, (__int64)(v8 + 1056), 0LL);
  result = *(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64))(v11 + 4544);
  if ( result )
  {
    LOBYTE(v10) = a4;
    LOBYTE(v9) = a3;
    return (__int64 (__fastcall *)(_QWORD, __int64, __int64, __int64))result(*(_QWORD *)(v11 + 4232), a2, v9, v10);
  }
  return result;
}
