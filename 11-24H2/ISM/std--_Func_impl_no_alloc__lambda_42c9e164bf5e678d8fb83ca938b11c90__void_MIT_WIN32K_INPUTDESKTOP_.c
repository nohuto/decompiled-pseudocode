/*
 * XREFs of std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call @ 0x18000D4E0
 * Callers:
 *     <none>
 * Callees:
 *     ?GetInstance@KernelContextProvider@@SAPEAV1@XZ @ 0x18000D544 (-GetInstance@KernelContextProvider@@SAPEAV1@XZ.c)
 *     ?SetContext@KernelContextProvider@@QEAAXPEBUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z @ 0x18000D6B8 (-SetContext@KernelContextProvider@@QEAAXPEBUMIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE@@@Z.c)
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18001A540 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18001AD10 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_42c9e164bf5e678d8fb83ca938b11c90__void_MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE_const___::_Do_call(
        __int64 a1,
        const struct MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE **a2)
{
  const struct MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE *v2; // rbx
  KernelContextProvider *Instance; // rax
  _BYTE v4[56]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *a2;
  InputTraceLogging::PerfRegion::PerfRegion(
    (InputTraceLogging::PerfRegion *)v4,
    "MIT_WIN32K_INPUTDESKTOP_STATE_MESSAGE",
    0LL);
  Instance = KernelContextProvider::GetInstance();
  KernelContextProvider::SetContext(Instance, v2);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v4);
}
