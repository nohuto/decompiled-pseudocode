/*
 * XREFs of ?_UpdateCaptureControllerTransform@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800B4FBC
 * Callers:
 *     ?OnWindowTransformUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF910 (-OnWindowTransformUpdated@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_0378cdce5396d7b78c01dc0da7cd119d___ @ 0x1800AB9A4 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindow__lambda_0378cdce5396d7b78c01dc0d.c)
 */

__int64 __fastcall CCaptureManager::_UpdateCaptureControllerTransform(CCaptureManager *this, __int64 *a2)
{
  int v2; // ebx
  __int64 v3; // rdx
  _QWORD v5[3]; // [rsp+20h] [rbp-18h] BYREF
  wil::details::in1diag3 *retaddr; // [rsp+38h] [rbp+0h]
  char v7; // [rsp+40h] [rbp+8h] BYREF

  v7 = 0;
  v5[0] = this;
  v5[1] = a2;
  v2 = CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_0378cdce5396d7b78c01dc0da7cd119d___(
         (__int64)this,
         a2,
         (__int64)v5,
         &v7);
  if ( v2 < 0 )
  {
    v3 = 531LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v3,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v2);
    return (unsigned int)v2;
  }
  if ( !v7 )
  {
    v2 = -2147024809;
    v3 = 532LL;
    goto LABEL_3;
  }
  return 0LL;
}
