/*
 * XREFs of ?SetBlurRadius@CDropShadow@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18020D9AC
 * Callers:
 *     _lambda_aabbae5af3b5ed5a886db35506829f12_::_lambda_invoker_cdecl_ @ 0x180231C50 (_lambda_aabbae5af3b5ed5a886db35506829f12_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x1800E4E40 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18020DA40 (-NotifyOnChanged@CDropShadow@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

__int64 __fastcall CDropShadow::SetBlurRadius(
        CDropShadow *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        float *a3)
{
  float v4; // xmm1_4

  v4 = fminf(750.0, *a3);
  if ( *((float *)this + 22) != v4 )
  {
    *((float *)this + 22) = v4;
    CResource::InvalidateAnimationSources(this, 1LL);
    CDropShadow::NotifyOnChanged(this, 0LL, this);
  }
  return 0LL;
}
