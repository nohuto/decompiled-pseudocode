/*
 * XREFs of ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@M@Z @ 0x1800B4E50
 * Callers:
 *     ?OnWindowMonitorChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z @ 0x1800AF350 (-OnWindowMonitorChanged@CCaptureManager@@UEAAJPEAVCWindowData@@@Z.c)
 *     ?_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z @ 0x1800B4D6C (-_UpdateCaptureControllerDefaultSDRBoost@CCaptureManager@@AEAAJPEAUHWND__@@@Z.c)
 * Callees:
 *     ?Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z @ 0x180094EC0 (-Return_Hr@in1diag3@details@wil@@YAXPEAXIPEBDJ@Z.c)
 *     CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_0d61ac3af7bbde50e422a604397c2ed5___ @ 0x1800ABA74 (CCaptureManager--_ApplyToAllCaptureControllersForCapturedWindow__lambda_0d61ac3af7bbde50e422a604.c)
 */

// local variable allocation has failed, the output may be wrong!
__int64 __fastcall CCaptureManager::_UpdateCaptureControllerDefaultSDRBoost(
        CCaptureManager *this,
        __int64 *a2,
        double a3)
{
  int v3; // ebx
  __int64 v4; // rdx
  wil::details::in1diag3 *retaddr; // [rsp+28h] [rbp+0h]
  char v7; // [rsp+40h] [rbp+18h] BYREF

  v7 = 0;
  v3 = CCaptureManager::_ApplyToAllCaptureControllersForCapturedWindow__lambda_0d61ac3af7bbde50e422a604397c2ed5___(
         (__int64)this,
         a2,
         _mm_cvtsi128_si32(*(__m128i *)&a3),
         &v7);
  if ( v3 < 0 )
  {
    v4 = 564LL;
LABEL_3:
    wil::details::in1diag3::Return_Hr(
      retaddr,
      (void *)v4,
      (__int64)"clientcore\\windows\\dwm\\udwm\\capturemanager.cpp",
      (const char *)(unsigned int)v3);
    return (unsigned int)v3;
  }
  if ( !v7 )
  {
    v3 = -2147024809;
    v4 = 565LL;
    goto LABEL_3;
  }
  return 0LL;
}
