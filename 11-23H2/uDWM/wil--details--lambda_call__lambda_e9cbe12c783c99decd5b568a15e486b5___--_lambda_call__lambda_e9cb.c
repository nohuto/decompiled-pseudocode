/*
 * XREFs of wil::details::lambda_call__lambda_e9cbe12c783c99decd5b568a15e486b5___::_lambda_call__lambda_e9cbe12c783c99decd5b568a15e486b5___ @ 0x1800D9468
 * Callers:
 *     _CSlide::_SlideWindow_::_1_::dtor$1 @ 0x1800DE442 (_CSlide--_SlideWindow_--_1_--dtor$1.c)
 * Callees:
 *     ?_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z @ 0x1800DE03C (-_RemoveAnimationComponent@CStoryboard@@IEAAJPEAVCAnimationComponent@@@Z.c)
 */

// Hidden C++ exception states: #wind=1
int __fastcall wil::details::lambda_call__lambda_e9cbe12c783c99decd5b568a15e486b5___::_lambda_call__lambda_e9cbe12c783c99decd5b568a15e486b5___(
        __int64 a1)
{
  struct CAnimationComponent **v1; // rax
  struct CAnimationComponent *v2; // rdx

  if ( *(_BYTE *)(a1 + 16) )
  {
    *(_BYTE *)(a1 + 16) = 0;
    v1 = *(struct CAnimationComponent ***)a1;
    v2 = **(struct CAnimationComponent ***)a1;
    if ( v2 )
      LODWORD(v1) = CStoryboard::_RemoveAnimationComponent(*(CStoryboard **)(a1 + 8), v2);
  }
  return (int)v1;
}
