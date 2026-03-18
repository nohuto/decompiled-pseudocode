/*
 * XREFs of ?SetOuterConeAngle@CCompositionSpotLight@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800C0428
 * Callers:
 *     _lambda_1269fdbdc5b547e7bbb8b341879d0c5c_::_lambda_invoker_cdecl_ @ 0x180259F90 (_lambda_1269fdbdc5b547e7bbb8b341879d0c5c_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x1800C1AEC (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 */

__int64 __fastcall CCompositionSpotLight::SetOuterConeAngle(
        CCompositionSpotLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        _DWORD *a3)
{
  if ( *((float *)this + 96) != *(float *)a3 )
  {
    *((_DWORD *)this + 96) = *a3;
    CResource::InvalidateAnimationSources(this, 0xDu);
    CResource::InvalidateAnimationSources(this, 0xEu);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
