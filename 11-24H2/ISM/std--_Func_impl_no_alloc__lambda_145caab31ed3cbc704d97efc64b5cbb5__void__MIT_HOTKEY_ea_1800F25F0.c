/*
 * XREFs of std::_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call @ 0x1800F25F0
 * Callers:
 *     <none>
 * Callees:
 *     ??1PerfRegion@InputTraceLogging@@QEAA@XZ @ 0x18001A540 (--1PerfRegion@InputTraceLogging@@QEAA@XZ.c)
 *     ??0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z @ 0x18001AD10 (--0PerfRegion@InputTraceLogging@@QEAA@PEBDPEBU01@@Z.c)
 *     ?GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ @ 0x1800369B4 (-GetHotkeyRegistrationForwarder@ISMStatics@@SAPEAVHotkeyRegistrationForwarder@@XZ.c)
 *     ?ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAGE@@@Z @ 0x18007A598 (-ForwardHotkeyRegistration@HotkeyRegistrationForwarder@@QEAAJPEBU_MIT_HOTKEY_REGISTRATION_MESSAG.c)
 *     __security_check_cookie @ 0x18009D650 (__security_check_cookie.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::_Func_impl_no_alloc__lambda_145caab31ed3cbc704d97efc64b5cbb5__void__MIT_HOTKEY_REGISTRATION_MESSAGE_const___::_Do_call(
        __int64 a1,
        const struct _MIT_HOTKEY_REGISTRATION_MESSAGE **a2)
{
  const struct _MIT_HOTKEY_REGISTRATION_MESSAGE *v2; // rbx
  HotkeyRegistrationForwarder *HotkeyRegistrationForwarder; // rax
  __int64 v4; // r8
  const char *v5; // r9
  _BYTE v6[56]; // [rsp+20h] [rbp-48h] BYREF

  v2 = *a2;
  InputTraceLogging::PerfRegion::PerfRegion((InputTraceLogging::PerfRegion *)v6, "MITEP_HOTKEY_REGISTRATION", 0LL);
  HotkeyRegistrationForwarder = ISMStatics::GetHotkeyRegistrationForwarder();
  HotkeyRegistrationForwarder::ForwardHotkeyRegistration(HotkeyRegistrationForwarder, v2, v4, v5);
  InputTraceLogging::PerfRegion::~PerfRegion((InputTraceLogging::PerfRegion *)v6);
}
