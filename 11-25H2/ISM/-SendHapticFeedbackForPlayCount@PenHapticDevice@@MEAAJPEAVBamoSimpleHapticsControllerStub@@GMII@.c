/*
 * XREFs of ?SendHapticFeedbackForPlayCount@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@GMII@Z @ 0x18018DDF0
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180109450 (--0-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801882E8 (--1-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z @ 0x18018AE60 (-SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenHapticDevice::SendHapticFeedbackForPlayCount(
        PenHapticDevice *this,
        struct BamoSimpleHapticsControllerStub *a2,
        unsigned __int16 a3,
        float a4,
        ULONG a5,
        unsigned int a6)
{
  __int64 *v7; // rdx
  int v8; // eax
  wil::details::in1diag3 *retaddr; // [rsp+48h] [rbp+0h]
  PenHapticInterface *v11; // [rsp+50h] [rbp+8h] BYREF

  v7 = (__int64 *)*((_QWORD *)this + 9);
  if ( v7 != *((__int64 **)this + 10) )
  {
    wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::com_ptr_t<PenHapticInterface,wil::err_exception_policy>(
      (__int64 *)&v11,
      v7);
    v8 = PenHapticInterface::SendHapticFeedbackInternal(v11, a3, a4, a5, a6, 0);
    if ( v8 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x64,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
        (const char *)(unsigned int)v8);
    wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>((__int64 *)&v11);
  }
  return 0LL;
}
