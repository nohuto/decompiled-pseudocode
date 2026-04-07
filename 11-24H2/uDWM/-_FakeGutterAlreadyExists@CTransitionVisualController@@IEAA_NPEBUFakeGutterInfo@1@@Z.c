/*
 * XREFs of ?_FakeGutterAlreadyExists@CTransitionVisualController@@IEAA_NPEBUFakeGutterInfo@1@@Z @ 0x1800DDF0C
 * Callers:
 *     ?CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANSITION_TARGET@@HPEBUtagRECT@@2PEAVCStoryboard@@PEAPEAVCAnimationComponent@@4@Z @ 0x1800DD490 (-CreateGutterAnimationComponentsForRect@CTransitionVisualController@@QEAAJPEAUHWND__@@W4DWMTRANS.c)
 * Callees:
 *     ?GetBeginRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x180085B10 (-GetBeginRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z.c)
 *     ?GetEndRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x180087D60 (-GetEndRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z.c)
 *     __security_check_cookie @ 0x18009B5A0 (__security_check_cookie.c)
 */

char __fastcall CTransitionVisualController::_FakeGutterAlreadyExists(
        CTransitionVisualController *this,
        const struct CTransitionVisualController::FakeGutterInfo *a2)
{
  char v2; // si
  unsigned int i; // r14d
  __int64 v6; // rbx
  __int64 v7; // rcx
  RECT rc2; // [rsp+20h] [rbp-48h] BYREF
  RECT v10; // [rsp+30h] [rbp-38h] BYREF

  v2 = 0;
  for ( i = 0; i < *((_DWORD *)this + 34); ++i )
  {
    v6 = *((_QWORD *)this + 14);
    rc2 = 0LL;
    v10 = 0LL;
    CAnimatedTransitionVisual::GetBeginRect(*(CAnimatedTransitionVisual **)(*(_QWORD *)(v6 + 8LL * i) + 40LL), &rc2);
    CAnimatedTransitionVisual::GetEndRect(*(CAnimatedTransitionVisual **)(*(_QWORD *)(v6 + 8LL * i) + 40LL), &v10);
    v7 = *(_QWORD *)(v6 + 8LL * i);
    if ( (*(_DWORD *)(v7 + 24) & 0xFFF) == 0x16
      && *(_DWORD *)a2 == *(_DWORD *)(v7 + 28)
      && *((_QWORD *)a2 + 1) == *(_QWORD *)(v7 + 144)
      && EqualRect((const RECT *)a2 + 1, &rc2)
      && EqualRect((const RECT *)a2 + 2, &v10) )
    {
      return 1;
    }
  }
  return v2;
}
