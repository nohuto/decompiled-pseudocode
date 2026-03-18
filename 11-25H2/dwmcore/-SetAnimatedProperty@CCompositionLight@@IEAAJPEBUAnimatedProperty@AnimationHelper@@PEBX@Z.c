/*
 * XREFs of ?SetAnimatedProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C1AAC
 * Callers:
 *     _lambda_ffcd3d3357728bd303ffc6bd1ffde55f_::_lambda_invoker_cdecl_ @ 0x1802377C0 (_lambda_ffcd3d3357728bd303ffc6bd1ffde55f_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x1800C1AEC (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800E5C50 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 */

__int64 __fastcall CCompositionLight::SetAnimatedProperty(
        CCompositionLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
