/*
 * XREFs of ?SetSourceSize@CVisualSurface@@AEAAJPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x180200F00
 * Callers:
 *     _lambda_4a9cb0e1e7aa04a3475501589f86ab39_::_lambda_invoker_cdecl_ @ 0x180222F90 (_lambda_4a9cb0e1e7aa04a3475501589f86ab39_--_lambda_invoker_cdecl_.c)
 * Callees:
 *     ?InvalidateAnimationSources@CResource@@IEAAXI@Z @ 0x18007F9F0 (-InvalidateAnimationSources@CResource@@IEAAXI@Z.c)
 *     ?NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18007FB20 (-NotifyOnChanged@CResource@@UEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z @ 0x1800805D0 (-ModifyProperty@CResource@@IEAA_NPEBUAnimatedProperty@AnimationHelper@@PEBX@Z.c)
 *     ?ClearAllRenderTargets@CVisualSurface@@AEAAXXZ @ 0x180200FD4 (-ClearAllRenderTargets@CVisualSurface@@AEAAXXZ.c)
 */

__int64 __fastcall CVisualSurface::SetSourceSize(
        CVisualSurface *this,
        const struct AnimationHelper::AnimatedProperty *a2,
        const void *a3)
{
  float *v3; // rsi
  unsigned int v4; // ebx
  char v7; // bp
  char v8; // r14

  v3 = (float *)((char *)this + 188);
  v4 = 0;
  v7 = 1;
  if ( *((float *)this + 46) <= 0.0 || (v8 = 1, *v3 <= 0.0) )
    v8 = 0;
  if ( CResource::ModifyProperty(this, a2, a3) )
  {
    CResource::InvalidateAnimationSources(this, *(_DWORD *)a2);
    if ( !*((_BYTE *)this + 204) )
      CVisualSurface::ClearAllRenderTargets(this);
    if ( *((float *)this + 46) <= 0.0 || *v3 <= 0.0 )
      v7 = 0;
    if ( v8 == v7 )
      v4 = 6;
    CResource::NotifyOnChanged(this, v4, 0LL);
  }
  return 0LL;
}
