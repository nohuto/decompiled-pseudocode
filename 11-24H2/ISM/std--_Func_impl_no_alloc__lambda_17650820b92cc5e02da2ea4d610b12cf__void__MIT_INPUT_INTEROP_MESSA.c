/*
 * XREFs of std::_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call @ 0x18002FAD0
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18001A540 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18001AD10 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x18002FB40 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

void __fastcall std::_Func_impl_no_alloc__lambda_17650820b92cc5e02da2ea4d610b12cf__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call(
        __int64 a1,
        const struct _MIT_INPUT_INTEROP_MESSAGE **a2)
{
  const struct _MIT_INPUT_INTEROP_MESSAGE *v3; // rbx
  _BYTE v4[56]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a2;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v4, "MITEP_INPUT_INTEROP_ISM", 0LL);
  Win32kInterop::ProcessInteropCallback(*(Win32kInterop **)(a1 + 8), v3);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v4);
}
