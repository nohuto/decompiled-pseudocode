/*
 * XREFs of _lambda_23107513b1da1e4c6f608e9c21e81ef1_::operator() @ 0x18001DAA4
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18001D85C (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?GetOutsideMarginsWithDropShadow@CTopLevelWindow@@QEBA?AU_MARGINS@@XZ @ 0x18001DAF8 (-GetOutsideMarginsWithDropShadow@CTopLevelWindow@@QEBA-AU_MARGINS@@XZ.c)
 */

unsigned __int64 __fastcall lambda_23107513b1da1e4c6f608e9c21e81ef1_::operator()(unsigned __int64 *a1)
{
  unsigned __int64 result; // rax
  __int64 v2; // rcx
  CTopLevelWindow *v3; // rcx
  _DWORD *v4; // r10
  struct _MARGINS v5; // [rsp+20h] [rbp-18h] BYREF

  result = *a1;
  v2 = *(_QWORD *)*a1;
  if ( v2 )
  {
    v3 = *(CTopLevelWindow **)(v2 + 440);
    if ( v3 )
    {
      CTopLevelWindow::GetOutsideMarginsWithDropShadow(v3, &v5);
      v4[2] -= v5.cxRightWidth;
      v4[1] += v5.cyTopHeight;
      *v4 += v5.cxLeftWidth;
      result = (unsigned int)v5.cyBottomHeight;
      v4[3] -= v5.cyBottomHeight;
    }
  }
  return result;
}
