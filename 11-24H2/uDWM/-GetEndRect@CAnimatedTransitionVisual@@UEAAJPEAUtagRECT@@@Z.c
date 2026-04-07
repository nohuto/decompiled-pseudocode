/*
 * XREFs of ?GetEndRect@CAnimatedTransitionVisual@@UEAAJPEAUtagRECT@@@Z @ 0x180087D60
 * Callers:
 *     ?_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z @ 0x1800D8350 (-_WindowEnumCallback@CSlideIn@@EEAA_NPEAVCWindowData@@W4EnumWindowFlags@CStoryboard@@PEAJ@Z.c)
 *     ?_FakeGutterAlreadyExists@CTransitionVisualController@@IEAA_NPEBUFakeGutterInfo@1@@Z @ 0x1800DDF0C (-_FakeGutterAlreadyExists@CTransitionVisualController@@IEAA_NPEBUFakeGutterInfo@1@@Z.c)
 *     ?EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA?AURect@Foundation@Windows@5@XZ @ 0x1800DE918 (-EndRect@AnimatedTransitionVisualWrapper@implementation@Transitions@Udwm@winrt@@QEAA-AURect@Foun.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimatedTransitionVisual::GetEndRect(CAnimatedTransitionVisual *this, struct tagRECT *a2)
{
  __int64 result; // rax

  result = 0LL;
  *a2 = *(struct tagRECT *)((char *)this + 824);
  return result;
}
