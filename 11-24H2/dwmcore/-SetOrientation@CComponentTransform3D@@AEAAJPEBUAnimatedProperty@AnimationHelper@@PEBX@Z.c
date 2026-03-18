/*
 * XREFs of ?SetOrientation@CComponentTransform3D@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x18015BFAC
 * Callers:
 *     _lambda_ef7b0a8b8d9ace9f6e11ce5efc580e1d_::_lambda_invoker_cdecl_ @ 0x180214FE0 (_lambda_ef7b0a8b8d9ace9f6e11ce5efc580e1d_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z @ 0x1800822D0 (-MilInstrumentationCheckHR_MaybeFailFast@@YAXKQEBJIJIPEAX@Z.c)
 *     ?D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z @ 0x18015C07C (-D3DXQuaternionNormalize@@YAPEAUD2DQuaternion@@PEAU1@PEBU1@@Z.c)
 *     ?NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z @ 0x18029266C (-NotifyQuaternionPropertyChanged@CPropertyChangeResource@@IEBAJIAEBUD2DQuaternion@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetOrientation(
        CComponentTransform3D *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const struct D2DQuaternion *a3)
{
  unsigned int v4; // edi
  int v6; // eax
  float v7[6]; // [rsp+30h] [rbp-18h] BYREF

  v4 = 0;
  D3DXQuaternionNormalize((struct D2DQuaternion *)v7, a3);
  if ( *((float *)this + 54) != v7[0]
    || *((float *)this + 55) != v7[1]
    || *((float *)this + 56) != v7[2]
    || *((float *)this + 57) != v7[3] )
  {
    *(_OWORD *)((char *)this + 216) = *(_OWORD *)v7;
    CResource::InvalidateAnimationSources(this, 4);
    CResource::NotifyOnChanged(this, 0LL, 0LL);
    v6 = CPropertyChangeResource::NotifyQuaternionPropertyChanged(
           this,
           4u,
           (CComponentTransform3D *)((char *)this + 216));
    v4 = v6;
    if ( v6 < 0 )
      MilInstrumentationCheckHR_MaybeFailFast(20, 0LL, 0, v6, 0x19Bu, 0LL);
  }
  return v4;
}
