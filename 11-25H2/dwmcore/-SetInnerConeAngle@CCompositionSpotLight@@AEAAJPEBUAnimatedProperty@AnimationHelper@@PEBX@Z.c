/*
 * XREFs of ?SetInnerConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C1A58
 * Callers:
 *     _lambda_71e52a03fd64c87786166561e598599e_::_lambda_invoker_cdecl_ @ 0x18025BA90 (_lambda_71e52a03fd64c87786166561e598599e_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x1800C1AEC (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::SetInnerConeAngle(
        CCompositionSpotLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  if ( *((float *)this + 95) != *(float *)a3 )
  {
    *((_DWORD *)this + 95) = *a3;
    CResource::InvalidateAnimationSources(this, 8u);
    CResource::InvalidateAnimationSources(this, 9u);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
