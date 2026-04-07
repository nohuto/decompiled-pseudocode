/*
 * XREFs of ?UpdateGeometry2DForClonedStagedVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x1800849C0
 * Callers:
 *     ?Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ @ 0x180017878 (-Validate2DVisual@CAnimatedTransitionVisual@@IEAAJXZ.c)
 * Callees:
 *     ?RoundToNearestInt@@YAHM@Z @ 0x180017F60 (-RoundToNearestInt@@YAHM@Z.c)
 *     ?SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z @ 0x180027EF8 (-SetOffset@CVisual@@QEAAXPEBUtagPOINT@@@Z.c)
 */

__int64 __fastcall CAnimatedTransitionVisual::UpdateGeometry2DForClonedStagedVisual(CAnimatedTransitionVisual *this)
{
  LONG v2; // eax
  float v3; // xmm0_4
  LONG v4; // eax
  struct tagPOINT **v5; // rcx
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = RoundToNearestInt((float)*((int *)this + 202) + *((float *)this + 176));
  v3 = (float)*((int *)this + 203);
  v7.x = v2;
  v4 = RoundToNearestInt(v3 + *((float *)this + 177));
  v5 = (struct tagPOINT **)*((_QWORD *)this + 20);
  v7.y = v4;
  CVisual::SetOffset(*v5, &v7);
  return 0LL;
}
