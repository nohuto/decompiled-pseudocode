/*
 * XREFs of WPP_RECORDER_AND_TRACE_SF_dD @ 0x1400AACA4
 * Callers:
 *     rimProcessMissingPointerDeviceContacts @ 0x140059874 (rimProcessMissingPointerDeviceContacts.c)
 *     tracePointerInfo @ 0x1400AA220 (tracePointerInfo.c)
 *     ?ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400BFA00 (-ClearPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 *     ?SetPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z @ 0x1400BFE30 (-SetPriorityFloor@tagTHREADINFO@@QEAAXW4tagThreadPriorityFloor@@@Z.c)
 *     RIMAllocateHidConfigDesc @ 0x140127788 (RIMAllocateHidConfigDesc.c)
 *     ?ComputeAndTestForegroundActivate@tagTHREADINFO@@QEAA_NXZ @ 0x14015CB10 (-ComputeAndTestForegroundActivate@tagTHREADINFO@@QEAA_NXZ.c)
 *     ?SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z @ 0x14015D080 (-SetForegroundActivate@tagTHREADINFO@@QEAAXW4AllowForegroundActivateReason@@@Z.c)
 *     xxxInitProcessInfo @ 0x140161084 (xxxInitProcessInfo.c)
 *     xxxUserProcessCallout @ 0x140167490 (xxxUserProcessCallout.c)
 *     ?UpdateCapabilities@tagPROCESSINFO@@QEAA?AW4Win32ProcessCapabilities@@W42@0@Z @ 0x1401A6260 (-UpdateCapabilities@tagPROCESSINFO@@QEAA-AW4Win32ProcessCapabilities@@W42@0@Z.c)
 *     ForegroundBoost::_anonymous_namespace_::CanAdjustPriority @ 0x1401ABFF4 (ForegroundBoost--_anonymous_namespace_--CanAdjustPriority.c)
 *     RIMAllocateHidDesc @ 0x1401DAB28 (RIMAllocateHidDesc.c)
 *     RIMCreateHidDesc @ 0x1401DBCC8 (RIMCreateHidDesc.c)
 *     rimObsStartStopDeviceRead @ 0x1401F0DA0 (rimObsStartStopDeviceRead.c)
 *     InitCreateSharedSection @ 0x1402E4F6C (InitCreateSharedSection.c)
 * Callees:
 *     _guard_dispatch_icall @ 0x14023F3F0 (_guard_dispatch_icall.c)
 */

__int64 WPP_RECORDER_AND_TRACE_SF_dD(
        __int64 a1,
        char a2,
        char a3,
        __int64 a4,
        unsigned __int8 a5,
        unsigned int a6,
        unsigned __int16 a7,
        __int64 a8,
        ...)
{
  __int64 result; // rax
  int v11; // [rsp+20h] [rbp-38h]
  __int64 v12; // [rsp+A0h] [rbp+48h] BYREF
  va_list va; // [rsp+A0h] [rbp+48h]
  va_list va1; // [rsp+A8h] [rbp+50h] BYREF

  va_start(va1, a8);
  va_start(va, a8);
  v12 = va_arg(va1, _QWORD);
  if ( a2 )
    result = ((__int64 (__fastcall *)(__int64, __int64, __int64, _QWORD, __int64 *, __int64, char *, __int64, _QWORD))pfnWppTraceMessage)(
               a1,
               43LL,
               a8,
               a7,
               (__int64 *)va,
               4LL,
               va1,
               4LL,
               0LL);
  if ( a3 )
  {
    LOWORD(v11) = a7;
    return WppAutoLogTrace(a4, a5, a6, a8, v11, (__int64 *)va, 4LL, va1, 4LL, 0LL);
  }
  return result;
}
