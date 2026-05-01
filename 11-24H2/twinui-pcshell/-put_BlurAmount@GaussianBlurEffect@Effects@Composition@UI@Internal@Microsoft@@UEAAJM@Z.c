/*
 * XREFs of ?put_BlurAmount@GaussianBlurEffect@Effects@Composition@UI@Internal@Microsoft@@UEAAJM@Z @ 0x180563E60
 * Callers:
 *     ?SetBackdropBlurEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry@@M@Z @ 0x180562330 (-SetBackdropBlurEffect@VirtualDesktopGestureWindow@@IEAAJPEAUIDCompThumbnail@@AEBUCRect@Geometry.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect::put_BlurAmount(
        Microsoft::Internal::UI::Composition::Effects::GaussianBlurEffect *this,
        float a2)
{
  if ( a2 < 0.0 || a2 > 250.0 )
    return 2147942487LL;
  *((float *)this + 10) = a2;
  return 0LL;
}
