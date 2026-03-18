/*
 * XREFs of ?SetTexcoordProperty@CRadialGradientBrush@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18008CDD4
 * Callers:
 *     _lambda_746b55e2294bced476720dc8eae46801_::_lambda_invoker_cdecl_ @ 0x18022A2E0 (_lambda_746b55e2294bced476720dc8eae46801_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800805D0 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18008DA70 (-NotifyOnChanged@CGradientBrush@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CRadialGradientBrush::SetTexcoordProperty(
        CRadialGradientBrush *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    CGradientBrush::NotifyOnChanged(this, 6LL);
  }
  return 0LL;
}
