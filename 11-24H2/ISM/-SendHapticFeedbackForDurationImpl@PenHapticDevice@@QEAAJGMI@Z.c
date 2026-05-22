/*
 * XREFs of ?SendHapticFeedbackForDurationImpl@PenHapticDevice@@QEAAJGMI@Z @ 0x180188458
 * Callers:
 *     ?SendHapticFeedbackForDuration@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMI@Z @ 0x180188440 (-SendHapticFeedbackForDuration@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMI@Z.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18010B360 (--0-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?SendHapticFeedbackForDuration@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMI@Z @ 0x180186A1C (-SendHapticFeedbackForDuration@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMI.c)
 *     ??1?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801881B0 (--1-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z @ 0x18018F330 (-SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenHapticDevice::SendHapticFeedbackForDurationImpl(
        PenHapticDevice *this,
        __int16 a2,
        float a3,
        unsigned int a4)
{
  __int64 *v6; // rdx
  int v7; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PenHapticInterface *v10; // [rsp+50h] [rbp+8h] BYREF

  v6 = (__int64 *)*((_QWORD *)this + 11);
  if ( v6 != *((__int64 **)this + 12) )
  {
    wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::com_ptr_t<PenHapticInterface,wil::err_exception_policy>(
      (__int64 *)&v10,
      v6);
    InputTraceLogging::Haptics::SendHapticFeedbackForDuration(IMDT_PEN, a2, a3, a4);
    v7 = PenHapticInterface::SendHapticFeedbackInternal(v10, a2, a3, 0, 0, a4);
    if ( v7 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x5A,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\penhapticinterface.cpp",
        (const char *)(unsigned int)v7);
    wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>((__int64 *)&v10);
  }
  return 0LL;
}
