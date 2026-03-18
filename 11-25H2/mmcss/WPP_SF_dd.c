/*
 * XREFs of WPP_SF_dd @ 0x1C00049A4
 * Callers:
 *     CiDispatchFastIoDeviceControl @ 0x1C000C960 (CiDispatchFastIoDeviceControl.c)
 *     CiDispatchCreateTaskIndexClient @ 0x1C000CEB0 (CiDispatchCreateTaskIndexClient.c)
 *     CiDispatchCreateMmThreadClient @ 0x1C000D290 (CiDispatchCreateMmThreadClient.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x1C0004F20 (_guard_dispatch_icall.c)
 */

__int64 WPP_SF_dd(__int64 a1, unsigned __int16 a2, __int64 a3, int a4, ...)
{
  int v5; // [rsp+78h] [rbp+20h] BYREF
  va_list va; // [rsp+80h] [rbp+28h] BYREF

  va_start(va, a4);
  v5 = a4;
  return ((__int64 (__fastcall *)(__int64, __int64, void *, _QWORD, int *, __int64, __int64 *, __int64, _QWORD))pfnWppTraceMessage)(
           a1,
           43LL,
           &WPP_c50a18c053cc3d547b2a795787fa6cf4_Traceguids,
           a2,
           &v5,
           4LL,
           (__int64 *)va,
           4LL,
           0LL);
}
