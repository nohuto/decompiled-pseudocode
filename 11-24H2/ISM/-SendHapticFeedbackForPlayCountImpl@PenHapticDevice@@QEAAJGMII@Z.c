/*
 * XREFs of ?SendHapticFeedbackForPlayCountImpl@PenHapticDevice@@QEAAJGMII@Z @ 0x180188520
 * Callers:
 *     ?InvokeSendHapticFeedbackForPlayCount@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincipal@@W4tagINPUT_MESSAGE_DEVICE_TYPE@@GAEBUtagINPUT_HAPTIC_SETTINGS@@II@Z @ 0x1800C9650 (-InvokeSendHapticFeedbackForPlayCount@HapticProcessor@@CAJPEAVBamoSimpleHapticsControllerPrincip.c)
 *     ?SendHapticFeedbackForPlayCount@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMII@Z @ 0x180188500 (-SendHapticFeedbackForPlayCount@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMII@.c)
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091C24 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x18010B360 (--0-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ?SendHapticFeedbackForPlayCount@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GMII@Z @ 0x180186C38 (-SendHapticFeedbackForPlayCount@Haptics@InputTraceLogging@@SAXW4tagINPUT_MESSAGE_DEVICE_TYPE@@GM.c)
 *     ??1?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801881B0 (--1-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z @ 0x18018F330 (-SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenHapticDevice::SendHapticFeedbackForPlayCountImpl(
        PenHapticDevice *this,
        __int16 a2,
        float a3,
        unsigned int a4,
        unsigned int a5)
{
  __int64 *v7; // rdx
  unsigned int v8; // ebx
  int v9; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PenHapticInterface *v12; // [rsp+50h] [rbp+8h] BYREF

  v7 = (__int64 *)*((_QWORD *)this + 11);
  if ( v7 != *((__int64 **)this + 12) )
  {
    wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::com_ptr_t<PenHapticInterface,wil::err_exception_policy>(
      (__int64 *)&v12,
      v7);
    v8 = a5;
    InputTraceLogging::Haptics::SendHapticFeedbackForPlayCount(IMDT_PEN, a2, a3, a4, a5);
    v9 = PenHapticInterface::SendHapticFeedbackInternal(v12, a2, a3, a4, v8, 0);
    if ( v9 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x68,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\haptic\\api\\server\\penhapticinterface.cpp",
        (const char *)(unsigned int)v9);
    wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>((__int64 *)&v12);
  }
  return 0LL;
}
