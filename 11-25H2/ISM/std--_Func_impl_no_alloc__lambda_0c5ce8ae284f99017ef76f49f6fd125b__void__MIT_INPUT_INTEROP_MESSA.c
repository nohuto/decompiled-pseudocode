/*
 * XREFs of std::_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call @ 0x18002F4A0
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x180019F70 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18001A740 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z @ 0x18002F580 (-ProcessInteropCallback@Win32kInterop@@AEAAXPEBU_MIT_INPUT_INTEROP_MESSAGE@@@Z.c)
 *     __security_check_cookie @ 0x18009D480 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_0c5ce8ae284f99017ef76f49f6fd125b__void__MIT_INPUT_INTEROP_MESSAGE_const___::_Do_call(
        __int64 a1,
        const struct _MIT_INPUT_INTEROP_MESSAGE **a2)
{
  const struct _MIT_INPUT_INTEROP_MESSAGE *v3; // rbx
  _BYTE v4[56]; // [rsp+20h] [rbp-48h] BYREF

  v3 = *a2;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v4, "MIT_INPUT_INTEROP_MESSAGE", 0LL);
  Win32kInterop::ProcessInteropCallback(*(Win32kInterop **)(a1 + 8), v3);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v4);
}
