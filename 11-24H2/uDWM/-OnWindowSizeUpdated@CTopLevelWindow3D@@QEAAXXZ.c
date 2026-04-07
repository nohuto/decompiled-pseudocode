/*
 * XREFs of ?OnWindowSizeUpdated@CTopLevelWindow3D@@QEAAXXZ @ 0x180063B2C
 * Callers:
 *     ?OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z @ 0x180084200 (-OnSizeChanged@CTopLevelWindow3D@@UEAAXPEBVCSecondaryWindowRepresentation@@@Z.c)
 * Callees:
 *     ?StopAnimation@CTopLevelWindow3D@@QEAAJXZ @ 0x180024708 (-StopAnimation@CTopLevelWindow3D@@QEAAJXZ.c)
 *     ?ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ @ 0x180064124 (-ShouldFreezeAnimationCVI@CTopLevelWindow3D@@AEBA_NXZ.c)
 *     ?ShouldHandleTransition@CTopLevelWindow3D@@AEBA_NXZ @ 0x1800641CC (-ShouldHandleTransition@CTopLevelWindow3D@@AEBA_NXZ.c)
 */

void __fastcall CTopLevelWindow3D::OnWindowSizeUpdated(RECT *this)
{
  LONG top; // eax
  __int64 v3; // rax
  CRenderDataVisual *v4; // rcx

  top = this[21].top;
  if ( !top || this[21].left == top )
  {
    v3 = *(_QWORD *)&this[20].left;
    if ( v3 && !*(_BYTE *)(v3 + 72) && !CTopLevelWindow3D::ShouldFreezeAnimationCVI((CTopLevelWindow3D *)this) )
      CRenderDataVisual::ClearInstructions(v4);
  }
  else if ( CTopLevelWindow3D::ShouldHandleTransition((CTopLevelWindow3D *)this)
         && !EqualRect((const RECT *)(*(_QWORD *)&this[18].left + 48LL), this + 17) )
  {
    if ( *(_QWORD *)&this[20].left )
      CTopLevelWindow3D::StopAnimation((CTopLevelWindow3D *)this);
    CTopLevelWindow3D::StartAnimation((__int64)this, this[21].top);
  }
}
