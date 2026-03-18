/*
 * XREFs of ?SetAnimatedProperty@CViewBox@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1802A84E4
 * Callers:
 *     _lambda_c9eecef02aee70f3a0bf4afdab052b20_::_lambda_invoker_cdecl_ @ 0x1802A8240 (_lambda_c9eecef02aee70f3a0bf4afdab052b20_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800805D0 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 */

__int64 __fastcall CViewBox::SetAnimatedProperty(
        CViewBox *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    CResource::NotifyOnChanged(this, 0LL, (__int64)this);
  }
  return 0LL;
}
