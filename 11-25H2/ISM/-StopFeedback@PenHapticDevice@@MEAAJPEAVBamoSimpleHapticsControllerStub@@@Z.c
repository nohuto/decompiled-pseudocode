/*
 * XREFs of ?StopFeedback@PenHapticDevice@@MEAAJPEAVBamoSimpleHapticsControllerStub@@@Z @ 0x18018E400
 * Callers:
 *     <none>
 * Callees:
 *     ?_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180091A84 (-_Log_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     ??0?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z @ 0x180109450 (--0-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@AEBV01@@Z.c)
 *     ??1?$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ @ 0x1801882E8 (--1-$com_ptr_t@VPenHapticInterface@@Uerr_exception_policy@wil@@@wil@@QEAA@XZ.c)
 *     ?SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z @ 0x18018AE60 (-SendHapticFeedbackInternal@PenHapticInterface@@AEAAJGMIII@Z.c)
 */

// Hidden C++ exception states: #wind=1
__int64 __fastcall PenHapticDevice::StopFeedback(PenHapticDevice *this, struct BamoSimpleHapticsControllerStub *a2)
{
  __int64 *v2; // rbx
  __int64 *v3; // rdi
  int v4; // eax
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  PenHapticInterface *v7; // [rsp+40h] [rbp+8h] BYREF

  v2 = (__int64 *)*((_QWORD *)this + 9);
  v3 = (__int64 *)*((_QWORD *)this + 10);
  while ( v2 != v3 )
  {
    wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::com_ptr_t<PenHapticInterface,wil::err_exception_policy>(
      (__int64 *)&v7,
      v2);
    v4 = PenHapticInterface::SendHapticFeedbackInternal(v7, 2u, 1.0, 0, 0, 0);
    if ( v4 < 0 )
      wil::details::in1diag3::_Log_Hr(
        retaddr,
        (void *)0x4D,
        (__int64)"onecoreuap\\windows\\moderncore\\inputv2\\inputprocessors\\devices\\stylus\\api\\server\\hapticinterface.cpp",
        (const char *)(unsigned int)v4);
    wil::com_ptr_t<PenHapticInterface,wil::err_exception_policy>::~com_ptr_t<PenHapticInterface,wil::err_exception_policy>((__int64 *)&v7);
    ++v2;
  }
  return 0LL;
}
