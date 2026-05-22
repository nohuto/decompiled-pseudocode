/*
 * XREFs of std::_Func_impl_no_alloc__lambda_98aaeec04a7dfe8bb0f5f2f107a502d3__void__MIT_PTP_INTEROP_MESSAGE_const___::_Do_call @ 0x1800F2730
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18001A540 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18001AD10 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 *     ?ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z @ 0x180159C88 (-ProcessInteropMessage@ShellGesturesProcessor@@SAXPEBU_MIT_PTP_INTEROP_MESSAGE@@@Z.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_98aaeec04a7dfe8bb0f5f2f107a502d3__void__MIT_PTP_INTEROP_MESSAGE_const___::_Do_call(
        __int64 a1,
        const struct _MIT_PTP_INTEROP_MESSAGE **a2)
{
  const struct _MIT_PTP_INTEROP_MESSAGE *v2; // rbx
  _BYTE v3[56]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *a2;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v3, "MITEP_PTP_INTEROP", 0LL);
  ShellGesturesProcessor::ProcessInteropMessage(v2);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v3);
}
