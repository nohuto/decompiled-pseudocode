/*
 * XREFs of ?SetDirectionProperty@CCompositionLight@@IEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1802220C4
 * Callers:
 *     _lambda_c9fe95d8b226b24ff39bfeb4e0796c71_::_lambda_invoker_cdecl_ @ 0x180295010 (_lambda_c9fe95d8b226b24ff39bfeb4e0796c71_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?IssueLightChangedNotification@CCompositionLight@@QEAAXXZ @ 0x18003BB0C (-IssueLightChangedNotification@CCompositionLight@@QEAAXXZ.c)
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800805D0 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z @ 0x180166364 (-NormalizeVec3@CCompositionLight@@IEBAXAEBUfloat3@Numerics@Foundation@Windows@@PEAU2345@@Z.c)
 */

__int64 __fastcall CCompositionLight::SetDirectionProperty(
        CCompositionLight *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        struct Windows::Foundation::Numerics::float3 *a3)
{
  _BYTE v6[24]; // [rsp+20h] [rbp-18h] BYREF

  CCompositionLight::NormalizeVec3(this, a3, (struct Windows::Foundation::Numerics::float3 *)v6);
  if ( CResource::ModifyProperty(this, a2, v6) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    CCompositionLight::IssueLightChangedNotification(this);
  }
  return 0LL;
}
